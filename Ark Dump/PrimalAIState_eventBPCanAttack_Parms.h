#pragma once

#include "BaseDeclarations.h"
struct PrimalAIState_eventBPCanAttack_Parms
{
	char __padding[0x18L];
	float& distanceField() { return *GetNativePointerField<float*>(this, "PrimalAIState_eventBPCanAttack_Parms.distance"); }
	float& attackRangeOffsetField() { return *GetNativePointerField<float*>(this, "PrimalAIState_eventBPCanAttack_Parms.attackRangeOffset"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalAIState_eventBPCanAttack_Parms.ReturnValue"); }
};

