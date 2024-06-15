#pragma once

#include "BaseDeclarations.h"
#include "AInfo.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FNPCSpawnEntry.h"
#include "UPrimalColorSet.h"
#include "UNPCSpawnEntriesContainer.h"

struct ANPCZoneManager : AInfo
{
	char __padding[0x188L];
	TArray<ANPCZoneVolume *>& LinkedZoneVolumesField() { return *GetNativePointerField<TArray<ANPCZoneVolume *>*>(this, "ANPCZoneManager.LinkedZoneVolumes"); }
	TArray<FLinkedZoneSpawnVolumeEntry>& LinkedZoneSpawnVolumeEntriesField() { return *GetNativePointerField<TArray<FLinkedZoneSpawnVolumeEntry>*>(this, "ANPCZoneManager.LinkedZoneSpawnVolumeEntries"); }
	TArray<FName>& DefaultZoneSpawnVolumeFloorTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "ANPCZoneManager.DefaultZoneSpawnVolumeFloorTags"); }
	TSubclassOf<UNPCSpawnEntriesContainer>& NPCSpawnEntriesContainerObjectField() { return *GetNativePointerField<TSubclassOf<UNPCSpawnEntriesContainer>*>(this, "ANPCZoneManager.NPCSpawnEntriesContainerObject"); }
	bool& bEnabledField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bEnabled"); }
	bool& bForceInEditorField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bForceInEditor"); }
	bool& bNeverSpawnInWaterField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bNeverSpawnInWater"); }
	bool& bOnlySpawnInWaterField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bOnlySpawnInWater"); }
	TArray<FName>& OnlyAllowSpawningOnActorTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "ANPCZoneManager.OnlyAllowSpawningOnActorTags"); }
	bool& bAllowExtentTestField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bAllowExtentTest"); }
	bool& bOnlyCheckMySublevelWaterField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bOnlyCheckMySublevelWater"); }
	int& MinDesiredNumberOfNPCField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.MinDesiredNumberOfNPC"); }
	int& SP_MinDesiredNumberOfNPCField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.SP_MinDesiredNumberOfNPC"); }
	int& MaxNumberOfNPCField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.MaxNumberOfNPC"); }
	float& DesiredNumberOfNPCMultiplierField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.DesiredNumberOfNPCMultiplier"); }
	float& TheSpawnPointMinimumFloorNormalField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.TheSpawnPointMinimumFloorNormal"); }
	float& TheNewNewEditorNumberOfNPCMultiplierField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.TheNewNewEditorNumberOfNPCMultiplier"); }
	float& KillOffOverweightNPCStasisTimeField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.KillOffOverweightNPCStasisTime"); }
	float& TheMaximumWorldTimeForFullIncreaseField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.TheMaximumWorldTimeForFullIncrease"); }
	float& TheMinimumPlayerDistanceFromSpawnPointField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.TheMinimumPlayerDistanceFromSpawnPoint"); }
	float& TheIncreaseNPCIntervalField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.TheIncreaseNPCInterval"); }
	float& SP_TheIncreaseNPCIntervalField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.SP_TheIncreaseNPCInterval"); }
	float& TheIncreaseNPCIntervalMaxField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.TheIncreaseNPCIntervalMax"); }
	float& TheDecreaseNPCIntervalField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.TheDecreaseNPCInterval"); }
	float& NPCAIRangeMultiplierField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.NPCAIRangeMultiplier"); }
	float& NPCAIAggroNotifyNeighborsRangeMultiplierField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.NPCAIAggroNotifyNeighborsRangeMultiplier"); }
	bool& bNPCDontWanderField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bNPCDontWander"); }
	bool& bNPCWildIgnoreWildField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bNPCWildIgnoreWild"); }
	bool& bNPCNoKillXPField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bNPCNoKillXP"); }
	bool& bNPCPreventSavingField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bNPCPreventSaving"); }
	bool& bForceUntameableField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bForceUntameable"); }
	bool& bUsesManualSpawningField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bUsesManualSpawning"); }
	bool& bIgnoreVolumeEcompassingCheckField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bIgnoreVolumeEcompassingCheck"); }
	bool& bSpawnAllNPCEntriesField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bSpawnAllNPCEntries"); }
	bool& bOnlyUseInSingleplayerField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bOnlyUseInSingleplayer"); }
	bool& bOnlyUseInDedicatedServerField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bOnlyUseInDedicatedServer"); }
	float& NPCWanderRadiusMultiplierField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.NPCWanderRadiusMultiplier"); }
	int& MaxNumberSpawnZoneRandomPointChecksField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.MaxNumberSpawnZoneRandomPointChecks"); }
	int& TheNPCFullIncreaseMaximumIterationsField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.TheNPCFullIncreaseMaximumIterations"); }
	float& TheMinimumTamedDinoDistanceFromSpawnPointField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.TheMinimumTamedDinoDistanceFromSpawnPoint"); }
	float& TheMinimumStructureDistanceFromSpawnPointField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.TheMinimumStructureDistanceFromSpawnPoint"); }
	float& NPCLerpToMaxRandomBaseLevelField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.NPCLerpToMaxRandomBaseLevel"); }
	float& ManualSpawningNPCLerpToMaxRandomBaseLevelField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.ManualSpawningNPCLerpToMaxRandomBaseLevel"); }
	int& MaximumNumberNearbyCoreStructuresField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.MaximumNumberNearbyCoreStructures"); }
	int& AbsoluteMaximumNumberNearbyCoreStructuresField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.AbsoluteMaximumNumberNearbyCoreStructures"); }
	bool& bAutoKillUseGlobalStasisArrayField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bAutoKillUseGlobalStasisArray"); }
	ANPCZoneVolume * HardLimitWildDinosToVolumeField() { return GetNativePointerField<ANPCZoneVolume *>(this, "ANPCZoneManager.HardLimitWildDinosToVolume"); }
	bool& bTraceForSpawnAgainstWaterField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bTraceForSpawnAgainstWater"); }
	bool& bNPCForcePreventExitingWaterField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bNPCForcePreventExitingWater"); }
	bool& bUseSpawnPointOverrideRotationField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bUseSpawnPointOverrideRotation"); }
	float& NPCLevelMultiplierField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.NPCLevelMultiplier"); }
	int& ForceOverrideNPCBaseLevelField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.ForceOverrideNPCBaseLevel"); }
	TArray<FNPCSpawnEntry>& NPCSpawnEntriesField() { return *GetNativePointerField<TArray<FNPCSpawnEntry>*>(this, "ANPCZoneManager.NPCSpawnEntries"); }
	TArray<FNPCSpawnLimit>& NPCSpawnLimitsField() { return *GetNativePointerField<TArray<FNPCSpawnLimit>*>(this, "ANPCZoneManager.NPCSpawnLimits"); }
	int& UseDesiredNumberOfNPCField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.UseDesiredNumberOfNPC"); }
	int& NumNPCSpawnedField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.NumNPCSpawned"); }
	int& NumSpawnFailuresField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.NumSpawnFailures"); }
	long double& LastIncreaseNPCTimeField() { return *GetNativePointerField<long double*>(this, "ANPCZoneManager.LastIncreaseNPCTime"); }
	long double& LastDecreaseNPCTimeField() { return *GetNativePointerField<long double*>(this, "ANPCZoneManager.LastDecreaseNPCTime"); }
	bool& bForceRespawnDinosField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bForceRespawnDinos"); }
	bool& bTriedFullIncreaseField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bTriedFullIncrease"); }
	bool& bSpawnsWaterDinosField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bSpawnsWaterDinos"); }
	bool& bSpawnsAmphibiousDinosField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bSpawnsAmphibiousDinos"); }
	float& TheNextIncreaseNPCIntervalField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.TheNextIncreaseNPCInterval"); }
	float& CloseStructureDistanceFromSpawnPointField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.CloseStructureDistanceFromSpawnPoint"); }
	FName& NonDedicatedFreezeWildDinoPhysicsIfLevelUnloadedField() { return *GetNativePointerField<FName*>(this, "ANPCZoneManager.NonDedicatedFreezeWildDinoPhysicsIfLevelUnloaded"); }
	TArray<FName>& NonDedicatedFreezeWildDinoPhysicsIfLevelsUnloadedField() { return *GetNativePointerField<TArray<FName>*>(this, "ANPCZoneManager.NonDedicatedFreezeWildDinoPhysicsIfLevelsUnloaded"); }
	float& MinimumManualSpawnIntervalField() { return *GetNativePointerField<float*>(this, "ANPCZoneManager.MinimumManualSpawnInterval"); }
	long double& LastManuallySpawnedTimeField() { return *GetNativePointerField<long double*>(this, "ANPCZoneManager.LastManuallySpawnedTime"); }
	bool& bIgnoreNPCRandomClassReplacementsField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bIgnoreNPCRandomClassReplacements"); }
	bool& bAllowSpawnPointOverridesNonDedicatedLevelUnloadedFreezingField() { return *GetNativePointerField<bool*>(this, "ANPCZoneManager.bAllowSpawnPointOverridesNonDedicatedLevelUnloadedFreezing"); }
	int& TheNPCDynamicIncreaseMaximumIterationsField() { return *GetNativePointerField<int*>(this, "ANPCZoneManager.TheNPCDynamicIncreaseMaximumIterations"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "ANPCZoneManager.BeginPlay"); }
	void CheckDecreaseNPC() { NativeCall<void>(this, "ANPCZoneManager.CheckDecreaseNPC"); }
	void CheckIncreaseNPC() { NativeCall<void>(this, "ANPCZoneManager.CheckIncreaseNPC"); }
	void Destroyed() { NativeCall<void>(this, "ANPCZoneManager.Destroyed"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "ANPCZoneManager.EndPlay", EndPlayReason); }
	int FindLinkedSpawnVolumeEntryContainingPoint(const FVector AtPoint) { return NativeCall<int, const FVector>(this, "ANPCZoneManager.FindLinkedSpawnVolumeEntryContainingPoint", AtPoint); }
	APrimalDinoCharacter * GetBestNPCToAutoKill() { return NativeCall<APrimalDinoCharacter *>(this, "ANPCZoneManager.GetBestNPCToAutoKill"); }
	int GetNumberOfClassNPCTouching(TSubclassOf<APrimalDinoCharacter> ADinoClass) { return NativeCall<int, TSubclassOf<APrimalDinoCharacter>>(this, "ANPCZoneManager.GetNumberOfClassNPCTouching", ADinoClass); }
	int GetNumberOfNPCTouching() { return NativeCall<int>(this, "ANPCZoneManager.GetNumberOfNPCTouching"); }
	bool GetValidSpawnPoint(int volumeEntryIndex, FVector extentCheck, FVector * ValidSpawnPoint, const FVector * OverrideStartPoint, float OverrideStartPointExpansionRadius, float WaterOnlySpawnMinimumWaterHeight, float MaximumWaterHeight, float SpawnMinDistanceFromStructuresMultiplier, float SpawnMinDistanceFromPlayersMultiplier, float SpawnMinDistanceFromTamedDinosMultiplier, float * OverrideYawOut) { return NativeCall<bool, int, FVector, FVector *, const FVector *, float, float, float, float, float, float, float *>(this, "ANPCZoneManager.GetValidSpawnPoint", volumeEntryIndex, extentCheck, ValidSpawnPoint, OverrideStartPoint, OverrideStartPointExpansionRadius, WaterOnlySpawnMinimumWaterHeight, MaximumWaterHeight, SpawnMinDistanceFromStructuresMultiplier, SpawnMinDistanceFromPlayersMultiplier, SpawnMinDistanceFromTamedDinosMultiplier, OverrideYawOut); }
	bool IsAtMaxNPC(int BufferAmount) { return NativeCall<bool, int>(this, "ANPCZoneManager.IsAtMaxNPC", BufferAmount); }
	bool IsValidNPCEntry(const FNPCSpawnEntry * NPCEntry) { return NativeCall<bool, const FNPCSpawnEntry *>(this, "ANPCZoneManager.IsValidNPCEntry", NPCEntry); }
	void Report(TMap<UClass *,int,FDefaultSetAllocator,TDefaultMapKeyFuncs<UClass *,int,0> > * DinoGroups) { NativeCall<void, TMap<UClass *,int,FDefaultSetAllocator,TDefaultMapKeyFuncs<UClass *,int,0> > *>(this, "ANPCZoneManager.Report", DinoGroups); }
	APrimalDinoCharacter * SpawnFromEntries(int SpawnVolumeEntry, const TArray<FNPCSpawnEntry> * spawnEntries, const FVector * AtSpawnPoint, TArray<APrimalDinoCharacter *> * AllSpawnedNPCs, float OverrideYaw) { return NativeCall<APrimalDinoCharacter *, int, const TArray<FNPCSpawnEntry> *, const FVector *, TArray<APrimalDinoCharacter *> *, float>(this, "ANPCZoneManager.SpawnFromEntries", SpawnVolumeEntry, spawnEntries, AtSpawnPoint, AllSpawnedNPCs, OverrideYaw); }
	APrimalDinoCharacter * SpawnNPC(TSubclassOf<APrimalDinoCharacter> PawnTemplate, FVector SpawnLoc, bool bOverrideNPCLevel, int NPCLevelOffset, float NPCLevelMultiplier, bool bAddLevelOffsetBeforeMultiplier, float WaterOnlySpawnMinimumWaterHeight, float SpawnVolumeStartExtentZ, float OverrideYaw, float MaximumWaterHeight, TSubclassOf<UPrimalColorSet> ColorSets) { return NativeCall<APrimalDinoCharacter *, TSubclassOf<APrimalDinoCharacter>, FVector, bool, int, float, bool, float, float, float, float, TSubclassOf<UPrimalColorSet>>(this, "ANPCZoneManager.SpawnNPC", PawnTemplate, SpawnLoc, bOverrideNPCLevel, NPCLevelOffset, NPCLevelMultiplier, bAddLevelOffsetBeforeMultiplier, WaterOnlySpawnMinimumWaterHeight, SpawnVolumeStartExtentZ, OverrideYaw, MaximumWaterHeight, ColorSets); }
	bool SpawnNPCs() { return NativeCall<bool>(this, "ANPCZoneManager.SpawnNPCs"); }
	static TArray<APrimalDinoCharacter *> * StaticSpawnNPCs(TArray<APrimalDinoCharacter *> * result, UObject * WorldContext, ANPCZoneManager * AtZoneManager, TSubclassOf<UNPCSpawnEntriesContainer> TheNPCSpawnEntries, FVector AtSpawnPoint, FRotator AtRotation, int UseSpawnVolumeIndex) { return NativeCall<TArray<APrimalDinoCharacter *> *, TArray<APrimalDinoCharacter *> *, UObject *, ANPCZoneManager *, TSubclassOf<UNPCSpawnEntriesContainer>, FVector, FRotator, int>(nullptr, "ANPCZoneManager.StaticSpawnNPCs", result, WorldContext, AtZoneManager, TheNPCSpawnEntries, AtSpawnPoint, AtRotation, UseSpawnVolumeIndex); }
	bool UpdateZone() { return NativeCall<bool>(this, "ANPCZoneManager.UpdateZone"); }
};

