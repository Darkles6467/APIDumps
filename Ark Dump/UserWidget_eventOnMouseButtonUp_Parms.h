#pragma once

#include "BaseDeclarations.h"
struct UserWidget_eventOnMouseButtonUp_Parms
{
	char __padding[0x150L];
	FGeometry& MyGeometryField() { return *GetNativePointerField<FGeometry*>(this, "UserWidget_eventOnMouseButtonUp_Parms.MyGeometry"); }
};

