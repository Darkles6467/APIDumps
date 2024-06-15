#pragma once

#include "BaseDeclarations.h"
struct FAudioReverbEffect
{
	char __padding[0x40L];
	long double& TimeField() { return *GetNativePointerField<long double*>(this, "FAudioReverbEffect.Time"); }
	float& VolumeField() { return *GetNativePointerField<float*>(this, "FAudioReverbEffect.Volume"); }
	float& DensityField() { return *GetNativePointerField<float*>(this, "FAudioReverbEffect.Density"); }
	float& DiffusionField() { return *GetNativePointerField<float*>(this, "FAudioReverbEffect.Diffusion"); }
	float& GainField() { return *GetNativePointerField<float*>(this, "FAudioReverbEffect.Gain"); }
	float& GainHFField() { return *GetNativePointerField<float*>(this, "FAudioReverbEffect.GainHF"); }
	float& DecayTimeField() { return *GetNativePointerField<float*>(this, "FAudioReverbEffect.DecayTime"); }
	float& DecayHFRatioField() { return *GetNativePointerField<float*>(this, "FAudioReverbEffect.DecayHFRatio"); }
	float& ReflectionsGainField() { return *GetNativePointerField<float*>(this, "FAudioReverbEffect.ReflectionsGain"); }
	float& ReflectionsDelayField() { return *GetNativePointerField<float*>(this, "FAudioReverbEffect.ReflectionsDelay"); }
	float& LateGainField() { return *GetNativePointerField<float*>(this, "FAudioReverbEffect.LateGain"); }
	float& LateDelayField() { return *GetNativePointerField<float*>(this, "FAudioReverbEffect.LateDelay"); }
	float& AirAbsorptionGainHFField() { return *GetNativePointerField<float*>(this, "FAudioReverbEffect.AirAbsorptionGainHF"); }
	float& RoomRolloffFactorField() { return *GetNativePointerField<float*>(this, "FAudioReverbEffect.RoomRolloffFactor"); }

	// Functions

	void Interpolate(float InterpValue, const FAudioReverbEffect * Start, const FAudioReverbEffect * End) { NativeCall<void, float, const FAudioReverbEffect *, const FAudioReverbEffect *>(this, "FAudioReverbEffect.Interpolate", InterpValue, Start, End); }
};

