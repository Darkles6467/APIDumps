#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBuffOverrideInventoryAccessInput_Parms
{
	char __padding[0x10L];
	bool& bInputPressedField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventBuffOverrideInventoryAccessInput_Parms.bInputPressed"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventBuffOverrideInventoryAccessInput_Parms.ReturnValue"); }
};

