#pragma once

#include "BaseDeclarations.h"
struct UserWidget_eventOnTouchGesture_Parms
{
	char __padding[0x150L];
	FGeometry& MyGeometryField() { return *GetNativePointerField<FGeometry*>(this, "UserWidget_eventOnTouchGesture_Parms.MyGeometry"); }
};

