#pragma once

#include "BaseDeclarations.h"
struct FArrangedWidget
{
	char __padding[0x48L];
	FGeometry& GeometryField() { return *GetNativePointerField<FGeometry*>(this, "FArrangedWidget.Geometry"); }

	// Functions

};

