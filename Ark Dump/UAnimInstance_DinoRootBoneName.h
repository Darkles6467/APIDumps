#pragma once

#include "BaseDeclarations.h"
#include "UAnimInstance.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAnimInstance_DinoRootBoneName : UAnimInstance
{
	char __padding[0xc0L];
	bool& bAllowNativeAnimationsField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootBoneName.bAllowNativeAnimations"); }
	bool& bDisableBlueprintField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootBoneName.bDisableBlueprint"); }
	FRotator& RootRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "UAnimInstance_DinoRootBoneName.RootRotationOffset"); }
	FVector& RootLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "UAnimInstance_DinoRootBoneName.RootLocationOffset"); }
	float& IKAlphaField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootBoneName.IKAlpha"); }
	bool& bDisableIKField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootBoneName.bDisableIK"); }
	bool& bDisableIKWhenFallingField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootBoneName.bDisableIKWhenFalling"); }
	bool& bSleepingEnableIKField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootBoneName.bSleepingEnableIK"); }
	bool& bSkipAnimGraphField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootBoneName.bSkipAnimGraph"); }
	float& MovementAnimRateField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootBoneName.MovementAnimRate"); }
	float& MovementAnimRatePowerField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootBoneName.MovementAnimRatePower"); }
	float& MinMovementAnimRateField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootBoneName.MinMovementAnimRate"); }
	float& MaxMovementAnimRateField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootBoneName.MaxMovementAnimRate"); }
	float& MovingAnimSpeedTresholdField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootBoneName.MovingAnimSpeedTreshold"); }
	float& MovingBlendInTimeField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootBoneName.MovingBlendInTime"); }
	float& MovingBlendOutTimeField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootBoneName.MovingBlendOutTime"); }
	bool& bIsMovingField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootBoneName.bIsMoving"); }
	bool& bUseAimOffsetField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootBoneName.bUseAimOffset"); }
	float& AimPitchField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootBoneName.AimPitch"); }
	float& AimYawField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootBoneName.AimYaw"); }
	float& AimOffsetPitchScaleField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootBoneName.AimOffsetPitchScale"); }
	float& AimOffsetYawScaleField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootBoneName.AimOffsetYawScale"); }
	bool& bUseAlignGroundField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootBoneName.bUseAlignGround"); }
	float& AlignGroundAlphaField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootBoneName.AlignGroundAlpha"); }
	bool& bUseBlinkingField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootBoneName.bUseBlinking"); }
	float& BlinkBlendField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootBoneName.BlinkBlend"); }
	bool& bUseTurningField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootBoneName.bUseTurning"); }
	bool& bUseTurnInPlaceAnimationField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootBoneName.bUseTurnInPlaceAnimation"); }
	float& TurningEnabledBlendTimeField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootBoneName.TurningEnabledBlendTime"); }
	float& TurningDisabledBlendTimeField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootBoneName.TurningDisabledBlendTime"); }
	float& TurningDirectionBlendTimeField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootBoneName.TurningDirectionBlendTime"); }
	float& MinTurnRateForTurnAnimationField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootBoneName.MinTurnRateForTurnAnimation"); }
	bool& bIsTurningField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootBoneName.bIsTurning"); }
	bool& bTurningRightField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootBoneName.bTurningRight"); }
	bool& bUseSwimmingField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootBoneName.bUseSwimming"); }
	float& SwimmingMovingAnimSpeedThresholdField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootBoneName.SwimmingMovingAnimSpeedThreshold"); }
	bool& bIsSwimmingField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootBoneName.bIsSwimming"); }
	bool& bUseRunningField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootBoneName.bUseRunning"); }
	bool& bUseRunningMovementAnimRateField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootBoneName.bUseRunningMovementAnimRate"); }
	float& RunningMovementAnimRateField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootBoneName.RunningMovementAnimRate"); }
	float& RunningBlendInTimeField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootBoneName.RunningBlendInTime"); }
	float& RunningBlendOutTimeField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootBoneName.RunningBlendOutTime"); }
	bool& bIsRunningField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootBoneName.bIsRunning"); }
	bool& bUseSleepingAnimField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootBoneName.bUseSleepingAnim"); }
	FVector& SleepingAnimTranslationOffsetField() { return *GetNativePointerField<FVector*>(this, "UAnimInstance_DinoRootBoneName.SleepingAnimTranslationOffset"); }
	bool& bIsSleepingField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootBoneName.bIsSleeping"); }
	bool& bUseFallingField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootBoneName.bUseFalling"); }
	float& FallingAnimPlayRateField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootBoneName.FallingAnimPlayRate"); }
	float& FallingBlendInTimeField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootBoneName.FallingBlendInTime"); }
	float& FallingBlendOutTimeField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootBoneName.FallingBlendOutTime"); }
	bool& bIsFallingField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootBoneName.bIsFalling"); }

	// Functions

	void NativeUpdateAnimation(float DeltaSeconds) { NativeCall<void, float>(this, "UAnimInstance_DinoRootBoneName.NativeUpdateAnimation", DeltaSeconds); }
};

