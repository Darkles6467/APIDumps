#pragma once

#include "BaseDeclarations.h"
struct UserWidget_eventOnKeyboardFocusLost_Parms
{
	char __padding[0x8L];
	FKeyboardFocusEvent& InKeyboardFocusEventField() { return *GetNativePointerField<FKeyboardFocusEvent*>(this, "UserWidget_eventOnKeyboardFocusLost_Parms.InKeyboardFocusEvent"); }
};

