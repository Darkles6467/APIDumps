#pragma once

#include "BaseDeclarations.h"
struct Widget_eventGetMouseCursor_Parms
{
	char __padding[0x1L];
	TEnumAsByte<enum EMouseCursor::Type>& ReturnValueField() { return *GetNativePointerField<TEnumAsByte<enum EMouseCursor::Type>*>(this, "Widget_eventGetMouseCursor_Parms.ReturnValue"); }
};

