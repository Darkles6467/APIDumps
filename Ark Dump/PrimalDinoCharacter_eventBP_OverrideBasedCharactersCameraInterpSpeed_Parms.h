#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBP_OverrideBasedCharactersCameraInterpSpeed_Parms
{
	char __padding[0x18L];
	float& DefaultTPVCameraSpeedInterpMultiplierField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBP_OverrideBasedCharactersCameraInterpSpeed_Parms.DefaultTPVCameraSpeedInterpMultiplier"); }
	float& DefaultTPVOffsetInterpSpeedField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBP_OverrideBasedCharactersCameraInterpSpeed_Parms.DefaultTPVOffsetInterpSpeed"); }
	float& TPVCameraSpeedInterpMultiplierField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBP_OverrideBasedCharactersCameraInterpSpeed_Parms.TPVCameraSpeedInterpMultiplier"); }
	float& TPVOffsetInterpSpeedField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBP_OverrideBasedCharactersCameraInterpSpeed_Parms.TPVOffsetInterpSpeed"); }
};

