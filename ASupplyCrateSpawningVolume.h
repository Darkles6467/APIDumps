#pragma once

#include "BaseDeclarations.h"
#include "AVolume.h"
#include "ABrush.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ASupplyCrateSpawningVolume : AVolume
{
	char __padding[0xa0L];
	TArray<FSupplyCrateSpawnEntry>& LinkedSupplyCrateEntriesField() { return *GetNativePointerField<TArray<FSupplyCrateSpawnEntry>*>(this, "ASupplyCrateSpawningVolume.LinkedSupplyCrateEntries"); }
	TArray<FSupplyCrateSpawnEntry>& OriginalSupplyCrateEntriesField() { return *GetNativePointerField<TArray<FSupplyCrateSpawnEntry>*>(this, "ASupplyCrateSpawningVolume.OriginalSupplyCrateEntries"); }
	TArray<FSupplyCrateSpawnPointEntry>& LinkedSpawnPointEntriesField() { return *GetNativePointerField<TArray<FSupplyCrateSpawnPointEntry>*>(this, "ASupplyCrateSpawningVolume.LinkedSpawnPointEntries"); }
	int& MaxNumCratesField() { return *GetNativePointerField<int*>(this, "ASupplyCrateSpawningVolume.MaxNumCrates"); }
	float& DelayBeforeFirstCrateField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.DelayBeforeFirstCrate"); }
	float& MaxDelayBeforeFirstCrateField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.MaxDelayBeforeFirstCrate"); }
	int& ZoneVolumeMaxNumberOfNPCBufferField() { return *GetNativePointerField<int*>(this, "ASupplyCrateSpawningVolume.ZoneVolumeMaxNumberOfNPCBuffer"); }
	float& IntervalBetweenCrateSpawnsField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.IntervalBetweenCrateSpawns"); }
	float& MaxIntervalBetweenCrateSpawnsField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.MaxIntervalBetweenCrateSpawns"); }
	float& IntervalBetweenMaxedCrateSpawnsField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.IntervalBetweenMaxedCrateSpawns"); }
	float& MaxIntervalBetweenMaxedCrateSpawnsField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.MaxIntervalBetweenMaxedCrateSpawns"); }
	float& SP_IntervalBetweenCrateSpawnsField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.SP_IntervalBetweenCrateSpawns"); }
	float& SP_MaxIntervalBetweenCrateSpawnsField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.SP_MaxIntervalBetweenCrateSpawns"); }
	float& SP_IntervalBetweenMaxedCrateSpawnsField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.SP_IntervalBetweenMaxedCrateSpawns"); }
	float& SP_MaxIntervalBetweenMaxedCrateSpawnsField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.SP_MaxIntervalBetweenMaxedCrateSpawns"); }
	float& SP_NoValidSpawnRecheckIntervalField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.SP_NoValidSpawnRecheckInterval"); }
	float& SP_DelayBeforeFirstCrateField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.SP_DelayBeforeFirstCrate"); }
	float& SP_MaxDelayBeforeFirstCrateField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.SP_MaxDelayBeforeFirstCrate"); }
	float& MinCrateDistanceFromPlayerField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.MinCrateDistanceFromPlayer"); }
	float& MinCrateDistanceFromStructureField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.MinCrateDistanceFromStructure"); }
	float& NoValidSpawnReCheckIntervalField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.NoValidSpawnReCheckInterval"); }
	float& MinTimeBetweenCrateSpawnsAtSamePointField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.MinTimeBetweenCrateSpawnsAtSamePoint"); }
	float& MinDistanceFromOtherCrateField() { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.MinDistanceFromOtherCrate"); }
	FName& CrateSpawningRequiresLoadedSublevelField() { return *GetNativePointerField<FName*>(this, "ASupplyCrateSpawningVolume.CrateSpawningRequiresLoadedSublevel"); }
	bool& bForceRandomSupplyCratePointsField() { return *GetNativePointerField<bool*>(this, "ASupplyCrateSpawningVolume.bForceRandomSupplyCratePoints"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "ASupplyCrateSpawningVolume.BeginPlay"); }
	void CheckCrateSpawn() { NativeCall<void>(this, "ASupplyCrateSpawningVolume.CheckCrateSpawn"); }
	void CheckForSupplyCrateStart() { NativeCall<void>(this, "ASupplyCrateSpawningVolume.CheckForSupplyCrateStart"); }
	void Destroyed() { NativeCall<void>(this, "ASupplyCrateSpawningVolume.Destroyed"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "ASupplyCrateSpawningVolume.EndPlay", EndPlayReason); }
	FSupplyCrateSpawnPointEntry * GetValidSpawnPointEntry(FVector * OutSpawnPoint) { return NativeCall<FSupplyCrateSpawnPointEntry *, FVector *>(this, "ASupplyCrateSpawningVolume.GetValidSpawnPointEntry", OutSpawnPoint); }
	void RemoveCrate(APrimalStructureItemContainer_SupplyCrate * aCrate) { NativeCall<void, APrimalStructureItemContainer_SupplyCrate *>(this, "ASupplyCrateSpawningVolume.RemoveCrate", aCrate); }
	void SetSpawnEnabled(bool bEnable) { NativeCall<void, bool>(this, "ASupplyCrateSpawningVolume.SetSpawnEnabled", bEnable); }
	void SpawnCratesFromAllPoints() { NativeCall<void>(this, "ASupplyCrateSpawningVolume.SpawnCratesFromAllPoints"); }
	static void SpawnCratesFromAllVolumes(UWorld * theWorld) { NativeCall<void, UWorld *>(nullptr, "ASupplyCrateSpawningVolume.SpawnCratesFromAllVolumes", theWorld); }
};

