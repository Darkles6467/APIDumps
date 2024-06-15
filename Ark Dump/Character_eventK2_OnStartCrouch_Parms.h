#pragma once

#include "BaseDeclarations.h"
struct Character_eventK2_OnStartCrouch_Parms
{
	char __padding[0x8L];
	float& HalfHeightAdjustField() { return *GetNativePointerField<float*>(this, "Character_eventK2_OnStartCrouch_Parms.HalfHeightAdjust"); }
	float& ScaledHalfHeightAdjustField() { return *GetNativePointerField<float*>(this, "Character_eventK2_OnStartCrouch_Parms.ScaledHalfHeightAdjust"); }
};

