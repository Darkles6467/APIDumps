#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventDoOverrideMountedAirControl_Parms
{
	char __padding[0x8L];
	float& AirControlInField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventDoOverrideMountedAirControl_Parms.AirControlIn"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventDoOverrideMountedAirControl_Parms.ReturnValue"); }
};

