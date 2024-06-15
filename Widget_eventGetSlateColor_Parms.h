#pragma once

#include "BaseDeclarations.h"
struct Widget_eventGetSlateColor_Parms
{
	char __padding[0x10L];
	FLinearColor& ReturnValueField() { return *GetNativePointerField<FLinearColor*>(this, "Widget_eventGetSlateColor_Parms.ReturnValue"); }
};

