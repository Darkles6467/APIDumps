#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ASupplyCrateSpawningSettings : AActor
{
	char __padding[0x48L];
	TArray<FSupplyCrateSpawnEntry>& LinkedSupplyCrateEntriesField() { return *GetNativePointerField<TArray<FSupplyCrateSpawnEntry>*>(this, "ASupplyCrateSpawningSettings.LinkedSupplyCrateEntries"); }
	int& MaxNumCratesField() { return *GetNativePointerField<int*>(this, "ASupplyCrateSpawningSettings.MaxNumCrates"); }
	float& DelayBeforeFirstCrateField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.DelayBeforeFirstCrate"); }
	float& MaxDelayBeforeFirstCrateField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.MaxDelayBeforeFirstCrate"); }
	int& ZoneVolumeMaxNumberOfNPCBufferField() { return *GetNativePointerField<int*>(this, "ASupplyCrateSpawningSettings.ZoneVolumeMaxNumberOfNPCBuffer"); }
	float& IntervalBetweenCrateSpawnsField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.IntervalBetweenCrateSpawns"); }
	float& MaxIntervalBetweenCrateSpawnsField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.MaxIntervalBetweenCrateSpawns"); }
	float& IntervalBetweenMaxedCrateSpawnsField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.IntervalBetweenMaxedCrateSpawns"); }
	float& MaxIntervalBetweenMaxedCrateSpawnsField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.MaxIntervalBetweenMaxedCrateSpawns"); }
	float& MinCrateDistanceFromPlayerField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.MinCrateDistanceFromPlayer"); }
	float& MinCrateDistanceFromStructureField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.MinCrateDistanceFromStructure"); }
	float& NoValidSpawnReCheckIntervalField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.NoValidSpawnReCheckInterval"); }
	float& MinTimeBetweenCrateSpawnsAtSamePointField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.MinTimeBetweenCrateSpawnsAtSamePoint"); }

	// Functions

	void ApplyToVolume(ASupplyCrateSpawningVolume * Volume) { NativeCall<void, ASupplyCrateSpawningVolume *>(this, "ASupplyCrateSpawningSettings.ApplyToVolume", Volume); }
};

