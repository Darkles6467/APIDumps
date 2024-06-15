#pragma once

#include "BaseDeclarations.h"
struct PrimalUI_eventOnKeyDownEvent_Parms
{
	char __padding[0x118L];
	FGeometry& MyGeometryField() { return *GetNativePointerField<FGeometry*>(this, "PrimalUI_eventOnKeyDownEvent_Parms.MyGeometry"); }
	FKeyboardEvent& InKeyboardEventField() { return *GetNativePointerField<FKeyboardEvent*>(this, "PrimalUI_eventOnKeyDownEvent_Parms.InKeyboardEvent"); }
};

