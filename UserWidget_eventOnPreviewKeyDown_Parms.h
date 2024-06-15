#pragma once

#include "BaseDeclarations.h"
struct UserWidget_eventOnPreviewKeyDown_Parms
{
	char __padding[0x118L];
	FGeometry& MyGeometryField() { return *GetNativePointerField<FGeometry*>(this, "UserWidget_eventOnPreviewKeyDown_Parms.MyGeometry"); }
	FKeyboardEvent& InKeyboardEventField() { return *GetNativePointerField<FKeyboardEvent*>(this, "UserWidget_eventOnPreviewKeyDown_Parms.InKeyboardEvent"); }

	// Functions

};

