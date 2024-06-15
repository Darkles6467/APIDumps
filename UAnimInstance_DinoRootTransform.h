#pragma once

#include "BaseDeclarations.h"
#include "UAnimInstance.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAnimInstance_DinoRootTransform : UAnimInstance
{
	char __padding[0xf0L];
	bool& bAllowNativeAnimationsField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootTransform.bAllowNativeAnimations"); }
	bool& bDisableBlueprintField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootTransform.bDisableBlueprint"); }
	FRotator& RootRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "UAnimInstance_DinoRootTransform.RootRotationOffset"); }
	FVector& RootLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "UAnimInstance_DinoRootTransform.RootLocationOffset"); }
	FTransform& RootOffsetTransformField() { return *GetNativePointerField<FTransform*>(this, "UAnimInstance_DinoRootTransform.RootOffsetTransform"); }
	bool& bSkipAnimGraphField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootTransform.bSkipAnimGraph"); }
	float& MovementAnimRateField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootTransform.MovementAnimRate"); }
	float& MovementAnimRatePowerField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootTransform.MovementAnimRatePower"); }
	float& MinimumMovementSpeedField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootTransform.MinimumMovementSpeed"); }
	float& MovingBlendInTimeField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootTransform.MovingBlendInTime"); }
	float& MovingBlendOutTimeField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootTransform.MovingBlendOutTime"); }
	bool& bIsMovingField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootTransform.bIsMoving"); }
	float& MinimumMovementSpeedFlyingField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootTransform.MinimumMovementSpeedFlying"); }
	float& FlyingMoveBlendInField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootTransform.FlyingMoveBlendIn"); }
	float& FlyingMoveBlendOutField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootTransform.FlyingMoveBlendOut"); }
	bool& bIsFlyingField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootTransform.bIsFlying"); }
	bool& bUseFlyingOffsetField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootTransform.bUseFlyingOffset"); }
	FVector& FlyingOffsetField() { return *GetNativePointerField<FVector*>(this, "UAnimInstance_DinoRootTransform.FlyingOffset"); }
	FVector& CurrentFlyingOffsetField() { return *GetNativePointerField<FVector*>(this, "UAnimInstance_DinoRootTransform.CurrentFlyingOffset"); }
	FVector& LandedOffsetField() { return *GetNativePointerField<FVector*>(this, "UAnimInstance_DinoRootTransform.LandedOffset"); }
	bool& bUseAimOffsetField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootTransform.bUseAimOffset"); }
	float& AimPitchField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootTransform.AimPitch"); }
	float& AimYawField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootTransform.AimYaw"); }
	float& AimOffsetPitchScaleField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootTransform.AimOffsetPitchScale"); }
	float& AimOffsetYawScaleField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootTransform.AimOffsetYawScale"); }
	bool& bUseBlinkingField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootTransform.bUseBlinking"); }
	float& BlinkBlendField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootTransform.BlinkBlend"); }
	bool& bUseTurningField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootTransform.bUseTurning"); }
	float& TurningEnabledBlendTimeField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootTransform.TurningEnabledBlendTime"); }
	float& TurningDisabledBlendTimeField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootTransform.TurningDisabledBlendTime"); }
	float& TurningDirectionBlendTimeField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootTransform.TurningDirectionBlendTime"); }
	float& MinTurnRateForTurnAnimationField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootTransform.MinTurnRateForTurnAnimation"); }
	bool& bIsTurningField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootTransform.bIsTurning"); }
	bool& bTurningRightField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootTransform.bTurningRight"); }
	bool& bUseRunningField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootTransform.bUseRunning"); }
	bool& bIsRunningField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootTransform.bIsRunning"); }
	bool& bUseSleepingAnimField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootTransform.bUseSleepingAnim"); }
	bool& bIsSleepingField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootTransform.bIsSleeping"); }
	bool& bUseFallingField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootTransform.bUseFalling"); }
	float& FallingAnimPlayRateField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootTransform.FallingAnimPlayRate"); }
	float& FallingBlendInTimeField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootTransform.FallingBlendInTime"); }
	float& FallingBlendOutTimeField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoRootTransform.FallingBlendOutTime"); }
	bool& bIsFallingField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootTransform.bIsFalling"); }
	bool& bUseMountedField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootTransform.bUseMounted"); }
	bool& bIsMountedField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoRootTransform.bIsMounted"); }

	// Functions

	void NativeUpdateAnimation(float DeltaSeconds) { NativeCall<void, float>(this, "UAnimInstance_DinoRootTransform.NativeUpdateAnimation", DeltaSeconds); }
};

