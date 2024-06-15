#pragma once

#include "BaseDeclarations.h"
struct FDistanceDatum
{
	char __padding[0x14L];
	float& FadeInDistanceStartField() { return *GetNativePointerField<float*>(this, "FDistanceDatum.FadeInDistanceStart"); }
	float& FadeInDistanceEndField() { return *GetNativePointerField<float*>(this, "FDistanceDatum.FadeInDistanceEnd"); }
	float& FadeOutDistanceStartField() { return *GetNativePointerField<float*>(this, "FDistanceDatum.FadeOutDistanceStart"); }
	float& FadeOutDistanceEndField() { return *GetNativePointerField<float*>(this, "FDistanceDatum.FadeOutDistanceEnd"); }
	float& VolumeField() { return *GetNativePointerField<float*>(this, "FDistanceDatum.Volume"); }

	// Functions

};

