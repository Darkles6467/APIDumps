#pragma once

#include "BaseDeclarations.h"
struct Widget_eventGetMargin_Parms
{
	char __padding[0x10L];
	FMargin& ReturnValueField() { return *GetNativePointerField<FMargin*>(this, "Widget_eventGetMargin_Parms.ReturnValue"); }
};

