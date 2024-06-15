#pragma once

#include "BaseDeclarations.h"
#include "AController.h"
#include "FTimespan.h"
#include "FPrimitiveComponentId.h"
#include "FUniqueNetIdRepl.h"
#include "FNetworkGUID.h"
#include "UCameraShake.h"
#include "FBPNetExecParams.h"
#include "FNetExecParams.h"
#include "UEngineMessage.h"
#include "FColor.h"
#include "AHUD.h"
#include "FViewTargetTransitionParams.h"
#include "AEmitterCameraLensEffectBase.h"
#include "FGuid.h"
#include "FKey.h"
#include "FLifetimeProperty.h"
#include "FDateTime.h"
#include "AActor.h"
#include "FLatentActionInfo.h"
#include "AGameMode.h"

struct APlayerController : AController
{
	char __padding[0x398L];
	float& LocalPlayerCachedLODDistanceFactorField() { return *GetNativePointerField<float*>(this, "APlayerController.LocalPlayerCachedLODDistanceFactor"); }
	bool& bAutoManageActiveCameraTargetField() { return *GetNativePointerField<bool*>(this, "APlayerController.bAutoManageActiveCameraTarget"); }
	FRotator& TargetViewRotationField() { return *GetNativePointerField<FRotator*>(this, "APlayerController.TargetViewRotation"); }
	FRotator& BlendedTargetViewRotationField() { return *GetNativePointerField<FRotator*>(this, "APlayerController.BlendedTargetViewRotation"); }
	float& LastSpectatorStateSynchTimeField() { return *GetNativePointerField<float*>(this, "APlayerController.LastSpectatorStateSynchTime"); }
	int& ClientCapField() { return *GetNativePointerField<int*>(this, "APlayerController.ClientCap"); }
	long double& ServerLastReceivedSpectatorLocTimeField() { return *GetNativePointerField<long double*>(this, "APlayerController.ServerLastReceivedSpectatorLocTime"); }
	TArray<FActiveForceFeedbackEffect>& ActiveForceFeedbackEffectsField() { return *GetNativePointerField<TArray<FActiveForceFeedbackEffect>*>(this, "APlayerController.ActiveForceFeedbackEffects"); }
	TArray<FName>& PendingMapChangeLevelNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "APlayerController.PendingMapChangeLevelNames"); }
	char& NetPlayerIndexField() { return *GetNativePointerField<char*>(this, "APlayerController.NetPlayerIndex"); }
	FPlayerMuteList& MuteListField() { return *GetNativePointerField<FPlayerMuteList*>(this, "APlayerController.MuteList"); }
	FRotator& RotationInputField() { return *GetNativePointerField<FRotator*>(this, "APlayerController.RotationInput"); }
	FRotator& PreviousRotationInputField() { return *GetNativePointerField<FRotator*>(this, "APlayerController.PreviousRotationInput"); }
	float& InputYawScaleField() { return *GetNativePointerField<float*>(this, "APlayerController.InputYawScale"); }
	float& InputPitchScaleField() { return *GetNativePointerField<float*>(this, "APlayerController.InputPitchScale"); }
	float& InputRollScaleField() { return *GetNativePointerField<float*>(this, "APlayerController.InputRollScale"); }
	TEnumAsByte<enum EMouseCursor::Type>& DefaultMouseCursorField() { return *GetNativePointerField<TEnumAsByte<enum EMouseCursor::Type>*>(this, "APlayerController.DefaultMouseCursor"); }
	TEnumAsByte<enum EMouseCursor::Type>& CurrentMouseCursorField() { return *GetNativePointerField<TEnumAsByte<enum EMouseCursor::Type>*>(this, "APlayerController.CurrentMouseCursor"); }
	TEnumAsByte<enum ECollisionChannel>& DefaultClickTraceChannelField() { return *GetNativePointerField<TEnumAsByte<enum ECollisionChannel>*>(this, "APlayerController.DefaultClickTraceChannel"); }
	TEnumAsByte<enum ECollisionChannel>& CurrentClickTraceChannelField() { return *GetNativePointerField<TEnumAsByte<enum ECollisionChannel>*>(this, "APlayerController.CurrentClickTraceChannel"); }
	FForceFeedbackValues& ForceFeedbackValuesField() { return *GetNativePointerField<FForceFeedbackValues*>(this, "APlayerController.ForceFeedbackValues"); }
	bool& bLockedInputUIField() { return *GetNativePointerField<bool*>(this, "APlayerController.bLockedInputUI"); }
	TArray<TWeakObjectPtr<UInputComponent>>& CurrentInputStackField() { return *GetNativePointerField<TArray<TWeakObjectPtr<UInputComponent>>*>(this, "APlayerController.CurrentInputStack"); }
	UInputComponent * InactiveStateInputComponentField() { return GetNativePointerField<UInputComponent *>(this, "APlayerController.InactiveStateInputComponent"); }
	char& IgnoreMoveInputField() { return *GetNativePointerField<char*>(this, "APlayerController.IgnoreMoveInput"); }
	char& IgnoreLookInputField() { return *GetNativePointerField<char*>(this, "APlayerController.IgnoreLookInput"); }
	TSharedPtr<SVirtualJoystick,0>& VirtualJoystickField() { return *GetNativePointerField<TSharedPtr<SVirtualJoystick,0>*>(this, "APlayerController.VirtualJoystick"); }
	UTouchInterface * CurrentTouchInterfaceField() { return GetNativePointerField<UTouchInterface *>(this, "APlayerController.CurrentTouchInterface"); }
	FVector& AudioListenerLocationOverrideField() { return *GetNativePointerField<FVector*>(this, "APlayerController.AudioListenerLocationOverride"); }
	FRotator& AudioListenerRotationOverrideField() { return *GetNativePointerField<FRotator*>(this, "APlayerController.AudioListenerRotationOverride"); }
	FVector& SpawnLocationField() { return *GetNativePointerField<FVector*>(this, "APlayerController.SpawnLocation"); }
	float& LastRetryPlayerTimeField() { return *GetNativePointerField<float*>(this, "APlayerController.LastRetryPlayerTime"); }
	unsigned __int16& SeamlessTravelCountField() { return *GetNativePointerField<unsigned __int16*>(this, "APlayerController.SeamlessTravelCount"); }
	unsigned __int16& LastCompletedSeamlessTravelCountField() { return *GetNativePointerField<unsigned __int16*>(this, "APlayerController.LastCompletedSeamlessTravelCount"); }
	FReply& SlateOperationsField() { return *GetNativePointerField<FReply*>(this, "APlayerController.SlateOperations"); }
	FVector& LastReplicatedFocalLocField() { return *GetNativePointerField<FVector*>(this, "APlayerController.LastReplicatedFocalLoc"); }
	bool& bIsDelayedNetCleanupField() { return *GetNativePointerField<bool*>(this, "APlayerController.bIsDelayedNetCleanup"); }
	float& LastTeleportDistanceField() { return *GetNativePointerField<float*>(this, "APlayerController.LastTeleportDistance"); }

	// Functions

	void SetKickedNotification(FString KickReason) { NativeCall<void, FString>(this, "APlayerController.SetKickedNotification", KickReason); }
	FVector * GetSpawnLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APlayerController.GetSpawnLocation", result); }
	static bool IsNetRelevantFor(FTimespan A, FTimespan B) { return NativeCall<bool, FTimespan, FTimespan>(nullptr, "APlayerController.IsNetRelevantFor", A, B); }
	void AcknowledgePossession(APawn * P) { NativeCall<void, APawn *>(this, "APlayerController.AcknowledgePossession", P); }
	void ActivateTouchInterface(UTouchInterface * NewTouchInterface) { NativeCall<void, UTouchInterface *>(this, "APlayerController.ActivateTouchInterface", NewTouchInterface); }
	void AddCheats(bool bForce) { NativeCall<void, bool>(this, "APlayerController.AddCheats", bForce); }
	void AddPitchInput(float Val) { NativeCall<void, float>(this, "APlayerController.AddPitchInput", Val); }
	void AddRollInput(float Val) { NativeCall<void, float>(this, "APlayerController.AddRollInput", Val); }
	void AddYawInput(float Val) { NativeCall<void, float>(this, "APlayerController.AddYawInput", Val); }
	void AutoManageActiveCameraTarget(AActor * SuggestedTarget) { NativeCall<void, AActor *>(this, "APlayerController.AutoManageActiveCameraTarget", SuggestedTarget); }
	void BeginInactiveState() { NativeCall<void>(this, "APlayerController.BeginInactiveState"); }
	void BeginSpectatingState() { NativeCall<void>(this, "APlayerController.BeginSpectatingState"); }
	void BuildHiddenComponentList(const FVector * ViewLocation, TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator> * HiddenComponents) { NativeCall<void, const FVector *, TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator> *>(this, "APlayerController.BuildHiddenComponentList", ViewLocation, HiddenComponents); }
	void BuildInputStack(TArray<UInputComponent *> * InputStack) { NativeCall<void, TArray<UInputComponent *> *>(this, "APlayerController.BuildInputStack", InputStack); }
	void CalcCamera(float DeltaTime, FMinimalViewInfo * OutResult) { NativeCall<void, float, FMinimalViewInfo *>(this, "APlayerController.CalcCamera", DeltaTime, OutResult); }
	void Camera(FName NewMode) { NativeCall<void, FName>(this, "APlayerController.Camera", NewMode); }
	bool CanRestartPlayer() { return NativeCall<bool>(this, "APlayerController.CanRestartPlayer"); }
	void ChangeState(FName NewState) { NativeCall<void, FName>(this, "APlayerController.ChangeState", NewState); }
	void CleanUpAudioComponents() { NativeCall<void>(this, "APlayerController.CleanUpAudioComponents"); }
	void CleanupGameViewport() { NativeCall<void>(this, "APlayerController.CleanupGameViewport"); }
	void CleanupPlayerState() { NativeCall<void>(this, "APlayerController.CleanupPlayerState"); }
	void ClearAudioListenerOverride() { NativeCall<void>(this, "APlayerController.ClearAudioListenerOverride"); }
	void ClientAddTextureStreamingLoc_Implementation(FVector InLoc, float Duration, bool bOverrideLocation) { NativeCall<void, FVector, float, bool>(this, "APlayerController.ClientAddTextureStreamingLoc_Implementation", InLoc, Duration, bOverrideLocation); }
	void ClientCancelPendingMapChange_Implementation() { NativeCall<void>(this, "APlayerController.ClientCancelPendingMapChange_Implementation"); }
	void ClientCapBandwidth_Implementation(int Cap) { NativeCall<void, int>(this, "APlayerController.ClientCapBandwidth_Implementation", Cap); }
	void ClientClearCameraLensEffects_Implementation() { NativeCall<void>(this, "APlayerController.ClientClearCameraLensEffects_Implementation"); }
	void ClientCommitMapChange_Implementation() { NativeCall<void>(this, "APlayerController.ClientCommitMapChange_Implementation"); }
	void ClientEnableNetworkVoice_Implementation(bool bEnable) { NativeCall<void, bool>(this, "APlayerController.ClientEnableNetworkVoice_Implementation", bEnable); }
	void ClientFlushLevelStreaming_Implementation() { NativeCall<void>(this, "APlayerController.ClientFlushLevelStreaming_Implementation"); }
	void ClientForceGarbageCollection_Implementation() { NativeCall<void>(this, "APlayerController.ClientForceGarbageCollection_Implementation"); }
	void ClientGameEnded_Implementation(AActor * EndGameFocus, bool bIsWinner) { NativeCall<void, AActor *, bool>(this, "APlayerController.ClientGameEnded_Implementation", EndGameFocus, bIsWinner); }
	void ClientGotoState_Implementation(FName NewState) { NativeCall<void, FName>(this, "APlayerController.ClientGotoState_Implementation", NewState); }
	void ClientIgnoreLookInput_Implementation(bool bIgnore) { NativeCall<void, bool>(this, "APlayerController.ClientIgnoreLookInput_Implementation", bIgnore); }
	void ClientIgnoreMoveInput_Implementation(bool bIgnore) { NativeCall<void, bool>(this, "APlayerController.ClientIgnoreMoveInput_Implementation", bIgnore); }
	void ClientMessage_Implementation(const FString * S, FName Type, float MsgLifeTime) { NativeCall<void, const FString *, FName, float>(this, "APlayerController.ClientMessage_Implementation", S, Type, MsgLifeTime); }
	void ClientMutePlayer_Implementation(FUniqueNetIdRepl PlayerId) { NativeCall<void, FUniqueNetIdRepl>(this, "APlayerController.ClientMutePlayer_Implementation", PlayerId); }
	void ClientNetGUIDActorDeletion_Implementation(FNetworkGUID TheNetGUID) { NativeCall<void, FNetworkGUID>(this, "APlayerController.ClientNetGUIDActorDeletion_Implementation", TheNetGUID); }
	void ClientPlayCameraAnim_Implementation(UCameraAnim * AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, ECameraAnimPlaySpace::Type Space, FRotator CustomPlaySpace) { NativeCall<void, UCameraAnim *, float, float, float, float, bool, bool, ECameraAnimPlaySpace::Type, FRotator>(this, "APlayerController.ClientPlayCameraAnim_Implementation", AnimToPlay, Scale, Rate, BlendInTime, BlendOutTime, bLoop, bRandomStartTime, Space, CustomPlaySpace); }
	void ClientPlayCameraShake_Implementation(TSubclassOf<UCameraShake> Shake, float Scale, ECameraAnimPlaySpace::Type PlaySpace, FRotator UserPlaySpaceRot, float Speed, bool bForceUseWorldCameraShakeScale) { NativeCall<void, TSubclassOf<UCameraShake>, float, ECameraAnimPlaySpace::Type, FRotator, float, bool>(this, "APlayerController.ClientPlayCameraShake_Implementation", Shake, Scale, PlaySpace, UserPlaySpaceRot, Speed, bForceUseWorldCameraShakeScale); }
	void ClientPlayForceFeedback_Implementation(UForceFeedbackEffect * ForceFeedbackEffect, bool bLooping, FName Tag) { NativeCall<void, UForceFeedbackEffect *, bool, FName>(this, "APlayerController.ClientPlayForceFeedback_Implementation", ForceFeedbackEffect, bLooping, Tag); }
	void ClientPlaySoundAtLocation_Implementation(USoundBase * Sound, FVector Location, float VolumeMultiplier, float PitchMultiplier) { NativeCall<void, USoundBase *, FVector, float, float>(this, "APlayerController.ClientPlaySoundAtLocation_Implementation", Sound, Location, VolumeMultiplier, PitchMultiplier); }
	void ClientPlaySound_Implementation(USoundBase * Sound, float VolumeMultiplier, float PitchMultiplier) { NativeCall<void, USoundBase *, float, float>(this, "APlayerController.ClientPlaySound_Implementation", Sound, VolumeMultiplier, PitchMultiplier); }
	void ClientPrepareMapChange_Implementation(FName LevelName, bool bFirst, bool bLast) { NativeCall<void, FName, bool, bool>(this, "APlayerController.ClientPrepareMapChange_Implementation", LevelName, bFirst, bLast); }
	void ClientPrestreamTextures_Implementation(AActor * ForcedActor, float ForceDuration, bool bEnableStreaming, int CinematicTextureGroups) { NativeCall<void, AActor *, float, bool, int>(this, "APlayerController.ClientPrestreamTextures_Implementation", ForcedActor, ForceDuration, bEnableStreaming, CinematicTextureGroups); }
	void ClientProcessNetExecCommandBP_Implementation(AActor * ForActor, FName CommandName, FBPNetExecParams ExecParams) { NativeCall<void, AActor *, FName, FBPNetExecParams>(this, "APlayerController.ClientProcessNetExecCommandBP_Implementation", ForActor, CommandName, ExecParams); }
	void ClientProcessNetExecCommandUnreliableBP_Implementation(AActor * ForActor, FName CommandName, FBPNetExecParams ExecParams) { NativeCall<void, AActor *, FName, FBPNetExecParams>(this, "APlayerController.ClientProcessNetExecCommandUnreliableBP_Implementation", ForActor, CommandName, ExecParams); }
	void ClientProcessNetExecCommandUnreliable_Implementation(AActor * ForActor, FName CommandName, FNetExecParams ExecParams) { NativeCall<void, AActor *, FName, FNetExecParams>(this, "APlayerController.ClientProcessNetExecCommandUnreliable_Implementation", ForActor, CommandName, ExecParams); }
	void ClientProcessSimpleNetExecCommandBP_Implementation(AActor * ForActor, FName CommandName) { NativeCall<void, AActor *, FName>(this, "APlayerController.ClientProcessSimpleNetExecCommandBP_Implementation", ForActor, CommandName); }
	void ClientProcessSimpleNetExecCommandUnreliableBP_Implementation(AActor * ForActor, FName CommandName) { NativeCall<void, AActor *, FName>(this, "APlayerController.ClientProcessSimpleNetExecCommandUnreliableBP_Implementation", ForActor, CommandName); }
	void ClientReceiveLocalizedMessage_Implementation(TSubclassOf<ULocalMessage> Message, int Switch, APlayerState * RelatedPlayerState_1, APlayerState * RelatedPlayerState_2, UObject * OptionalObject) { NativeCall<void, TSubclassOf<ULocalMessage>, int, APlayerState *, APlayerState *, UObject *>(this, "APlayerController.ClientReceiveLocalizedMessage_Implementation", Message, Switch, RelatedPlayerState_1, RelatedPlayerState_2, OptionalObject); }
	void ClientReset_Implementation() { NativeCall<void>(this, "APlayerController.ClientReset_Implementation"); }
	void ClientRestart_Implementation(APawn * NewPawn) { NativeCall<void, APawn *>(this, "APlayerController.ClientRestart_Implementation", NewPawn); }
	void ClientRetryClientRestart_Implementation(APawn * NewPawn) { NativeCall<void, APawn *>(this, "APlayerController.ClientRetryClientRestart_Implementation", NewPawn); }
	void ClientReturnToMainMenu_Implementation(const FString * ReturnReason) { NativeCall<void, const FString *>(this, "APlayerController.ClientReturnToMainMenu_Implementation", ReturnReason); }
	void ClientSendNetExecCommandToServer(AActor * ForActor, FName CommandName, const FBPNetExecParams * ExecParams, bool bIsReliable) { NativeCall<void, AActor *, FName, const FBPNetExecParams *, bool>(this, "APlayerController.ClientSendNetExecCommandToServer", ForActor, CommandName, ExecParams, bIsReliable); }
	void ClientSetBlockOnAsyncLoading_Implementation() { NativeCall<void>(this, "APlayerController.ClientSetBlockOnAsyncLoading_Implementation"); }
	void ClientSetCameraFade_Implementation(bool bEnableFading, FColor FadeColor, FVector2D FadeAlpha, float FadeTime, bool bFadeAudio) { NativeCall<void, bool, FColor, FVector2D, float, bool>(this, "APlayerController.ClientSetCameraFade_Implementation", bEnableFading, FadeColor, FadeAlpha, FadeTime, bFadeAudio); }
	void ClientSetCinematicMode_Implementation(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD) { NativeCall<void, bool, bool, bool, bool>(this, "APlayerController.ClientSetCinematicMode_Implementation", bInCinematicMode, bAffectsMovement, bAffectsTurning, bAffectsHUD); }
	void ClientSetForceMipLevelsToBeResident_Implementation(UMaterialInterface * Material, float ForceDuration, int CinematicTextureGroups) { NativeCall<void, UMaterialInterface *, float, int>(this, "APlayerController.ClientSetForceMipLevelsToBeResident_Implementation", Material, ForceDuration, CinematicTextureGroups); }
	void ClientSetHUD_Implementation(TSubclassOf<AHUD> NewHUDClass) { NativeCall<void, TSubclassOf<AHUD>>(this, "APlayerController.ClientSetHUD_Implementation", NewHUDClass); }
	void ClientSetViewTarget_Implementation(AActor * A, FViewTargetTransitionParams TransitionParams) { NativeCall<void, AActor *, FViewTargetTransitionParams>(this, "APlayerController.ClientSetViewTarget_Implementation", A, TransitionParams); }
	void ClientSpawnCameraLensEffect_Implementation(TSubclassOf<AEmitterCameraLensEffectBase> LensEffectEmitterClass) { NativeCall<void, TSubclassOf<AEmitterCameraLensEffectBase>>(this, "APlayerController.ClientSpawnCameraLensEffect_Implementation", LensEffectEmitterClass); }
	void ClientStopCameraAnim_Implementation(UCameraAnim * AnimToStop) { NativeCall<void, UCameraAnim *>(this, "APlayerController.ClientStopCameraAnim_Implementation", AnimToStop); }
	void ClientStopCameraShake_Implementation(TSubclassOf<UCameraShake> Shake) { NativeCall<void, TSubclassOf<UCameraShake>>(this, "APlayerController.ClientStopCameraShake_Implementation", Shake); }
	void ClientStopForceFeedback_Implementation(UForceFeedbackEffect * ForceFeedbackEffect, FName Tag) { NativeCall<void, UForceFeedbackEffect *, FName>(this, "APlayerController.ClientStopForceFeedback_Implementation", ForceFeedbackEffect, Tag); }
	void ClientTeamMessage_Implementation(APlayerState * SenderPlayerState, const FString * S, FName Type, float MsgLifeTime) { NativeCall<void, APlayerState *, const FString *, FName, float>(this, "APlayerController.ClientTeamMessage_Implementation", SenderPlayerState, S, Type, MsgLifeTime); }
	void ClientTravel(const FString * URL, ETravelType TravelType, bool bSeamless, FGuid MapPackageGuid) { NativeCall<void, const FString *, ETravelType, bool, FGuid>(this, "APlayerController.ClientTravel", URL, TravelType, bSeamless, MapPackageGuid); }
	void ClientTravelInternal_Implementation(const FString * URL, ETravelType TravelType, bool bSeamless, FGuid MapPackageGuid) { NativeCall<void, const FString *, ETravelType, bool, FGuid>(this, "APlayerController.ClientTravelInternal_Implementation", URL, TravelType, bSeamless, MapPackageGuid); }
	void ClientUnmutePlayer_Implementation(FUniqueNetIdRepl PlayerId) { NativeCall<void, FUniqueNetIdRepl>(this, "APlayerController.ClientUnmutePlayer_Implementation", PlayerId); }
	void ClientVoiceHandshakeComplete_Implementation() { NativeCall<void>(this, "APlayerController.ClientVoiceHandshakeComplete_Implementation"); }
	void ClientWasKicked_Implementation(const FText * KickReason) { NativeCall<void, const FText *>(this, "APlayerController.ClientWasKicked_Implementation", KickReason); }
	FString * ConsoleCommand(FString * result, const FString * Cmd, bool bWriteToLog) { return NativeCall<FString *, FString *, const FString *, bool>(this, "APlayerController.ConsoleCommand", result, Cmd, bWriteToLog); }
	void CopyStringToClipboard_Implementation(const FString * S) { NativeCall<void, const FString *>(this, "APlayerController.CopyStringToClipboard_Implementation", S); }
	void CreateTouchInterface() { NativeCall<void>(this, "APlayerController.CreateTouchInterface"); }
	bool DefaultCanUnpause() { return NativeCall<bool>(this, "APlayerController.DefaultCanUnpause"); }
	void DelayedNetCleanup() { NativeCall<void>(this, "APlayerController.DelayedNetCleanup"); }
	void DelayedPrepareMapChange() { NativeCall<void>(this, "APlayerController.DelayedPrepareMapChange"); }
	bool DeprojectMousePositionToWorld(FVector * WorldLocation, FVector * WorldDirection) { return NativeCall<bool, FVector *, FVector *>(this, "APlayerController.DeprojectMousePositionToWorld", WorldLocation, WorldDirection); }
	bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, FVector * WorldLocation, FVector * WorldDirection) { return NativeCall<bool, float, float, FVector *, FVector *>(this, "APlayerController.DeprojectScreenPositionToWorld", ScreenX, ScreenY, WorldLocation, WorldDirection); }
	void DestroySpectatorPawn() { NativeCall<void>(this, "APlayerController.DestroySpectatorPawn"); }
	void Destroyed() { NativeCall<void>(this, "APlayerController.Destroyed"); }
	void DisableInput(APlayerController * PlayerController) { NativeCall<void, APlayerController *>(this, "APlayerController.DisableInput", PlayerController); }
	void DisplayDebug(UCanvas * Canvas, const FDebugDisplayInfo * DebugDisplay, float * YL, float * YPos) { NativeCall<void, UCanvas *, const FDebugDisplayInfo *, float *, float *>(this, "APlayerController.DisplayDebug", Canvas, DebugDisplay, YL, YPos); }
	void EnableCheats(const FString pass) { NativeCall<void, const FString>(this, "APlayerController.EnableCheats", pass); }
	void EnableInput(APlayerController * PlayerController) { NativeCall<void, APlayerController *>(this, "APlayerController.EnableInput", PlayerController); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "APlayerController.EndPlay", EndPlayReason); }
	void EndPlayingState() { NativeCall<void>(this, "APlayerController.EndPlayingState"); }
	void EndSpectatingState() { NativeCall<void>(this, "APlayerController.EndSpectatingState"); }
	void FOV(float F) { NativeCall<void, float>(this, "APlayerController.FOV", F); }
	void FailedToSpawnPawn() { NativeCall<void>(this, "APlayerController.FailedToSpawnPawn"); }
	void FlushPressedKeys() { NativeCall<void>(this, "APlayerController.FlushPressedKeys"); }
	void ForceSingleNetUpdateFor(AActor * Target) { NativeCall<void, AActor *>(this, "APlayerController.ForceSingleNetUpdateFor", Target); }
	void GameHasEnded(AActor * EndGameFocus, bool bIsWinner) { NativeCall<void, AActor *, bool>(this, "APlayerController.GameHasEnded", EndGameFocus, bIsWinner); }
	void GetActorEyesViewPoint(FVector * out_Location, FRotator * out_Rotation) { NativeCall<void, FVector *, FRotator *>(this, "APlayerController.GetActorEyesViewPoint", out_Location, out_Rotation); }
	void GetAudioListenerPosition(FVector * OutLocation, FVector * OutFrontDir, FVector * OutRightDir) { NativeCall<void, FVector *, FVector *, FVector *>(this, "APlayerController.GetAudioListenerPosition", OutLocation, OutFrontDir, OutRightDir); }
	ACameraActor * GetAutoActivateCameraForPlayer() { return NativeCall<ACameraActor *>(this, "APlayerController.GetAutoActivateCameraForPlayer"); }
	FVector * GetFocalLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APlayerController.GetFocalLocation", result); }
	bool GetHitResultAtScreenPosition(const FVector2D ScreenPosition, const TArray<TEnumAsByte<enum EObjectTypeQuery>> * ObjectTypes, bool bTraceComplex, FHitResult * HitResult) { return NativeCall<bool, const FVector2D, const TArray<TEnumAsByte<enum EObjectTypeQuery>> *, bool, FHitResult *>(this, "APlayerController.GetHitResultAtScreenPosition", ScreenPosition, ObjectTypes, bTraceComplex, HitResult); }
	bool GetHitResultAtScreenPosition(const FVector2D ScreenPosition, const ECollisionChannel TraceChannel, bool bTraceComplex, FHitResult * HitResult) { return NativeCall<bool, const FVector2D, const ECollisionChannel, bool, FHitResult *>(this, "APlayerController.GetHitResultAtScreenPosition", ScreenPosition, TraceChannel, bTraceComplex, HitResult); }
	bool GetHitResultAtScreenPosition(const FVector2D ScreenPosition, const ETraceTypeQuery TraceChannel, bool bTraceComplex, FHitResult * HitResult) { return NativeCall<bool, const FVector2D, const ETraceTypeQuery, bool, FHitResult *>(this, "APlayerController.GetHitResultAtScreenPosition", ScreenPosition, TraceChannel, bTraceComplex, HitResult); }
	bool GetHitResultUnderCursor(ECollisionChannel TraceChannel, bool bTraceComplex, FHitResult * HitResult) { return NativeCall<bool, ECollisionChannel, bool, FHitResult *>(this, "APlayerController.GetHitResultUnderCursor", TraceChannel, bTraceComplex, HitResult); }
	bool GetHitResultUnderCursorByChannel(ETraceTypeQuery TraceChannel, bool bTraceComplex, FHitResult * HitResult) { return NativeCall<bool, ETraceTypeQuery, bool, FHitResult *>(this, "APlayerController.GetHitResultUnderCursorByChannel", TraceChannel, bTraceComplex, HitResult); }
	bool GetHitResultUnderCursorForObjects(const TArray<TEnumAsByte<enum EObjectTypeQuery>> * ObjectTypes, bool bTraceComplex, FHitResult * HitResult) { return NativeCall<bool, const TArray<TEnumAsByte<enum EObjectTypeQuery>> *, bool, FHitResult *>(this, "APlayerController.GetHitResultUnderCursorForObjects", ObjectTypes, bTraceComplex, HitResult); }
	bool GetHitResultUnderFinger(ETouchIndex::Type FingerIndex, ECollisionChannel TraceChannel, bool bTraceComplex, FHitResult * HitResult) { return NativeCall<bool, ETouchIndex::Type, ECollisionChannel, bool, FHitResult *>(this, "APlayerController.GetHitResultUnderFinger", FingerIndex, TraceChannel, bTraceComplex, HitResult); }
	bool GetHitResultUnderFingerByChannel(ETouchIndex::Type FingerIndex, ETraceTypeQuery TraceChannel, bool bTraceComplex, FHitResult * HitResult) { return NativeCall<bool, ETouchIndex::Type, ETraceTypeQuery, bool, FHitResult *>(this, "APlayerController.GetHitResultUnderFingerByChannel", FingerIndex, TraceChannel, bTraceComplex, HitResult); }
	bool GetHitResultUnderFingerForObjects(ETouchIndex::Type FingerIndex, const TArray<TEnumAsByte<enum EObjectTypeQuery>> * ObjectTypes, bool bTraceComplex, FHitResult * HitResult) { return NativeCall<bool, ETouchIndex::Type, const TArray<TEnumAsByte<enum EObjectTypeQuery>> *, bool, FHitResult *>(this, "APlayerController.GetHitResultUnderFingerForObjects", FingerIndex, ObjectTypes, bTraceComplex, HitResult); }
	float GetInputAnalogKeyState(FKey Key) { return NativeCall<float, FKey>(this, "APlayerController.GetInputAnalogKeyState", Key); }
	void GetInputAnalogStickState(EControllerAnalogStick::Type WhichStick, float * StickX, float * StickY) { NativeCall<void, EControllerAnalogStick::Type, float *, float *>(this, "APlayerController.GetInputAnalogStickState", WhichStick, StickX, StickY); }
	float GetInputKeyTimeDown(FKey Key) { return NativeCall<float, FKey>(this, "APlayerController.GetInputKeyTimeDown", Key); }
	void GetInputMotionState(FVector * Tilt, FVector * RotationRate, FVector * Gravity, FVector * Acceleration) { NativeCall<void, FVector *, FVector *, FVector *, FVector *>(this, "APlayerController.GetInputMotionState", Tilt, RotationRate, Gravity, Acceleration); }
	void GetInputMouseDelta(float * DeltaX, float * DeltaY) { NativeCall<void, float *, float *>(this, "APlayerController.GetInputMouseDelta", DeltaX, DeltaY); }
	void GetInputTouchState(ETouchIndex::Type FingerIndex, float * LocationX, float * LocationY, bool * bIsCurrentlyPressed) { NativeCall<void, ETouchIndex::Type, float *, float *, bool *>(this, "APlayerController.GetInputTouchState", FingerIndex, LocationX, LocationY, bIsCurrentlyPressed); }
	FVector * GetInputVectorKeyState(FVector * result, FKey Key) { return NativeCall<FVector *, FVector *, FKey>(this, "APlayerController.GetInputVectorKeyState", result, Key); }
	FVector * GetLevelStreamingPawnViewLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APlayerController.GetLevelStreamingPawnViewLocation", result); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APlayerController.GetLifetimeReplicatedProps", OutLifetimeProps); }
	EMouseCursor::Type GetMouseCursor() { return NativeCall<EMouseCursor::Type>(this, "APlayerController.GetMouseCursor"); }
	bool GetMousePosition(float * LocationX, float * LocationY, bool bEvenWhenMouseNotAttached) { return NativeCall<bool, float *, float *, bool>(this, "APlayerController.GetMousePosition", LocationX, LocationY, bEvenWhenMouseNotAttached); }
	float GetNetPriority(const FVector * ViewPos, const FVector * ViewDir, APlayerController * Viewer, UActorChannel * InChannel, float Time, bool bLowBandwidth) { return NativeCall<float, const FVector *, const FVector *, APlayerController *, UActorChannel *, float, bool>(this, "APlayerController.GetNetPriority", ViewPos, ViewDir, Viewer, InChannel, Time, bLowBandwidth); }
	FString * GetPlayerNetworkAddress(FString * result) { return NativeCall<FString *, FString *>(this, "APlayerController.GetPlayerNetworkAddress", result); }
	void GetPlayerViewPoint(FVector * out_Location, FRotator * out_Rotation) { NativeCall<void, FVector *, FRotator *>(this, "APlayerController.GetPlayerViewPoint", out_Location, out_Rotation); }
	void GetSeamlessTravelActorList(bool bToEntry, TArray<AActor *> * ActorList) { NativeCall<void, bool, TArray<AActor *> *>(this, "APlayerController.GetSeamlessTravelActorList", bToEntry, ActorList); }
	int GetSplitscreenPlayerCount() { return NativeCall<int>(this, "APlayerController.GetSplitscreenPlayerCount"); }
	void GetViewportSize(int * SizeX, int * SizeY) { NativeCall<void, int *, int *>(this, "APlayerController.GetViewportSize", SizeX, SizeY); }
	bool HasClientLoadedCurrentWorld() { return NativeCall<bool>(this, "APlayerController.HasClientLoadedCurrentWorld"); }
	void InitInputSystem() { NativeCall<void>(this, "APlayerController.InitInputSystem"); }
	bool InputAxis(FKey Key, float Delta, float DeltaTime, int NumSamples, bool bGamepad) { return NativeCall<bool, FKey, float, float, int, bool>(this, "APlayerController.InputAxis", Key, Delta, DeltaTime, NumSamples, bGamepad); }
	bool InputKey(FKey Key, EInputEvent EventType, float AmountDepressed, bool bGamepad) { return NativeCall<bool, FKey, EInputEvent, float, bool>(this, "APlayerController.InputKey", Key, EventType, AmountDepressed, bGamepad); }
	bool InputMotion(const FVector * Tilt, const FVector * RotationRate, const FVector * Gravity, const FVector * Acceleration) { return NativeCall<bool, const FVector *, const FVector *, const FVector *, const FVector *>(this, "APlayerController.InputMotion", Tilt, RotationRate, Gravity, Acceleration); }
	bool InputTouch(unsigned int Handle, ETouchType::Type Type, const FVector2D * TouchLocation, FDateTime DeviceTimestamp, unsigned int TouchpadIndex) { return NativeCall<bool, unsigned int, ETouchType::Type, const FVector2D *, FDateTime, unsigned int>(this, "APlayerController.InputTouch", Handle, Type, TouchLocation, DeviceTimestamp, TouchpadIndex); }
	bool IsFrozen() { return NativeCall<bool>(this, "APlayerController.IsFrozen"); }
	bool IsInputKeyDown(FKey Key) { return NativeCall<bool, FKey>(this, "APlayerController.IsInputKeyDown", Key); }
	bool IsLocalController() { return NativeCall<bool>(this, "APlayerController.IsLocalController"); }
	bool IsLookInputIgnored() { return NativeCall<bool>(this, "APlayerController.IsLookInputIgnored"); }
	bool IsMoveInputIgnored() { return NativeCall<bool>(this, "APlayerController.IsMoveInputIgnored"); }
	bool IsPaused() { return NativeCall<bool>(this, "APlayerController.IsPaused"); }
	bool IsPlayerMuted(const FString * VivoxUsername) { return NativeCall<bool, const FString *>(this, "APlayerController.IsPlayerMuted", VivoxUsername); }
	bool IsPlayerMuted(const FUniqueNetId * PlayerId) { return NativeCall<bool, const FUniqueNetId *>(this, "APlayerController.IsPlayerMuted", PlayerId); }
	bool IsPrimaryPlayer() { return NativeCall<bool>(this, "APlayerController.IsPrimaryPlayer"); }
	bool IsSplitscreenPlayer(int * OutSplitscreenPlayerIndex) { return NativeCall<bool, int *>(this, "APlayerController.IsSplitscreenPlayer", OutSplitscreenPlayerIndex); }
	void LocalTravel(const FString * FURL) { NativeCall<void, const FString *>(this, "APlayerController.LocalTravel", FURL); }
	bool NetConnectionHasActiveActor(AActor * AnActor) { return NativeCall<bool, AActor *>(this, "APlayerController.NetConnectionHasActiveActor", AnActor); }
	void NetSpawnActorAtLocation_Implementation(TSubclassOf<AActor> AnActorClass, FVector_NetQuantize AtLocation, FRotator_NetQuantize AtRotation, USceneComponent * attachToComponent, int dataIndex, FName attachSocketName) { NativeCall<void, TSubclassOf<AActor>, FVector_NetQuantize, FRotator_NetQuantize, USceneComponent *, int, FName>(this, "APlayerController.NetSpawnActorAtLocation_Implementation", AnActorClass, AtLocation, AtRotation, attachToComponent, dataIndex, attachSocketName); }
	void NotifyDirectorControl(bool bNowControlling, AMatineeActor * CurrentMatinee) { NativeCall<void, bool, AMatineeActor *>(this, "APlayerController.NotifyDirectorControl", bNowControlling, CurrentMatinee); }
	void NotifyLoadedWorld(FName WorldPackageName, bool bFinalDest) { NativeCall<void, FName, bool>(this, "APlayerController.NotifyLoadedWorld", WorldPackageName, bFinalDest); }
	bool NotifyServerReceivedClientData(APawn * InPawn, float TimeStamp) { return NativeCall<bool, APawn *, float>(this, "APlayerController.NotifyServerReceivedClientData", InPawn, TimeStamp); }
	void OnActorChannelOpen(FInBunch * InBunch, UNetConnection * Connection) { NativeCall<void, FInBunch *, UNetConnection *>(this, "APlayerController.OnActorChannelOpen", InBunch, Connection); }
	void OnNetCleanup(UNetConnection * Connection) { NativeCall<void, UNetConnection *>(this, "APlayerController.OnNetCleanup", Connection); }
	void OnSerializeNewActor(FOutBunch * OutBunch) { NativeCall<void, FOutBunch *>(this, "APlayerController.OnSerializeNewActor", OutBunch); }
	void Pause() { NativeCall<void>(this, "APlayerController.Pause"); }
	void PawnLeavingGame() { NativeCall<void>(this, "APlayerController.PawnLeavingGame"); }
	void PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, TEnumAsByte<enum EDynamicForceFeedbackAction::Type> Action, FLatentActionInfo LatentInfo) { NativeCall<void, float, float, bool, bool, bool, bool, TEnumAsByte<enum EDynamicForceFeedbackAction::Type>, FLatentActionInfo>(this, "APlayerController.PlayDynamicForceFeedback", Intensity, Duration, bAffectsLeftLarge, bAffectsLeftSmall, bAffectsRightLarge, bAffectsRightSmall, Action, LatentInfo); }
	void PlayerTick(float DeltaTime) { NativeCall<void, float>(this, "APlayerController.PlayerTick", DeltaTime); }
	bool PopInputComponent(UInputComponent * InputComponent) { return NativeCall<bool, UInputComponent *>(this, "APlayerController.PopInputComponent", InputComponent); }
	void Possess(APawn * PawnToPossess) { NativeCall<void, APawn *>(this, "APlayerController.Possess", PawnToPossess); }
	void PostInitializeComponents() { NativeCall<void>(this, "APlayerController.PostInitializeComponents"); }
	void PostLoad() { NativeCall<void>(this, "APlayerController.PostLoad"); }
	void PostProcessInput(const float DeltaTime, const bool bGamePaused) { NativeCall<void, const float, const bool>(this, "APlayerController.PostProcessInput", DeltaTime, bGamePaused); }
	void ProcessForceFeedback(const float DeltaTime, const bool bGamePaused) { NativeCall<void, const float, const bool>(this, "APlayerController.ProcessForceFeedback", DeltaTime, bGamePaused); }
	void ProcessPlayerInput(const float DeltaTime, const bool bGamePaused) { NativeCall<void, const float, const bool>(this, "APlayerController.ProcessPlayerInput", DeltaTime, bGamePaused); }
	bool ProjectWorldLocationToScreen(FVector WorldLocation, FVector2D * ScreenLocation) { return NativeCall<bool, FVector, FVector2D *>(this, "APlayerController.ProjectWorldLocationToScreen", WorldLocation, ScreenLocation); }
	void PushInputComponent(UInputComponent * InputComponent) { NativeCall<void, UInputComponent *>(this, "APlayerController.PushInputComponent", InputComponent); }
	void ReceivedPlayer() { NativeCall<void>(this, "APlayerController.ReceivedPlayer"); }
	void ReceivedSpectatorClass(TSubclassOf<AGameMode> SpectatorClass) { NativeCall<void, TSubclassOf<AGameMode>>(this, "APlayerController.ReceivedSpectatorClass", SpectatorClass); }
	void Reset() { NativeCall<void>(this, "APlayerController.Reset"); }
	void ResetCameraMode() { NativeCall<void>(this, "APlayerController.ResetCameraMode"); }
	void ResetIgnoreInputFlags() { NativeCall<void>(this, "APlayerController.ResetIgnoreInputFlags"); }
	void RestartLevel() { NativeCall<void>(this, "APlayerController.RestartLevel"); }
	void SafeRetryClientRestart() { NativeCall<void>(this, "APlayerController.SafeRetryClientRestart"); }
	void SafeServerCheckClientPossession() { NativeCall<void>(this, "APlayerController.SafeServerCheckClientPossession"); }
	void SafeServerUpdateSpectatorState() { NativeCall<void>(this, "APlayerController.SafeServerUpdateSpectatorState"); }
	void SeamlessTravelFrom(APlayerController * OldPC) { NativeCall<void, APlayerController *>(this, "APlayerController.SeamlessTravelFrom", OldPC); }
	void SendClientAdjustment() { NativeCall<void>(this, "APlayerController.SendClientAdjustment"); }
	void ServerAcknowledgePossession_Implementation(APawn * P) { NativeCall<void, APawn *>(this, "APlayerController.ServerAcknowledgePossession_Implementation", P); }
	bool ServerAcknowledgePossession_Validate(APawn * P) { return NativeCall<bool, APawn *>(this, "APlayerController.ServerAcknowledgePossession_Validate", P); }
	void ServerCamera_Implementation(FName NewMode) { NativeCall<void, FName>(this, "APlayerController.ServerCamera_Implementation", NewMode); }
	bool ServerNotifyLoadedWorld_Validate(FName WorldPackageName) { return NativeCall<bool, FName>(this, "APlayerController.ServerNotifyLoadedWorld_Validate", WorldPackageName); }
	void ServerChangeName_Implementation(const FString * S) { NativeCall<void, const FString *>(this, "APlayerController.ServerChangeName_Implementation", S); }
	bool ServerChangeName_Validate(const FString * S) { return NativeCall<bool, const FString *>(this, "APlayerController.ServerChangeName_Validate", S); }
	void ServerCheckClientPossession_Implementation() { NativeCall<void>(this, "APlayerController.ServerCheckClientPossession_Implementation"); }
	void ServerMutePlayer_Implementation(FUniqueNetIdRepl PlayerId) { NativeCall<void, FUniqueNetIdRepl>(this, "APlayerController.ServerMutePlayer_Implementation", PlayerId); }
	bool ServerMutePlayer_Validate(FUniqueNetIdRepl PlayerId) { return NativeCall<bool, FUniqueNetIdRepl>(this, "APlayerController.ServerMutePlayer_Validate", PlayerId); }
	void ServerNotifyLoadedWorld_Implementation(FName WorldPackageName) { NativeCall<void, FName>(this, "APlayerController.ServerNotifyLoadedWorld_Implementation", WorldPackageName); }
	void ServerPause_Implementation() { NativeCall<void>(this, "APlayerController.ServerPause_Implementation"); }
	bool ServerPause_Validate() { return NativeCall<bool>(this, "APlayerController.ServerPause_Validate"); }
	void ServerProcessNetExecCommandUnreliable_Implementation(AActor * ForActor, FName CommandName, FBPNetExecParams ExecParams) { NativeCall<void, AActor *, FName, FBPNetExecParams>(this, "APlayerController.ServerProcessNetExecCommandUnreliable_Implementation", ForActor, CommandName, ExecParams); }
	void ServerProcessNetExecCommand_Implementation(AActor * ForActor, FName CommandName, FBPNetExecParams ExecParams) { NativeCall<void, AActor *, FName, FBPNetExecParams>(this, "APlayerController.ServerProcessNetExecCommand_Implementation", ForActor, CommandName, ExecParams); }
	void ServerReceivedPlayerControllerAck_Implementation() { NativeCall<void>(this, "APlayerController.ServerReceivedPlayerControllerAck_Implementation"); }
	void ServerRestartPlayer_Implementation() { NativeCall<void>(this, "APlayerController.ServerRestartPlayer_Implementation"); }
	void ServerSetSpectatorLocation_Implementation(FVector NewLoc) { NativeCall<void, FVector>(this, "APlayerController.ServerSetSpectatorLocation_Implementation", NewLoc); }
	void ServerToggleAILogging_Implementation() { NativeCall<void>(this, "APlayerController.ServerToggleAILogging_Implementation"); }
	void ServerUnmutePlayer_Implementation(FUniqueNetIdRepl PlayerId) { NativeCall<void, FUniqueNetIdRepl>(this, "APlayerController.ServerUnmutePlayer_Implementation", PlayerId); }
	bool ServerUnmutePlayer_Validate(FUniqueNetIdRepl PlayerId) { return NativeCall<bool, FUniqueNetIdRepl>(this, "APlayerController.ServerUnmutePlayer_Validate", PlayerId); }
	void ServerUpdateCamera_Implementation(FVector_NetQuantize CamLoc, int CamPitchAndYaw) { NativeCall<void, FVector_NetQuantize, int>(this, "APlayerController.ServerUpdateCamera_Implementation", CamLoc, CamPitchAndYaw); }
	void ServerUpdateLevelVisibility_Implementation(FName PackageName, bool bIsVisible) { NativeCall<void, FName, bool>(this, "APlayerController.ServerUpdateLevelVisibility_Implementation", PackageName, bIsVisible); }
	bool ServerUpdateLevelVisibility_Validate(FName PackageName, bool bIsVisible) { return NativeCall<bool, FName, bool>(this, "APlayerController.ServerUpdateLevelVisibility_Validate", PackageName, bIsVisible); }
	void ServerVerifyViewTarget_Implementation() { NativeCall<void>(this, "APlayerController.ServerVerifyViewTarget_Implementation"); }
	void ServerViewNextPlayer_Implementation() { NativeCall<void>(this, "APlayerController.ServerViewNextPlayer_Implementation"); }
	void ServerViewPrevPlayer_Implementation() { NativeCall<void>(this, "APlayerController.ServerViewPrevPlayer_Implementation"); }
	void ServerViewSelf_Implementation(FViewTargetTransitionParams TransitionParams) { NativeCall<void, FViewTargetTransitionParams>(this, "APlayerController.ServerViewSelf_Implementation", TransitionParams); }
	void SetAudioListenerOverride(USceneComponent * AttachedComponent, FVector Location, FRotator Rotation) { NativeCall<void, USceneComponent *, FVector, FRotator>(this, "APlayerController.SetAudioListenerOverride", AttachedComponent, Location, Rotation); }
	void SetCameraMode(FName NewCamMode) { NativeCall<void, FName>(this, "APlayerController.SetCameraMode", NewCamMode); }
	void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning) { NativeCall<void, bool, bool, bool, bool, bool>(this, "APlayerController.SetCinematicMode", bInCinematicMode, bHidePlayer, bAffectsHUD, bAffectsMovement, bAffectsTurning); }
	void SetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning) { NativeCall<void, bool, bool, bool>(this, "APlayerController.SetCinematicMode", bInCinematicMode, bAffectsMovement, bAffectsTurning); }
	void SetControllingDirector(UInterpTrackInstDirector * NewControllingDirector, bool bClientSimulatingViewTarget) { NativeCall<void, UInterpTrackInstDirector *, bool>(this, "APlayerController.SetControllingDirector", NewControllingDirector, bClientSimulatingViewTarget); }
	void SetIgnoreLookInput(bool bNewLookInput) { NativeCall<void, bool>(this, "APlayerController.SetIgnoreLookInput", bNewLookInput); }
	void SetIgnoreMoveInput(bool bNewMoveInput) { NativeCall<void, bool>(this, "APlayerController.SetIgnoreMoveInput", bNewMoveInput); }
	void SetInitialLocationAndRotation(const FVector * NewLocation, const FRotator * NewRotation) { NativeCall<void, const FVector *, const FRotator *>(this, "APlayerController.SetInitialLocationAndRotation", NewLocation, NewRotation); }
	void SetInputMode(const FInputModeDataBase * InData) { NativeCall<void, const FInputModeDataBase *>(this, "APlayerController.SetInputMode", InData); }
	void SetName(const FString * S) { NativeCall<void, const FString *>(this, "APlayerController.SetName", S); }
	void SetNetSpeed(int NewSpeed) { NativeCall<void, int>(this, "APlayerController.SetNetSpeed", NewSpeed); }
	void SetPawn(APawn * InPawn) { NativeCall<void, APawn *>(this, "APlayerController.SetPawn", InPawn); }
	void SetPlayer(UPlayer * InPlayer) { NativeCall<void, UPlayer *>(this, "APlayerController.SetPlayer", InPlayer); }
	void SetSpawnLocation(const FVector * NewLocation) { NativeCall<void, const FVector *>(this, "APlayerController.SetSpawnLocation", NewLocation); }
	void SetSpectatorPawn(ASpectatorPawn * NewSpectatorPawn) { NativeCall<void, ASpectatorPawn *>(this, "APlayerController.SetSpectatorPawn", NewSpectatorPawn); }
	void SetViewTarget(AActor * NewViewTarget, FViewTargetTransitionParams TransitionParams) { NativeCall<void, AActor *, FViewTargetTransitionParams>(this, "APlayerController.SetViewTarget", NewViewTarget, TransitionParams); }
	void SetViewTargetWithBlend(AActor * NewViewTarget, float BlendTime, EViewTargetBlendFunction BlendFunc, float BlendExp, bool bLockOutgoing) { NativeCall<void, AActor *, float, EViewTargetBlendFunction, float, bool>(this, "APlayerController.SetViewTargetWithBlend", NewViewTarget, BlendTime, BlendFunc, BlendExp, bLockOutgoing); }
	void SetVirtualJoystickVisibility(bool bVisible) { NativeCall<void, bool>(this, "APlayerController.SetVirtualJoystickVisibility", bVisible); }
	void SetupInactiveStateInputComponent(UInputComponent * InComponent) { NativeCall<void, UInputComponent *>(this, "APlayerController.SetupInactiveStateInputComponent", InComponent); }
	void SetupInputComponent() { NativeCall<void>(this, "APlayerController.SetupInputComponent"); }
	bool ShouldReplicateVoicePacketFrom(const FUniqueNetId * Sender, char ShouldUseSuperRange, char * PlaybackFlags) { return NativeCall<bool, const FUniqueNetId *, char, char *>(this, "APlayerController.ShouldReplicateVoicePacketFrom", Sender, ShouldUseSuperRange, PlaybackFlags); }
	bool ShouldShowMouseCursor() { return NativeCall<bool>(this, "APlayerController.ShouldShowMouseCursor"); }
	void SmoothTargetViewRotation(APawn * TargetPawn, float DeltaSeconds) { NativeCall<void, APawn *, float>(this, "APlayerController.SmoothTargetViewRotation", TargetPawn, DeltaSeconds); }
	void SpawnDefaultHUD() { NativeCall<void>(this, "APlayerController.SpawnDefaultHUD"); }
	void SpawnPlayerCameraManager() { NativeCall<void>(this, "APlayerController.SpawnPlayerCameraManager"); }
	void StartFire(char FireModeNum) { NativeCall<void, char>(this, "APlayerController.StartFire", FireModeNum); }
	void StartSpectatingOnly() { NativeCall<void>(this, "APlayerController.StartSpectatingOnly"); }
	void StartTalking() { NativeCall<void>(this, "APlayerController.StartTalking"); }
	void StopTalking() { NativeCall<void>(this, "APlayerController.StopTalking"); }
	void SwitchLevel(const FString * FURL) { NativeCall<void, const FString *>(this, "APlayerController.SwitchLevel", FURL); }
	void TickPlayerInput(const float DeltaSeconds, const bool bGamePaused) { NativeCall<void, const float, const bool>(this, "APlayerController.TickPlayerInput", DeltaSeconds, bGamePaused); }
	void ToggleSpeaking(bool bSpeaking, bool bUseSuperRange) { NativeCall<void, bool, bool>(this, "APlayerController.ToggleSpeaking", bSpeaking, bUseSuperRange); }
	void UnPossess() { NativeCall<void>(this, "APlayerController.UnPossess"); }
	void UpdateCameraManager(float DeltaSeconds) { NativeCall<void, float>(this, "APlayerController.UpdateCameraManager", DeltaSeconds); }
	void UpdatePing(float InPing) { NativeCall<void, float>(this, "APlayerController.UpdatePing", InPing); }
	void UpdateRotation(float DeltaTime) { NativeCall<void, float>(this, "APlayerController.UpdateRotation", DeltaTime); }
	void UpdateStateInputComponents() { NativeCall<void>(this, "APlayerController.UpdateStateInputComponents"); }
	void ViewAPlayer(int dir) { NativeCall<void, int>(this, "APlayerController.ViewAPlayer", dir); }
	bool WasInputKeyJustPressed(FKey Key) { return NativeCall<bool, FKey>(this, "APlayerController.WasInputKeyJustPressed", Key); }
	bool WasInputKeyJustReleased(FKey Key) { return NativeCall<bool, FKey>(this, "APlayerController.WasInputKeyJustReleased", Key); }
	void ClientCapBandwidth(int Cap) { NativeCall<void, int>(this, "APlayerController.ClientCapBandwidth", Cap); }
	void ClientClearCameraLensEffects() { NativeCall<void>(this, "APlayerController.ClientClearCameraLensEffects"); }
	void ClientCommitMapChange() { NativeCall<void>(this, "APlayerController.ClientCommitMapChange"); }
	void ClientEnableNetworkVoice(bool bEnable) { NativeCall<void, bool>(this, "APlayerController.ClientEnableNetworkVoice", bEnable); }
	void ClientGameEnded(AActor * EndGameFocus, bool bIsWinner) { NativeCall<void, AActor *, bool>(this, "APlayerController.ClientGameEnded", EndGameFocus, bIsWinner); }
	void ClientGotoState(FName NewState) { NativeCall<void, FName>(this, "APlayerController.ClientGotoState", NewState); }
	void ClientMessage(const FString * S, FName Type, float MsgLifeTime) { NativeCall<void, const FString *, FName, float>(this, "APlayerController.ClientMessage", S, Type, MsgLifeTime); }
	void ClientMutePlayer(FUniqueNetIdRepl PlayerId) { NativeCall<void, FUniqueNetIdRepl>(this, "APlayerController.ClientMutePlayer", PlayerId); }
	void ClientNetGUIDActorDeletion(FNetworkGUID TheNetGUID) { NativeCall<void, FNetworkGUID>(this, "APlayerController.ClientNetGUIDActorDeletion", TheNetGUID); }
	void ClientNotifyReconnected(APawn * NewPawn) { NativeCall<void, APawn *>(this, "APlayerController.ClientNotifyReconnected", NewPawn); }
	void ClientNotifyRespawned(APawn * NewPawn, bool IsFirstSpawn) { NativeCall<void, APawn *, bool>(this, "APlayerController.ClientNotifyRespawned", NewPawn, IsFirstSpawn); }
	void ClientPlayCameraShake(TSubclassOf<UCameraShake> Shake, float Scale, ECameraAnimPlaySpace::Type PlaySpace, FRotator UserPlaySpaceRot, float Speed, bool bForceUseWorldCameraShakeScale) { NativeCall<void, TSubclassOf<UCameraShake>, float, ECameraAnimPlaySpace::Type, FRotator, float, bool>(this, "APlayerController.ClientPlayCameraShake", Shake, Scale, PlaySpace, UserPlaySpaceRot, Speed, bForceUseWorldCameraShakeScale); }
	void ClientPlayForceFeedback(UForceFeedbackEffect * ForceFeedbackEffect, bool bLooping, FName Tag) { NativeCall<void, UForceFeedbackEffect *, bool, FName>(this, "APlayerController.ClientPlayForceFeedback", ForceFeedbackEffect, bLooping, Tag); }
	void ClientProcessNetExecCommand(AActor * ForActor, FName CommandName, FNetExecParams ExecParams) { NativeCall<void, AActor *, FName, FNetExecParams>(this, "APlayerController.ClientProcessNetExecCommand", ForActor, CommandName, ExecParams); }
	void ClientProcessNetExecCommandBP(AActor * ForActor, FName CommandName, FBPNetExecParams ExecParams) { NativeCall<void, AActor *, FName, FBPNetExecParams>(this, "APlayerController.ClientProcessNetExecCommandBP", ForActor, CommandName, ExecParams); }
	void ClientProcessNetExecCommandUnreliable(AActor * ForActor, FName CommandName, FNetExecParams ExecParams) { NativeCall<void, AActor *, FName, FNetExecParams>(this, "APlayerController.ClientProcessNetExecCommandUnreliable", ForActor, CommandName, ExecParams); }
	void ClientProcessNetExecCommandUnreliableBP(AActor * ForActor, FName CommandName, FBPNetExecParams ExecParams) { NativeCall<void, AActor *, FName, FBPNetExecParams>(this, "APlayerController.ClientProcessNetExecCommandUnreliableBP", ForActor, CommandName, ExecParams); }
	void ClientProcessSimpleNetExecCommandBP(AActor * ForActor, FName CommandName) { NativeCall<void, AActor *, FName>(this, "APlayerController.ClientProcessSimpleNetExecCommandBP", ForActor, CommandName); }
	void ClientProcessSimpleNetExecCommandUnreliableBP(AActor * ForActor, FName CommandName) { NativeCall<void, AActor *, FName>(this, "APlayerController.ClientProcessSimpleNetExecCommandUnreliableBP", ForActor, CommandName); }
	void ClientReceiveLocalizedMessage(TSubclassOf<ULocalMessage> Message, int Switch, APlayerState * RelatedPlayerState_1, APlayerState * RelatedPlayerState_2, UObject * OptionalObject) { NativeCall<void, TSubclassOf<ULocalMessage>, int, APlayerState *, APlayerState *, UObject *>(this, "APlayerController.ClientReceiveLocalizedMessage", Message, Switch, RelatedPlayerState_1, RelatedPlayerState_2, OptionalObject); }
	void ClientRepObjRef(UObject * Object) { NativeCall<void, UObject *>(this, "APlayerController.ClientRepObjRef", Object); }
	void ClientReset() { NativeCall<void>(this, "APlayerController.ClientReset"); }
	void ClientRestart(APawn * NewPawn) { NativeCall<void, APawn *>(this, "APlayerController.ClientRestart", NewPawn); }
	void ClientRetryClientRestart(APawn * NewPawn) { NativeCall<void, APawn *>(this, "APlayerController.ClientRetryClientRestart", NewPawn); }
	void ClientReturnToMainMenu(const FString * ReturnReason) { NativeCall<void, const FString *>(this, "APlayerController.ClientReturnToMainMenu", ReturnReason); }
	void ClientSetBlockOnAsyncLoading() { NativeCall<void>(this, "APlayerController.ClientSetBlockOnAsyncLoading"); }
	void ClientSetCameraFade(bool bEnableFading, FColor FadeColor, FVector2D FadeAlpha, float FadeTime, bool bFadeAudio) { NativeCall<void, bool, FColor, FVector2D, float, bool>(this, "APlayerController.ClientSetCameraFade", bEnableFading, FadeColor, FadeAlpha, FadeTime, bFadeAudio); }
	void ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD) { NativeCall<void, bool, bool, bool, bool>(this, "APlayerController.ClientSetCinematicMode", bInCinematicMode, bAffectsMovement, bAffectsTurning, bAffectsHUD); }
	void ClientSetHUD(TSubclassOf<AHUD> NewHUDClass) { NativeCall<void, TSubclassOf<AHUD>>(this, "APlayerController.ClientSetHUD", NewHUDClass); }
	void ClientSetViewTarget(AActor * A, FViewTargetTransitionParams TransitionParams) { NativeCall<void, AActor *, FViewTargetTransitionParams>(this, "APlayerController.ClientSetViewTarget", A, TransitionParams); }
	void ClientStopCameraShake(TSubclassOf<UCameraShake> Shake) { NativeCall<void, TSubclassOf<UCameraShake>>(this, "APlayerController.ClientStopCameraShake", Shake); }
	void ClientTeamMessage(APlayerState * SenderPlayerState, const FString * S, FName Type, float MsgLifeTime) { NativeCall<void, APlayerState *, const FString *, FName, float>(this, "APlayerController.ClientTeamMessage", SenderPlayerState, S, Type, MsgLifeTime); }
	void ClientTeleportSucceeded(FVector TeleportLoc, FRotator TeleportRot, bool bSimpleTeleport) { NativeCall<void, FVector, FRotator, bool>(this, "APlayerController.ClientTeleportSucceeded", TeleportLoc, TeleportRot, bSimpleTeleport); }
	void ClientTravelInternal(const FString * URL, ETravelType TravelType, bool bSeamless, FGuid MapPackageGuid) { NativeCall<void, const FString *, ETravelType, bool, FGuid>(this, "APlayerController.ClientTravelInternal", URL, TravelType, bSeamless, MapPackageGuid); }
	void ClientUnmutePlayer(FUniqueNetIdRepl PlayerId) { NativeCall<void, FUniqueNetIdRepl>(this, "APlayerController.ClientUnmutePlayer", PlayerId); }
	void ClientUpdateLevelStreamingStatus(FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int LODIndex) { NativeCall<void, FName, bool, bool, bool, int>(this, "APlayerController.ClientUpdateLevelStreamingStatus", PackageName, bNewShouldBeLoaded, bNewShouldBeVisible, bNewShouldBlockOnLoad, LODIndex); }
	void ClientVoiceHandshakeComplete() { NativeCall<void>(this, "APlayerController.ClientVoiceHandshakeComplete"); }
	void ClientWasKicked(const FText * KickReason) { NativeCall<void, const FText *>(this, "APlayerController.ClientWasKicked", KickReason); }
	void CopyStringToClipboard(const FString * S) { NativeCall<void, const FString *>(this, "APlayerController.CopyStringToClipboard", S); }
	void HandleRespawned(APawn * NewPawn, bool IsFirstSpawn) { NativeCall<void, APawn *, bool>(this, "APlayerController.HandleRespawned", NewPawn, IsFirstSpawn); }
	void NetSpawnActorAtLocation(TSubclassOf<AActor> AnActorClass, FVector_NetQuantize AtLocation, FRotator_NetQuantize AtRotation, USceneComponent * attachToComponent, int dataIndex, FName attachSocketName) { NativeCall<void, TSubclassOf<AActor>, FVector_NetQuantize, FRotator_NetQuantize, USceneComponent *, int, FName>(this, "APlayerController.NetSpawnActorAtLocation", AnActorClass, AtLocation, AtRotation, attachToComponent, dataIndex, attachSocketName); }
	void ServerAcknowledgePossession(APawn * P) { NativeCall<void, APawn *>(this, "APlayerController.ServerAcknowledgePossession", P); }
	void ServerCamera(FName NewMode) { NativeCall<void, FName>(this, "APlayerController.ServerCamera", NewMode); }
	void ServerChangeName(const FString * S) { NativeCall<void, const FString *>(this, "APlayerController.ServerChangeName", S); }
	void ServerCheckClientPossession() { NativeCall<void>(this, "APlayerController.ServerCheckClientPossession"); }
	void ServerMutePlayer(FUniqueNetIdRepl PlayerId) { NativeCall<void, FUniqueNetIdRepl>(this, "APlayerController.ServerMutePlayer", PlayerId); }
	void ServerNotifyLoadedWorld(FName WorldPackageName) { NativeCall<void, FName>(this, "APlayerController.ServerNotifyLoadedWorld", WorldPackageName); }
	void ServerPause() { NativeCall<void>(this, "APlayerController.ServerPause"); }
	void ServerProcessNetExecCommand(AActor * ForActor, FName CommandName, FBPNetExecParams ExecParams) { NativeCall<void, AActor *, FName, FBPNetExecParams>(this, "APlayerController.ServerProcessNetExecCommand", ForActor, CommandName, ExecParams); }
	void ServerProcessNetExecCommandUnreliable(AActor * ForActor, FName CommandName, FBPNetExecParams ExecParams) { NativeCall<void, AActor *, FName, FBPNetExecParams>(this, "APlayerController.ServerProcessNetExecCommandUnreliable", ForActor, CommandName, ExecParams); }
	void ServerReceivedPlayerControllerAck() { NativeCall<void>(this, "APlayerController.ServerReceivedPlayerControllerAck"); }
	void ServerRestartPlayer() { NativeCall<void>(this, "APlayerController.ServerRestartPlayer"); }
	void ServerSetSpectatorLocation(FVector NewLoc) { NativeCall<void, FVector>(this, "APlayerController.ServerSetSpectatorLocation", NewLoc); }
	void ServerShortTimeout() { NativeCall<void>(this, "APlayerController.ServerShortTimeout"); }
	void ServerUnmutePlayer(FUniqueNetIdRepl PlayerId) { NativeCall<void, FUniqueNetIdRepl>(this, "APlayerController.ServerUnmutePlayer", PlayerId); }
	void ServerUpdateLevelVisibility(FName PackageName, bool bIsVisible) { NativeCall<void, FName, bool>(this, "APlayerController.ServerUpdateLevelVisibility", PackageName, bIsVisible); }
	void ServerVerifyViewTarget() { NativeCall<void>(this, "APlayerController.ServerVerifyViewTarget"); }
	void ServerViewNextPlayer() { NativeCall<void>(this, "APlayerController.ServerViewNextPlayer"); }
};

