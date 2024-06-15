#pragma once

#include "BaseDeclarations.h"
struct UserWidget_eventOnTouchMoved_Parms
{
	char __padding[0x150L];
	FGeometry& MyGeometryField() { return *GetNativePointerField<FGeometry*>(this, "UserWidget_eventOnTouchMoved_Parms.MyGeometry"); }
};

