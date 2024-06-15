#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPAllowSwitchToVariant_Parms
{
	char __padding[0x8L];
	int& VariantIndexField() { return *GetNativePointerField<int*>(this, "PrimalStructure_eventBPAllowSwitchToVariant_Parms.VariantIndex"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPAllowSwitchToVariant_Parms.ReturnValue"); }
};

