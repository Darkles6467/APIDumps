#pragma once

#include "BaseDeclarations.h"
#include "UBlackboardKeyType.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBlackboardKeyType_Rotator : UBlackboardKeyType
{

	// Functions

	EBlackboardCompare::Type Compare(const char * MemoryBlockA, const char * MemoryBlockB) { return NativeCall<EBlackboardCompare::Type, const char *, const char *>(this, "UBlackboardKeyType_Rotator.Compare", MemoryBlockA, MemoryBlockB); }
	FString * DescribeValue(FString * result, const char * RawData) { return NativeCall<FString *, FString *, const char *>(this, "UBlackboardKeyType_Rotator.DescribeValue", result, RawData); }
	bool GetRotation(const char * RawData, FRotator * Rotation) { return NativeCall<bool, const char *, FRotator *>(this, "UBlackboardKeyType_Rotator.GetRotation", RawData, Rotation); }
	void Initialize(char * RawData) { NativeCall<void, char *>(this, "UBlackboardKeyType_Rotator.Initialize", RawData); }
	bool TestBasicOperation(const char * MemoryBlock, EBasicKeyOperation::Type Op) { return NativeCall<bool, const char *, EBasicKeyOperation::Type>(this, "UBlackboardKeyType_Rotator.TestBasicOperation", MemoryBlock, Op); }
};

