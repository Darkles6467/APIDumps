#pragma once

#include "BaseDeclarations.h"
#include "UDataAsset.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBlackboardData : UDataAsset
{
	enum EKeyLookupMode
	{
		CheckParentKeys = 0x0,
		DontCheckParentKeys = 0x1,
	};

	char __padding[0x20L];
	UBlackboardData * ParentField() { return GetNativePointerField<UBlackboardData *>(this, "UBlackboardData.Parent"); }
	TArray<FBlackboardEntry>& KeysField() { return *GetNativePointerField<TArray<FBlackboardEntry>*>(this, "UBlackboardData.Keys"); }
	char& FirstKeyIDField() { return *GetNativePointerField<char*>(this, "UBlackboardData.FirstKeyID"); }

	// Functions

	const FBlackboardEntry * GetKey(char KeyID) { return NativeCall<const FBlackboardEntry *, char>(this, "UBlackboardData.GetKey", KeyID); }
	char GetKeyID(const FName * KeyName) { return NativeCall<char, const FName *>(this, "UBlackboardData.GetKeyID", KeyName); }
	char InternalGetKeyID(const FName * KeyName, UBlackboardData::EKeyLookupMode LookupMode) { return NativeCall<char, const FName *, UBlackboardData::EKeyLookupMode>(this, "UBlackboardData.InternalGetKeyID", KeyName, LookupMode); }
	bool IsValid() { return NativeCall<bool>(this, "UBlackboardData.IsValid"); }
	void PostLoad() { NativeCall<void>(this, "UBlackboardData.PostLoad"); }
};

