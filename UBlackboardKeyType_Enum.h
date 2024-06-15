#pragma once

#include "BaseDeclarations.h"
#include "UBlackboardKeyType.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBlackboardKeyType_Enum : UBlackboardKeyType
{
	char __padding[0x8L];

	// Functions

	FString * DescribeArithmeticParam(FString * result, int IntValue, float FloatValue) { return NativeCall<FString *, FString *, int, float>(this, "UBlackboardKeyType_Enum.DescribeArithmeticParam", result, IntValue, FloatValue); }
	FString * DescribeSelf(FString * result) { return NativeCall<FString *, FString *>(this, "UBlackboardKeyType_Enum.DescribeSelf", result); }
	FString * DescribeValue(FString * result, const char * RawData) { return NativeCall<FString *, FString *, const char *>(this, "UBlackboardKeyType_Enum.DescribeValue", result, RawData); }
	bool IsAllowedByFilter(UBlackboardKeyType * FilterOb) { return NativeCall<bool, UBlackboardKeyType *>(this, "UBlackboardKeyType_Enum.IsAllowedByFilter", FilterOb); }
	bool TestArithmeticOperation(const char * MemoryBlock, EArithmeticKeyOperation::Type Op, int OtherIntValue, float OtherFloatValue) { return NativeCall<bool, const char *, EArithmeticKeyOperation::Type, int, float>(this, "UBlackboardKeyType_Enum.TestArithmeticOperation", MemoryBlock, Op, OtherIntValue, OtherFloatValue); }
};

