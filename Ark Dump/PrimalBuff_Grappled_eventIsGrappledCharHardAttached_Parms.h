#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventIsGrappledCharHardAttached_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Grappled_eventIsGrappledCharHardAttached_Parms.ReturnValue"); }
};

