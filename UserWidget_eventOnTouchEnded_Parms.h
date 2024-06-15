#pragma once

#include "BaseDeclarations.h"
struct UserWidget_eventOnTouchEnded_Parms
{
	char __padding[0x150L];
	FGeometry& MyGeometryField() { return *GetNativePointerField<FGeometry*>(this, "UserWidget_eventOnTouchEnded_Parms.MyGeometry"); }
};

