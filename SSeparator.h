#pragma once

#include "BaseDeclarations.h"
#include "SBorder.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SSeparator : SBorder
{
	char __padding[0x8L];
	EOrientation& OrientationField() { return *GetNativePointerField<EOrientation*>(this, "SSeparator.Orientation"); }
	float& ThicknessField() { return *GetNativePointerField<float*>(this, "SSeparator.Thickness"); }
};

