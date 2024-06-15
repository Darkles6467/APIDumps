#pragma once

#include "BaseDeclarations.h"
#include "UBlackboardKeyType.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBlackboardKeyType_Name : UBlackboardKeyType
{

	// Functions

	EBlackboardCompare::Type Compare(const char * MemoryBlockA, const char * MemoryBlockB) { return NativeCall<EBlackboardCompare::Type, const char *, const char *>(this, "UBlackboardKeyType_Name.Compare", MemoryBlockA, MemoryBlockB); }
	FString * DescribeValue(FString * result, const char * RawData) { return NativeCall<FString *, FString *, const char *>(this, "UBlackboardKeyType_Name.DescribeValue", result, RawData); }
	bool TestTextOperation(const char * MemoryBlock, ETextKeyOperation::Type Op, const FString * OtherString) { return NativeCall<bool, const char *, ETextKeyOperation::Type, const FString *>(this, "UBlackboardKeyType_Name.TestTextOperation", MemoryBlock, Op, OtherString); }
};

