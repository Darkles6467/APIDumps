#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct FBlackboardKeySelector
{
	char __padding[0x28L];
	FName& SelectedKeyNameField() { return *GetNativePointerField<FName*>(this, "FBlackboardKeySelector.SelectedKeyName"); }
	char& SelectedKeyIDField() { return *GetNativePointerField<char*>(this, "FBlackboardKeySelector.SelectedKeyID"); }

	// Functions

	void AddFloatFilter(UObject * Owner) { NativeCall<void, UObject *>(this, "FBlackboardKeySelector.AddFloatFilter", Owner); }
	void AddObjectFilter(UObject * Owner, TSubclassOf<UObject> AllowedClass) { NativeCall<void, UObject *, TSubclassOf<UObject>>(this, "FBlackboardKeySelector.AddObjectFilter", Owner, AllowedClass); }
	void AddRotatorFilter(UObject * Owner) { NativeCall<void, UObject *>(this, "FBlackboardKeySelector.AddRotatorFilter", Owner); }
	void AddVectorFilter(UObject * Owner) { NativeCall<void, UObject *>(this, "FBlackboardKeySelector.AddVectorFilter", Owner); }
	void CacheSelectedKey(UBlackboardData * BlackboardAsset) { NativeCall<void, UBlackboardData *>(this, "FBlackboardKeySelector.CacheSelectedKey", BlackboardAsset); }
	void InitSelectedKey(UBlackboardData * BlackboardAsset) { NativeCall<void, UBlackboardData *>(this, "FBlackboardKeySelector.InitSelectedKey", BlackboardAsset); }
};

