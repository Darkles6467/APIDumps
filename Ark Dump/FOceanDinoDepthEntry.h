#pragma once

#include "BaseDeclarations.h"
struct FOceanDinoDepthEntry
{
	char __padding[0x38L];
	TArray<FOceanDinoSpawnEntry>& OceanDinoSpawnEntriesField() { return *GetNativePointerField<TArray<FOceanDinoSpawnEntry>*>(this, "FOceanDinoDepthEntry.OceanDinoSpawnEntries"); }
	FString& SectionFriendlyNameField() { return *GetNativePointerField<FString*>(this, "FOceanDinoDepthEntry.SectionFriendlyName"); }
	float& StartAtDepthZField() { return *GetNativePointerField<float*>(this, "FOceanDinoDepthEntry.StartAtDepthZ"); }
	TArray<float>& SpawnEntriesNPCWeightsField() { return *GetNativePointerField<TArray<float>*>(this, "FOceanDinoDepthEntry.SpawnEntriesNPCWeights"); }

	// Functions

	FOceanDinoDepthEntry * operator=(const FOceanDinoDepthEntry * __that) { return NativeCall<FOceanDinoDepthEntry *, const FOceanDinoDepthEntry *>(this, "FOceanDinoDepthEntry.operator=", __that); }
};

