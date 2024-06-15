#pragma once

#include "BaseDeclarations.h"
struct FClimbingTransitionParams
{
	char __padding[0x54L];
	float& LocationInterpSpeedField() { return *GetNativePointerField<float*>(this, "FClimbingTransitionParams.LocationInterpSpeed"); }
	float& RotationInterpSpeedField() { return *GetNativePointerField<float*>(this, "FClimbingTransitionParams.RotationInterpSpeed"); }
	float& OvershootDurationField() { return *GetNativePointerField<float*>(this, "FClimbingTransitionParams.OvershootDuration"); }
	float& OvershootCurveExpField() { return *GetNativePointerField<float*>(this, "FClimbingTransitionParams.OvershootCurveExp"); }
	float& OvershootCurveStartOffsetField() { return *GetNativePointerField<float*>(this, "FClimbingTransitionParams.OvershootCurveStartOffset"); }
	float& OvershootCurveDirectionBiasField() { return *GetNativePointerField<float*>(this, "FClimbingTransitionParams.OvershootCurveDirectionBias"); }
	float& OvershootCurveStartBiasField() { return *GetNativePointerField<float*>(this, "FClimbingTransitionParams.OvershootCurveStartBias"); }
	float& OvershootCurveEndOffsetField() { return *GetNativePointerField<float*>(this, "FClimbingTransitionParams.OvershootCurveEndOffset"); }
	float& OvershootCurveEndBiasField() { return *GetNativePointerField<float*>(this, "FClimbingTransitionParams.OvershootCurveEndBias"); }
	float& CameraLocationInterpSpeedField() { return *GetNativePointerField<float*>(this, "FClimbingTransitionParams.CameraLocationInterpSpeed"); }
	float& CameraRotationInterpSpeedField() { return *GetNativePointerField<float*>(this, "FClimbingTransitionParams.CameraRotationInterpSpeed"); }
	bool& bCameraSwitchField() { return *GetNativePointerField<bool*>(this, "FClimbingTransitionParams.bCameraSwitch"); }
	float& CameraTransitionDurationField() { return *GetNativePointerField<float*>(this, "FClimbingTransitionParams.CameraTransitionDuration"); }
	FVector& CameraSwitchStrengthField() { return *GetNativePointerField<FVector*>(this, "FClimbingTransitionParams.CameraSwitchStrength"); }
	float& CameraSwitchLocationInterpSpeedField() { return *GetNativePointerField<float*>(this, "FClimbingTransitionParams.CameraSwitchLocationInterpSpeed"); }
	float& CameraSwitchRotationInterpSpeedField() { return *GetNativePointerField<float*>(this, "FClimbingTransitionParams.CameraSwitchRotationInterpSpeed"); }
	FRotator& CameraSwitchOffsetField() { return *GetNativePointerField<FRotator*>(this, "FClimbingTransitionParams.CameraSwitchOffset"); }

	// Functions

};

