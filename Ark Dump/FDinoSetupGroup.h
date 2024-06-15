#pragma once

#include "BaseDeclarations.h"
struct FDinoSetupGroup
{
	char __padding[0x30L];
	FName& GroupNameField() { return *GetNativePointerField<FName*>(this, "FDinoSetupGroup.GroupName"); }
	float& RandomWeightField() { return *GetNativePointerField<float*>(this, "FDinoSetupGroup.RandomWeight"); }
	TArray<FDinoSetup>& EntriesField() { return *GetNativePointerField<TArray<FDinoSetup>*>(this, "FDinoSetupGroup.Entries"); }
	TArray<int>& EntriesSpawnNumberLimitsField() { return *GetNativePointerField<TArray<int>*>(this, "FDinoSetupGroup.EntriesSpawnNumberLimits"); }

	// Functions

	FDinoSetupGroup * operator=(const FDinoSetupGroup * __that) { return NativeCall<FDinoSetupGroup *, const FDinoSetupGroup *>(this, "FDinoSetupGroup.operator=", __that); }
};

