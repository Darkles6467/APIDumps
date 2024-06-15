#pragma once

#include "BaseDeclarations.h"
struct PrimalUI_eventOnKeyUpEvent_Parms
{
	char __padding[0x118L];
	FGeometry& MyGeometryField() { return *GetNativePointerField<FGeometry*>(this, "PrimalUI_eventOnKeyUpEvent_Parms.MyGeometry"); }
	FKeyboardEvent& InKeyboardEventField() { return *GetNativePointerField<FKeyboardEvent*>(this, "PrimalUI_eventOnKeyUpEvent_Parms.InKeyboardEvent"); }
};

