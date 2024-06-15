#pragma once

#include "BaseDeclarations.h"
struct Widget_eventGetSlateVisibility_Parms
{
	char __padding[0x1L];
	TEnumAsByte<enum ESlateVisibility::Type>& ReturnValueField() { return *GetNativePointerField<TEnumAsByte<enum ESlateVisibility::Type>*>(this, "Widget_eventGetSlateVisibility_Parms.ReturnValue"); }
};

