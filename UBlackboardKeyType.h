#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UBlackboardKeyType : UObject
{
	char __padding[0x8L];
	unsigned __int16& ValueSizeField() { return *GetNativePointerField<unsigned __int16*>(this, "UBlackboardKeyType.ValueSize"); }
	TEnumAsByte<enum EBlackboardKeyOperation::Type>& SupportedOpField() { return *GetNativePointerField<TEnumAsByte<enum EBlackboardKeyOperation::Type>*>(this, "UBlackboardKeyType.SupportedOp"); }

	// Functions

	EBlackboardCompare::Type Compare(const char * MemoryBlockA, const char * MemoryBlockB) { return NativeCall<EBlackboardCompare::Type, const char *, const char *>(this, "UBlackboardKeyType.Compare", MemoryBlockA, MemoryBlockB); }
	FString * DescribeValue(FString * result, const char * RawData) { return NativeCall<FString *, FString *, const char *>(this, "UBlackboardKeyType.DescribeValue", result, RawData); }
	bool IsAllowedByFilter(UBlackboardKeyType * FilterOb) { return NativeCall<bool, UBlackboardKeyType *>(this, "UBlackboardKeyType.IsAllowedByFilter", FilterOb); }
};

