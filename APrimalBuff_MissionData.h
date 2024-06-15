#pragma once

#include "BaseDeclarations.h"
#include "APrimalBuff.h"
#include "APrimalEmitterSpawnable.h"
#include "AEmitter.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FMissionEligibilityData.h"
#include "FMissionAlertEntry.h"
#include "FLifetimeProperty.h"
#include "FSerializedMissionData.h"
#include "FMissionWorldIndicator.h"
#include "AMissionType_ModularMissionBase.h"
#include "FMissionPhaseRequirement.h"

struct APrimalBuff_MissionData : APrimalBuff
{
	char __padding[0x138L];
	int& ActiveMissionIndexField() { return *GetNativePointerField<int*>(this, "APrimalBuff_MissionData.ActiveMissionIndex"); }
	TArray<FClientMissionData>& CurrentMissionsField() { return *GetNativePointerField<TArray<FClientMissionData>*>(this, "APrimalBuff_MissionData.CurrentMissions"); }
	UParticleSystem * MissionIndicatorParticlesField() { return GetNativePointerField<UParticleSystem *>(this, "APrimalBuff_MissionData.MissionIndicatorParticles"); }
	FString& NonHostPrepAreaNotificationField() { return *GetNativePointerField<FString*>(this, "APrimalBuff_MissionData.NonHostPrepAreaNotification"); }
	TArray<FClientMissionSubscriptionData>& ReplicatedMissionDataSubscriptionsField() { return *GetNativePointerField<TArray<FClientMissionSubscriptionData>*>(this, "APrimalBuff_MissionData.ReplicatedMissionDataSubscriptions"); }
	long double& ServerLastEligibilityCheckNetworkTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff_MissionData.ServerLastEligibilityCheckNetworkTime"); }
	long double& ClientLastEligibilityCheckNetworkTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff_MissionData.ClientLastEligibilityCheckNetworkTime"); }
	bool& bShouldMulticastCurrentMissionsField() { return *GetNativePointerField<bool*>(this, "APrimalBuff_MissionData.bShouldMulticastCurrentMissions"); }

	// Functions

	void AddMissionItem(AMissionType * ForMission, const FItemNetInfo * NewItem) { NativeCall<void, AMissionType *, const FItemNetInfo *>(this, "APrimalBuff_MissionData.AddMissionItem", ForMission, NewItem); }
	void AddPlayerToMission(AMissionType * Mission, bool bSetAsActiveMission) { NativeCall<void, AMissionType *, bool>(this, "APrimalBuff_MissionData.AddPlayerToMission", Mission, bSetAsActiveMission); }
	void AutoHideIndicatorParticles() { NativeCall<void>(this, "APrimalBuff_MissionData.AutoHideIndicatorParticles"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalBuff_MissionData.BeginPlay"); }
	void ClientLoadMissionLevels_Implementation(FName MissionTag) { NativeCall<void, FName>(this, "APrimalBuff_MissionData.ClientLoadMissionLevels_Implementation", MissionTag); }
	void ClientMissionEligibilityResponse_Implementation(const TArray<FMissionEligibilityData> * EligibilityData) { NativeCall<void, const TArray<FMissionEligibilityData> *>(this, "APrimalBuff_MissionData.ClientMissionEligibilityResponse_Implementation", EligibilityData); }
	void ClientMissionEvent_Implementation(AMissionType * Mission, bool bMissionStarted, bool bMissionCompletedSuccessfully) { NativeCall<void, AMissionType *, bool, bool>(this, "APrimalBuff_MissionData.ClientMissionEvent_Implementation", Mission, bMissionStarted, bMissionCompletedSuccessfully); }
	void ClientSendMissionAlert_Implementation(EMissionAlertType::Type AlertType, const FString * AlertTitle, const TArray<FMissionAlertEntry> * AlertEntries, float DisplayTime, USoundBase * Sound, bool FlyoutFromTop) { NativeCall<void, EMissionAlertType::Type, const FString *, const TArray<FMissionAlertEntry> *, float, USoundBase *, bool>(this, "APrimalBuff_MissionData.ClientSendMissionAlert_Implementation", AlertType, AlertTitle, AlertEntries, DisplayTime, Sound, FlyoutFromTop); }
	void ClientSendMissionNotification_Implementation(AMissionType * FromMission, FName NotificationTag, FLinearColor MessageColor, UTexture2D * MessageIcon, float DisplayTime, float DisplayScale, bool bIsSingleton, USoundBase * MessageSound) { NativeCall<void, AMissionType *, FName, FLinearColor, UTexture2D *, float, float, bool, USoundBase *>(this, "APrimalBuff_MissionData.ClientSendMissionNotification_Implementation", FromMission, NotificationTag, MessageColor, MessageIcon, DisplayTime, DisplayScale, bIsSingleton, MessageSound); }
	void ClientSpawnEmitter_Implementation(TSubclassOf<APrimalEmitterSpawnable> EmitterType, FTransform EmitterTransform, float EmitterLifespan) { NativeCall<void, TSubclassOf<APrimalEmitterSpawnable>, FTransform, float>(this, "APrimalBuff_MissionData.ClientSpawnEmitter_Implementation", EmitterType, EmitterTransform, EmitterLifespan); }
	void ClientUnloadMissionLevels_Implementation(FName MissionTag) { NativeCall<void, FName>(this, "APrimalBuff_MissionData.ClientUnloadMissionLevels_Implementation", MissionTag); }
	int FindCurrentMissionIdx(AMissionType * mission, bool bCreateIfMissing) { return NativeCall<int, AMissionType *, bool>(this, "APrimalBuff_MissionData.FindCurrentMissionIdx", mission, bCreateIfMissing); }
	void GetAllCurrentMissions(TArray<AMissionType *> * OutMissions) { NativeCall<void, TArray<AMissionType *> *>(this, "APrimalBuff_MissionData.GetAllCurrentMissions", OutMissions); }
	FName * GetBiomeMissionTag(FName * result, const FVector * Location) { return NativeCall<FName *, FName *, const FVector *>(this, "APrimalBuff_MissionData.GetBiomeMissionTag", result, Location); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalBuff_MissionData.GetLifetimeReplicatedProps", OutLifetimeProps); }
	bool GetMissionData_Bool(FName MissionTag, FName Key, bool * OutValue) { return NativeCall<bool, FName, FName, bool *>(this, "APrimalBuff_MissionData.GetMissionData_Bool", MissionTag, Key, OutValue); }
	bool GetMissionData_Double(FName MissionTag, FName Key, long double * OutValue) { return NativeCall<bool, FName, FName, long double *>(this, "APrimalBuff_MissionData.GetMissionData_Double", MissionTag, Key, OutValue); }
	bool GetMissionData_Float(FName MissionTag, FName Key, float * OutValue) { return NativeCall<bool, FName, FName, float *>(this, "APrimalBuff_MissionData.GetMissionData_Float", MissionTag, Key, OutValue); }
	bool GetMissionData_Int(FName MissionTag, FName Key, int * OutValue) { return NativeCall<bool, FName, FName, int *>(this, "APrimalBuff_MissionData.GetMissionData_Int", MissionTag, Key, OutValue); }
	bool GetMissionData_Rotator(FName MissionTag, FName Key, FRotator * OutValue) { return NativeCall<bool, FName, FName, FRotator *>(this, "APrimalBuff_MissionData.GetMissionData_Rotator", MissionTag, Key, OutValue); }
	bool GetMissionData_String(FName MissionTag, FName Key, FString * OutValue) { return NativeCall<bool, FName, FName, FString *>(this, "APrimalBuff_MissionData.GetMissionData_String", MissionTag, Key, OutValue); }
	bool GetMissionData_Vector(FName MissionTag, FName Key, FVector * OutValue) { return NativeCall<bool, FName, FName, FVector *>(this, "APrimalBuff_MissionData.GetMissionData_Vector", MissionTag, Key, OutValue); }
	void GetMissionDebugData(TArray<FSerializedMissionData> * OutMissionData) { NativeCall<void, TArray<FSerializedMissionData> *>(this, "APrimalBuff_MissionData.GetMissionDebugData", OutMissionData); }
	void GetWorldIndicatorsForMission(AMissionType * Mission, TArray<FMissionWorldIndicator> * OutWorldIndicators, bool bCompanionOnly, bool bSortByPriority) { NativeCall<void, AMissionType *, TArray<FMissionWorldIndicator> *, bool, bool>(this, "APrimalBuff_MissionData.GetWorldIndicatorsForMission", Mission, OutWorldIndicators, bCompanionOnly, bSortByPriority); }
	bool IsMissionDataReplicated(FName MissionTag, FName Key) { return NativeCall<bool, FName, FName>(this, "APrimalBuff_MissionData.IsMissionDataReplicated", MissionTag, Key); }
	bool IsMissionTypeActive(TSubclassOf<AMissionType> MissionType, bool bExactClassMatch) { return NativeCall<bool, TSubclassOf<AMissionType>, bool>(this, "APrimalBuff_MissionData.IsMissionTypeActive", MissionType, bExactClassMatch); }
	bool IsMissionTypeActiveWithMissionTag(FName MissionTag) { return NativeCall<bool, FName>(this, "APrimalBuff_MissionData.IsMissionTypeActiveWithMissionTag", MissionTag); }
	bool IsPlayerEligibleForMission_CheckFromClient(TSubclassOf<AMissionType> MissionType, bool * bOutIsRecentData, FClientMissionEligibility * OutEligibilityData, float MaxTimeConsideredRecent, const AMissionDispatcher * dispatcherFilter) { return NativeCall<bool, TSubclassOf<AMissionType>, bool *, FClientMissionEligibility *, float, const AMissionDispatcher *>(this, "APrimalBuff_MissionData.IsPlayerEligibleForMission_CheckFromClient", MissionType, bOutIsRecentData, OutEligibilityData, MaxTimeConsideredRecent, dispatcherFilter); }
	FString * KeyToString(FString * result, FName Key) { return NativeCall<FString *, FString *, FName>(this, "APrimalBuff_MissionData.KeyToString", result, Key); }
	void LoadLevelsForMissionTag(FName MissionTag) { NativeCall<void, FName>(this, "APrimalBuff_MissionData.LoadLevelsForMissionTag", MissionTag); }
	void MultiClearParticleIndicator_Implementation(float RemoveAfterDuration) { NativeCall<void, float>(this, "APrimalBuff_MissionData.MultiClearParticleIndicator_Implementation", RemoveAfterDuration); }
	void MultiUpdateMissionData_Bool_Implementation(FName MissionTag, FName Key, bool Value) { NativeCall<void, FName, FName, bool>(this, "APrimalBuff_MissionData.MultiUpdateMissionData_Bool_Implementation", MissionTag, Key, Value); }
	void MultiUpdateMissionData_Int_Implementation(FName MissionTag, FName Key, int Value) { NativeCall<void, FName, FName, int>(this, "APrimalBuff_MissionData.MultiUpdateMissionData_Int_Implementation", MissionTag, Key, Value); }
	void OnActiveMissionPhaseEnded(AMissionType * Mission, FName OldPhase, FName NewPhase) { NativeCall<void, AMissionType *, FName, FName>(this, "APrimalBuff_MissionData.OnActiveMissionPhaseEnded", Mission, OldPhase, NewPhase); }
	void OnActiveMissionPhaseStarted(AMissionType * Mission, FName OldPhase, FName NewPhase) { NativeCall<void, AMissionType *, FName, FName>(this, "APrimalBuff_MissionData.OnActiveMissionPhaseStarted", Mission, OldPhase, NewPhase); }
	void OnRep_ActiveMissionIndex() { NativeCall<void>(this, "APrimalBuff_MissionData.OnRep_ActiveMissionIndex"); }
	void OnRep_CurrentMissions() { NativeCall<void>(this, "APrimalBuff_MissionData.OnRep_CurrentMissions"); }
	void OnRep_MissionIndicatorParticles() { NativeCall<void>(this, "APrimalBuff_MissionData.OnRep_MissionIndicatorParticles"); }
	void PostBeginPlay() { NativeCall<void>(this, "APrimalBuff_MissionData.PostBeginPlay"); }
	void RemoveMissionItem(AMissionType * ForMission, const FItemNetID * ItemID) { NativeCall<void, AMissionType *, const FItemNetID *>(this, "APrimalBuff_MissionData.RemoveMissionItem", ForMission, ItemID); }
	bool RemovePlayerFromMission(AMissionType * Mission, bool bMissionCompletedSuccessfully) { return NativeCall<bool, AMissionType *, bool>(this, "APrimalBuff_MissionData.RemovePlayerFromMission", Mission, bMissionCompletedSuccessfully); }
	void ReplicatedMissionDataUpdated() { NativeCall<void>(this, "APrimalBuff_MissionData.ReplicatedMissionDataUpdated"); }
	void ServerMulticastRequiredProps_Implementation() { NativeCall<void>(this, "APrimalBuff_MissionData.ServerMulticastRequiredProps_Implementation"); }
	void ServerRequestCancelMission_Implementation() { NativeCall<void>(this, "APrimalBuff_MissionData.ServerRequestCancelMission_Implementation"); }
	void ServerRequestEquipMissionItem_Implementation(AMissionType * Mission, FItemNetID ItemID) { NativeCall<void, AMissionType *, FItemNetID>(this, "APrimalBuff_MissionData.ServerRequestEquipMissionItem_Implementation", Mission, ItemID); }
	void ServerRequestMissionEligibilityCheck_Implementation(const AMissionDispatcher * dispatcherFilter) { NativeCall<void, const AMissionDispatcher *>(this, "APrimalBuff_MissionData.ServerRequestMissionEligibilityCheck_Implementation", dispatcherFilter); }
	void ServerRequestStartMissionWithMissionTag_Implementation(FName MissionTag, AMissionDispatcher * FromDispatcher) { NativeCall<void, FName, AMissionDispatcher *>(this, "APrimalBuff_MissionData.ServerRequestStartMissionWithMissionTag_Implementation", MissionTag, FromDispatcher); }
	void ServerRequestStartMission_Implementation(TSubclassOf<AMissionType> MissionType, AMissionDispatcher * FromDispatcher) { NativeCall<void, TSubclassOf<AMissionType>, AMissionDispatcher *>(this, "APrimalBuff_MissionData.ServerRequestStartMission_Implementation", MissionType, FromDispatcher); }
	void ServerRequestToggleWeapon_Implementation(AMissionType * Mission) { NativeCall<void, AMissionType *>(this, "APrimalBuff_MissionData.ServerRequestToggleWeapon_Implementation", Mission); }
	void SetMissionData_Bool(FName MissionTag, FName Key, bool Value) { NativeCall<void, FName, FName, bool>(this, "APrimalBuff_MissionData.SetMissionData_Bool", MissionTag, Key, Value); }
	void SetMissionData_Double(FName MissionTag, FName Key, long double Value) { NativeCall<void, FName, FName, long double>(this, "APrimalBuff_MissionData.SetMissionData_Double", MissionTag, Key, Value); }
	void SetMissionData_Float(FName MissionTag, FName Key, float Value) { NativeCall<void, FName, FName, float>(this, "APrimalBuff_MissionData.SetMissionData_Float", MissionTag, Key, Value); }
	void SetMissionData_Int(FName MissionTag, FName Key, int Value) { NativeCall<void, FName, FName, int>(this, "APrimalBuff_MissionData.SetMissionData_Int", MissionTag, Key, Value); }
	void SetMissionData_Rotator(FName MissionTag, FName Key, const FRotator * Value) { NativeCall<void, FName, FName, const FRotator *>(this, "APrimalBuff_MissionData.SetMissionData_Rotator", MissionTag, Key, Value); }
	void SetMissionData_String(FName MissionTag, FName Key, const FString * Value) { NativeCall<void, FName, FName, const FString *>(this, "APrimalBuff_MissionData.SetMissionData_String", MissionTag, Key, Value); }
	void SetMissionData_Vector(FName MissionTag, FName Key, const FVector * Value) { NativeCall<void, FName, FName, const FVector *>(this, "APrimalBuff_MissionData.SetMissionData_Vector", MissionTag, Key, Value); }
	void SetupClientMissionCallbacks() { NativeCall<void>(this, "APrimalBuff_MissionData.SetupClientMissionCallbacks"); }
	void SetupForInstigator() { NativeCall<void>(this, "APrimalBuff_MissionData.SetupForInstigator"); }
	bool TemplateAllowActorSpawn(UWorld * World, const FVector * AtLocation, const FRotator * AtRotation, const FActorSpawnParameters * SpawnParameters) { return NativeCall<bool, UWorld *, const FVector *, const FRotator *, const FActorSpawnParameters *>(this, "APrimalBuff_MissionData.TemplateAllowActorSpawn", World, AtLocation, AtRotation, SpawnParameters); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_MissionData.Tick", DeltaTime); }
	void UnloadLevelsForMissionTag(FName MissionTag) { NativeCall<void, FName>(this, "APrimalBuff_MissionData.UnloadLevelsForMissionTag", MissionTag); }
	void UpdateBuffPersistentData_Implementation() { NativeCall<void>(this, "APrimalBuff_MissionData.UpdateBuffPersistentData_Implementation"); }
	void UpdateMissionRequirements(AMissionType * ForMission, const TArray<FMissionPhaseRequirement> * UpdatedRequirements, bool bPerPlayerIndicators) { NativeCall<void, AMissionType *, const TArray<FMissionPhaseRequirement> *, bool>(this, "APrimalBuff_MissionData.UpdateMissionRequirements", ForMission, UpdatedRequirements, bPerPlayerIndicators); }
	void UpdateMissionWorldIndicators(AMissionType * ForMission, const TArray<FMissionWorldIndicator> * UpdatedWorldIndicators, bool bPerPlayerIndicators) { NativeCall<void, AMissionType *, const TArray<FMissionWorldIndicator> *, bool>(this, "APrimalBuff_MissionData.UpdateMissionWorldIndicators", ForMission, UpdatedWorldIndicators, bPerPlayerIndicators); }
	void ClientLoadMissionLevels(FName MissionTag) { NativeCall<void, FName>(this, "APrimalBuff_MissionData.ClientLoadMissionLevels", MissionTag); }
	void ClientMissionEligibilityResponse(const TArray<FMissionEligibilityData> * EligibilityData) { NativeCall<void, const TArray<FMissionEligibilityData> *>(this, "APrimalBuff_MissionData.ClientMissionEligibilityResponse", EligibilityData); }
	void ClientMissionEvent(AMissionType * Mission, bool bMissionStarted, bool bMissionCompletedSuccessfully) { NativeCall<void, AMissionType *, bool, bool>(this, "APrimalBuff_MissionData.ClientMissionEvent", Mission, bMissionStarted, bMissionCompletedSuccessfully); }
	void ClientSendMissionAlert(EMissionAlertType::Type AlertType, const FString * AlertTitle, const TArray<FMissionAlertEntry> * AlertEntries, float DisplayTime, USoundBase * Sound, bool FlyoutFromTop) { NativeCall<void, EMissionAlertType::Type, const FString *, const TArray<FMissionAlertEntry> *, float, USoundBase *, bool>(this, "APrimalBuff_MissionData.ClientSendMissionAlert", AlertType, AlertTitle, AlertEntries, DisplayTime, Sound, FlyoutFromTop); }
	void ClientSendMissionNotification(AMissionType * FromMission, FName NotificationTag, FLinearColor MessageColor, UTexture2D * MessageIcon, float DisplayTime, float DisplayScale, bool bIsSingleton, USoundBase * MessageSound) { NativeCall<void, AMissionType *, FName, FLinearColor, UTexture2D *, float, float, bool, USoundBase *>(this, "APrimalBuff_MissionData.ClientSendMissionNotification", FromMission, NotificationTag, MessageColor, MessageIcon, DisplayTime, DisplayScale, bIsSingleton, MessageSound); }
	void ClientSpawnEmitter(TSubclassOf<APrimalEmitterSpawnable> EmitterType, FTransform EmitterTransform, float EmitterLifespan) { NativeCall<void, TSubclassOf<APrimalEmitterSpawnable>, FTransform, float>(this, "APrimalBuff_MissionData.ClientSpawnEmitter", EmitterType, EmitterTransform, EmitterLifespan); }
	void ClientUnloadMissionLevels(FName MissionTag) { NativeCall<void, FName>(this, "APrimalBuff_MissionData.ClientUnloadMissionLevels", MissionTag); }
	void MultiClearParticleIndicator(float RemoveAfterDuration) { NativeCall<void, float>(this, "APrimalBuff_MissionData.MultiClearParticleIndicator", RemoveAfterDuration); }
	void MultiUpdateMissionData_Bool(FName MissionTag, FName Key, bool Value) { NativeCall<void, FName, FName, bool>(this, "APrimalBuff_MissionData.MultiUpdateMissionData_Bool", MissionTag, Key, Value); }
	void MultiUpdateMissionData_Int(FName MissionTag, FName Key, int Value) { NativeCall<void, FName, FName, int>(this, "APrimalBuff_MissionData.MultiUpdateMissionData_Int", MissionTag, Key, Value); }
	void ServerMulticastRequiredProps() { NativeCall<void>(this, "APrimalBuff_MissionData.ServerMulticastRequiredProps"); }
	void ServerRequestCancelMission() { NativeCall<void>(this, "APrimalBuff_MissionData.ServerRequestCancelMission"); }
	void ServerRequestMissionEligibilityCheck(const AMissionDispatcher * dispatcherFilter) { NativeCall<void, const AMissionDispatcher *>(this, "APrimalBuff_MissionData.ServerRequestMissionEligibilityCheck", dispatcherFilter); }
	void ServerRequestStartMission(TSubclassOf<AMissionType> MissionType, AMissionDispatcher * FromDispatcher) { NativeCall<void, TSubclassOf<AMissionType>, AMissionDispatcher *>(this, "APrimalBuff_MissionData.ServerRequestStartMission", MissionType, FromDispatcher); }
	void ServerRequestStartMissionWithMissionTag(FName MissionTag, AMissionDispatcher * FromDispatcher) { NativeCall<void, FName, AMissionDispatcher *>(this, "APrimalBuff_MissionData.ServerRequestStartMissionWithMissionTag", MissionTag, FromDispatcher); }
	void ServerRequestToggleWeapon(AMissionType * Mission) { NativeCall<void, AMissionType *>(this, "APrimalBuff_MissionData.ServerRequestToggleWeapon", Mission); }
};

