#pragma once

#include "BaseDeclarations.h"
struct Widget_eventGetFloat_Parms
{
	char __padding[0x4L];
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "Widget_eventGetFloat_Parms.ReturnValue"); }
};

