#pragma once

#include "BaseDeclarations.h"
struct FGamePadKeyName
{
	char __padding[0x30L];
	FKey& KeyField() { return *GetNativePointerField<FKey*>(this, "FGamePadKeyName.Key"); }
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FGamePadKeyName.Name"); }

	// Functions

	FGamePadKeyName * operator=(const FGamePadKeyName * __that) { return NativeCall<FGamePadKeyName *, const FGamePadKeyName *>(this, "FGamePadKeyName.operator=", __that); }
};

