#pragma once

#include "BaseDeclarations.h"
struct FSaddlePassengerSeatDefinition
{
	char __padding[0xa8L];
	FName& AttachBoneNameField() { return *GetNativePointerField<FName*>(this, "FSaddlePassengerSeatDefinition.AttachBoneName"); }
	FName& AttachBoneNameEnemyDinoField() { return *GetNativePointerField<FName*>(this, "FSaddlePassengerSeatDefinition.AttachBoneNameEnemyDino"); }
	FName& AttachBoneNameDinoField() { return *GetNativePointerField<FName*>(this, "FSaddlePassengerSeatDefinition.AttachBoneNameDino"); }
	FString& BoardActionTextField() { return *GetNativePointerField<FString*>(this, "FSaddlePassengerSeatDefinition.BoardActionText"); }
	FVector& UnboardLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "FSaddlePassengerSeatDefinition.UnboardLocationOffset"); }
	FVector& FPVCameraLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "FSaddlePassengerSeatDefinition.FPVCameraLocationOffset"); }
	FVector& AttachRelativeLocationField() { return *GetNativePointerField<FVector*>(this, "FSaddlePassengerSeatDefinition.AttachRelativeLocation"); }
	FRotator& AttachRelativeRotationField() { return *GetNativePointerField<FRotator*>(this, "FSaddlePassengerSeatDefinition.AttachRelativeRotation"); }
	FRotator& DinoOverrideAttachRelativeRotationField() { return *GetNativePointerField<FRotator*>(this, "FSaddlePassengerSeatDefinition.DinoOverrideAttachRelativeRotation"); }
	UAnimSequence * CharacterAdditiveAnimField() { return GetNativePointerField<UAnimSequence *>(this, "FSaddlePassengerSeatDefinition.CharacterAdditiveAnim"); }
	float& CameraYawRangeField() { return *GetNativePointerField<float*>(this, "FSaddlePassengerSeatDefinition.CameraYawRange"); }
	float& AimOffsetYawFactorField() { return *GetNativePointerField<float*>(this, "FSaddlePassengerSeatDefinition.AimOffsetYawFactor"); }
	float& AimOffsetPitchFactorField() { return *GetNativePointerField<float*>(this, "FSaddlePassengerSeatDefinition.AimOffsetPitchFactor"); }
	float& AimOffsetYawBiasField() { return *GetNativePointerField<float*>(this, "FSaddlePassengerSeatDefinition.AimOffsetYawBias"); }
	float& AimOffsetPitchBiasField() { return *GetNativePointerField<float*>(this, "FSaddlePassengerSeatDefinition.AimOffsetPitchBias"); }
	float& ExtraHypoThermalInsulationField() { return *GetNativePointerField<float*>(this, "FSaddlePassengerSeatDefinition.ExtraHypoThermalInsulation"); }
	float& ExtraHyperThermalInsulationField() { return *GetNativePointerField<float*>(this, "FSaddlePassengerSeatDefinition.ExtraHyperThermalInsulation"); }
	float& TurretPitchMinField() { return *GetNativePointerField<float*>(this, "FSaddlePassengerSeatDefinition.TurretPitchMin"); }
	float& TurretPitchMaxField() { return *GetNativePointerField<float*>(this, "FSaddlePassengerSeatDefinition.TurretPitchMax"); }

	// Functions

	FSaddlePassengerSeatDefinition * operator=(const FSaddlePassengerSeatDefinition * __that) { return NativeCall<FSaddlePassengerSeatDefinition *, const FSaddlePassengerSeatDefinition *>(this, "FSaddlePassengerSeatDefinition.operator=", __that); }
};

