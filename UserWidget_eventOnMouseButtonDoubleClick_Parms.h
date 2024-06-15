#pragma once

#include "BaseDeclarations.h"
struct UserWidget_eventOnMouseButtonDoubleClick_Parms
{
	char __padding[0x150L];
	FGeometry& InMyGeometryField() { return *GetNativePointerField<FGeometry*>(this, "UserWidget_eventOnMouseButtonDoubleClick_Parms.InMyGeometry"); }
};

