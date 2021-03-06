/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "src/gen-cpp2/includes_types.h"
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/lib/cpp/transport/THeader.h>
#include <thrift/lib/cpp2/server/Cpp2ConnContext.h>
#include <thrift/lib/cpp2/GeneratedCodeHelper.h>
#include <thrift/lib/cpp2/GeneratedSerializationCodeHelper.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace a { namespace different { namespace ns {

}}} // a::different::ns
namespace std {

} // std
namespace apache { namespace thrift {

}} // apache::thrift
namespace a { namespace different { namespace ns {

template <class Protocol_>
uint32_t AStruct::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (_fname == "FieldA") {
        fid = 1;
        _ftype = apache::thrift::protocol::T_I32;
      }
    }
    switch (fid) {
      case 1:
      {
        if (_ftype == apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->FieldA);
          this->__isset.FieldA = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(_ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t AStruct::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("AStruct");
  xfer += prot_->serializedFieldSize("FieldA", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->FieldA);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t AStruct::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("AStruct");
  xfer += prot_->serializedFieldSize("FieldA", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->FieldA);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t AStruct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("AStruct");
  xfer += prot_->writeFieldBegin("FieldA", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->writeI32(this->FieldA);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}}} // a::different::ns
namespace apache { namespace thrift {

}} // apache::thrift
namespace a { namespace different { namespace ns {

}}} // a::different::ns
