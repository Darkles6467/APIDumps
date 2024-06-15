#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureItemContainer_eventBPCanBeActivated_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructureItemContainer_eventBPCanBeActivated_Parms.ReturnValue"); }
};

