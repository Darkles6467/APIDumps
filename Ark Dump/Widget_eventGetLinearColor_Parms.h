#pragma once

#include "BaseDeclarations.h"
struct Widget_eventGetLinearColor_Parms
{
	char __padding[0x10L];
	FLinearColor& ReturnValueField() { return *GetNativePointerField<FLinearColor*>(this, "Widget_eventGetLinearColor_Parms.ReturnValue"); }
};

