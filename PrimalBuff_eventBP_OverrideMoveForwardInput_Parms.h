#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBP_OverrideMoveForwardInput_Parms
{
	char __padding[0x8L];
	float& CurrentInputField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBP_OverrideMoveForwardInput_Parms.CurrentInput"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBP_OverrideMoveForwardInput_Parms.ReturnValue"); }
};

