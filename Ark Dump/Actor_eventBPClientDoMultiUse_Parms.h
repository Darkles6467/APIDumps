#pragma once

#include "BaseDeclarations.h"
struct Actor_eventBPClientDoMultiUse_Parms
{
	char __padding[0x10L];
	int& ClientUseIndexField() { return *GetNativePointerField<int*>(this, "Actor_eventBPClientDoMultiUse_Parms.ClientUseIndex"); }
};

