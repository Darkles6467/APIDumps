#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPModifyArmorValue_Parms
{
	char __padding[0x10L];
	float& BaseArmorValueField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBPModifyArmorValue_Parms.BaseArmorValue"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBPModifyArmorValue_Parms.ReturnValue"); }
};

