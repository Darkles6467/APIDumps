#pragma once

#include "BaseDeclarations.h"
struct FNPCSpawnEntry
{
	char __padding[0x110L];
	FString& AnEntryNameField() { return *GetNativePointerField<FString*>(this, "FNPCSpawnEntry.AnEntryName"); }
	TArray<TSubclassOf<APrimalDinoCharacter>>& NPCsToSpawnField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>>*>(this, "FNPCSpawnEntry.NPCsToSpawn"); }
	TArray<FString>& NPCsToSpawnStringsField() { return *GetNativePointerField<TArray<FString>*>(this, "FNPCSpawnEntry.NPCsToSpawnStrings"); }
	TArray<FClassRemappingWeight>& NPCRandomSpawnClassWeightsField() { return *GetNativePointerField<TArray<FClassRemappingWeight>*>(this, "FNPCSpawnEntry.NPCRandomSpawnClassWeights"); }
	TArray<FVector>& NPCsSpawnOffsetsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FNPCSpawnEntry.NPCsSpawnOffsets"); }
	TArray<float>& NPCsToSpawnPercentageChanceField() { return *GetNativePointerField<TArray<float>*>(this, "FNPCSpawnEntry.NPCsToSpawnPercentageChance"); }
	TArray<float>& NPCMinLevelOffsetField() { return *GetNativePointerField<TArray<float>*>(this, "FNPCSpawnEntry.NPCMinLevelOffset"); }
	TArray<float>& NPCMaxLevelOffsetField() { return *GetNativePointerField<TArray<float>*>(this, "FNPCSpawnEntry.NPCMaxLevelOffset"); }
	TArray<float>& NPCMinLevelMultiplierField() { return *GetNativePointerField<TArray<float>*>(this, "FNPCSpawnEntry.NPCMinLevelMultiplier"); }
	TArray<float>& NPCMaxLevelMultiplierField() { return *GetNativePointerField<TArray<float>*>(this, "FNPCSpawnEntry.NPCMaxLevelMultiplier"); }
	TArray<unsigned char>& NPCOverrideLevelField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FNPCSpawnEntry.NPCOverrideLevel"); }
	FVector& ExtentCheckField() { return *GetNativePointerField<FVector*>(this, "FNPCSpawnEntry.ExtentCheck"); }
	FVector& GroupSpawnOffsetField() { return *GetNativePointerField<FVector*>(this, "FNPCSpawnEntry.GroupSpawnOffset"); }
	float& EntryWeightField() { return *GetNativePointerField<float*>(this, "FNPCSpawnEntry.EntryWeight"); }
	float& ManualSpawnPointSpreadRadiusField() { return *GetNativePointerField<float*>(this, "FNPCSpawnEntry.ManualSpawnPointSpreadRadius"); }
	float& WaterOnlySpawnMinimumWaterHeightField() { return *GetNativePointerField<float*>(this, "FNPCSpawnEntry.WaterOnlySpawnMinimumWaterHeight"); }
	float& MaximumWaterHeightField() { return *GetNativePointerField<float*>(this, "FNPCSpawnEntry.MaximumWaterHeight"); }
	TSubclassOf<UPrimalColorSet>& ColorSetsField() { return *GetNativePointerField<TSubclassOf<UPrimalColorSet>*>(this, "FNPCSpawnEntry.ColorSets"); }
	TArray<FNPCDifficultyLevelRange>& NPCDifficultyLevelRangesField() { return *GetNativePointerField<TArray<FNPCDifficultyLevelRange>*>(this, "FNPCSpawnEntry.NPCDifficultyLevelRanges"); }
	float& LevelDifficultyTestOverrideField() { return *GetNativePointerField<float*>(this, "FNPCSpawnEntry.LevelDifficultyTestOverride"); }
	float& SpawnMinDistanceFromStructuresMultiplierField() { return *GetNativePointerField<float*>(this, "FNPCSpawnEntry.SpawnMinDistanceFromStructuresMultiplier"); }
	float& SpawnMinDistanceFromPlayersMultiplierField() { return *GetNativePointerField<float*>(this, "FNPCSpawnEntry.SpawnMinDistanceFromPlayersMultiplier"); }
	float& SpawnMinDistanceFromTamedDinosMultiplierField() { return *GetNativePointerField<float*>(this, "FNPCSpawnEntry.SpawnMinDistanceFromTamedDinosMultiplier"); }
	float& RandGroupSpawnOffsetZMinField() { return *GetNativePointerField<float*>(this, "FNPCSpawnEntry.RandGroupSpawnOffsetZMin"); }
	float& RandGroupSpawnOffsetZMaxField() { return *GetNativePointerField<float*>(this, "FNPCSpawnEntry.RandGroupSpawnOffsetZMax"); }

	// Functions

	FNPCSpawnEntry * operator=(const FNPCSpawnEntry * __that) { return NativeCall<FNPCSpawnEntry *, const FNPCSpawnEntry *>(this, "FNPCSpawnEntry.operator=", __that); }
};

