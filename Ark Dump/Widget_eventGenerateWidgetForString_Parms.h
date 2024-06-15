#pragma once

#include "BaseDeclarations.h"
struct Widget_eventGenerateWidgetForString_Parms
{
	char __padding[0x18L];
	FString& ItemField() { return *GetNativePointerField<FString*>(this, "Widget_eventGenerateWidgetForString_Parms.Item"); }
};

