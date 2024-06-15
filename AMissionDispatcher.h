#pragma once

#include "BaseDeclarations.h"
#include "APrimalStructureItemContainer.h"
#include "APrimalStructure.h"
#include "APrimalTargetableActor.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "AMissionType_ModularMissionBase.h"
#include "FMultiUseEntry.h"

struct AMissionDispatcher : APrimalStructureItemContainer
{
	char __padding[0xc0L];
	int& AutoStartMissionTypesIndexField() { return *GetNativePointerField<int*>(this, "AMissionDispatcher.AutoStartMissionTypesIndex"); }
	TEnumAsByte<enum EMissionDispatcherTriggerMode::Type>& MissionDispatcherTriggerModeField() { return *GetNativePointerField<TEnumAsByte<enum EMissionDispatcherTriggerMode::Type>*>(this, "AMissionDispatcher.MissionDispatcherTriggerMode"); }
	TArray<FName>& AdditionalMissionTriggerKeysField() { return *GetNativePointerField<TArray<FName>*>(this, "AMissionDispatcher.AdditionalMissionTriggerKeys"); }
	float& MaxDistanceAllowToStartMissionField() { return *GetNativePointerField<float*>(this, "AMissionDispatcher.MaxDistanceAllowToStartMission"); }

	// Functions

	void ActivateMissionActors(bool bIsActive) { NativeCall<void, bool>(this, "AMissionDispatcher.ActivateMissionActors", bIsActive); }
	void AddFallbackSeed(TSubclassOf<AMissionType> ForMission, int Seed, int MaxNumberOfFallbackSeeds) { NativeCall<void, TSubclassOf<AMissionType>, int, int>(this, "AMissionDispatcher.AddFallbackSeed", ForMission, Seed, MaxNumberOfFallbackSeeds); }
	FVector * BPGetMissionStartLocation_Implementation(FVector * result, TSubclassOf<AMissionType> MissionTypeClass, AShooterCharacter * StartingCharacter) { return NativeCall<FVector *, FVector *, TSubclassOf<AMissionType>, AShooterCharacter *>(this, "AMissionDispatcher.BPGetMissionStartLocation_Implementation", result, MissionTypeClass, StartingCharacter); }
	void BeginPlay() { NativeCall<void>(this, "AMissionDispatcher.BeginPlay"); }
	void ClearFallbackSeeds(TSubclassOf<AMissionType> OptionalForMission) { NativeCall<void, TSubclassOf<AMissionType>>(this, "AMissionDispatcher.ClearFallbackSeeds", OptionalForMission); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "AMissionDispatcher.ClientMultiUse", ForPC, UseIndex); }
	void Destroyed() { NativeCall<void>(this, "AMissionDispatcher.Destroyed"); }
	void DrawMultiUseTooltip(AShooterHUD * HUD, const FMultiUseEntry * selectedMultiUseEntry) { NativeCall<void, AShooterHUD *, const FMultiUseEntry *>(this, "AMissionDispatcher.DrawMultiUseTooltip", HUD, selectedMultiUseEntry); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "AMissionDispatcher.EndPlay", EndPlayReason); }
	void GenerateFallbackSeeds() { NativeCall<void>(this, "AMissionDispatcher.GenerateFallbackSeeds"); }
	int GetFallbackSeed(TSubclassOf<AMissionType> ForMission, bool bRemoveSeed) { return NativeCall<int, TSubclassOf<AMissionType>, bool>(this, "AMissionDispatcher.GetFallbackSeed", ForMission, bRemoveSeed); }
	FString * GetMissionDurationString(FString * result) { return NativeCall<FString *, FString *>(this, "AMissionDispatcher.GetMissionDurationString", result); }
	bool GetMultiUseCenterText(APlayerController * ForPC, int UseIndex, FString * OutCenterText, FLinearColor * OutCenterTextColor) { return NativeCall<bool, APlayerController *, int, FString *, FLinearColor *>(this, "AMissionDispatcher.GetMultiUseCenterText", ForPC, UseIndex, OutCenterText, OutCenterTextColor); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "AMissionDispatcher.GetMultiUseEntries", ForPC, MultiUseEntries); }
	bool IsValidDispatcherForMissionType_Implementation(TSubclassOf<AMissionType> MissionTypeClass, AShooterCharacter * StartingCharacter) { return NativeCall<bool, TSubclassOf<AMissionType>, AShooterCharacter *>(this, "AMissionDispatcher.IsValidDispatcherForMissionType_Implementation", MissionTypeClass, StartingCharacter); }
	void MultiActivateMissionActors_Implementation() { NativeCall<void>(this, "AMissionDispatcher.MultiActivateMissionActors_Implementation"); }
	void MultiDeactivateMissionActors_Implementation() { NativeCall<void>(this, "AMissionDispatcher.MultiDeactivateMissionActors_Implementation"); }
	void MultiSetParticleSystemActive_Implementation(bool bIsActive) { NativeCall<void, bool>(this, "AMissionDispatcher.MultiSetParticleSystemActive_Implementation", bIsActive); }
	void OnRunningMissionDeactivated(AMissionType * Mission) { NativeCall<void, AMissionType *>(this, "AMissionDispatcher.OnRunningMissionDeactivated", Mission); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "AMissionDispatcher.Serialize", Ar); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AMissionDispatcher.Tick", DeltaSeconds); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "AMissionDispatcher.TryMultiUse", ForPC, UseIndex); }
	void BPActivateMissionActors() { NativeCall<void>(this, "AMissionDispatcher.BPActivateMissionActors"); }
	bool BPCanSpawnMission(TSubclassOf<AMissionType> MissionTypeClass, AShooterCharacter * StartingCharacter) { return NativeCall<bool, TSubclassOf<AMissionType>, AShooterCharacter *>(this, "AMissionDispatcher.BPCanSpawnMission", MissionTypeClass, StartingCharacter); }
	void BPDeactivateMissionActors() { NativeCall<void>(this, "AMissionDispatcher.BPDeactivateMissionActors"); }
	FVector * BPGetMissionStartLocation(FVector * result, TSubclassOf<AMissionType> MissionTypeClass, AShooterCharacter * StartingCharacter) { return NativeCall<FVector *, FVector *, TSubclassOf<AMissionType>, AShooterCharacter *>(this, "AMissionDispatcher.BPGetMissionStartLocation", result, MissionTypeClass, StartingCharacter); }
	void BPOnMissionFailToStart(TSubclassOf<AMissionType> MissionTypeClass, AShooterCharacter * StartingCharacter) { NativeCall<void, TSubclassOf<AMissionType>, AShooterCharacter *>(this, "AMissionDispatcher.BPOnMissionFailToStart", MissionTypeClass, StartingCharacter); }
	void BPOnMissionStarted(AMissionType * NewMission, AShooterCharacter * StartingCharacter) { NativeCall<void, AMissionType *, AShooterCharacter *>(this, "AMissionDispatcher.BPOnMissionStarted", NewMission, StartingCharacter); }
	void BPOnRunningMissionDeactivated(AMissionType * Mission) { NativeCall<void, AMissionType *>(this, "AMissionDispatcher.BPOnRunningMissionDeactivated", Mission); }
	bool IsValidDispatcherForMissionType(TSubclassOf<AMissionType> MissionTypeClass, AShooterCharacter * StartingCharacter) { return NativeCall<bool, TSubclassOf<AMissionType>, AShooterCharacter *>(this, "AMissionDispatcher.IsValidDispatcherForMissionType", MissionTypeClass, StartingCharacter); }
	void MultiActivateMissionActors() { NativeCall<void>(this, "AMissionDispatcher.MultiActivateMissionActors"); }
	void MultiDeactivateMissionActors() { NativeCall<void>(this, "AMissionDispatcher.MultiDeactivateMissionActors"); }
	void MultiSetParticleSystemActive(bool bIsActive) { NativeCall<void, bool>(this, "AMissionDispatcher.MultiSetParticleSystemActive", bIsActive); }
};

