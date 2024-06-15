#pragma once

#include "BaseDeclarations.h"
struct FLandscapeDebugOptions
{
	char __padding[0x38L];
	bool& bShowPatchesField() { return *GetNativePointerField<bool*>(this, "FLandscapeDebugOptions.bShowPatches"); }
	bool& bDisableStaticField() { return *GetNativePointerField<bool*>(this, "FLandscapeDebugOptions.bDisableStatic"); }
	bool& bDisableCombineField() { return *GetNativePointerField<bool*>(this, "FLandscapeDebugOptions.bDisableCombine"); }
	FAutoConsoleCommand& PatchesConsoleCommandField() { return *GetNativePointerField<FAutoConsoleCommand*>(this, "FLandscapeDebugOptions.PatchesConsoleCommand"); }
	FAutoConsoleCommand& StaticConsoleCommandField() { return *GetNativePointerField<FAutoConsoleCommand*>(this, "FLandscapeDebugOptions.StaticConsoleCommand"); }
	FAutoConsoleCommand& CombineConsoleCommandField() { return *GetNativePointerField<FAutoConsoleCommand*>(this, "FLandscapeDebugOptions.CombineConsoleCommand"); }

	// Functions

	void Combine() { NativeCall<void>(this, "FLandscapeDebugOptions.Combine"); }
	void Patches() { NativeCall<void>(this, "FLandscapeDebugOptions.Patches"); }
	void Static() { NativeCall<void>(this, "FLandscapeDebugOptions.Static"); }
};

