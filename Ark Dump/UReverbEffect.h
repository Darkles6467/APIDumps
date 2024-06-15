#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UReverbEffect : UObject
{
	char __padding[0x30L];
	float& DensityField() { return *GetNativePointerField<float*>(this, "UReverbEffect.Density"); }
	float& DiffusionField() { return *GetNativePointerField<float*>(this, "UReverbEffect.Diffusion"); }
	float& GainField() { return *GetNativePointerField<float*>(this, "UReverbEffect.Gain"); }
	float& GainHFField() { return *GetNativePointerField<float*>(this, "UReverbEffect.GainHF"); }
	float& DecayTimeField() { return *GetNativePointerField<float*>(this, "UReverbEffect.DecayTime"); }
	float& DecayHFRatioField() { return *GetNativePointerField<float*>(this, "UReverbEffect.DecayHFRatio"); }
	float& ReflectionsGainField() { return *GetNativePointerField<float*>(this, "UReverbEffect.ReflectionsGain"); }
	float& ReflectionsDelayField() { return *GetNativePointerField<float*>(this, "UReverbEffect.ReflectionsDelay"); }
	float& LateGainField() { return *GetNativePointerField<float*>(this, "UReverbEffect.LateGain"); }
	float& LateDelayField() { return *GetNativePointerField<float*>(this, "UReverbEffect.LateDelay"); }
	float& AirAbsorptionGainHFField() { return *GetNativePointerField<float*>(this, "UReverbEffect.AirAbsorptionGainHF"); }
	float& RoomRolloffFactorField() { return *GetNativePointerField<float*>(this, "UReverbEffect.RoomRolloffFactor"); }

	// Functions

};

