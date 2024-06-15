#pragma once

#include "BaseDeclarations.h"
struct UserWidget_eventOnPreviewMouseButtonDown_Parms
{
	char __padding[0x150L];
	FGeometry& MyGeometryField() { return *GetNativePointerField<FGeometry*>(this, "UserWidget_eventOnPreviewMouseButtonDown_Parms.MyGeometry"); }
};

