#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UCameraShake : UObject
{
	char __padding[0x88L];
	float& OscillationDurationField() { return *GetNativePointerField<float*>(this, "UCameraShake.OscillationDuration"); }
	float& OscillationBlendInTimeField() { return *GetNativePointerField<float*>(this, "UCameraShake.OscillationBlendInTime"); }
	float& OscillationBlendOutTimeField() { return *GetNativePointerField<float*>(this, "UCameraShake.OscillationBlendOutTime"); }
	FROscillator& RotOscillationField() { return *GetNativePointerField<FROscillator*>(this, "UCameraShake.RotOscillation"); }
	FVOscillator& LocOscillationField() { return *GetNativePointerField<FVOscillator*>(this, "UCameraShake.LocOscillation"); }
	FFOscillator& FOVOscillationField() { return *GetNativePointerField<FFOscillator*>(this, "UCameraShake.FOVOscillation"); }
	UCameraAnim * AnimField() { return GetNativePointerField<UCameraAnim *>(this, "UCameraShake.Anim"); }
	float& AnimPlayRateField() { return *GetNativePointerField<float*>(this, "UCameraShake.AnimPlayRate"); }
	float& AnimScaleField() { return *GetNativePointerField<float*>(this, "UCameraShake.AnimScale"); }
	float& AnimBlendInTimeField() { return *GetNativePointerField<float*>(this, "UCameraShake.AnimBlendInTime"); }
	float& AnimBlendOutTimeField() { return *GetNativePointerField<float*>(this, "UCameraShake.AnimBlendOutTime"); }
	float& RandomAnimSegmentDurationField() { return *GetNativePointerField<float*>(this, "UCameraShake.RandomAnimSegmentDuration"); }

	// Functions

	float GetLocOscillationMagnitude() { return NativeCall<float>(this, "UCameraShake.GetLocOscillationMagnitude"); }
	float GetRotOscillationMagnitude() { return NativeCall<float>(this, "UCameraShake.GetRotOscillationMagnitude"); }
};

