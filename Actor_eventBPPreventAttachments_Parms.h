#pragma once

#include "BaseDeclarations.h"
struct Actor_eventBPPreventAttachments_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "Actor_eventBPPreventAttachments_Parms.ReturnValue"); }
};

