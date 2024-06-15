#pragma once

#include "BaseDeclarations.h"
struct Actor_eventAllowGrappling_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "Actor_eventAllowGrappling_Parms.ReturnValue"); }
};

