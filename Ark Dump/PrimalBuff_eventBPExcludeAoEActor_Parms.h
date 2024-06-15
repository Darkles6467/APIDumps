#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPExcludeAoEActor_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventBPExcludeAoEActor_Parms.ReturnValue"); }
};

