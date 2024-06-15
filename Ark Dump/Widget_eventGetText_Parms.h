#pragma once

#include "BaseDeclarations.h"
struct Widget_eventGetText_Parms
{
	char __padding[0x28L];
	FText& ReturnValueField() { return *GetNativePointerField<FText*>(this, "Widget_eventGetText_Parms.ReturnValue"); }
};

