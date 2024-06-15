#pragma once

#include "BaseDeclarations.h"
struct UserWidget_eventOnKeyUp_Parms
{
	char __padding[0x118L];
	FGeometry& MyGeometryField() { return *GetNativePointerField<FGeometry*>(this, "UserWidget_eventOnKeyUp_Parms.MyGeometry"); }
	FKeyboardEvent& InKeyboardEventField() { return *GetNativePointerField<FKeyboardEvent*>(this, "UserWidget_eventOnKeyUp_Parms.InKeyboardEvent"); }

	// Functions

};

