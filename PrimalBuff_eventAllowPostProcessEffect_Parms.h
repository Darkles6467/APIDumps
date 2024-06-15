#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventAllowPostProcessEffect_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventAllowPostProcessEffect_Parms.ReturnValue"); }
};

