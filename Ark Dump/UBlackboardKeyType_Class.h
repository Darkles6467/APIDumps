#pragma once

#include "BaseDeclarations.h"
#include "UBlackboardKeyType.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBlackboardKeyType_Class : UBlackboardKeyType
{
	char __padding[0x8L];

	// Functions

	EBlackboardCompare::Type Compare(const char * MemoryBlockA, const char * MemoryBlockB) { return NativeCall<EBlackboardCompare::Type, const char *, const char *>(this, "UBlackboardKeyType_Class.Compare", MemoryBlockA, MemoryBlockB); }
	FString * DescribeSelf(FString * result) { return NativeCall<FString *, FString *>(this, "UBlackboardKeyType_Class.DescribeSelf", result); }
	FString * DescribeValue(FString * result, const char * RawData) { return NativeCall<FString *, FString *, const char *>(this, "UBlackboardKeyType_Class.DescribeValue", result, RawData); }
	bool IsAllowedByFilter(UBlackboardKeyType * FilterOb) { return NativeCall<bool, UBlackboardKeyType *>(this, "UBlackboardKeyType_Class.IsAllowedByFilter", FilterOb); }
	static bool SetValue(char * RawData, UObject * Value) { return NativeCall<bool, char *, UObject *>(nullptr, "UBlackboardKeyType_Class.SetValue", RawData, Value); }
	bool TestBasicOperation(const char * MemoryBlock, EBasicKeyOperation::Type Op) { return NativeCall<bool, const char *, EBasicKeyOperation::Type>(this, "UBlackboardKeyType_Class.TestBasicOperation", MemoryBlock, Op); }
};

