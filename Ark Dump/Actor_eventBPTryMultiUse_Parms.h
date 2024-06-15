#pragma once

#include "BaseDeclarations.h"
struct Actor_eventBPTryMultiUse_Parms
{
	char __padding[0x10L];
	int& UseIndexField() { return *GetNativePointerField<int*>(this, "Actor_eventBPTryMultiUse_Parms.UseIndex"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "Actor_eventBPTryMultiUse_Parms.ReturnValue"); }
};

