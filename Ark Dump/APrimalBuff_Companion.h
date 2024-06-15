#pragma once

#include "BaseDeclarations.h"
#include "APrimalBuff.h"
#include "APrimalEmitterSpawnable.h"
#include "AEmitter.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FCompanionReactionData.h"
#include "FLifetimeProperty.h"

struct APrimalBuff_Companion : APrimalBuff
{
	char __padding[0x7b8L];
	TWeakObjectPtr<AShooterCharacter>& MyPlayerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter>*>(this, "APrimalBuff_Companion.MyPlayer"); }
	TWeakObjectPtr<AShooterPlayerController>& MyPCField() { return *GetNativePointerField<TWeakObjectPtr<AShooterPlayerController>*>(this, "APrimalBuff_Companion.MyPC"); }
	float& ReachPointOrbitWithinDistField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.ReachPointOrbitWithinDist"); }
	float& ReactionDialogVolumeMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.ReactionDialogVolumeMultiplier"); }
	float& CompanionViewDotField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.CompanionViewDot"); }
	USoundAttenuation * CompanionSoundAttenuationField() { return GetNativePointerField<USoundAttenuation *>(this, "APrimalBuff_Companion.CompanionSoundAttenuation"); }
	UAudioComponent * CurrentCompanionReactionSFXField() { return GetNativePointerField<UAudioComponent *>(this, "APrimalBuff_Companion.CurrentCompanionReactionSFX"); }
	TArray<FPointOfInterestData_ForCompanion>& CurrentPointsOfInterestField() { return *GetNativePointerField<TArray<FPointOfInterestData_ForCompanion>*>(this, "APrimalBuff_Companion.CurrentPointsOfInterest"); }
	TEnumAsByte<enum ECompanionState::Type>& CompanionState_CurrentField() { return *GetNativePointerField<TEnumAsByte<enum ECompanionState::Type>*>(this, "APrimalBuff_Companion.CompanionState_Current"); }
	TEnumAsByte<enum ECompanionState::Type>& CompanionState_PreviousField() { return *GetNativePointerField<TEnumAsByte<enum ECompanionState::Type>*>(this, "APrimalBuff_Companion.CompanionState_Previous"); }
	TArray<FCompanionReactionData>& ReactionStackField() { return *GetNativePointerField<TArray<FCompanionReactionData>*>(this, "APrimalBuff_Companion.ReactionStack"); }
	TArray<int>& CurrentIDStackField() { return *GetNativePointerField<TArray<int>*>(this, "APrimalBuff_Companion.CurrentIDStack"); }
	FVector& CurrentFocusedLocationField() { return *GetNativePointerField<FVector*>(this, "APrimalBuff_Companion.CurrentFocusedLocation"); }
	FPointOfInterestData_ForCompanion& CurrentFocusedPointDataField() { return *GetNativePointerField<FPointOfInterestData_ForCompanion*>(this, "APrimalBuff_Companion.CurrentFocusedPointData"); }
	FCompanionEventData& CurrentEventDataField() { return *GetNativePointerField<FCompanionEventData*>(this, "APrimalBuff_Companion.CurrentEventData"); }
	FName& LastPointTag_StartOrbitField() { return *GetNativePointerField<FName*>(this, "APrimalBuff_Companion.LastPointTag_StartOrbit"); }
	FName& LastPointTag_ReachedOrbitField() { return *GetNativePointerField<FName*>(this, "APrimalBuff_Companion.LastPointTag_ReachedOrbit"); }
	long double& LastPlayedReactionNetworkTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff_Companion.LastPlayedReactionNetworkTime"); }
	FCompanionReactionData& PreviouslyPlayedReactionField() { return *GetNativePointerField<FCompanionReactionData*>(this, "APrimalBuff_Companion.PreviouslyPlayedReaction"); }
	TArray<FString>& FullyTranslatedLanguagesField() { return *GetNativePointerField<TArray<FString>*>(this, "APrimalBuff_Companion.FullyTranslatedLanguages"); }
	TSubclassOf<UPrimalDinoToolTipWidget>& HUDOverlayToolTipWidgetExtendedField() { return *GetNativePointerField<TSubclassOf<UPrimalDinoToolTipWidget>*>(this, "APrimalBuff_Companion.HUDOverlayToolTipWidgetExtended"); }
	TArray<int>& ReactionExplorerNotesToUnlockField() { return *GetNativePointerField<TArray<int>*>(this, "APrimalBuff_Companion.ReactionExplorerNotesToUnlock"); }
	USoundCue * AsyncLoadedSoundCueField() { return GetNativePointerField<USoundCue *>(this, "APrimalBuff_Companion.AsyncLoadedSoundCue"); }
	FName& AnimTextureParamNameField() { return *GetNativePointerField<FName*>(this, "APrimalBuff_Companion.AnimTextureParamName"); }
	FName& AnimTextureStartTimeParamNameField() { return *GetNativePointerField<FName*>(this, "APrimalBuff_Companion.AnimTextureStartTimeParamName"); }
	FName& AnimTextureDurationParamNameField() { return *GetNativePointerField<FName*>(this, "APrimalBuff_Companion.AnimTextureDurationParamName"); }
	float& AnimTextureDurationOffsetField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.AnimTextureDurationOffset"); }
	int& CurrentReactionSFXIndexField() { return *GetNativePointerField<int*>(this, "APrimalBuff_Companion.CurrentReactionSFXIndex"); }
	int& PreviousReactionSFXIndexField() { return *GetNativePointerField<int*>(this, "APrimalBuff_Companion.PreviousReactionSFXIndex"); }
	FStringAssetReference& CurrentSoundWaveStringAssetReferenceField() { return *GetNativePointerField<FStringAssetReference*>(this, "APrimalBuff_Companion.CurrentSoundWaveStringAssetReference"); }
	FStringAssetReference& CurrentSoundCueStringAssetReferenceField() { return *GetNativePointerField<FStringAssetReference*>(this, "APrimalBuff_Companion.CurrentSoundCueStringAssetReference"); }
	FStringAssetReference& CurrentAnimTextureStringAssetReferenceField() { return *GetNativePointerField<FStringAssetReference*>(this, "APrimalBuff_Companion.CurrentAnimTextureStringAssetReference"); }
	FStringAssetReference& FallbackSubtitleAudioStringField() { return *GetNativePointerField<FStringAssetReference*>(this, "APrimalBuff_Companion.FallbackSubtitleAudioString"); }
	FStringAssetReference& DefaultReactionAnimtextureField() { return *GetNativePointerField<FStringAssetReference*>(this, "APrimalBuff_Companion.DefaultReactionAnimtexture"); }
	FLocalizedSoundWaveAnimTexturePairArrays& LocalizedAudioTracksField() { return *GetNativePointerField<FLocalizedSoundWaveAnimTexturePairArrays*>(this, "APrimalBuff_Companion.LocalizedAudioTracks"); }
	bool& IsUsingLocalizedAudioTrackField() { return *GetNativePointerField<bool*>(this, "APrimalBuff_Companion.IsUsingLocalizedAudioTrack"); }
	bool& DebugBypassVRTeleportRestrictionsField() { return *GetNativePointerField<bool*>(this, "APrimalBuff_Companion.DebugBypassVRTeleportRestrictions"); }
	bool& ForcedMonologueCheatField() { return *GetNativePointerField<bool*>(this, "APrimalBuff_Companion.ForcedMonologueCheat"); }
	float& AllowedHLNAFocusedSelectedRemoteTargetDistanceField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.AllowedHLNAFocusedSelectedRemoteTargetDistance"); }
	TArray<FStringAssetReference>& StreamedAssetsField() { return *GetNativePointerField<TArray<FStringAssetReference>*>(this, "APrimalBuff_Companion.StreamedAssets"); }
	float& CompanionAmbientSoundReductionMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.CompanionAmbientSoundReductionMultiplier"); }
	float& CompanionVoiceVolumeMultiplierVRBiomeField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.CompanionVoiceVolumeMultiplierVRBiome"); }

	// Functions

	void Tick_UpdateCompanionTransform_Implementation(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_UpdateCompanionTransform_Implementation", DeltaTime); }
	void AddCompanionReaction(FCompanionReactionData * WithReactionData, const bool bForcePlayNow, UMaterialInterface * DialogueIcon, const int UniqueID) { NativeCall<void, FCompanionReactionData *, const bool, UMaterialInterface *, const int>(this, "APrimalBuff_Companion.AddCompanionReaction", WithReactionData, bForcePlayNow, DialogueIcon, UniqueID); }
	void AddCompanionReaction_Internal(FCompanionReactionData * WithReactionData, const bool bForcePlayNow, UMaterialInterface * DialogueIcon, const int UniqueID) { NativeCall<void, FCompanionReactionData *, const bool, UMaterialInterface *, const int>(this, "APrimalBuff_Companion.AddCompanionReaction_Internal", WithReactionData, bForcePlayNow, DialogueIcon, UniqueID); }
	void AllowVRTeleport() { NativeCall<void>(this, "APrimalBuff_Companion.AllowVRTeleport"); }
	void AnimateInHLNASubtitleIcon() { NativeCall<void>(this, "APrimalBuff_Companion.AnimateInHLNASubtitleIcon"); }
	void AnimateOutHLNASubtitleIcon() { NativeCall<void>(this, "APrimalBuff_Companion.AnimateOutHLNASubtitleIcon"); }
	void BPServerside_IsPerMapExplorerNoteUnlocked(int ExplorerNoteIndex, bool * CouldDetermine, bool * HasPlayerUnlockedNote) { NativeCall<void, int, bool *, bool *>(this, "APrimalBuff_Companion.BPServerside_IsPerMapExplorerNoteUnlocked", ExplorerNoteIndex, CouldDetermine, HasPlayerUnlockedNote); }
	void BeginPlay() { NativeCall<void>(this, "APrimalBuff_Companion.BeginPlay"); }
	bool CanPlayCompanionReaction_Implementation(const FCompanionReactionData * CanPlayReactionData) { return NativeCall<bool, const FCompanionReactionData *>(this, "APrimalBuff_Companion.CanPlayCompanionReaction_Implementation", CanPlayReactionData); }
	bool CanRemotelyFocusOnRemoteActorForTooltip(AActor * targetedActor) { return NativeCall<bool, AActor *>(this, "APrimalBuff_Companion.CanRemotelyFocusOnRemoteActorForTooltip", targetedActor); }
	bool CanStartCompanionEvent_Implementation(AActor * EventActor, FCompanionEventData * WithEventData) { return NativeCall<bool, AActor *, FCompanionEventData *>(this, "APrimalBuff_Companion.CanStartCompanionEvent_Implementation", EventActor, WithEventData); }
	void ClientAllowVRTeleport_Implementation() { NativeCall<void>(this, "APrimalBuff_Companion.ClientAllowVRTeleport_Implementation"); }
	void ClientOutputAsyncLoadedFiles_Implementation() { NativeCall<void>(this, "APrimalBuff_Companion.ClientOutputAsyncLoadedFiles_Implementation"); }
	void ClientToggleForceMonologue_Implementation(bool Newval) { NativeCall<void, bool>(this, "APrimalBuff_Companion.ClientToggleForceMonologue_Implementation", Newval); }
	void Client_AddCompanionReaction_Implementation(FCompanionReactionData WithReactionData, bool bForcePlayNow, UMaterialInterface * DialogueIcon, const int UniqueID) { NativeCall<void, FCompanionReactionData, bool, UMaterialInterface *, const int>(this, "APrimalBuff_Companion.Client_AddCompanionReaction_Implementation", WithReactionData, bForcePlayNow, DialogueIcon, UniqueID); }
	void Deactivate() { NativeCall<void>(this, "APrimalBuff_Companion.Deactivate"); }
	void DrawFocusedActorToolTip(AActor * targetedActor) { NativeCall<void, AActor *>(this, "APrimalBuff_Companion.DrawFocusedActorToolTip", targetedActor); }
	void FinishAsyncLoading() { NativeCall<void>(this, "APrimalBuff_Companion.FinishAsyncLoading"); }
	bool ForceHibernateAtLocation(FVector AtLocation, TArray<AActor *> ActorsToHibernate) { return NativeCall<bool, FVector, TArray<AActor *>>(this, "APrimalBuff_Companion.ForceHibernateAtLocation", AtLocation, ActorsToHibernate); }
	bool ForceUnhibernateAtLocation(FVector AtLocation) { return NativeCall<bool, FVector>(this, "APrimalBuff_Companion.ForceUnhibernateAtLocation", AtLocation); }
	bool GetClosestNearbyPointOfInterest(FPointOfInterestData_ForCompanion * ClosestPointData, FVector * ClosestPointLoc) { return NativeCall<bool, FPointOfInterestData_ForCompanion *, FVector *>(this, "APrimalBuff_Companion.GetClosestNearbyPointOfInterest", ClosestPointData, ClosestPointLoc); }
	FCompanionEventData * GetCurrentCompanionEventData(FCompanionEventData * result) { return NativeCall<FCompanionEventData *, FCompanionEventData *>(this, "APrimalBuff_Companion.GetCurrentCompanionEventData", result); }
	FCompanionReactionData * GetCurrentCompanionReactionData(FCompanionReactionData * result) { return NativeCall<FCompanionReactionData *, FCompanionReactionData *>(this, "APrimalBuff_Companion.GetCurrentCompanionReactionData", result); }
	FVector * GetInterpolatedLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalBuff_Companion.GetInterpolatedLocation", result); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalBuff_Companion.GetLifetimeReplicatedProps", OutLifetimeProps); }
	AShooterHUD * GetMyPlayerHUD() { return NativeCall<AShooterHUD *>(this, "APrimalBuff_Companion.GetMyPlayerHUD"); }
	static FVector * GetPointCompanionWorldOrbitOrigin(FVector * result, const FPointOfInterestData_ForCompanion * ForPointData) { return NativeCall<FVector *, FVector *, const FPointOfInterestData_ForCompanion *>(nullptr, "APrimalBuff_Companion.GetPointCompanionWorldOrbitOrigin", result, ForPointData); }
	float GetUsablePriority_Implementation() { return NativeCall<float>(this, "APrimalBuff_Companion.GetUsablePriority_Implementation"); }
	bool HasCompanionReachedPointOrbit_Implementation(const FPointOfInterestData_ForCompanion * OfPointData) { return NativeCall<bool, const FPointOfInterestData_ForCompanion *>(this, "APrimalBuff_Companion.HasCompanionReachedPointOrbit_Implementation", OfPointData); }
	bool IsPlayerADS_Implementation() { return NativeCall<bool>(this, "APrimalBuff_Companion.IsPlayerADS_Implementation"); }
	bool IsPlayerLookingAtCompanion_Implementation() { return NativeCall<bool>(this, "APrimalBuff_Companion.IsPlayerLookingAtCompanion_Implementation"); }
	bool IsPlayingCompanionReaction() { return NativeCall<bool>(this, "APrimalBuff_Companion.IsPlayingCompanionReaction"); }
	void LoadAudioTimeout() { NativeCall<void>(this, "APrimalBuff_Companion.LoadAudioTimeout"); }
	void MaxReactionLimitTimeout() { NativeCall<void>(this, "APrimalBuff_Companion.MaxReactionLimitTimeout"); }
	void Net_SetCompanionState(const TEnumAsByte<enum ECompanionState::Type> NewState) { NativeCall<void, const TEnumAsByte<enum ECompanionState::Type>>(this, "APrimalBuff_Companion.Net_SetCompanionState", NewState); }
	void OnBeginOverlapCompanionEventTrigger_Implementation(AActor * ForTrigger) { NativeCall<void, AActor *>(this, "APrimalBuff_Companion.OnBeginOverlapCompanionEventTrigger_Implementation", ForTrigger); }
	void OnCompanionReactionPlayed_Implementation(const FCompanionReactionData * PlayedReactionData, const int UniqueID) { NativeCall<void, const FCompanionReactionData *, const int>(this, "APrimalBuff_Companion.OnCompanionReactionPlayed_Implementation", PlayedReactionData, UniqueID); }
	void OnCompanionReactionStopped_Implementation(const FCompanionReactionData * StoppedReactionData, const int UniqueID) { NativeCall<void, const FCompanionReactionData *, const int>(this, "APrimalBuff_Companion.OnCompanionReactionStopped_Implementation", StoppedReactionData, UniqueID); }
	void OnEndOverlapCompanionEventTrigger_Implementation(AActor * ForTrigger) { NativeCall<void, AActor *>(this, "APrimalBuff_Companion.OnEndOverlapCompanionEventTrigger_Implementation", ForTrigger); }
	void OnFoundPoI_Implementation(FPointOfInterestData_ForCompanion * FoundPointData, AActor * FoundPointActor) { NativeCall<void, FPointOfInterestData_ForCompanion *, AActor *>(this, "APrimalBuff_Companion.OnFoundPoI_Implementation", FoundPointData, FoundPointActor); }
	void OnMyPlayerMissionComplete_Implementation(APrimalBuff_MissionData * MissionDataBuff, AMissionType * Mission, bool bSuccess) { NativeCall<void, APrimalBuff_MissionData *, AMissionType *, bool>(this, "APrimalBuff_Companion.OnMyPlayerMissionComplete_Implementation", MissionDataBuff, Mission, bSuccess); }
	void OnMyPlayerMissionStarted_Implementation(APrimalBuff_MissionData * MissionDataBuff, AMissionType * Mission) { NativeCall<void, APrimalBuff_MissionData *, AMissionType *>(this, "APrimalBuff_Companion.OnMyPlayerMissionStarted_Implementation", MissionDataBuff, Mission); }
	void OnPlayerDeath_Implementation(APrimalCharacter * DiedCharacter) { NativeCall<void, APrimalCharacter *>(this, "APrimalBuff_Companion.OnPlayerDeath_Implementation", DiedCharacter); }
	void OnRep_CompanionState() { NativeCall<void>(this, "APrimalBuff_Companion.OnRep_CompanionState"); }
	void OnSpawnHexagons_Implementation(float OverrideCollectSFXVolume, bool VFXImmediatelyAttracts) { NativeCall<void, float, bool>(this, "APrimalBuff_Companion.OnSpawnHexagons_Implementation", OverrideCollectSFXVolume, VFXImmediatelyAttracts); }
	void OnSpawnedForPlayer_Implementation() { NativeCall<void>(this, "APrimalBuff_Companion.OnSpawnedForPlayer_Implementation"); }
	void OutputAsyncLoadedFiles() { NativeCall<void>(this, "APrimalBuff_Companion.OutputAsyncLoadedFiles"); }
	float PlayCompanionMontage(UAnimMontage * MontageToPlay, const float BlendInTime, const float BlendOutTime, const float PlayRate) { return NativeCall<float, UAnimMontage *, const float, const float, const float>(this, "APrimalBuff_Companion.PlayCompanionMontage", MontageToPlay, BlendInTime, BlendOutTime, PlayRate); }
	void PlayCompanionReaction(FCompanionReactionData * WithReactionData) { NativeCall<void, FCompanionReactionData *>(this, "APrimalBuff_Companion.PlayCompanionReaction", WithReactionData); }
	void RefreshCompanionColorization_Implementation() { NativeCall<void>(this, "APrimalBuff_Companion.RefreshCompanionColorization_Implementation"); }
	void RequestLoadFallbackSubtitlesAudio() { NativeCall<void>(this, "APrimalBuff_Companion.RequestLoadFallbackSubtitlesAudio"); }
	void Server_SetCompanionState_Implementation(const ECompanionState::Type NewState) { NativeCall<void, const ECompanionState::Type>(this, "APrimalBuff_Companion.Server_SetCompanionState_Implementation", NewState); }
	void SetCompaionHiddenSetting_Implementation(bool IsHidden) { NativeCall<void, bool>(this, "APrimalBuff_Companion.SetCompaionHiddenSetting_Implementation", IsHidden); }
	void SetUpAnimTexture() { NativeCall<void>(this, "APrimalBuff_Companion.SetUpAnimTexture"); }
	void SetupForInstigator() { NativeCall<void>(this, "APrimalBuff_Companion.SetupForInstigator"); }
	bool ShouldOrbitPointOfInterest(const FPointOfInterestData_ForCompanion * WithPointData) { return NativeCall<bool, const FPointOfInterestData_ForCompanion *>(this, "APrimalBuff_Companion.ShouldOrbitPointOfInterest", WithPointData); }
	void StartCompanionEventExternal(AActor * EventActor, FCompanionEventData * WithEventData) { NativeCall<void, AActor *, FCompanionEventData *>(this, "APrimalBuff_Companion.StartCompanionEventExternal", EventActor, WithEventData); }
	void StartCompanionEvent_Implementation(AActor * EventActor, FCompanionEventData * WithEventData) { NativeCall<void, AActor *, FCompanionEventData *>(this, "APrimalBuff_Companion.StartCompanionEvent_Implementation", EventActor, WithEventData); }
	void StopCompanionEventExternal() { NativeCall<void>(this, "APrimalBuff_Companion.StopCompanionEventExternal"); }
	void StopCompanionEvent_Implementation() { NativeCall<void>(this, "APrimalBuff_Companion.StopCompanionEvent_Implementation"); }
	void StopCompanionMontage(UAnimMontage * AnimToStop, const float BlendOutTime) { NativeCall<void, UAnimMontage *, const float>(this, "APrimalBuff_Companion.StopCompanionMontage", AnimToStop, BlendOutTime); }
	void StopCompanionReaction() { NativeCall<void>(this, "APrimalBuff_Companion.StopCompanionReaction"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick", DeltaSeconds); }
	void Tick_CompanionEvents_Implementation(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_CompanionEvents_Implementation", DeltaTime); }
	void Tick_CompanionReactions_Implementation(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_CompanionReactions_Implementation", DeltaTime); }
	void Tick_CompanionSearchForPOIs_Implementation(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_CompanionSearchForPOIs_Implementation", DeltaTime); }
	void Tick_UpdateCompanionState_Implementation(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_UpdateCompanionState_Implementation", DeltaTime); }
	void Timer_CheckForValidInstigator() { NativeCall<void>(this, "APrimalBuff_Companion.Timer_CheckForValidInstigator"); }
	void ToggleForceMonologue() { NativeCall<void>(this, "APrimalBuff_Companion.ToggleForceMonologue"); }
	bool TraceForCompanionBlockersFromPlayer_Implementation(FVector * AdjustedLocation, const FVector * TraceStart, const FVector * TraceEnd, bool bDebug, float TraceRadius) { return NativeCall<bool, FVector *, const FVector *, const FVector *, bool, float>(this, "APrimalBuff_Companion.TraceForCompanionBlockersFromPlayer_Implementation", AdjustedLocation, TraceStart, TraceEnd, bDebug, TraceRadius); }
	void UnloadAsyncLoadedAudioAndTexture() { NativeCall<void>(this, "APrimalBuff_Companion.UnloadAsyncLoadedAudioAndTexture"); }
	bool CanPlayEnvironmentalCompanionReaction_Implementation(const FString * Msg) { return NativeCall<bool, const FString *>(this, "APrimalBuff_Companion.CanPlayEnvironmentalCompanionReaction_Implementation", Msg); }
	bool CanPlayCompanionReaction(const FCompanionReactionData * CanPlayReactionData) { return NativeCall<bool, const FCompanionReactionData *>(this, "APrimalBuff_Companion.CanPlayCompanionReaction", CanPlayReactionData); }
	bool CanPlayEnvironmentalCompanionReaction(const FCompanionReactionData * CanPlayReactionData) { return NativeCall<bool, const FCompanionReactionData *>(this, "APrimalBuff_Companion.CanPlayEnvironmentalCompanionReaction", CanPlayReactionData); }
	bool CanStartCompanionEvent(AActor * EventActor, FCompanionEventData * WithEventData) { return NativeCall<bool, AActor *, FCompanionEventData *>(this, "APrimalBuff_Companion.CanStartCompanionEvent", EventActor, WithEventData); }
	void ClientAllowVRTeleport() { NativeCall<void>(this, "APrimalBuff_Companion.ClientAllowVRTeleport"); }
	void ClientToggleForceMonologue(bool Newval) { NativeCall<void, bool>(this, "APrimalBuff_Companion.ClientToggleForceMonologue", Newval); }
	void Client_AddCompanionReaction(FCompanionReactionData WithReactionData, const bool bForcePlayNow, UMaterialInterface * DialogueIconOverride, const int UniqueID) { NativeCall<void, FCompanionReactionData, const bool, UMaterialInterface *, const int>(this, "APrimalBuff_Companion.Client_AddCompanionReaction", WithReactionData, bForcePlayNow, DialogueIconOverride, UniqueID); }
	void FocusOnRemoteTarget() { NativeCall<void>(this, "APrimalBuff_Companion.FocusOnRemoteTarget"); }
	FVector * GetCompanionWorldLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalBuff_Companion.GetCompanionWorldLocation", result); }
	bool HasCompanionReachedPointOrbit(const FPointOfInterestData_ForCompanion * OfPointData) { return NativeCall<bool, const FPointOfInterestData_ForCompanion *>(this, "APrimalBuff_Companion.HasCompanionReachedPointOrbit", OfPointData); }
	bool IsCompanionAbleToMonologue() { return NativeCall<bool>(this, "APrimalBuff_Companion.IsCompanionAbleToMonologue"); }
	bool IsCompanionReadyToMonologue() { return NativeCall<bool>(this, "APrimalBuff_Companion.IsCompanionReadyToMonologue"); }
	void NotifyHasTamedDino(TSubclassOf<APrimalDinoCharacter> DinoClass) { NativeCall<void, TSubclassOf<APrimalDinoCharacter>>(this, "APrimalBuff_Companion.NotifyHasTamedDino", DinoClass); }
	void NotifyItemAddedToCropPlot(UPrimalItem * anItem) { NativeCall<void, UPrimalItem *>(this, "APrimalBuff_Companion.NotifyItemAddedToCropPlot", anItem); }
	void NotifyItemCrafted(UPrimalItem * anItem) { NativeCall<void, UPrimalItem *>(this, "APrimalBuff_Companion.NotifyItemCrafted", anItem); }
	void OnBeginOverlapCompanionEventTrigger(AActor * ForTrigger) { NativeCall<void, AActor *>(this, "APrimalBuff_Companion.OnBeginOverlapCompanionEventTrigger", ForTrigger); }
	void OnCompanionEventEnded(const FCompanionEventData * StoppingEventData) { NativeCall<void, const FCompanionEventData *>(this, "APrimalBuff_Companion.OnCompanionEventEnded", StoppingEventData); }
	void OnCompanionEventStarted(const FCompanionEventData * StartingEventData) { NativeCall<void, const FCompanionEventData *>(this, "APrimalBuff_Companion.OnCompanionEventStarted", StartingEventData); }
	void OnCompanionReactionPlayed(const FCompanionReactionData * PlayedReactionData, const int UniqueID) { NativeCall<void, const FCompanionReactionData *, const int>(this, "APrimalBuff_Companion.OnCompanionReactionPlayed", PlayedReactionData, UniqueID); }
	void OnCompanionReactionStopped(const FCompanionReactionData * StoppedReactionData, const int UniqueID) { NativeCall<void, const FCompanionReactionData *, const int>(this, "APrimalBuff_Companion.OnCompanionReactionStopped", StoppedReactionData, UniqueID); }
	void OnCompanionStateChanged() { NativeCall<void>(this, "APrimalBuff_Companion.OnCompanionStateChanged"); }
	void OnEndOverlapCompanionEventTrigger(AActor * ForTrigger) { NativeCall<void, AActor *>(this, "APrimalBuff_Companion.OnEndOverlapCompanionEventTrigger", ForTrigger); }
	void OnFoundPoI(FPointOfInterestData_ForCompanion * FoundPointData, AActor * FoundPointActor) { NativeCall<void, FPointOfInterestData_ForCompanion *, AActor *>(this, "APrimalBuff_Companion.OnFoundPoI", FoundPointData, FoundPointActor); }
	void OnMadeHexagonPurchase() { NativeCall<void>(this, "APrimalBuff_Companion.OnMadeHexagonPurchase"); }
	void OnMyPlayerMissionComplete(APrimalBuff_MissionData * MissionDataBuff, AMissionType * Mission, bool bSuccess) { NativeCall<void, APrimalBuff_MissionData *, AMissionType *, bool>(this, "APrimalBuff_Companion.OnMyPlayerMissionComplete", MissionDataBuff, Mission, bSuccess); }
	void OnMyPlayerMissionStarted(APrimalBuff_MissionData * MissionDataBuff, AMissionType * Mission) { NativeCall<void, APrimalBuff_MissionData *, AMissionType *>(this, "APrimalBuff_Companion.OnMyPlayerMissionStarted", MissionDataBuff, Mission); }
	void OnPlayerDeath(APrimalCharacter * DiedCharacter) { NativeCall<void, APrimalCharacter *>(this, "APrimalBuff_Companion.OnPlayerDeath", DiedCharacter); }
	void OnPlayerPlayAnimation(UAnimMontage * PlayedAnim, const float AnimDuration, FName StartSectionName) { NativeCall<void, UAnimMontage *, const float, FName>(this, "APrimalBuff_Companion.OnPlayerPlayAnimation", PlayedAnim, AnimDuration, StartSectionName); }
	void OnSpawnHexagons(float OverrideCollectSFXVolume, bool VFXImmediatelyAttracts) { NativeCall<void, float, bool>(this, "APrimalBuff_Companion.OnSpawnHexagons", OverrideCollectSFXVolume, VFXImmediatelyAttracts); }
	void OnSpawnedForPlayer() { NativeCall<void>(this, "APrimalBuff_Companion.OnSpawnedForPlayer"); }
	void RefreshCompanionColorization() { NativeCall<void>(this, "APrimalBuff_Companion.RefreshCompanionColorization"); }
	void Server_SetCompanionState(const ECompanionState::Type NewState) { NativeCall<void, const ECompanionState::Type>(this, "APrimalBuff_Companion.Server_SetCompanionState", NewState); }
	void SetCompaionHiddenSetting(bool isHidden) { NativeCall<void, bool>(this, "APrimalBuff_Companion.SetCompaionHiddenSetting", isHidden); }
	void StartCompanionEvent(AActor * EventActor, FCompanionEventData * WithEventData) { NativeCall<void, AActor *, FCompanionEventData *>(this, "APrimalBuff_Companion.StartCompanionEvent", EventActor, WithEventData); }
	void StopCompanionEvent() { NativeCall<void>(this, "APrimalBuff_Companion.StopCompanionEvent"); }
	void Tick_CompanionEvents(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_CompanionEvents", DeltaTime); }
	void Tick_CompanionReactions(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_CompanionReactions", DeltaTime); }
	void Tick_CompanionSearchForPOIs(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_CompanionSearchForPOIs", DeltaTime); }
	void Tick_UpdateCompanionState(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_UpdateCompanionState", DeltaTime); }
	void Tick_UpdateCompanionTransform(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_UpdateCompanionTransform", DeltaTime); }
};

