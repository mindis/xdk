// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: actor.proto

#ifndef PROTOBUF_actor_2eproto__INCLUDED
#define PROTOBUF_actor_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "msgtypes.pb.h"
// @@protoc_insertion_point(includes)

namespace ActorProtocol {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_actor_2eproto();
void protobuf_AssignDesc_actor_2eproto();
void protobuf_ShutdownFile_actor_2eproto();

class Unknown;
class ActorRequest;
class ActorReply;

enum ActorRequest_Operation {
  ActorRequest_Operation_CREATE_SESSION = 1,
  ActorRequest_Operation_CLOSE_SESSION = 2,
  ActorRequest_Operation_ACTOR_SHUTDOWN = 3
};
bool ActorRequest_Operation_IsValid(int value);
const ActorRequest_Operation ActorRequest_Operation_Operation_MIN = ActorRequest_Operation_CREATE_SESSION;
const ActorRequest_Operation ActorRequest_Operation_Operation_MAX = ActorRequest_Operation_ACTOR_SHUTDOWN;
const int ActorRequest_Operation_Operation_ARRAYSIZE = ActorRequest_Operation_Operation_MAX + 1;

const ::google::protobuf::EnumDescriptor* ActorRequest_Operation_descriptor();
inline const ::std::string& ActorRequest_Operation_Name(ActorRequest_Operation value) {
  return ::google::protobuf::internal::NameOfEnum(
    ActorRequest_Operation_descriptor(), value);
}
inline bool ActorRequest_Operation_Parse(
    const ::std::string& name, ActorRequest_Operation* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ActorRequest_Operation>(
    ActorRequest_Operation_descriptor(), name, value);
}
// ===================================================================

class Unknown : public ::google::protobuf::Message {
 public:
  Unknown();
  virtual ~Unknown();

  Unknown(const Unknown& from);

  inline Unknown& operator=(const Unknown& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Unknown& default_instance();

  void Swap(Unknown* other);

  // implements Message ----------------------------------------------

  Unknown* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Unknown& from);
  void MergeFrom(const Unknown& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .MessageType type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::MessageType type() const;
  inline void set_type(::MessageType value);

  // @@protoc_insertion_point(class_scope:ActorProtocol.Unknown)
 private:
  inline void set_has_type();
  inline void clear_has_type();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int type_;
  friend void  protobuf_AddDesc_actor_2eproto();
  friend void protobuf_AssignDesc_actor_2eproto();
  friend void protobuf_ShutdownFile_actor_2eproto();

  void InitAsDefaultInstance();
  static Unknown* default_instance_;
};
// -------------------------------------------------------------------

class ActorRequest : public ::google::protobuf::Message {
 public:
  ActorRequest();
  virtual ~ActorRequest();

  ActorRequest(const ActorRequest& from);

  inline ActorRequest& operator=(const ActorRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ActorRequest& default_instance();

  void Swap(ActorRequest* other);

  // implements Message ----------------------------------------------

  ActorRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ActorRequest& from);
  void MergeFrom(const ActorRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef ActorRequest_Operation Operation;
  static const Operation CREATE_SESSION = ActorRequest_Operation_CREATE_SESSION;
  static const Operation CLOSE_SESSION = ActorRequest_Operation_CLOSE_SESSION;
  static const Operation ACTOR_SHUTDOWN = ActorRequest_Operation_ACTOR_SHUTDOWN;
  static inline bool Operation_IsValid(int value) {
    return ActorRequest_Operation_IsValid(value);
  }
  static const Operation Operation_MIN =
    ActorRequest_Operation_Operation_MIN;
  static const Operation Operation_MAX =
    ActorRequest_Operation_Operation_MAX;
  static const int Operation_ARRAYSIZE =
    ActorRequest_Operation_Operation_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Operation_descriptor() {
    return ActorRequest_Operation_descriptor();
  }
  static inline const ::std::string& Operation_Name(Operation value) {
    return ActorRequest_Operation_Name(value);
  }
  static inline bool Operation_Parse(const ::std::string& name,
      Operation* value) {
    return ActorRequest_Operation_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .MessageType type = 1 [default = ACTOR_REQ];
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::MessageType type() const;
  inline void set_type(::MessageType value);

  // required .ActorProtocol.ActorRequest.Operation operation = 2;
  inline bool has_operation() const;
  inline void clear_operation();
  static const int kOperationFieldNumber = 2;
  inline ::ActorProtocol::ActorRequest_Operation operation() const;
  inline void set_operation(::ActorProtocol::ActorRequest_Operation value);

  // optional string base_endpoint = 3;
  inline bool has_base_endpoint() const;
  inline void clear_base_endpoint();
  static const int kBaseEndpointFieldNumber = 3;
  inline const ::std::string& base_endpoint() const;
  inline void set_base_endpoint(const ::std::string& value);
  inline void set_base_endpoint(const char* value);
  inline void set_base_endpoint(const char* value, size_t size);
  inline ::std::string* mutable_base_endpoint();
  inline ::std::string* release_base_endpoint();
  inline void set_allocated_base_endpoint(::std::string* base_endpoint);

  // optional uint32 request_id = 4;
  inline bool has_request_id() const;
  inline void clear_request_id();
  static const int kRequestIdFieldNumber = 4;
  inline ::google::protobuf::uint32 request_id() const;
  inline void set_request_id(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:ActorProtocol.ActorRequest)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_operation();
  inline void clear_has_operation();
  inline void set_has_base_endpoint();
  inline void clear_has_base_endpoint();
  inline void set_has_request_id();
  inline void clear_has_request_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int type_;
  int operation_;
  ::std::string* base_endpoint_;
  ::google::protobuf::uint32 request_id_;
  friend void  protobuf_AddDesc_actor_2eproto();
  friend void protobuf_AssignDesc_actor_2eproto();
  friend void protobuf_ShutdownFile_actor_2eproto();

  void InitAsDefaultInstance();
  static ActorRequest* default_instance_;
};
// -------------------------------------------------------------------

class ActorReply : public ::google::protobuf::Message {
 public:
  ActorReply();
  virtual ~ActorReply();

  ActorReply(const ActorReply& from);

  inline ActorReply& operator=(const ActorReply& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ActorReply& default_instance();

  void Swap(ActorReply* other);

  // implements Message ----------------------------------------------

  ActorReply* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ActorReply& from);
  void MergeFrom(const ActorReply& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .MessageType type = 1 [default = ACTOR_REPLY];
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::MessageType type() const;
  inline void set_type(::MessageType value);

  // optional string session_endpoint = 2;
  inline bool has_session_endpoint() const;
  inline void clear_session_endpoint();
  static const int kSessionEndpointFieldNumber = 2;
  inline const ::std::string& session_endpoint() const;
  inline void set_session_endpoint(const ::std::string& value);
  inline void set_session_endpoint(const char* value);
  inline void set_session_endpoint(const char* value, size_t size);
  inline ::std::string* mutable_session_endpoint();
  inline ::std::string* release_session_endpoint();
  inline void set_allocated_session_endpoint(::std::string* session_endpoint);

  // @@protoc_insertion_point(class_scope:ActorProtocol.ActorReply)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_session_endpoint();
  inline void clear_has_session_endpoint();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* session_endpoint_;
  int type_;
  friend void  protobuf_AddDesc_actor_2eproto();
  friend void protobuf_AssignDesc_actor_2eproto();
  friend void protobuf_ShutdownFile_actor_2eproto();

  void InitAsDefaultInstance();
  static ActorReply* default_instance_;
};
// ===================================================================


// ===================================================================

// Unknown

// required .MessageType type = 1;
inline bool Unknown::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Unknown::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Unknown::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Unknown::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::MessageType Unknown::type() const {
  // @@protoc_insertion_point(field_get:ActorProtocol.Unknown.type)
  return static_cast< ::MessageType >(type_);
}
inline void Unknown::set_type(::MessageType value) {
  assert(::MessageType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:ActorProtocol.Unknown.type)
}

// -------------------------------------------------------------------

// ActorRequest

// required .MessageType type = 1 [default = ACTOR_REQ];
inline bool ActorRequest::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ActorRequest::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ActorRequest::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ActorRequest::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::MessageType ActorRequest::type() const {
  // @@protoc_insertion_point(field_get:ActorProtocol.ActorRequest.type)
  return static_cast< ::MessageType >(type_);
}
inline void ActorRequest::set_type(::MessageType value) {
  assert(::MessageType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:ActorProtocol.ActorRequest.type)
}

// required .ActorProtocol.ActorRequest.Operation operation = 2;
inline bool ActorRequest::has_operation() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ActorRequest::set_has_operation() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ActorRequest::clear_has_operation() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ActorRequest::clear_operation() {
  operation_ = 1;
  clear_has_operation();
}
inline ::ActorProtocol::ActorRequest_Operation ActorRequest::operation() const {
  // @@protoc_insertion_point(field_get:ActorProtocol.ActorRequest.operation)
  return static_cast< ::ActorProtocol::ActorRequest_Operation >(operation_);
}
inline void ActorRequest::set_operation(::ActorProtocol::ActorRequest_Operation value) {
  assert(::ActorProtocol::ActorRequest_Operation_IsValid(value));
  set_has_operation();
  operation_ = value;
  // @@protoc_insertion_point(field_set:ActorProtocol.ActorRequest.operation)
}

// optional string base_endpoint = 3;
inline bool ActorRequest::has_base_endpoint() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ActorRequest::set_has_base_endpoint() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ActorRequest::clear_has_base_endpoint() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ActorRequest::clear_base_endpoint() {
  if (base_endpoint_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    base_endpoint_->clear();
  }
  clear_has_base_endpoint();
}
inline const ::std::string& ActorRequest::base_endpoint() const {
  // @@protoc_insertion_point(field_get:ActorProtocol.ActorRequest.base_endpoint)
  return *base_endpoint_;
}
inline void ActorRequest::set_base_endpoint(const ::std::string& value) {
  set_has_base_endpoint();
  if (base_endpoint_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    base_endpoint_ = new ::std::string;
  }
  base_endpoint_->assign(value);
  // @@protoc_insertion_point(field_set:ActorProtocol.ActorRequest.base_endpoint)
}
inline void ActorRequest::set_base_endpoint(const char* value) {
  set_has_base_endpoint();
  if (base_endpoint_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    base_endpoint_ = new ::std::string;
  }
  base_endpoint_->assign(value);
  // @@protoc_insertion_point(field_set_char:ActorProtocol.ActorRequest.base_endpoint)
}
inline void ActorRequest::set_base_endpoint(const char* value, size_t size) {
  set_has_base_endpoint();
  if (base_endpoint_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    base_endpoint_ = new ::std::string;
  }
  base_endpoint_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:ActorProtocol.ActorRequest.base_endpoint)
}
inline ::std::string* ActorRequest::mutable_base_endpoint() {
  set_has_base_endpoint();
  if (base_endpoint_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    base_endpoint_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:ActorProtocol.ActorRequest.base_endpoint)
  return base_endpoint_;
}
inline ::std::string* ActorRequest::release_base_endpoint() {
  clear_has_base_endpoint();
  if (base_endpoint_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = base_endpoint_;
    base_endpoint_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ActorRequest::set_allocated_base_endpoint(::std::string* base_endpoint) {
  if (base_endpoint_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete base_endpoint_;
  }
  if (base_endpoint) {
    set_has_base_endpoint();
    base_endpoint_ = base_endpoint;
  } else {
    clear_has_base_endpoint();
    base_endpoint_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:ActorProtocol.ActorRequest.base_endpoint)
}

// optional uint32 request_id = 4;
inline bool ActorRequest::has_request_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ActorRequest::set_has_request_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ActorRequest::clear_has_request_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ActorRequest::clear_request_id() {
  request_id_ = 0u;
  clear_has_request_id();
}
inline ::google::protobuf::uint32 ActorRequest::request_id() const {
  // @@protoc_insertion_point(field_get:ActorProtocol.ActorRequest.request_id)
  return request_id_;
}
inline void ActorRequest::set_request_id(::google::protobuf::uint32 value) {
  set_has_request_id();
  request_id_ = value;
  // @@protoc_insertion_point(field_set:ActorProtocol.ActorRequest.request_id)
}

// -------------------------------------------------------------------

// ActorReply

// required .MessageType type = 1 [default = ACTOR_REPLY];
inline bool ActorReply::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ActorReply::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ActorReply::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ActorReply::clear_type() {
  type_ = 2;
  clear_has_type();
}
inline ::MessageType ActorReply::type() const {
  // @@protoc_insertion_point(field_get:ActorProtocol.ActorReply.type)
  return static_cast< ::MessageType >(type_);
}
inline void ActorReply::set_type(::MessageType value) {
  assert(::MessageType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:ActorProtocol.ActorReply.type)
}

// optional string session_endpoint = 2;
inline bool ActorReply::has_session_endpoint() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ActorReply::set_has_session_endpoint() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ActorReply::clear_has_session_endpoint() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ActorReply::clear_session_endpoint() {
  if (session_endpoint_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    session_endpoint_->clear();
  }
  clear_has_session_endpoint();
}
inline const ::std::string& ActorReply::session_endpoint() const {
  // @@protoc_insertion_point(field_get:ActorProtocol.ActorReply.session_endpoint)
  return *session_endpoint_;
}
inline void ActorReply::set_session_endpoint(const ::std::string& value) {
  set_has_session_endpoint();
  if (session_endpoint_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    session_endpoint_ = new ::std::string;
  }
  session_endpoint_->assign(value);
  // @@protoc_insertion_point(field_set:ActorProtocol.ActorReply.session_endpoint)
}
inline void ActorReply::set_session_endpoint(const char* value) {
  set_has_session_endpoint();
  if (session_endpoint_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    session_endpoint_ = new ::std::string;
  }
  session_endpoint_->assign(value);
  // @@protoc_insertion_point(field_set_char:ActorProtocol.ActorReply.session_endpoint)
}
inline void ActorReply::set_session_endpoint(const char* value, size_t size) {
  set_has_session_endpoint();
  if (session_endpoint_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    session_endpoint_ = new ::std::string;
  }
  session_endpoint_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:ActorProtocol.ActorReply.session_endpoint)
}
inline ::std::string* ActorReply::mutable_session_endpoint() {
  set_has_session_endpoint();
  if (session_endpoint_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    session_endpoint_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:ActorProtocol.ActorReply.session_endpoint)
  return session_endpoint_;
}
inline ::std::string* ActorReply::release_session_endpoint() {
  clear_has_session_endpoint();
  if (session_endpoint_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = session_endpoint_;
    session_endpoint_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ActorReply::set_allocated_session_endpoint(::std::string* session_endpoint) {
  if (session_endpoint_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete session_endpoint_;
  }
  if (session_endpoint) {
    set_has_session_endpoint();
    session_endpoint_ = session_endpoint;
  } else {
    clear_has_session_endpoint();
    session_endpoint_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:ActorProtocol.ActorReply.session_endpoint)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ActorProtocol

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::ActorProtocol::ActorRequest_Operation> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ActorProtocol::ActorRequest_Operation>() {
  return ::ActorProtocol::ActorRequest_Operation_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_actor_2eproto__INCLUDED