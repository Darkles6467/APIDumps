#pragma once

#include "BaseDeclarations.h"
struct FRepRootMotionMontage
{
	char __padding[0x40L];
	UAnimMontage * AnimMontageField() { return GetNativePointerField<UAnimMontage *>(this, "FRepRootMotionMontage.AnimMontage"); }
	float& PositionField() { return *GetNativePointerField<float*>(this, "FRepRootMotionMontage.Position"); }
	FVector_NetQuantize10& LocationField() { return *GetNativePointerField<FVector_NetQuantize10*>(this, "FRepRootMotionMontage.Location"); }
	FRotator& RotationField() { return *GetNativePointerField<FRotator*>(this, "FRepRootMotionMontage.Rotation"); }
	FName& MovementBaseBoneNameField() { return *GetNativePointerField<FName*>(this, "FRepRootMotionMontage.MovementBaseBoneName"); }
	bool& bRelativePositionField() { return *GetNativePointerField<bool*>(this, "FRepRootMotionMontage.bRelativePosition"); }
	bool& bRelativeRotationField() { return *GetNativePointerField<bool*>(this, "FRepRootMotionMontage.bRelativeRotation"); }

	// Functions

};

