#pragma once

#include "BaseDeclarations.h"
struct FSupplyCrateSpawnPointEntry
{
	char __padding[0x50L];
	ANPCZoneManager * LinkedEnemySpawnZoneManagerField() { return GetNativePointerField<ANPCZoneManager *>(this, "FSupplyCrateSpawnPointEntry.LinkedEnemySpawnZoneManager"); }
	FName& LinkedEnemySpawnZoneManagerTagField() { return *GetNativePointerField<FName*>(this, "FSupplyCrateSpawnPointEntry.LinkedEnemySpawnZoneManagerTag"); }
	FVector& TraceGroundPointDownOffsetField() { return *GetNativePointerField<FVector*>(this, "FSupplyCrateSpawnPointEntry.TraceGroundPointDownOffset"); }
	FVector& TraceGroundPointUpOffsetField() { return *GetNativePointerField<FVector*>(this, "FSupplyCrateSpawnPointEntry.TraceGroundPointUpOffset"); }
	float& SpawnPointWeightField() { return *GetNativePointerField<float*>(this, "FSupplyCrateSpawnPointEntry.SpawnPointWeight"); }
	TArray<FSupplyCrateSpawnEntry>& OverrideSupplyCrateEntriesField() { return *GetNativePointerField<TArray<FSupplyCrateSpawnEntry>*>(this, "FSupplyCrateSpawnPointEntry.OverrideSupplyCrateEntries"); }
	long double& LastTimeSpawnedField() { return *GetNativePointerField<long double*>(this, "FSupplyCrateSpawnPointEntry.LastTimeSpawned"); }

	// Functions

	FSupplyCrateSpawnPointEntry * operator=(const FSupplyCrateSpawnPointEntry * __that) { return NativeCall<FSupplyCrateSpawnPointEntry *, const FSupplyCrateSpawnPointEntry *>(this, "FSupplyCrateSpawnPointEntry.operator=", __that); }
};

