#pragma once

#include "BaseDeclarations.h"
struct Widget_eventGetInt32_Parms
{
	char __padding[0x4L];
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "Widget_eventGetInt32_Parms.ReturnValue"); }
};

