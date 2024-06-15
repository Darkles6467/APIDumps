#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UIntSerialization : UObject
{
	char __padding[0x28L];
	unsigned __int16& UnsignedInt16VariableField() { return *GetNativePointerField<unsigned __int16*>(this, "UIntSerialization.UnsignedInt16Variable"); }
	unsigned int& UnsignedInt32VariableField() { return *GetNativePointerField<unsigned int*>(this, "UIntSerialization.UnsignedInt32Variable"); }
	unsigned __int64& UnsignedInt64VariableField() { return *GetNativePointerField<unsigned __int64*>(this, "UIntSerialization.UnsignedInt64Variable"); }
	char& SignedInt8VariableField() { return *GetNativePointerField<char*>(this, "UIntSerialization.SignedInt8Variable"); }
	__int16& SignedInt16VariableField() { return *GetNativePointerField<__int16*>(this, "UIntSerialization.SignedInt16Variable"); }
	__int64& SignedInt64VariableField() { return *GetNativePointerField<__int64*>(this, "UIntSerialization.SignedInt64Variable"); }
	char& UnsignedInt8VariableField() { return *GetNativePointerField<char*>(this, "UIntSerialization.UnsignedInt8Variable"); }
	int& SignedInt32VariableField() { return *GetNativePointerField<int*>(this, "UIntSerialization.SignedInt32Variable"); }

	// Functions

};

