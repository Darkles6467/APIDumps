#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPPreventUpload_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalItem_eventBPPreventUpload_Parms.ReturnValue"); }
};

