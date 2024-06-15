#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UGenericDataListEntry : UObject
{
	char __padding[0x68L];
	FString& DescriptionField() { return *GetNativePointerField<FString*>(this, "UGenericDataListEntry.Description"); }
	int& CustomDataField() { return *GetNativePointerField<int*>(this, "UGenericDataListEntry.CustomData"); }
	FString& CustomStringField() { return *GetNativePointerField<FString*>(this, "UGenericDataListEntry.CustomString"); }
	bool& bIsEnabledField() { return *GetNativePointerField<bool*>(this, "UGenericDataListEntry.bIsEnabled"); }
	int& ExplicitEntryIndexTypeField() { return *GetNativePointerField<int*>(this, "UGenericDataListEntry.ExplicitEntryIndexType"); }

	// Functions

	bool GetEntryDefaultEnabled() { return NativeCall<bool>(this, "UGenericDataListEntry.GetEntryDefaultEnabled"); }
	FString * GetEntryString(FString * result) { return NativeCall<FString *, FString *>(this, "UGenericDataListEntry.GetEntryString", result); }
	int GetExplicitEntryIndexType(bool bGetBaseValue) { return NativeCall<int, bool>(this, "UGenericDataListEntry.GetExplicitEntryIndexType", bGetBaseValue); }
};

