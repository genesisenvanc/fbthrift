/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/basic/gen-cpp2/module_layouts.h"

namespace apache { namespace thrift { namespace frozen {

FROZEN_CTOR( ::cpp2::MyStruct,
  FROZEN_CTOR_FIELD(MyIntField, 1)
  FROZEN_CTOR_FIELD(MyStringField, 2))
FROZEN_MAXIMIZE( ::cpp2::MyStruct,
  FROZEN_MAXIMIZE_FIELD(MyIntField)
  FROZEN_MAXIMIZE_FIELD(MyStringField))
FROZEN_LAYOUT( ::cpp2::MyStruct,
  FROZEN_LAYOUT_FIELD(MyIntField)
  FROZEN_LAYOUT_FIELD(MyStringField))
FROZEN_FREEZE( ::cpp2::MyStruct,
  FROZEN_FREEZE_FIELD(MyIntField)
  FROZEN_FREEZE_FIELD(MyStringField))
FROZEN_THAW( ::cpp2::MyStruct,
  FROZEN_THAW_FIELD(MyIntField)
  FROZEN_THAW_FIELD(MyStringField))
FROZEN_DEBUG( ::cpp2::MyStruct,
  FROZEN_DEBUG_FIELD(MyIntField)
  FROZEN_DEBUG_FIELD(MyStringField))
FROZEN_CLEAR( ::cpp2::MyStruct,
  FROZEN_CLEAR_FIELD(MyIntField)
  FROZEN_CLEAR_FIELD(MyStringField))

}}} // apache::thrift::frozen
