#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPOverrideCameraViewTarget_Parms
{
	char __padding[0x4cL];
	FName& CurrentCameraModeField() { return *GetNativePointerField<FName*>(this, "PrimalDinoCharacter_eventBPOverrideCameraViewTarget_Parms.CurrentCameraMode"); }
	FVector& DesiredCameraLocationField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventBPOverrideCameraViewTarget_Parms.DesiredCameraLocation"); }
	FRotator& DesiredCameraRotationField() { return *GetNativePointerField<FRotator*>(this, "PrimalDinoCharacter_eventBPOverrideCameraViewTarget_Parms.DesiredCameraRotation"); }
	float& DesiredFOVField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBPOverrideCameraViewTarget_Parms.DesiredFOV"); }
	bool& bOverrideCameraLocationField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPOverrideCameraViewTarget_Parms.bOverrideCameraLocation"); }
	FVector& CameraLocationField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventBPOverrideCameraViewTarget_Parms.CameraLocation"); }
	bool& bOverrideCameraRotationField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPOverrideCameraViewTarget_Parms.bOverrideCameraRotation"); }
	FRotator& CameraRotationField() { return *GetNativePointerField<FRotator*>(this, "PrimalDinoCharacter_eventBPOverrideCameraViewTarget_Parms.CameraRotation"); }
	bool& bOverrideCameraFOVField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPOverrideCameraViewTarget_Parms.bOverrideCameraFOV"); }
	float& CameraFOVField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBPOverrideCameraViewTarget_Parms.CameraFOV"); }
};

