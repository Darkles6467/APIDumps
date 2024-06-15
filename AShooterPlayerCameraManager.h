#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FViewTargetTransitionParams.h"
#include "FFinalPostProcessSettings.h"
#include "UCameraShake.h"

struct APlayerCameraManager : AActor
{
	char __padding[0x13b8L];
	FName& CameraStyleField() { return *GetNativePointerField<FName*>(this, "APlayerCameraManager.CameraStyle"); }
	float& DefaultFOVField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.DefaultFOV"); }
	float& LockedFOVField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.LockedFOV"); }
	float& DefaultOrthoWidthField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.DefaultOrthoWidth"); }
	float& LockedOrthoWidthField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.LockedOrthoWidth"); }
	bool& bIsOrthographicField() { return *GetNativePointerField<bool*>(this, "APlayerCameraManager.bIsOrthographic"); }
	float& DefaultAspectRatioField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.DefaultAspectRatio"); }
	FColor& FadeColorField() { return *GetNativePointerField<FColor*>(this, "APlayerCameraManager.FadeColor"); }
	float& FadeAmountField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.FadeAmount"); }
	FVector& ColorScaleField() { return *GetNativePointerField<FVector*>(this, "APlayerCameraManager.ColorScale"); }
	FVector& DesiredColorScaleField() { return *GetNativePointerField<FVector*>(this, "APlayerCameraManager.DesiredColorScale"); }
	FVector& OriginalColorScaleField() { return *GetNativePointerField<FVector*>(this, "APlayerCameraManager.OriginalColorScale"); }
	float& ColorScaleInterpDurationField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.ColorScaleInterpDuration"); }
	float& ColorScaleInterpStartTimeField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.ColorScaleInterpStartTime"); }
	FCameraCacheEntry& CameraCacheField() { return *GetNativePointerField<FCameraCacheEntry*>(this, "APlayerCameraManager.CameraCache"); }
	FCameraCacheEntry& LastFrameCameraCacheField() { return *GetNativePointerField<FCameraCacheEntry*>(this, "APlayerCameraManager.LastFrameCameraCache"); }
	FTViewTarget& ViewTargetField() { return *GetNativePointerField<FTViewTarget*>(this, "APlayerCameraManager.ViewTarget"); }
	FTViewTarget& PendingViewTargetField() { return *GetNativePointerField<FTViewTarget*>(this, "APlayerCameraManager.PendingViewTarget"); }
	float& BlendTimeToGoField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.BlendTimeToGo"); }
	FViewTargetTransitionParams& BlendParamsField() { return *GetNativePointerField<FViewTargetTransitionParams*>(this, "APlayerCameraManager.BlendParams"); }
	float& FreeCamDistanceField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.FreeCamDistance"); }
	FVector& FreeCamOffsetField() { return *GetNativePointerField<FVector*>(this, "APlayerCameraManager.FreeCamOffset"); }
	FVector& TPVCameraOffsetField() { return *GetNativePointerField<FVector*>(this, "APlayerCameraManager.TPVCameraOffset"); }
	float& TPVCameraCollisionHeightScalerField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.TPVCameraCollisionHeightScaler"); }
	FVector2D& FadeAlphaField() { return *GetNativePointerField<FVector2D*>(this, "APlayerCameraManager.FadeAlpha"); }
	float& FadeTimeField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.FadeTime"); }
	float& FadeTimeRemainingField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.FadeTimeRemaining"); }
	bool& bAlwaysApplyModifiersField() { return *GetNativePointerField<bool*>(this, "APlayerCameraManager.bAlwaysApplyModifiers"); }
	FieldArray<UCameraAnimInst *, 8> AnimInstPoolField() { return {this, "APlayerCameraManager.AnimInstPool"}; }
	TArray<float>& PostProcessBlendCacheWeightsField() { return *GetNativePointerField<TArray<float>*>(this, "APlayerCameraManager.PostProcessBlendCacheWeights"); }
	TArray<UCameraAnimInst *>& ActiveAnimsField() { return *GetNativePointerField<TArray<UCameraAnimInst *>*>(this, "APlayerCameraManager.ActiveAnims"); }
	TArray<UCameraAnimInst *>& FreeAnimsField() { return *GetNativePointerField<TArray<UCameraAnimInst *>*>(this, "APlayerCameraManager.FreeAnims"); }
	ACameraActor * AnimCameraActorField() { return GetNativePointerField<ACameraActor *>(this, "APlayerCameraManager.AnimCameraActor"); }
	float& ViewPitchMinField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.ViewPitchMin"); }
	float& ViewPitchMaxField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.ViewPitchMax"); }
	float& ViewYawMinField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.ViewYawMin"); }
	float& ViewYawMaxField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.ViewYawMax"); }
	float& ViewRollMinField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.ViewRollMin"); }
	float& ViewRollMaxField() { return *GetNativePointerField<float*>(this, "APlayerCameraManager.ViewRollMax"); }
	FMinimalViewInfo& LastPreModifierCameraCacheField() { return *GetNativePointerField<FMinimalViewInfo*>(this, "APlayerCameraManager.LastPreModifierCameraCache"); }

	// Functions

	void AddCachedPPBlend(FPostProcessSettings * PPSettings, float BlendWeight) { NativeCall<void, FPostProcessSettings *, float>(this, "APlayerCameraManager.AddCachedPPBlend", PPSettings, BlendWeight); }
	UCameraAnimInst * AllocCameraAnimInst() { return NativeCall<UCameraAnimInst *>(this, "APlayerCameraManager.AllocCameraAnimInst"); }
	void ApplyAnimToCamera(const ACameraActor * AnimatedCamActor, const UCameraAnimInst * AnimInst, FMinimalViewInfo * InOutPOV) { NativeCall<void, const ACameraActor *, const UCameraAnimInst *, FMinimalViewInfo *>(this, "APlayerCameraManager.ApplyAnimToCamera", AnimatedCamActor, AnimInst, InOutPOV); }
	void ApplyAudioFade() { NativeCall<void>(this, "APlayerCameraManager.ApplyAudioFade"); }
	void ApplyCameraModifiers(float DeltaTime, FMinimalViewInfo * InOutPOV, bool IgnoredBasedOnModifiers) { NativeCall<void, float, FMinimalViewInfo *, bool>(this, "APlayerCameraManager.ApplyCameraModifiers", DeltaTime, InOutPOV, IgnoredBasedOnModifiers); }
	void ApplyWorldOffset(const FVector * InOffset, bool bWorldShift) { NativeCall<void, const FVector *, bool>(this, "APlayerCameraManager.ApplyWorldOffset", InOffset, bWorldShift); }
	void AssignViewTarget(AActor * NewTarget, FTViewTarget * VT, FViewTargetTransitionParams TransitionParams) { NativeCall<void, AActor *, FTViewTarget *, FViewTargetTransitionParams>(this, "APlayerCameraManager.AssignViewTarget", NewTarget, VT, TransitionParams); }
	static float CalcRadialShakeScale(APlayerCameraManager * Cam, FVector Epicenter, float InnerRadius, float OuterRadius, float Falloff) { return NativeCall<float, APlayerCameraManager *, FVector, float, float, float>(nullptr, "APlayerCameraManager.CalcRadialShakeScale", Cam, Epicenter, InnerRadius, OuterRadius, Falloff); }
	void ClearAllCameraShakes() { NativeCall<void>(this, "APlayerCameraManager.ClearAllCameraShakes"); }
	void ClearCachedPPBlends() { NativeCall<void>(this, "APlayerCameraManager.ClearCachedPPBlends"); }
	void ClearCameraLensEffects() { NativeCall<void>(this, "APlayerCameraManager.ClearCameraLensEffects"); }
	void Destroyed() { NativeCall<void>(this, "APlayerCameraManager.Destroyed"); }
	void DisplayDebug(UCanvas * Canvas, const FDebugDisplayInfo * DebugDisplay, float * YL, float * YPos) { NativeCall<void, UCanvas *, const FDebugDisplayInfo *, float *, float *>(this, "APlayerCameraManager.DisplayDebug", Canvas, DebugDisplay, YL, YPos); }
	void DoUpdateCamera(float DeltaTime) { NativeCall<void, float>(this, "APlayerCameraManager.DoUpdateCamera", DeltaTime); }
	void GetCachedPostProcessBlends(const TArray<FPostProcessSettings> ** OutPPSettings, const TArray<float> ** OutBlendWeigthts) { NativeCall<void, const TArray<FPostProcessSettings> **, const TArray<float> **>(this, "APlayerCameraManager.GetCachedPostProcessBlends", OutPPSettings, OutBlendWeigthts); }
	void GetCameraViewPoint(FVector * OutCamLoc, FRotator * OutCamRot) { NativeCall<void, FVector *, FRotator *>(this, "APlayerCameraManager.GetCameraViewPoint", OutCamLoc, OutCamRot); }
	void GetCameraViewPointNoModifiers(FVector * OutCamLoc, FRotator * OutCamRot) { NativeCall<void, FVector *, FRotator *>(this, "APlayerCameraManager.GetCameraViewPointNoModifiers", OutCamLoc, OutCamRot); }
	float GetFOVAngle() { return NativeCall<float>(this, "APlayerCameraManager.GetFOVAngle"); }
	float GetOrthoWidth() { return NativeCall<float>(this, "APlayerCameraManager.GetOrthoWidth"); }
	void InitTempCameraActor(ACameraActor * CamActor, const UCameraAnimInst * AnimInstToInitFor) { NativeCall<void, ACameraActor *, const UCameraAnimInst *>(this, "APlayerCameraManager.InitTempCameraActor", CamActor, AnimInstToInitFor); }
	void InitializeFor(APlayerController * PC) { NativeCall<void, APlayerController *>(this, "APlayerCameraManager.InitializeFor", PC); }
	bool IsOrthographic() { return NativeCall<bool>(this, "APlayerCameraManager.IsOrthographic"); }
	void LimitViewPitch(FRotator * ViewRotation, float InViewPitchMin, float InViewPitchMax) { NativeCall<void, FRotator *, float, float>(this, "APlayerCameraManager.LimitViewPitch", ViewRotation, InViewPitchMin, InViewPitchMax); }
	void LimitViewRoll(FRotator * ViewRotation, float InViewRollMin, float InViewRollMax) { NativeCall<void, FRotator *, float, float>(this, "APlayerCameraManager.LimitViewRoll", ViewRotation, InViewRollMin, InViewRollMax); }
	void LimitViewYaw(FRotator * ViewRotation, float InViewYawMin, float InViewYawMax) { NativeCall<void, FRotator *, float, float>(this, "APlayerCameraManager.LimitViewYaw", ViewRotation, InViewYawMin, InViewYawMax); }
	UCameraAnimInst * PlayCameraAnim(UCameraAnim * Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, ECameraAnimPlaySpace::Type PlaySpace, FRotator UserPlaySpaceRot) { return NativeCall<UCameraAnimInst *, UCameraAnim *, float, float, float, float, bool, bool, float, ECameraAnimPlaySpace::Type, FRotator>(this, "APlayerCameraManager.PlayCameraAnim", Anim, Rate, Scale, BlendInTime, BlendOutTime, bLoop, bRandomStartTime, Duration, PlaySpace, UserPlaySpaceRot); }
	void PlayCameraShake(TSubclassOf<UCameraShake> Shake, float Scale, ECameraAnimPlaySpace::Type PlaySpace, FRotator UserPlaySpaceRot, float Speed, bool bForceUseWorldCameraShakeScale) { NativeCall<void, TSubclassOf<UCameraShake>, float, ECameraAnimPlaySpace::Type, FRotator, float, bool>(this, "APlayerCameraManager.PlayCameraShake", Shake, Scale, PlaySpace, UserPlaySpaceRot, Speed, bForceUseWorldCameraShakeScale); }
	static void PlayWorldCameraShake(UWorld * InWorld, TSubclassOf<UCameraShake> Shake, FVector Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter, float ScaleMultiplier) { NativeCall<void, UWorld *, TSubclassOf<UCameraShake>, FVector, float, float, float, bool, float>(nullptr, "APlayerCameraManager.PlayWorldCameraShake", InWorld, Shake, Epicenter, InnerRadius, OuterRadius, Falloff, bOrientShakeTowardsEpicenter, ScaleMultiplier); }
	void PostInitializeComponents() { NativeCall<void>(this, "APlayerCameraManager.PostInitializeComponents"); }
	void ProcessViewRotation(float DeltaTime, FRotator * OutViewRotation, FRotator * OutDeltaRot) { NativeCall<void, float, FRotator *, FRotator *>(this, "APlayerCameraManager.ProcessViewRotation", DeltaTime, OutViewRotation, OutDeltaRot); }
	void ReleaseCameraAnimInst(UCameraAnimInst * Inst) { NativeCall<void, UCameraAnimInst *>(this, "APlayerCameraManager.ReleaseCameraAnimInst", Inst); }
	void RemoveCameraLensEffect(AEmitterCameraLensEffectBase * Emitter) { NativeCall<void, AEmitterCameraLensEffectBase *>(this, "APlayerCameraManager.RemoveCameraLensEffect", Emitter); }
	void SetDesiredColorScale(FVector NewColorScale, float InterpTime) { NativeCall<void, FVector, float>(this, "APlayerCameraManager.SetDesiredColorScale", NewColorScale, InterpTime); }
	void SetFOV(float NewFOV) { NativeCall<void, float>(this, "APlayerCameraManager.SetFOV", NewFOV); }
	void SetOrthoWidth(float OrthoWidth) { NativeCall<void, float>(this, "APlayerCameraManager.SetOrthoWidth", OrthoWidth); }
	void SetViewTarget(AActor * NewTarget, FViewTargetTransitionParams TransitionParams) { NativeCall<void, AActor *, FViewTargetTransitionParams>(this, "APlayerCameraManager.SetViewTarget", NewTarget, TransitionParams); }
	bool ShouldTickIfViewportsOnly() { return NativeCall<bool>(this, "APlayerCameraManager.ShouldTickIfViewportsOnly"); }
	void StopAllCameraAnims(bool bImmediate) { NativeCall<void, bool>(this, "APlayerCameraManager.StopAllCameraAnims", bImmediate); }
	void StopAllInstancesOfCameraAnim(UCameraAnim * Anim, bool bImmediate) { NativeCall<void, UCameraAnim *, bool>(this, "APlayerCameraManager.StopAllInstancesOfCameraAnim", Anim, bImmediate); }
	void StopCameraAnimInst(UCameraAnimInst * AnimInst, bool bImmediate) { NativeCall<void, UCameraAnimInst *, bool>(this, "APlayerCameraManager.StopCameraAnimInst", AnimInst, bImmediate); }
	void StopCameraShake(TSubclassOf<UCameraShake> Shake) { NativeCall<void, TSubclassOf<UCameraShake>>(this, "APlayerCameraManager.StopCameraShake", Shake); }
	void UnlockFOV() { NativeCall<void>(this, "APlayerCameraManager.UnlockFOV"); }
	void UnlockOrthoWidth() { NativeCall<void>(this, "APlayerCameraManager.UnlockOrthoWidth"); }
	void UpdateCamera(float DeltaTime) { NativeCall<void, float>(this, "APlayerCameraManager.UpdateCamera", DeltaTime); }
	void UpdateCameraLensEffects(const FTViewTarget * OutVT) { NativeCall<void, const FTViewTarget *>(this, "APlayerCameraManager.UpdateCameraLensEffects", OutVT); }
	void UpdateViewTarget(FTViewTarget * OutVT, float DeltaTime) { NativeCall<void, FTViewTarget *, float>(this, "APlayerCameraManager.UpdateViewTarget", OutVT, DeltaTime); }
	void UpdateViewTargetInternal(FTViewTarget * OutVT, float DeltaTime) { NativeCall<void, FTViewTarget *, float>(this, "APlayerCameraManager.UpdateViewTargetInternal", OutVT, DeltaTime); }
	bool BlueprintUpdateCamera(AActor * CameraTarget, FVector * NewCameraLocation, FRotator * NewCameraRotation, float * NewCameraFOV) { return NativeCall<bool, AActor *, FVector *, FRotator *, float *>(this, "APlayerCameraManager.BlueprintUpdateCamera", CameraTarget, NewCameraLocation, NewCameraRotation, NewCameraFOV); }
};

struct AShooterPlayerCameraManager : APlayerCameraManager
{
	char __padding[0x7f0L];
	float& NormalFOVField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.NormalFOV"); }
	float& TargetingFOVField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.TargetingFOV"); }
	float& TPVZOffsetInterpSpeedField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.TPVZOffsetInterpSpeed"); }
	float& CurrentAimDriftFactorField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.CurrentAimDriftFactor"); }
	bool& bLastTransitionWasFinalModifierField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.bLastTransitionWasFinalModifier"); }
	bool& bWasCrouchedField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.bWasCrouched"); }
	bool& bWasProneField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.bWasProne"); }
	float& CurrentZOffsetField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.CurrentZOffset"); }
	bool& bHasCustomDepthStencilField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.bHasCustomDepthStencil"); }
	bool& bCustomDepthStencilIgnoreHealthField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.bCustomDepthStencilIgnoreHealth"); }
	bool& bCompleteCustomDepthStencilOverrideField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.bCompleteCustomDepthStencilOverride"); }
	float& InterpTPVCameraOffsetField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.InterpTPVCameraOffset"); }
	float& LastFOVScaleMatParamFOVField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.LastFOVScaleMatParamFOV"); }
	FName& LastCameraStyleField() { return *GetNativePointerField<FName*>(this, "AShooterPlayerCameraManager.LastCameraStyle"); }
	FName& LastActualCameraStyleField() { return *GetNativePointerField<FName*>(this, "AShooterPlayerCameraManager.LastActualCameraStyle"); }
	FMinimalViewInfo& LastLivePOVField() { return *GetNativePointerField<FMinimalViewInfo*>(this, "AShooterPlayerCameraManager.LastLivePOV"); }
	FMinimalViewInfo& LastCameraTransitionPointField() { return *GetNativePointerField<FMinimalViewInfo*>(this, "AShooterPlayerCameraManager.LastCameraTransitionPoint"); }
	long double& LastCameraTransitionTimeField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerCameraManager.LastCameraTransitionTime"); }
	long double& LastCameraTransitionDurationField() { return *GetNativePointerField<long double*>(this, "AShooterPlayerCameraManager.LastCameraTransitionDuration"); }
	TWeakObjectPtr<UAudioComponent>& LastPostProcessAudioComponentField() { return *GetNativePointerField<TWeakObjectPtr<UAudioComponent>*>(this, "AShooterPlayerCameraManager.LastPostProcessAudioComponent"); }
	FVector& LastTPVCameraOffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterPlayerCameraManager.LastTPVCameraOffset"); }
	float& LastTPVCollisionHeightField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.LastTPVCollisionHeight"); }
	float& TPVCollisionHeightInterpSpeedField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.TPVCollisionHeightInterpSpeed"); }
	FVector& LastTargetLocationLocField() { return *GetNativePointerField<FVector*>(this, "AShooterPlayerCameraManager.LastTargetLocationLoc"); }
	FVector& CameraAdjustPositionLocDeltaField() { return *GetNativePointerField<FVector*>(this, "AShooterPlayerCameraManager.CameraAdjustPositionLocDelta"); }
	int& LastFrameThirdPersonField() { return *GetNativePointerField<int*>(this, "AShooterPlayerCameraManager.LastFrameThirdPerson"); }
	bool& bCachedDeltaField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.bCachedDelta"); }
	bool& UseOnSurfaceCameraField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.UseOnSurfaceCamera"); }
	bool& UseOnSurfaceCameraInterpolationField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.UseOnSurfaceCameraInterpolation"); }
	bool& UseOnSurfaceCameraForPassengerField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.UseOnSurfaceCameraForPassenger"); }
	float& OnSurfaceinitialPitchField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.OnSurfaceinitialPitch"); }
	float& OnSurfaceTargetPitchField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.OnSurfaceTargetPitch"); }
	float& OnSurfaceInitialYawField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.OnSurfaceInitialYaw"); }
	float& OnSurfaceTargetYawField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.OnSurfaceTargetYaw"); }
	float& OnSurfaceTargetRollField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.OnSurfaceTargetRoll"); }
	float& OnSurfaceInterpolatedPitchField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.OnSurfaceInterpolatedPitch"); }
	float& OnSurfaceCameraInterpolationSpeedField() { return *GetNativePointerField<float*>(this, "AShooterPlayerCameraManager.OnSurfaceCameraInterpolationSpeed"); }
	FVector& OnSurfaceCameraOffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterPlayerCameraManager.OnSurfaceCameraOffset"); }
	bool& bLastEnableColorGradingField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.bLastEnableColorGrading"); }
	bool& bLastShooterCharacterPreventsInputField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.bLastShooterCharacterPreventsInput"); }
	bool& bLastWasFPVField() { return *GetNativePointerField<bool*>(this, "AShooterPlayerCameraManager.bLastWasFPV"); }

	// Functions

	void CheckForCameraStyleChanged(const FName * NewCameraStyle) { NativeCall<void, const FName *>(this, "AShooterPlayerCameraManager.CheckForCameraStyleChanged", NewCameraStyle); }
	void DisableSurfaceCameraInterpolation() { NativeCall<void>(this, "AShooterPlayerCameraManager.DisableSurfaceCameraInterpolation"); }
	void EndSurfaceCamera() { NativeCall<void>(this, "AShooterPlayerCameraManager.EndSurfaceCamera"); }
	FName * GetCahcedCameraStyle(FName * result) { return NativeCall<FName *, FName *>(this, "AShooterPlayerCameraManager.GetCahcedCameraStyle", result); }
	void GetCameraAimViewPoint(FVector * OutCamLoc, FRotator * OutCamRot) { NativeCall<void, FVector *, FRotator *>(this, "AShooterPlayerCameraManager.GetCameraAimViewPoint", OutCamLoc, OutCamRot); }
	void GetCameraAimViewPointNoModifiers(FVector * OutCamLoc, FRotator * OutCamRot, bool bNoTPVAim) { NativeCall<void, FVector *, FRotator *, bool>(this, "AShooterPlayerCameraManager.GetCameraAimViewPointNoModifiers", OutCamLoc, OutCamRot, bNoTPVAim); }
	FVector * GetCameraLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AShooterPlayerCameraManager.GetCameraLocation", result); }
	FName * GetCameraStyle(FName * result) { return NativeCall<FName *, FName *>(this, "AShooterPlayerCameraManager.GetCameraStyle", result); }
	static char GetColorCodedStencil(EStencilAlliance::Type InAlliance, float HealthPercent) { return NativeCall<char, EStencilAlliance::Type, float>(nullptr, "AShooterPlayerCameraManager.GetColorCodedStencil", InAlliance, HealthPercent); }
	float GetTPVCollisionHeight(AActor * ForTarget, const bool bIncludeHeightScalar) { return NativeCall<float, AActor *, const bool>(this, "AShooterPlayerCameraManager.GetTPVCollisionHeight", ForTarget, bIncludeHeightScalar); }
	float GetWorldCameraShakeScale(bool bForceReturnUserSettingScale) { return NativeCall<float, bool>(this, "AShooterPlayerCameraManager.GetWorldCameraShakeScale", bForceReturnUserSettingScale); }
	void HandleWheeledVehicle(AActor * TargetVehicle, FVector * Loc, float DeltaTime) { NativeCall<void, AActor *, FVector *, float>(this, "AShooterPlayerCameraManager.HandleWheeledVehicle", TargetVehicle, Loc, DeltaTime); }
	bool IsFirstPerson() { return NativeCall<bool>(this, "AShooterPlayerCameraManager.IsFirstPerson"); }
	bool IsInFrustum(const FVector * BoxLocation, const FVector * BoxExtents) { return NativeCall<bool, const FVector *, const FVector *>(this, "AShooterPlayerCameraManager.IsInFrustum", BoxLocation, BoxExtents); }
	void LimitViewPitch(FRotator * ViewRotation, float InViewPitchMin, float InViewPitchMax) { NativeCall<void, FRotator *, float, float>(this, "AShooterPlayerCameraManager.LimitViewPitch", ViewRotation, InViewPitchMin, InViewPitchMax); }
	void LimitViewYaw(FRotator * ViewRotation, float InViewYawMin, float InViewYawMax) { NativeCall<void, FRotator *, float, float>(this, "AShooterPlayerCameraManager.LimitViewYaw", ViewRotation, InViewYawMin, InViewYawMax); }
	void OnCameraStyleChangedNotify(const FName * NewCameraStyle, const FName * OldCameraStyle) { NativeCall<void, const FName *, const FName *>(this, "AShooterPlayerCameraManager.OnCameraStyleChangedNotify", NewCameraStyle, OldCameraStyle); }
	void StartCameraTransition(float TransitionDuration, bool bUseFinalModifiedViewTarget) { NativeCall<void, float, bool>(this, "AShooterPlayerCameraManager.StartCameraTransition", TransitionDuration, bUseFinalModifiedViewTarget); }
	void StartSurfaceCamera(float fOnSurfaceTargetYaw, float fOnSurfaceTargetPitch, float fOnSurfaceTargetRoll, float fOnSurfaceCameraInterpolationSpeed, bool fUseSurfaceCameraInterpolation, const FVector * fCameraOffset, bool fPassengerCamera) { NativeCall<void, float, float, float, float, bool, const FVector *, bool>(this, "AShooterPlayerCameraManager.StartSurfaceCamera", fOnSurfaceTargetYaw, fOnSurfaceTargetPitch, fOnSurfaceTargetRoll, fOnSurfaceCameraInterpolationSpeed, fUseSurfaceCameraInterpolation, fCameraOffset, fPassengerCamera); }
	void StartSurfaceCameraForPassenger(float fOnSurfaceTargetPitch, FRotator * ViewRotation, float fOnSurfaceTargetYaw, float fOnSurfaceTargetRoll) { NativeCall<void, float, FRotator *, float, float>(this, "AShooterPlayerCameraManager.StartSurfaceCameraForPassenger", fOnSurfaceTargetPitch, ViewRotation, fOnSurfaceTargetYaw, fOnSurfaceTargetRoll); }
	void UpdateCamera(float DeltaTime) { NativeCall<void, float>(this, "AShooterPlayerCameraManager.UpdateCamera", DeltaTime); }
	void UpdateSurfaceCamera(const FQuat * fRotator, FMinimalViewInfo * fViewInfo, float DeltaTime, bool fThirdPersonView) { NativeCall<void, const FQuat *, FMinimalViewInfo *, float, bool>(this, "AShooterPlayerCameraManager.UpdateSurfaceCamera", fRotator, fViewInfo, DeltaTime, fThirdPersonView); }
	void UpdateViewTarget(FTViewTarget * OutVT, float DeltaTime) { NativeCall<void, FTViewTarget *, float>(this, "AShooterPlayerCameraManager.UpdateViewTarget", OutVT, DeltaTime); }
};

