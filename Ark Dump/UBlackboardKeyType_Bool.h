#pragma once

#include "BaseDeclarations.h"
#include "UBlackboardKeyType.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBlackboardKeyType_Bool : UBlackboardKeyType
{

	// Functions

	EBlackboardCompare::Type Compare(const char * MemoryBlockA, const char * MemoryBlockB) { return NativeCall<EBlackboardCompare::Type, const char *, const char *>(this, "UBlackboardKeyType_Bool.Compare", MemoryBlockA, MemoryBlockB); }
	FString * DescribeValue(FString * result, const char * RawData) { return NativeCall<FString *, FString *, const char *>(this, "UBlackboardKeyType_Bool.DescribeValue", result, RawData); }
	bool TestBasicOperation(const char * MemoryBlock, EBasicKeyOperation::Type Op) { return NativeCall<bool, const char *, EBasicKeyOperation::Type>(this, "UBlackboardKeyType_Bool.TestBasicOperation", MemoryBlock, Op); }
};

