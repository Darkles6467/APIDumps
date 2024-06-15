#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventSetupDelegateBindingsForChar_Parms
{
	char __padding[0x10L];
	bool& bDoBindField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Grappled_eventSetupDelegateBindingsForChar_Parms.bDoBind"); }
};

