#pragma once

#include "BaseDeclarations.h"
struct UserWidget_eventOnKeyboardFocusReceived_Parms
{
	char __padding[0xe0L];
	FGeometry& MyGeometryField() { return *GetNativePointerField<FGeometry*>(this, "UserWidget_eventOnKeyboardFocusReceived_Parms.MyGeometry"); }
	FKeyboardFocusEvent& InKeyboardFocusEventField() { return *GetNativePointerField<FKeyboardFocusEvent*>(this, "UserWidget_eventOnKeyboardFocusReceived_Parms.InKeyboardFocusEvent"); }
};

