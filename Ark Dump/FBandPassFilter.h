#pragma once

#include "BaseDeclarations.h"
struct FBandPassFilter
{
	char __padding[0x24L];
	float& Coefficient0Field() { return *GetNativePointerField<float*>(this, "FBandPassFilter.Coefficient0"); }
	float& Coefficient1Field() { return *GetNativePointerField<float*>(this, "FBandPassFilter.Coefficient1"); }
	float& Coefficient2Field() { return *GetNativePointerField<float*>(this, "FBandPassFilter.Coefficient2"); }
	float& Coefficient3Field() { return *GetNativePointerField<float*>(this, "FBandPassFilter.Coefficient3"); }
	float& Coefficient4Field() { return *GetNativePointerField<float*>(this, "FBandPassFilter.Coefficient4"); }
	float& Z0Field() { return *GetNativePointerField<float*>(this, "FBandPassFilter.Z0"); }
	float& Z1Field() { return *GetNativePointerField<float*>(this, "FBandPassFilter.Z1"); }
	float& Y0Field() { return *GetNativePointerField<float*>(this, "FBandPassFilter.Y0"); }
	float& Y1Field() { return *GetNativePointerField<float*>(this, "FBandPassFilter.Y1"); }

	// Functions

	void Initialize(float FrequencyHz, float BandwidthHz, float SampleRate) { NativeCall<void, float, float, float>(this, "FBandPassFilter.Initialize", FrequencyHz, BandwidthHz, SampleRate); }
};

