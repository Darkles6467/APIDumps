#pragma once

#include "BaseDeclarations.h"
#include "UBlackboardKeyType.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBlackboardKeyType_Float : UBlackboardKeyType
{

	// Functions

	EBlackboardCompare::Type Compare(const char * MemoryBlockA, const char * MemoryBlockB) { return NativeCall<EBlackboardCompare::Type, const char *, const char *>(this, "UBlackboardKeyType_Float.Compare", MemoryBlockA, MemoryBlockB); }
	FString * DescribeArithmeticParam(FString * result, int IntValue, float FloatValue) { return NativeCall<FString *, FString *, int, float>(this, "UBlackboardKeyType_Float.DescribeArithmeticParam", result, IntValue, FloatValue); }
	FString * DescribeValue(FString * result, const char * RawData) { return NativeCall<FString *, FString *, const char *>(this, "UBlackboardKeyType_Float.DescribeValue", result, RawData); }
	bool TestArithmeticOperation(const char * MemoryBlock, EArithmeticKeyOperation::Type Op, int OtherIntValue, float OtherFloatValue) { return NativeCall<bool, const char *, EArithmeticKeyOperation::Type, int, float>(this, "UBlackboardKeyType_Float.TestArithmeticOperation", MemoryBlock, Op, OtherIntValue, OtherFloatValue); }
};

