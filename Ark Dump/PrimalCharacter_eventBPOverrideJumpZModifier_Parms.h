#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPOverrideJumpZModifier_Parms
{
	char __padding[0x8L];
	float& InJumpZModifierField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPOverrideJumpZModifier_Parms.InJumpZModifier"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPOverrideJumpZModifier_Parms.ReturnValue"); }
};

