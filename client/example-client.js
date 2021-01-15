/**
 * This a minimal fully functional example for setting up a client written in JavaScript that
 * communicates with a server via WebRTC data channels. This uses WebSockets to perform the WebRTC
 * handshake (offer/accept SDP) with the server. We only use WebSockets for the initial handshake
 * because TCP often presents too much latency in the context of real-time action games. WebRTC
 * data channels, on the other hand, allow for unreliable and unordered message sending via SCTP
 *
 * Brian Ho
 * brian@brkho.com
 */

// URL to the server with the port we are using for WebSockets.
const webSocketUrl = "ws://localhost:8888";
// The WebSocket object used to manage a connection.
let webSocketConnection = null;
// The RTCPeerConnection through which we engage in the SDP handshake.
let rtcPeerConnection = null;
// The data channel used to communicate.
let dataChannel = null;

const pingTimes = {};
const pingLatency = {};
let pingCount = 0;
const PINGS_PER_SECOND = 5;
const SECONDS_TO_PING = 2;
let pingInterval;
let startTime;

// Callback for when we receive a message on the data channel.
function onDataChannelMessage(event) {
  console.log("[Client] onDataChannelMessage");
  const key = event.data;
  pingLatency[key] = performance.now() - pingTimes[key];
}

// Callback for when the data channel was successfully opened.
function onDataChannelOpen() {
  console.log("[Client] onDataChannelOpen");
  console.log("Data channel opened!");
}

function onDataChannelError(description) {
  console.log("[Client] onDataChannelError: " + description.error);
}

// Callback for when the STUN server responds with the ICE candidates.
// Step 7: Client 1 send the ICE candidate to server.
function onIceCandidate(event) {
  console.log("[Client] onIceCandidate");
  if (event && event.candidate) {
    webSocketConnection.send(
      JSON.stringify({ type: "candidate", payload: event.candidate })
    );
  }
}

// Callback for when the SDP offer was successfully created.
// Step 4: Client 1 sends the offer to Client 2.
function onOfferCreated(description) {
  console.log("[Client] onOfferCreated");
  rtcPeerConnection.setLocalDescription(description);
  webSocketConnection.send(
    JSON.stringify({ type: "offer", payload: description })
  );
}

// Callback for when the WebSocket is successfully opened.
function onWebSocketOpen() {
  console.log("[Client] onWebSocketOpen");
  const config = { iceServers: [{ url: "stun:stun.l.google.com:19302" }] };
  rtcPeerConnection = new RTCPeerConnection(config);
  const dataChannelConfig = { ordered: false, maxRetransmits: 0 };
  dataChannel = rtcPeerConnection.createDataChannel("dc", dataChannelConfig);
  dataChannel.onmessage = onDataChannelMessage;
  dataChannel.onopen = onDataChannelOpen;
  dataChannel.onerror = onDataChannelError;
  const sdpConstraints = {
    mandatory: {
      OfferToReceiveAudio: false,
      OfferToReceiveVideo: false,
    },
  };
  rtcPeerConnection.onicecandidate = onIceCandidate;
  // Step 3: Client 1 creates an “offer".
  rtcPeerConnection.createOffer(onOfferCreated, () => {}, sdpConstraints);
}

// Callback for when we receive a message from the server via the WebSocket.
function onWebSocketMessage(event) {
  const messageObject = JSON.parse(event.data);
  console.log("[Client] onWebSocketMessage::" + messageObject.type);
  if (messageObject.type === "ping") {
    const key = messageObject.payload;
    pingLatency[key] = performance.now() - pingTimes[key];
  } else if (messageObject.type === "answer") {
    // Step 7: Client 1 receives and verifies the answer.
    rtcPeerConnection.setRemoteDescription(
      new RTCSessionDescription(messageObject.payload)
    );
  } else if (messageObject.type === "candidate") {
    rtcPeerConnection.addIceCandidate(
      new RTCIceCandidate(messageObject.payload)
    );
  } else {
    console.log("Unrecognized WebSocket message type.");
  }
}

// Connects by creating a new WebSocket connection and associating some callbacks.
function connect() {
  webSocketConnection = new WebSocket(webSocketUrl);
  webSocketConnection.onopen = onWebSocketOpen;
  webSocketConnection.onmessage = onWebSocketMessage;
}

function printLatency() {
  for (let i = 0; i < PINGS_PER_SECOND * SECONDS_TO_PING; i++) {
    console.log(i + ": " + pingLatency[i + ""]);
  }
}

function sendDataChannelPing() {
  const key = pingCount + "";
  pingTimes[key] = performance.now();
  dataChannel.send(key);
  pingCount++;
  if (pingCount === PINGS_PER_SECOND * SECONDS_TO_PING) {
    clearInterval(pingInterval);
    console.log("total time: " + (performance.now() - startTime));
    setTimeout(printLatency, 10000);
  }
}

function sendWebSocketPing() {
  const key = pingCount + "";
  pingTimes[key] = performance.now();
  webSocketConnection.send(JSON.stringify({ type: "ping", payload: key }));
  pingCount++;
  if (pingCount === PINGS_PER_SECOND * SECONDS_TO_PING) {
    clearInterval(pingInterval);
    console.log("total time: " + (performance.now() - startTime));
    setTimeout(printLatency, 10000);
  }
}

// Pings the server via the DataChannel once the connection has been established.
function webSocketPing() {
  startTime = performance.now();
  pingInterval = setInterval(sendWebSocketPing, 1000.0 / PINGS_PER_SECOND);
}

function dataChannelPing() {
  startTime = performance.now();
  pingInterval = setInterval(sendDataChannelPing, 1000.0 / PINGS_PER_SECOND);
}
