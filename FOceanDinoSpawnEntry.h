#pragma once

#include "BaseDeclarations.h"
struct FOceanDinoSpawnEntry
{
	char __padding[0x38L];
	FString& EntryFriendlyNameField() { return *GetNativePointerField<FString*>(this, "FOceanDinoSpawnEntry.EntryFriendlyName"); }
	TSubclassOf<APrimalDinoCharacter>& SpawnDinoClassField() { return *GetNativePointerField<TSubclassOf<APrimalDinoCharacter>*>(this, "FOceanDinoSpawnEntry.SpawnDinoClass"); }
	float& SpawnDinoWeightField() { return *GetNativePointerField<float*>(this, "FOceanDinoSpawnEntry.SpawnDinoWeight"); }
	float& EntrySpawnDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "FOceanDinoSpawnEntry.EntrySpawnDistanceMultiplier"); }
	float& SpawnZOffsetField() { return *GetNativePointerField<float*>(this, "FOceanDinoSpawnEntry.SpawnZOffset"); }
	float& MinimumDepthFromWaterSurfaceField() { return *GetNativePointerField<float*>(this, "FOceanDinoSpawnEntry.MinimumDepthFromWaterSurface"); }
	float& MaxSpawnZField() { return *GetNativePointerField<float*>(this, "FOceanDinoSpawnEntry.MaxSpawnZ"); }
	float& NetworkAndStasisRangeMultiplierField() { return *GetNativePointerField<float*>(this, "FOceanDinoSpawnEntry.NetworkAndStasisRangeMultiplier"); }
	float& MinimumAllowedFreeDepthForSpawnField() { return *GetNativePointerField<float*>(this, "FOceanDinoSpawnEntry.MinimumAllowedFreeDepthForSpawn"); }
	int& OverrideMaxValidSpawnPointAttemptsField() { return *GetNativePointerField<int*>(this, "FOceanDinoSpawnEntry.OverrideMaxValidSpawnPointAttempts"); }

	// Functions

	FOceanDinoSpawnEntry * operator=(const FOceanDinoSpawnEntry * __that) { return NativeCall<FOceanDinoSpawnEntry *, const FOceanDinoSpawnEntry *>(this, "FOceanDinoSpawnEntry.operator=", __that); }
};

