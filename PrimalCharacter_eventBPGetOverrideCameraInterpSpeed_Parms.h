#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPGetOverrideCameraInterpSpeed_Parms
{
	char __padding[0x10L];
	float& DefaultTPVCameraSpeedInterpolationMultiplierField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPGetOverrideCameraInterpSpeed_Parms.DefaultTPVCameraSpeedInterpolationMultiplier"); }
	float& DefaultTPVOffsetInterpSpeedField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPGetOverrideCameraInterpSpeed_Parms.DefaultTPVOffsetInterpSpeed"); }
	float& TPVCameraSpeedInterpolationMultiplierField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPGetOverrideCameraInterpSpeed_Parms.TPVCameraSpeedInterpolationMultiplier"); }
	float& TPVOffsetInterpSpeedField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPGetOverrideCameraInterpSpeed_Parms.TPVOffsetInterpSpeed"); }
};

