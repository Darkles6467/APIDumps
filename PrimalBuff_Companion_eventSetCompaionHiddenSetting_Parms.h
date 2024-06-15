#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Companion_eventSetCompaionHiddenSetting_Parms
{
	char __padding[0x1L];
	bool& isHiddenField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Companion_eventSetCompaionHiddenSetting_Parms.isHidden"); }
};

