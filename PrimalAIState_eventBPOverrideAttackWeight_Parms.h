#pragma once

#include "BaseDeclarations.h"
struct PrimalAIState_eventBPOverrideAttackWeight_Parms
{
	char __padding[0x20L];
	float& inputWeightField() { return *GetNativePointerField<float*>(this, "PrimalAIState_eventBPOverrideAttackWeight_Parms.inputWeight"); }
	float& distanceField() { return *GetNativePointerField<float*>(this, "PrimalAIState_eventBPOverrideAttackWeight_Parms.distance"); }
	float& attackRangeOffsetField() { return *GetNativePointerField<float*>(this, "PrimalAIState_eventBPOverrideAttackWeight_Parms.attackRangeOffset"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalAIState_eventBPOverrideAttackWeight_Parms.ReturnValue"); }
};

