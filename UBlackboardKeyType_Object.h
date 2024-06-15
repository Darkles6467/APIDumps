#pragma once

#include "BaseDeclarations.h"
#include "UBlackboardKeyType.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBlackboardKeyType_Object : UBlackboardKeyType
{
	char __padding[0x8L];

	// Functions

	FString * DescribeSelf(FString * result) { return NativeCall<FString *, FString *>(this, "UBlackboardKeyType_Object.DescribeSelf", result); }
	FString * DescribeValue(FString * result, const char * RawData) { return NativeCall<FString *, FString *, const char *>(this, "UBlackboardKeyType_Object.DescribeValue", result, RawData); }
	bool GetLocation(const char * RawData, FVector * Location) { return NativeCall<bool, const char *, FVector *>(this, "UBlackboardKeyType_Object.GetLocation", RawData, Location); }
	bool GetRotation(const char * RawData, FRotator * Rotation) { return NativeCall<bool, const char *, FRotator *>(this, "UBlackboardKeyType_Object.GetRotation", RawData, Rotation); }
	bool IsAllowedByFilter(UBlackboardKeyType * FilterOb) { return NativeCall<bool, UBlackboardKeyType *>(this, "UBlackboardKeyType_Object.IsAllowedByFilter", FilterOb); }
	bool TestBasicOperation(const char * MemoryBlock, EBasicKeyOperation::Type Op) { return NativeCall<bool, const char *, EBasicKeyOperation::Type>(this, "UBlackboardKeyType_Object.TestBasicOperation", MemoryBlock, Op); }
};

