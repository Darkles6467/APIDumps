#pragma once

#include "BaseDeclarations.h"
struct UserWidget_eventOnMouseEnter_Parms
{
	char __padding[0xb0L];
	FGeometry& MyGeometryField() { return *GetNativePointerField<FGeometry*>(this, "UserWidget_eventOnMouseEnter_Parms.MyGeometry"); }
};

