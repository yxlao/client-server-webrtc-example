// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: debug_dump.proto

#ifndef PROTOBUF_debug_5fdump_2eproto__INCLUDED
#define PROTOBUF_debug_5fdump_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003002 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
#include "config.pb.h"
// @@protoc_insertion_point(includes)
namespace webrtc {
namespace audio_network_adaptor {
namespace debug_dump {
class EncoderRuntimeConfig;
class EncoderRuntimeConfigDefaultTypeInternal;
extern EncoderRuntimeConfigDefaultTypeInternal _EncoderRuntimeConfig_default_instance_;
class Event;
class EventDefaultTypeInternal;
extern EventDefaultTypeInternal _Event_default_instance_;
class NetworkMetrics;
class NetworkMetricsDefaultTypeInternal;
extern NetworkMetricsDefaultTypeInternal _NetworkMetrics_default_instance_;
}  // namespace debug_dump
}  // namespace audio_network_adaptor
}  // namespace webrtc

namespace webrtc {
namespace audio_network_adaptor {
namespace debug_dump {

namespace protobuf_debug_5fdump_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_debug_5fdump_2eproto

enum Event_Type {
  Event_Type_NETWORK_METRICS = 0,
  Event_Type_ENCODER_RUNTIME_CONFIG = 1,
  Event_Type_CONTROLLER_MANAGER_CONFIG = 2
};
bool Event_Type_IsValid(int value);
const Event_Type Event_Type_Type_MIN = Event_Type_NETWORK_METRICS;
const Event_Type Event_Type_Type_MAX = Event_Type_CONTROLLER_MANAGER_CONFIG;
const int Event_Type_Type_ARRAYSIZE = Event_Type_Type_MAX + 1;

// ===================================================================

class NetworkMetrics : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:webrtc.audio_network_adaptor.debug_dump.NetworkMetrics) */ {
 public:
  NetworkMetrics();
  virtual ~NetworkMetrics();

  NetworkMetrics(const NetworkMetrics& from);

  inline NetworkMetrics& operator=(const NetworkMetrics& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const NetworkMetrics& default_instance();

  static inline const NetworkMetrics* internal_default_instance() {
    return reinterpret_cast<const NetworkMetrics*>(
               &_NetworkMetrics_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(NetworkMetrics* other);

  // implements Message ----------------------------------------------

  inline NetworkMetrics* New() const PROTOBUF_FINAL { return New(NULL); }

  NetworkMetrics* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const NetworkMetrics& from);
  void MergeFrom(const NetworkMetrics& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(NetworkMetrics* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 uplink_bandwidth_bps = 1;
  bool has_uplink_bandwidth_bps() const;
  void clear_uplink_bandwidth_bps();
  static const int kUplinkBandwidthBpsFieldNumber = 1;
  ::google::protobuf::int32 uplink_bandwidth_bps() const;
  void set_uplink_bandwidth_bps(::google::protobuf::int32 value);

  // optional float uplink_packet_loss_fraction = 2;
  bool has_uplink_packet_loss_fraction() const;
  void clear_uplink_packet_loss_fraction();
  static const int kUplinkPacketLossFractionFieldNumber = 2;
  float uplink_packet_loss_fraction() const;
  void set_uplink_packet_loss_fraction(float value);

  // optional int32 target_audio_bitrate_bps = 3;
  bool has_target_audio_bitrate_bps() const;
  void clear_target_audio_bitrate_bps();
  static const int kTargetAudioBitrateBpsFieldNumber = 3;
  ::google::protobuf::int32 target_audio_bitrate_bps() const;
  void set_target_audio_bitrate_bps(::google::protobuf::int32 value);

  // optional int32 rtt_ms = 4;
  bool has_rtt_ms() const;
  void clear_rtt_ms();
  static const int kRttMsFieldNumber = 4;
  ::google::protobuf::int32 rtt_ms() const;
  void set_rtt_ms(::google::protobuf::int32 value);

  // optional int32 uplink_recoverable_packet_loss_fraction = 5;
  bool has_uplink_recoverable_packet_loss_fraction() const;
  void clear_uplink_recoverable_packet_loss_fraction();
  static const int kUplinkRecoverablePacketLossFractionFieldNumber = 5;
  ::google::protobuf::int32 uplink_recoverable_packet_loss_fraction() const;
  void set_uplink_recoverable_packet_loss_fraction(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:webrtc.audio_network_adaptor.debug_dump.NetworkMetrics)
 private:
  void set_has_uplink_bandwidth_bps();
  void clear_has_uplink_bandwidth_bps();
  void set_has_uplink_packet_loss_fraction();
  void clear_has_uplink_packet_loss_fraction();
  void set_has_target_audio_bitrate_bps();
  void clear_has_target_audio_bitrate_bps();
  void set_has_rtt_ms();
  void clear_has_rtt_ms();
  void set_has_uplink_recoverable_packet_loss_fraction();
  void clear_has_uplink_recoverable_packet_loss_fraction();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::int32 uplink_bandwidth_bps_;
  float uplink_packet_loss_fraction_;
  ::google::protobuf::int32 target_audio_bitrate_bps_;
  ::google::protobuf::int32 rtt_ms_;
  ::google::protobuf::int32 uplink_recoverable_packet_loss_fraction_;
  friend struct protobuf_debug_5fdump_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class EncoderRuntimeConfig : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:webrtc.audio_network_adaptor.debug_dump.EncoderRuntimeConfig) */ {
 public:
  EncoderRuntimeConfig();
  virtual ~EncoderRuntimeConfig();

  EncoderRuntimeConfig(const EncoderRuntimeConfig& from);

  inline EncoderRuntimeConfig& operator=(const EncoderRuntimeConfig& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const EncoderRuntimeConfig& default_instance();

  static inline const EncoderRuntimeConfig* internal_default_instance() {
    return reinterpret_cast<const EncoderRuntimeConfig*>(
               &_EncoderRuntimeConfig_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(EncoderRuntimeConfig* other);

  // implements Message ----------------------------------------------

  inline EncoderRuntimeConfig* New() const PROTOBUF_FINAL { return New(NULL); }

  EncoderRuntimeConfig* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const EncoderRuntimeConfig& from);
  void MergeFrom(const EncoderRuntimeConfig& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(EncoderRuntimeConfig* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 bitrate_bps = 1;
  bool has_bitrate_bps() const;
  void clear_bitrate_bps();
  static const int kBitrateBpsFieldNumber = 1;
  ::google::protobuf::int32 bitrate_bps() const;
  void set_bitrate_bps(::google::protobuf::int32 value);

  // optional int32 frame_length_ms = 2;
  bool has_frame_length_ms() const;
  void clear_frame_length_ms();
  static const int kFrameLengthMsFieldNumber = 2;
  ::google::protobuf::int32 frame_length_ms() const;
  void set_frame_length_ms(::google::protobuf::int32 value);

  // optional float uplink_packet_loss_fraction = 3;
  bool has_uplink_packet_loss_fraction() const;
  void clear_uplink_packet_loss_fraction();
  static const int kUplinkPacketLossFractionFieldNumber = 3;
  float uplink_packet_loss_fraction() const;
  void set_uplink_packet_loss_fraction(float value);

  // optional bool enable_fec = 4;
  bool has_enable_fec() const;
  void clear_enable_fec();
  static const int kEnableFecFieldNumber = 4;
  bool enable_fec() const;
  void set_enable_fec(bool value);

  // optional bool enable_dtx = 5;
  bool has_enable_dtx() const;
  void clear_enable_dtx();
  static const int kEnableDtxFieldNumber = 5;
  bool enable_dtx() const;
  void set_enable_dtx(bool value);

  // optional uint32 num_channels = 6;
  bool has_num_channels() const;
  void clear_num_channels();
  static const int kNumChannelsFieldNumber = 6;
  ::google::protobuf::uint32 num_channels() const;
  void set_num_channels(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:webrtc.audio_network_adaptor.debug_dump.EncoderRuntimeConfig)
 private:
  void set_has_bitrate_bps();
  void clear_has_bitrate_bps();
  void set_has_frame_length_ms();
  void clear_has_frame_length_ms();
  void set_has_uplink_packet_loss_fraction();
  void clear_has_uplink_packet_loss_fraction();
  void set_has_enable_fec();
  void clear_has_enable_fec();
  void set_has_enable_dtx();
  void clear_has_enable_dtx();
  void set_has_num_channels();
  void clear_has_num_channels();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::int32 bitrate_bps_;
  ::google::protobuf::int32 frame_length_ms_;
  float uplink_packet_loss_fraction_;
  bool enable_fec_;
  bool enable_dtx_;
  ::google::protobuf::uint32 num_channels_;
  friend struct protobuf_debug_5fdump_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Event : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:webrtc.audio_network_adaptor.debug_dump.Event) */ {
 public:
  Event();
  virtual ~Event();

  Event(const Event& from);

  inline Event& operator=(const Event& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const Event& default_instance();

  static inline const Event* internal_default_instance() {
    return reinterpret_cast<const Event*>(
               &_Event_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(Event* other);

  // implements Message ----------------------------------------------

  inline Event* New() const PROTOBUF_FINAL { return New(NULL); }

  Event* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Event& from);
  void MergeFrom(const Event& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Event* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef Event_Type Type;
  static const Type NETWORK_METRICS =
    Event_Type_NETWORK_METRICS;
  static const Type ENCODER_RUNTIME_CONFIG =
    Event_Type_ENCODER_RUNTIME_CONFIG;
  static const Type CONTROLLER_MANAGER_CONFIG =
    Event_Type_CONTROLLER_MANAGER_CONFIG;
  static inline bool Type_IsValid(int value) {
    return Event_Type_IsValid(value);
  }
  static const Type Type_MIN =
    Event_Type_Type_MIN;
  static const Type Type_MAX =
    Event_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    Event_Type_Type_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // optional .webrtc.audio_network_adaptor.debug_dump.NetworkMetrics network_metrics = 3;
  bool has_network_metrics() const;
  void clear_network_metrics();
  static const int kNetworkMetricsFieldNumber = 3;
  const ::webrtc::audio_network_adaptor::debug_dump::NetworkMetrics& network_metrics() const;
  ::webrtc::audio_network_adaptor::debug_dump::NetworkMetrics* mutable_network_metrics();
  ::webrtc::audio_network_adaptor::debug_dump::NetworkMetrics* release_network_metrics();
  void set_allocated_network_metrics(::webrtc::audio_network_adaptor::debug_dump::NetworkMetrics* network_metrics);

  // optional .webrtc.audio_network_adaptor.debug_dump.EncoderRuntimeConfig encoder_runtime_config = 4;
  bool has_encoder_runtime_config() const;
  void clear_encoder_runtime_config();
  static const int kEncoderRuntimeConfigFieldNumber = 4;
  const ::webrtc::audio_network_adaptor::debug_dump::EncoderRuntimeConfig& encoder_runtime_config() const;
  ::webrtc::audio_network_adaptor::debug_dump::EncoderRuntimeConfig* mutable_encoder_runtime_config();
  ::webrtc::audio_network_adaptor::debug_dump::EncoderRuntimeConfig* release_encoder_runtime_config();
  void set_allocated_encoder_runtime_config(::webrtc::audio_network_adaptor::debug_dump::EncoderRuntimeConfig* encoder_runtime_config);

  // optional .webrtc.audio_network_adaptor.config.ControllerManager controller_manager_config = 5;
  bool has_controller_manager_config() const;
  void clear_controller_manager_config();
  static const int kControllerManagerConfigFieldNumber = 5;
  const ::webrtc::audio_network_adaptor::config::ControllerManager& controller_manager_config() const;
  ::webrtc::audio_network_adaptor::config::ControllerManager* mutable_controller_manager_config();
  ::webrtc::audio_network_adaptor::config::ControllerManager* release_controller_manager_config();
  void set_allocated_controller_manager_config(::webrtc::audio_network_adaptor::config::ControllerManager* controller_manager_config);

  // required .webrtc.audio_network_adaptor.debug_dump.Event.Type type = 1;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::webrtc::audio_network_adaptor::debug_dump::Event_Type type() const;
  void set_type(::webrtc::audio_network_adaptor::debug_dump::Event_Type value);

  // required uint32 timestamp = 2;
  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 2;
  ::google::protobuf::uint32 timestamp() const;
  void set_timestamp(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:webrtc.audio_network_adaptor.debug_dump.Event)
 private:
  void set_has_type();
  void clear_has_type();
  void set_has_timestamp();
  void clear_has_timestamp();
  void set_has_network_metrics();
  void clear_has_network_metrics();
  void set_has_encoder_runtime_config();
  void clear_has_encoder_runtime_config();
  void set_has_controller_manager_config();
  void clear_has_controller_manager_config();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::webrtc::audio_network_adaptor::debug_dump::NetworkMetrics* network_metrics_;
  ::webrtc::audio_network_adaptor::debug_dump::EncoderRuntimeConfig* encoder_runtime_config_;
  ::webrtc::audio_network_adaptor::config::ControllerManager* controller_manager_config_;
  int type_;
  ::google::protobuf::uint32 timestamp_;
  friend struct protobuf_debug_5fdump_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// NetworkMetrics

// optional int32 uplink_bandwidth_bps = 1;
inline bool NetworkMetrics::has_uplink_bandwidth_bps() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NetworkMetrics::set_has_uplink_bandwidth_bps() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NetworkMetrics::clear_has_uplink_bandwidth_bps() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NetworkMetrics::clear_uplink_bandwidth_bps() {
  uplink_bandwidth_bps_ = 0;
  clear_has_uplink_bandwidth_bps();
}
inline ::google::protobuf::int32 NetworkMetrics::uplink_bandwidth_bps() const {
  // @@protoc_insertion_point(field_get:webrtc.audio_network_adaptor.debug_dump.NetworkMetrics.uplink_bandwidth_bps)
  return uplink_bandwidth_bps_;
}
inline void NetworkMetrics::set_uplink_bandwidth_bps(::google::protobuf::int32 value) {
  set_has_uplink_bandwidth_bps();
  uplink_bandwidth_bps_ = value;
  // @@protoc_insertion_point(field_set:webrtc.audio_network_adaptor.debug_dump.NetworkMetrics.uplink_bandwidth_bps)
}

// optional float uplink_packet_loss_fraction = 2;
inline bool NetworkMetrics::has_uplink_packet_loss_fraction() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NetworkMetrics::set_has_uplink_packet_loss_fraction() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NetworkMetrics::clear_has_uplink_packet_loss_fraction() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NetworkMetrics::clear_uplink_packet_loss_fraction() {
  uplink_packet_loss_fraction_ = 0;
  clear_has_uplink_packet_loss_fraction();
}
inline float NetworkMetrics::uplink_packet_loss_fraction() const {
  // @@protoc_insertion_point(field_get:webrtc.audio_network_adaptor.debug_dump.NetworkMetrics.uplink_packet_loss_fraction)
  return uplink_packet_loss_fraction_;
}
inline void NetworkMetrics::set_uplink_packet_loss_fraction(float value) {
  set_has_uplink_packet_loss_fraction();
  uplink_packet_loss_fraction_ = value;
  // @@protoc_insertion_point(field_set:webrtc.audio_network_adaptor.debug_dump.NetworkMetrics.uplink_packet_loss_fraction)
}

// optional int32 target_audio_bitrate_bps = 3;
inline bool NetworkMetrics::has_target_audio_bitrate_bps() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void NetworkMetrics::set_has_target_audio_bitrate_bps() {
  _has_bits_[0] |= 0x00000004u;
}
inline void NetworkMetrics::clear_has_target_audio_bitrate_bps() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void NetworkMetrics::clear_target_audio_bitrate_bps() {
  target_audio_bitrate_bps_ = 0;
  clear_has_target_audio_bitrate_bps();
}
inline ::google::protobuf::int32 NetworkMetrics::target_audio_bitrate_bps() const {
  // @@protoc_insertion_point(field_get:webrtc.audio_network_adaptor.debug_dump.NetworkMetrics.target_audio_bitrate_bps)
  return target_audio_bitrate_bps_;
}
inline void NetworkMetrics::set_target_audio_bitrate_bps(::google::protobuf::int32 value) {
  set_has_target_audio_bitrate_bps();
  target_audio_bitrate_bps_ = value;
  // @@protoc_insertion_point(field_set:webrtc.audio_network_adaptor.debug_dump.NetworkMetrics.target_audio_bitrate_bps)
}

// optional int32 rtt_ms = 4;
inline bool NetworkMetrics::has_rtt_ms() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void NetworkMetrics::set_has_rtt_ms() {
  _has_bits_[0] |= 0x00000008u;
}
inline void NetworkMetrics::clear_has_rtt_ms() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void NetworkMetrics::clear_rtt_ms() {
  rtt_ms_ = 0;
  clear_has_rtt_ms();
}
inline ::google::protobuf::int32 NetworkMetrics::rtt_ms() const {
  // @@protoc_insertion_point(field_get:webrtc.audio_network_adaptor.debug_dump.NetworkMetrics.rtt_ms)
  return rtt_ms_;
}
inline void NetworkMetrics::set_rtt_ms(::google::protobuf::int32 value) {
  set_has_rtt_ms();
  rtt_ms_ = value;
  // @@protoc_insertion_point(field_set:webrtc.audio_network_adaptor.debug_dump.NetworkMetrics.rtt_ms)
}

// optional int32 uplink_recoverable_packet_loss_fraction = 5;
inline bool NetworkMetrics::has_uplink_recoverable_packet_loss_fraction() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void NetworkMetrics::set_has_uplink_recoverable_packet_loss_fraction() {
  _has_bits_[0] |= 0x00000010u;
}
inline void NetworkMetrics::clear_has_uplink_recoverable_packet_loss_fraction() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void NetworkMetrics::clear_uplink_recoverable_packet_loss_fraction() {
  uplink_recoverable_packet_loss_fraction_ = 0;
  clear_has_uplink_recoverable_packet_loss_fraction();
}
inline ::google::protobuf::int32 NetworkMetrics::uplink_recoverable_packet_loss_fraction() const {
  // @@protoc_insertion_point(field_get:webrtc.audio_network_adaptor.debug_dump.NetworkMetrics.uplink_recoverable_packet_loss_fraction)
  return uplink_recoverable_packet_loss_fraction_;
}
inline void NetworkMetrics::set_uplink_recoverable_packet_loss_fraction(::google::protobuf::int32 value) {
  set_has_uplink_recoverable_packet_loss_fraction();
  uplink_recoverable_packet_loss_fraction_ = value;
  // @@protoc_insertion_point(field_set:webrtc.audio_network_adaptor.debug_dump.NetworkMetrics.uplink_recoverable_packet_loss_fraction)
}

// -------------------------------------------------------------------

// EncoderRuntimeConfig

// optional int32 bitrate_bps = 1;
inline bool EncoderRuntimeConfig::has_bitrate_bps() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void EncoderRuntimeConfig::set_has_bitrate_bps() {
  _has_bits_[0] |= 0x00000001u;
}
inline void EncoderRuntimeConfig::clear_has_bitrate_bps() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void EncoderRuntimeConfig::clear_bitrate_bps() {
  bitrate_bps_ = 0;
  clear_has_bitrate_bps();
}
inline ::google::protobuf::int32 EncoderRuntimeConfig::bitrate_bps() const {
  // @@protoc_insertion_point(field_get:webrtc.audio_network_adaptor.debug_dump.EncoderRuntimeConfig.bitrate_bps)
  return bitrate_bps_;
}
inline void EncoderRuntimeConfig::set_bitrate_bps(::google::protobuf::int32 value) {
  set_has_bitrate_bps();
  bitrate_bps_ = value;
  // @@protoc_insertion_point(field_set:webrtc.audio_network_adaptor.debug_dump.EncoderRuntimeConfig.bitrate_bps)
}

// optional int32 frame_length_ms = 2;
inline bool EncoderRuntimeConfig::has_frame_length_ms() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void EncoderRuntimeConfig::set_has_frame_length_ms() {
  _has_bits_[0] |= 0x00000002u;
}
inline void EncoderRuntimeConfig::clear_has_frame_length_ms() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void EncoderRuntimeConfig::clear_frame_length_ms() {
  frame_length_ms_ = 0;
  clear_has_frame_length_ms();
}
inline ::google::protobuf::int32 EncoderRuntimeConfig::frame_length_ms() const {
  // @@protoc_insertion_point(field_get:webrtc.audio_network_adaptor.debug_dump.EncoderRuntimeConfig.frame_length_ms)
  return frame_length_ms_;
}
inline void EncoderRuntimeConfig::set_frame_length_ms(::google::protobuf::int32 value) {
  set_has_frame_length_ms();
  frame_length_ms_ = value;
  // @@protoc_insertion_point(field_set:webrtc.audio_network_adaptor.debug_dump.EncoderRuntimeConfig.frame_length_ms)
}

// optional float uplink_packet_loss_fraction = 3;
inline bool EncoderRuntimeConfig::has_uplink_packet_loss_fraction() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void EncoderRuntimeConfig::set_has_uplink_packet_loss_fraction() {
  _has_bits_[0] |= 0x00000004u;
}
inline void EncoderRuntimeConfig::clear_has_uplink_packet_loss_fraction() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void EncoderRuntimeConfig::clear_uplink_packet_loss_fraction() {
  uplink_packet_loss_fraction_ = 0;
  clear_has_uplink_packet_loss_fraction();
}
inline float EncoderRuntimeConfig::uplink_packet_loss_fraction() const {
  // @@protoc_insertion_point(field_get:webrtc.audio_network_adaptor.debug_dump.EncoderRuntimeConfig.uplink_packet_loss_fraction)
  return uplink_packet_loss_fraction_;
}
inline void EncoderRuntimeConfig::set_uplink_packet_loss_fraction(float value) {
  set_has_uplink_packet_loss_fraction();
  uplink_packet_loss_fraction_ = value;
  // @@protoc_insertion_point(field_set:webrtc.audio_network_adaptor.debug_dump.EncoderRuntimeConfig.uplink_packet_loss_fraction)
}

// optional bool enable_fec = 4;
inline bool EncoderRuntimeConfig::has_enable_fec() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void EncoderRuntimeConfig::set_has_enable_fec() {
  _has_bits_[0] |= 0x00000008u;
}
inline void EncoderRuntimeConfig::clear_has_enable_fec() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void EncoderRuntimeConfig::clear_enable_fec() {
  enable_fec_ = false;
  clear_has_enable_fec();
}
inline bool EncoderRuntimeConfig::enable_fec() const {
  // @@protoc_insertion_point(field_get:webrtc.audio_network_adaptor.debug_dump.EncoderRuntimeConfig.enable_fec)
  return enable_fec_;
}
inline void EncoderRuntimeConfig::set_enable_fec(bool value) {
  set_has_enable_fec();
  enable_fec_ = value;
  // @@protoc_insertion_point(field_set:webrtc.audio_network_adaptor.debug_dump.EncoderRuntimeConfig.enable_fec)
}

// optional bool enable_dtx = 5;
inline bool EncoderRuntimeConfig::has_enable_dtx() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void EncoderRuntimeConfig::set_has_enable_dtx() {
  _has_bits_[0] |= 0x00000010u;
}
inline void EncoderRuntimeConfig::clear_has_enable_dtx() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void EncoderRuntimeConfig::clear_enable_dtx() {
  enable_dtx_ = false;
  clear_has_enable_dtx();
}
inline bool EncoderRuntimeConfig::enable_dtx() const {
  // @@protoc_insertion_point(field_get:webrtc.audio_network_adaptor.debug_dump.EncoderRuntimeConfig.enable_dtx)
  return enable_dtx_;
}
inline void EncoderRuntimeConfig::set_enable_dtx(bool value) {
  set_has_enable_dtx();
  enable_dtx_ = value;
  // @@protoc_insertion_point(field_set:webrtc.audio_network_adaptor.debug_dump.EncoderRuntimeConfig.enable_dtx)
}

// optional uint32 num_channels = 6;
inline bool EncoderRuntimeConfig::has_num_channels() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void EncoderRuntimeConfig::set_has_num_channels() {
  _has_bits_[0] |= 0x00000020u;
}
inline void EncoderRuntimeConfig::clear_has_num_channels() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void EncoderRuntimeConfig::clear_num_channels() {
  num_channels_ = 0u;
  clear_has_num_channels();
}
inline ::google::protobuf::uint32 EncoderRuntimeConfig::num_channels() const {
  // @@protoc_insertion_point(field_get:webrtc.audio_network_adaptor.debug_dump.EncoderRuntimeConfig.num_channels)
  return num_channels_;
}
inline void EncoderRuntimeConfig::set_num_channels(::google::protobuf::uint32 value) {
  set_has_num_channels();
  num_channels_ = value;
  // @@protoc_insertion_point(field_set:webrtc.audio_network_adaptor.debug_dump.EncoderRuntimeConfig.num_channels)
}

// -------------------------------------------------------------------

// Event

// required .webrtc.audio_network_adaptor.debug_dump.Event.Type type = 1;
inline bool Event::has_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Event::set_has_type() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Event::clear_has_type() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Event::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::webrtc::audio_network_adaptor::debug_dump::Event_Type Event::type() const {
  // @@protoc_insertion_point(field_get:webrtc.audio_network_adaptor.debug_dump.Event.type)
  return static_cast< ::webrtc::audio_network_adaptor::debug_dump::Event_Type >(type_);
}
inline void Event::set_type(::webrtc::audio_network_adaptor::debug_dump::Event_Type value) {
  assert(::webrtc::audio_network_adaptor::debug_dump::Event_Type_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:webrtc.audio_network_adaptor.debug_dump.Event.type)
}

// required uint32 timestamp = 2;
inline bool Event::has_timestamp() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Event::set_has_timestamp() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Event::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Event::clear_timestamp() {
  timestamp_ = 0u;
  clear_has_timestamp();
}
inline ::google::protobuf::uint32 Event::timestamp() const {
  // @@protoc_insertion_point(field_get:webrtc.audio_network_adaptor.debug_dump.Event.timestamp)
  return timestamp_;
}
inline void Event::set_timestamp(::google::protobuf::uint32 value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:webrtc.audio_network_adaptor.debug_dump.Event.timestamp)
}

// optional .webrtc.audio_network_adaptor.debug_dump.NetworkMetrics network_metrics = 3;
inline bool Event::has_network_metrics() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Event::set_has_network_metrics() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Event::clear_has_network_metrics() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Event::clear_network_metrics() {
  if (network_metrics_ != NULL) network_metrics_->::webrtc::audio_network_adaptor::debug_dump::NetworkMetrics::Clear();
  clear_has_network_metrics();
}
inline const ::webrtc::audio_network_adaptor::debug_dump::NetworkMetrics& Event::network_metrics() const {
  // @@protoc_insertion_point(field_get:webrtc.audio_network_adaptor.debug_dump.Event.network_metrics)
  return network_metrics_ != NULL ? *network_metrics_
                         : *::webrtc::audio_network_adaptor::debug_dump::NetworkMetrics::internal_default_instance();
}
inline ::webrtc::audio_network_adaptor::debug_dump::NetworkMetrics* Event::mutable_network_metrics() {
  set_has_network_metrics();
  if (network_metrics_ == NULL) {
    network_metrics_ = new ::webrtc::audio_network_adaptor::debug_dump::NetworkMetrics;
  }
  // @@protoc_insertion_point(field_mutable:webrtc.audio_network_adaptor.debug_dump.Event.network_metrics)
  return network_metrics_;
}
inline ::webrtc::audio_network_adaptor::debug_dump::NetworkMetrics* Event::release_network_metrics() {
  // @@protoc_insertion_point(field_release:webrtc.audio_network_adaptor.debug_dump.Event.network_metrics)
  clear_has_network_metrics();
  ::webrtc::audio_network_adaptor::debug_dump::NetworkMetrics* temp = network_metrics_;
  network_metrics_ = NULL;
  return temp;
}
inline void Event::set_allocated_network_metrics(::webrtc::audio_network_adaptor::debug_dump::NetworkMetrics* network_metrics) {
  delete network_metrics_;
  network_metrics_ = network_metrics;
  if (network_metrics) {
    set_has_network_metrics();
  } else {
    clear_has_network_metrics();
  }
  // @@protoc_insertion_point(field_set_allocated:webrtc.audio_network_adaptor.debug_dump.Event.network_metrics)
}

// optional .webrtc.audio_network_adaptor.debug_dump.EncoderRuntimeConfig encoder_runtime_config = 4;
inline bool Event::has_encoder_runtime_config() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Event::set_has_encoder_runtime_config() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Event::clear_has_encoder_runtime_config() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Event::clear_encoder_runtime_config() {
  if (encoder_runtime_config_ != NULL) encoder_runtime_config_->::webrtc::audio_network_adaptor::debug_dump::EncoderRuntimeConfig::Clear();
  clear_has_encoder_runtime_config();
}
inline const ::webrtc::audio_network_adaptor::debug_dump::EncoderRuntimeConfig& Event::encoder_runtime_config() const {
  // @@protoc_insertion_point(field_get:webrtc.audio_network_adaptor.debug_dump.Event.encoder_runtime_config)
  return encoder_runtime_config_ != NULL ? *encoder_runtime_config_
                         : *::webrtc::audio_network_adaptor::debug_dump::EncoderRuntimeConfig::internal_default_instance();
}
inline ::webrtc::audio_network_adaptor::debug_dump::EncoderRuntimeConfig* Event::mutable_encoder_runtime_config() {
  set_has_encoder_runtime_config();
  if (encoder_runtime_config_ == NULL) {
    encoder_runtime_config_ = new ::webrtc::audio_network_adaptor::debug_dump::EncoderRuntimeConfig;
  }
  // @@protoc_insertion_point(field_mutable:webrtc.audio_network_adaptor.debug_dump.Event.encoder_runtime_config)
  return encoder_runtime_config_;
}
inline ::webrtc::audio_network_adaptor::debug_dump::EncoderRuntimeConfig* Event::release_encoder_runtime_config() {
  // @@protoc_insertion_point(field_release:webrtc.audio_network_adaptor.debug_dump.Event.encoder_runtime_config)
  clear_has_encoder_runtime_config();
  ::webrtc::audio_network_adaptor::debug_dump::EncoderRuntimeConfig* temp = encoder_runtime_config_;
  encoder_runtime_config_ = NULL;
  return temp;
}
inline void Event::set_allocated_encoder_runtime_config(::webrtc::audio_network_adaptor::debug_dump::EncoderRuntimeConfig* encoder_runtime_config) {
  delete encoder_runtime_config_;
  encoder_runtime_config_ = encoder_runtime_config;
  if (encoder_runtime_config) {
    set_has_encoder_runtime_config();
  } else {
    clear_has_encoder_runtime_config();
  }
  // @@protoc_insertion_point(field_set_allocated:webrtc.audio_network_adaptor.debug_dump.Event.encoder_runtime_config)
}

// optional .webrtc.audio_network_adaptor.config.ControllerManager controller_manager_config = 5;
inline bool Event::has_controller_manager_config() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Event::set_has_controller_manager_config() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Event::clear_has_controller_manager_config() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Event::clear_controller_manager_config() {
  if (controller_manager_config_ != NULL) controller_manager_config_->::webrtc::audio_network_adaptor::config::ControllerManager::Clear();
  clear_has_controller_manager_config();
}
inline const ::webrtc::audio_network_adaptor::config::ControllerManager& Event::controller_manager_config() const {
  // @@protoc_insertion_point(field_get:webrtc.audio_network_adaptor.debug_dump.Event.controller_manager_config)
  return controller_manager_config_ != NULL ? *controller_manager_config_
                         : *::webrtc::audio_network_adaptor::config::ControllerManager::internal_default_instance();
}
inline ::webrtc::audio_network_adaptor::config::ControllerManager* Event::mutable_controller_manager_config() {
  set_has_controller_manager_config();
  if (controller_manager_config_ == NULL) {
    controller_manager_config_ = new ::webrtc::audio_network_adaptor::config::ControllerManager;
  }
  // @@protoc_insertion_point(field_mutable:webrtc.audio_network_adaptor.debug_dump.Event.controller_manager_config)
  return controller_manager_config_;
}
inline ::webrtc::audio_network_adaptor::config::ControllerManager* Event::release_controller_manager_config() {
  // @@protoc_insertion_point(field_release:webrtc.audio_network_adaptor.debug_dump.Event.controller_manager_config)
  clear_has_controller_manager_config();
  ::webrtc::audio_network_adaptor::config::ControllerManager* temp = controller_manager_config_;
  controller_manager_config_ = NULL;
  return temp;
}
inline void Event::set_allocated_controller_manager_config(::webrtc::audio_network_adaptor::config::ControllerManager* controller_manager_config) {
  delete controller_manager_config_;
  controller_manager_config_ = controller_manager_config;
  if (controller_manager_config) {
    set_has_controller_manager_config();
  } else {
    clear_has_controller_manager_config();
  }
  // @@protoc_insertion_point(field_set_allocated:webrtc.audio_network_adaptor.debug_dump.Event.controller_manager_config)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace debug_dump
}  // namespace audio_network_adaptor
}  // namespace webrtc

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::webrtc::audio_network_adaptor::debug_dump::Event_Type> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_debug_5fdump_2eproto__INCLUDED
