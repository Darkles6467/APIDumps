#pragma once

#include "BaseDeclarations.h"
struct Widget_eventGetBool_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "Widget_eventGetBool_Parms.ReturnValue"); }
};

