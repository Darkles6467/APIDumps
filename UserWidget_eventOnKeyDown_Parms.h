#pragma once

#include "BaseDeclarations.h"
struct UserWidget_eventOnKeyDown_Parms
{
	char __padding[0x118L];
	FGeometry& MyGeometryField() { return *GetNativePointerField<FGeometry*>(this, "UserWidget_eventOnKeyDown_Parms.MyGeometry"); }
	FKeyboardEvent& InKeyboardEventField() { return *GetNativePointerField<FKeyboardEvent*>(this, "UserWidget_eventOnKeyDown_Parms.InKeyboardEvent"); }

	// Functions

};

