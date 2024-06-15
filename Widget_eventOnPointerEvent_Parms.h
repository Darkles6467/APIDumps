#pragma once

#include "BaseDeclarations.h"
struct Widget_eventOnPointerEvent_Parms
{
	char __padding[0x150L];
	FGeometry& MyGeometryField() { return *GetNativePointerField<FGeometry*>(this, "Widget_eventOnPointerEvent_Parms.MyGeometry"); }
};

