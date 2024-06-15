#pragma once

#include "BaseDeclarations.h"
struct PrimalUI_eventOnMouseButtonDownEvent_Parms
{
	char __padding[0x150L];
	FGeometry& MyGeometryField() { return *GetNativePointerField<FGeometry*>(this, "PrimalUI_eventOnMouseButtonDownEvent_Parms.MyGeometry"); }
};

