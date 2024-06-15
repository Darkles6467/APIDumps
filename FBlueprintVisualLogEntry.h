#pragma once

#include "BaseDeclarations.h"
struct FBlueprintVisualLogEntry
{
	char __padding[0x30L];
	FString& CategoryField() { return *GetNativePointerField<FString*>(this, "FBlueprintVisualLogEntry.Category"); }
	FString& KeyField() { return *GetNativePointerField<FString*>(this, "FBlueprintVisualLogEntry.Key"); }
	FString& ValueField() { return *GetNativePointerField<FString*>(this, "FBlueprintVisualLogEntry.Value"); }

	// Functions

	FBlueprintVisualLogEntry * operator=(const FBlueprintVisualLogEntry * __that) { return NativeCall<FBlueprintVisualLogEntry *, const FBlueprintVisualLogEntry *>(this, "FBlueprintVisualLogEntry.operator=", __that); }
};

