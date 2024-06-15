#pragma once

#include "BaseDeclarations.h"
struct UserWidget_eventOnVisibilityChangedEvent_Parms
{
	char __padding[0x1L];
	TEnumAsByte<enum ESlateVisibility::Type>& VisibilityField() { return *GetNativePointerField<TEnumAsByte<enum ESlateVisibility::Type>*>(this, "UserWidget_eventOnVisibilityChangedEvent_Parms.Visibility"); }
};

