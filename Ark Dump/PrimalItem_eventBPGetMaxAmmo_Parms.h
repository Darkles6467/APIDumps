#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPGetMaxAmmo_Parms
{
	char __padding[0x4L];
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "PrimalItem_eventBPGetMaxAmmo_Parms.ReturnValue"); }
};

