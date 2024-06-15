#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventModifyTetherTensionLerpValue_Parms
{
	char __padding[0x8L];
	float& CurrentLerpValueField() { return *GetNativePointerField<float*>(this, "PrimalBuff_Grappled_eventModifyTetherTensionLerpValue_Parms.CurrentLerpValue"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalBuff_Grappled_eventModifyTetherTensionLerpValue_Parms.ReturnValue"); }
};

