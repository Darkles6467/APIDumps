#pragma once

#include "BaseDeclarations.h"
struct FAudioEQEffect
{
	char __padding[0x28L];
	long double& RootTimeField() { return *GetNativePointerField<long double*>(this, "FAudioEQEffect.RootTime"); }
	float& HFFrequencyField() { return *GetNativePointerField<float*>(this, "FAudioEQEffect.HFFrequency"); }
	float& HFGainField() { return *GetNativePointerField<float*>(this, "FAudioEQEffect.HFGain"); }
	float& MFCutoffFrequencyField() { return *GetNativePointerField<float*>(this, "FAudioEQEffect.MFCutoffFrequency"); }
	float& MFBandwidthField() { return *GetNativePointerField<float*>(this, "FAudioEQEffect.MFBandwidth"); }
	float& MFGainField() { return *GetNativePointerField<float*>(this, "FAudioEQEffect.MFGain"); }
	float& LFFrequencyField() { return *GetNativePointerField<float*>(this, "FAudioEQEffect.LFFrequency"); }
	float& LFGainField() { return *GetNativePointerField<float*>(this, "FAudioEQEffect.LFGain"); }

	// Functions

	void ClampValues() { NativeCall<void>(this, "FAudioEQEffect.ClampValues"); }
};

