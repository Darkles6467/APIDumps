#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBP_ModifyCharacterFOV_Parms
{
	char __padding[0x8L];
	float& inFOVField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBP_ModifyCharacterFOV_Parms.inFOV"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBP_ModifyCharacterFOV_Parms.ReturnValue"); }
};

