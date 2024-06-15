#pragma once

#include "BaseDeclarations.h"
#include "UBlackboardKeyType.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBlackboardKeyType_NativeEnum : UBlackboardKeyType
{
	char __padding[0x20L];
	FString& EnumNameField() { return *GetNativePointerField<FString*>(this, "UBlackboardKeyType_NativeEnum.EnumName"); }
	bool& bIsEnumNameValidField() { return *GetNativePointerField<bool*>(this, "UBlackboardKeyType_NativeEnum.bIsEnumNameValid"); }

	// Functions

	EBlackboardCompare::Type Compare(const char * MemoryBlockA, const char * MemoryBlockB) { return NativeCall<EBlackboardCompare::Type, const char *, const char *>(this, "UBlackboardKeyType_NativeEnum.Compare", MemoryBlockA, MemoryBlockB); }
	FString * DescribeArithmeticParam(FString * result, int IntValue, float FloatValue) { return NativeCall<FString *, FString *, int, float>(this, "UBlackboardKeyType_NativeEnum.DescribeArithmeticParam", result, IntValue, FloatValue); }
	FString * DescribeSelf(FString * result) { return NativeCall<FString *, FString *>(this, "UBlackboardKeyType_NativeEnum.DescribeSelf", result); }
	FString * DescribeValue(FString * result, const char * RawData) { return NativeCall<FString *, FString *, const char *>(this, "UBlackboardKeyType_NativeEnum.DescribeValue", result, RawData); }
	bool IsAllowedByFilter(UBlackboardKeyType * FilterOb) { return NativeCall<bool, UBlackboardKeyType *>(this, "UBlackboardKeyType_NativeEnum.IsAllowedByFilter", FilterOb); }
};

