#pragma once

#include "BaseDeclarations.h"
struct FCameraShakeInstance
{
	char __padding[0xa0L];
	const UCameraShake * SourceShakeField() { return GetNativePointerField<const UCameraShake *>(this, "FCameraShakeInstance.SourceShake"); }
	FName& SourceShakeNameField() { return *GetNativePointerField<FName*>(this, "FCameraShakeInstance.SourceShakeName"); }
	float& OscillatorTimeRemainingField() { return *GetNativePointerField<float*>(this, "FCameraShakeInstance.OscillatorTimeRemaining"); }
	float& CurrentBlendInTimeField() { return *GetNativePointerField<float*>(this, "FCameraShakeInstance.CurrentBlendInTime"); }
	float& CurrentBlendOutTimeField() { return *GetNativePointerField<float*>(this, "FCameraShakeInstance.CurrentBlendOutTime"); }
	FVector& LocSinOffsetField() { return *GetNativePointerField<FVector*>(this, "FCameraShakeInstance.LocSinOffset"); }
	FVector& RotSinOffsetField() { return *GetNativePointerField<FVector*>(this, "FCameraShakeInstance.RotSinOffset"); }
	float& FOVSinOffsetField() { return *GetNativePointerField<float*>(this, "FCameraShakeInstance.FOVSinOffset"); }
	float& ScaleField() { return *GetNativePointerField<float*>(this, "FCameraShakeInstance.Scale"); }
	float& SpeedField() { return *GetNativePointerField<float*>(this, "FCameraShakeInstance.Speed"); }
	UCameraAnimInst * AnimInstField() { return GetNativePointerField<UCameraAnimInst *>(this, "FCameraShakeInstance.AnimInst"); }
	TEnumAsByte<enum ECameraAnimPlaySpace::Type>& PlaySpaceField() { return *GetNativePointerField<TEnumAsByte<enum ECameraAnimPlaySpace::Type>*>(this, "FCameraShakeInstance.PlaySpace"); }
	FMatrix& UserPlaySpaceMatrixField() { return *GetNativePointerField<FMatrix*>(this, "FCameraShakeInstance.UserPlaySpaceMatrix"); }

	// Functions

};

