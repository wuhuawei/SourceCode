// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: com.glgs.com.loginin.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "com.glgs.com.loginin.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace lm {

namespace {

const ::google::protobuf::Descriptor* loginin_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  loginin_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_com_2eglgs_2ecom_2eloginin_2eproto() {
  protobuf_AddDesc_com_2eglgs_2ecom_2eloginin_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "com.glgs.com.loginin.proto");
  GOOGLE_CHECK(file != NULL);
  loginin_descriptor_ = file->message_type(0);
  static const int loginin_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(loginin, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(loginin, str_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(loginin, opt_),
  };
  loginin_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      loginin_descriptor_,
      loginin::default_instance_,
      loginin_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(loginin, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(loginin, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(loginin));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_com_2eglgs_2ecom_2eloginin_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    loginin_descriptor_, &loginin::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_com_2eglgs_2ecom_2eloginin_2eproto() {
  delete loginin::default_instance_;
  delete loginin_reflection_;
}

void protobuf_AddDesc_com_2eglgs_2ecom_2eloginin_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\032com.glgs.com.loginin.proto\022\002lm\"/\n\007logi"
    "nin\022\n\n\002id\030\001 \002(\005\022\013\n\003str\030\002 \002(\t\022\013\n\003opt\030\003 \001("
    "\005", 81);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "com.glgs.com.loginin.proto", &protobuf_RegisterTypes);
  loginin::default_instance_ = new loginin();
  loginin::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_com_2eglgs_2ecom_2eloginin_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_com_2eglgs_2ecom_2eloginin_2eproto {
  StaticDescriptorInitializer_com_2eglgs_2ecom_2eloginin_2eproto() {
    protobuf_AddDesc_com_2eglgs_2ecom_2eloginin_2eproto();
  }
} static_descriptor_initializer_com_2eglgs_2ecom_2eloginin_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int loginin::kIdFieldNumber;
const int loginin::kStrFieldNumber;
const int loginin::kOptFieldNumber;
#endif  // !_MSC_VER

loginin::loginin()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:lm.loginin)
}

void loginin::InitAsDefaultInstance() {
}

loginin::loginin(const loginin& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:lm.loginin)
}

void loginin::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_ = 0;
  str_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  opt_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

loginin::~loginin() {
  // @@protoc_insertion_point(destructor:lm.loginin)
  SharedDtor();
}

void loginin::SharedDtor() {
  if (str_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete str_;
  }
  if (this != default_instance_) {
  }
}

void loginin::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* loginin::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return loginin_descriptor_;
}

const loginin& loginin::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_com_2eglgs_2ecom_2eloginin_2eproto();
  return *default_instance_;
}

loginin* loginin::default_instance_ = NULL;

loginin* loginin::New() const {
  return new loginin;
}

void loginin::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<loginin*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 7) {
    ZR_(id_, opt_);
    if (has_str()) {
      if (str_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        str_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool loginin::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:lm.loginin)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_str;
        break;
      }

      // required string str = 2;
      case 2: {
        if (tag == 18) {
         parse_str:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_str()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->str().data(), this->str().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "str");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_opt;
        break;
      }

      // optional int32 opt = 3;
      case 3: {
        if (tag == 24) {
         parse_opt:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &opt_)));
          set_has_opt();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:lm.loginin)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:lm.loginin)
  return false;
#undef DO_
}

void loginin::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:lm.loginin)
  // required int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // required string str = 2;
  if (has_str()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->str().data(), this->str().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "str");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->str(), output);
  }

  // optional int32 opt = 3;
  if (has_opt()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->opt(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:lm.loginin)
}

::google::protobuf::uint8* loginin::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:lm.loginin)
  // required int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // required string str = 2;
  if (has_str()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->str().data(), this->str().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "str");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->str(), target);
  }

  // optional int32 opt = 3;
  if (has_opt()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->opt(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:lm.loginin)
  return target;
}

int loginin::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // required string str = 2;
    if (has_str()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->str());
    }

    // optional int32 opt = 3;
    if (has_opt()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->opt());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void loginin::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const loginin* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const loginin*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void loginin::MergeFrom(const loginin& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_str()) {
      set_str(from.str());
    }
    if (from.has_opt()) {
      set_opt(from.opt());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void loginin::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void loginin::CopyFrom(const loginin& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool loginin::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void loginin::Swap(loginin* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(str_, other->str_);
    std::swap(opt_, other->opt_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata loginin::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = loginin_descriptor_;
  metadata.reflection = loginin_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace lm

// @@protoc_insertion_point(global_scope)
