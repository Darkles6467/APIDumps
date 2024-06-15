#pragma once

#include "BaseDeclarations.h"
#include "UAnimInstance.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAnimInstance_DinoBlueprintBase : UAnimInstance
{
	char __padding[0x90L];
	bool& bAllowNativeAnimationsField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoBlueprintBase.bAllowNativeAnimations"); }
	bool& bDisableBlueprintField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoBlueprintBase.bDisableBlueprint"); }
	FRotator& RootRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "UAnimInstance_DinoBlueprintBase.RootRotationOffset"); }
	FVector& RootLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "UAnimInstance_DinoBlueprintBase.RootLocationOffset"); }
	bool& bSkipAnimGraphField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoBlueprintBase.bSkipAnimGraph"); }
	float& MovementAnimRateField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoBlueprintBase.MovementAnimRate"); }
	float& MovementAnimRatePowerField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoBlueprintBase.MovementAnimRatePower"); }
	float& MinMovementAnimRateField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoBlueprintBase.MinMovementAnimRate"); }
	float& MaxMovementAnimRateField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoBlueprintBase.MaxMovementAnimRate"); }
	float& MovingAnimSpeedTresholdField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoBlueprintBase.MovingAnimSpeedTreshold"); }
	bool& bIsMovingField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoBlueprintBase.bIsMoving"); }
	bool& bUseAimOffsetField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoBlueprintBase.bUseAimOffset"); }
	float& AimPitchField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoBlueprintBase.AimPitch"); }
	float& AimYawField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoBlueprintBase.AimYaw"); }
	bool& bUseBlinkingField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoBlueprintBase.bUseBlinking"); }
	float& BlinkBlendField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoBlueprintBase.BlinkBlend"); }
	bool& bUseTurningField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoBlueprintBase.bUseTurning"); }
	bool& bUseTurnInPlaceAnimationField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoBlueprintBase.bUseTurnInPlaceAnimation"); }
	float& TurningEnabledBlendTimeField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoBlueprintBase.TurningEnabledBlendTime"); }
	float& TurningDisabledBlendTimeField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoBlueprintBase.TurningDisabledBlendTime"); }
	float& TurningDirectionBlendTimeField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoBlueprintBase.TurningDirectionBlendTime"); }
	float& MinTurnRateForTurnAnimationField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoBlueprintBase.MinTurnRateForTurnAnimation"); }
	bool& bIsTurningField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoBlueprintBase.bIsTurning"); }
	bool& bTurningRightField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoBlueprintBase.bTurningRight"); }
	bool& bUseSwimmingField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoBlueprintBase.bUseSwimming"); }
	float& SwimmingMovingAnimSpeedThresholdField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoBlueprintBase.SwimmingMovingAnimSpeedThreshold"); }
	bool& bIsSwimmingField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoBlueprintBase.bIsSwimming"); }
	bool& bUseRunningField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoBlueprintBase.bUseRunning"); }
	bool& bUseRunningMovementAnimRateField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoBlueprintBase.bUseRunningMovementAnimRate"); }
	float& RunningMovementAnimRateField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoBlueprintBase.RunningMovementAnimRate"); }
	bool& bIsRunningField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoBlueprintBase.bIsRunning"); }
	bool& bUseSleepingAnimField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoBlueprintBase.bUseSleepingAnim"); }
	FVector& SleepingAnimTranslationOffsetField() { return *GetNativePointerField<FVector*>(this, "UAnimInstance_DinoBlueprintBase.SleepingAnimTranslationOffset"); }
	bool& bIsSleepingField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoBlueprintBase.bIsSleeping"); }
	bool& bUseFallingField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoBlueprintBase.bUseFalling"); }
	float& FallingAnimPlayRateField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoBlueprintBase.FallingAnimPlayRate"); }
	float& FallingBlendInTimeField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoBlueprintBase.FallingBlendInTime"); }
	float& FallingBlendOutTimeField() { return *GetNativePointerField<float*>(this, "UAnimInstance_DinoBlueprintBase.FallingBlendOutTime"); }
	bool& bIsFallingField() { return *GetNativePointerField<bool*>(this, "UAnimInstance_DinoBlueprintBase.bIsFalling"); }

	// Functions

	void NativeUpdateAnimation(float DeltaSeconds) { NativeCall<void, float>(this, "UAnimInstance_DinoBlueprintBase.NativeUpdateAnimation", DeltaSeconds); }
};

