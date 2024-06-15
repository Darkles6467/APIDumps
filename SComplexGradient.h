#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SComplexGradient : SCompoundWidget
{
	char __padding[0x28L];
	TAttribute<TArray<FLinearColor> >& GradientColorsField() { return *GetNativePointerField<TAttribute<TArray<FLinearColor> >*>(this, "SComplexGradient.GradientColors"); }
	bool& bHasAlphaBackgroundField() { return *GetNativePointerField<bool*>(this, "SComplexGradient.bHasAlphaBackground"); }
	EOrientation& OrientationField() { return *GetNativePointerField<EOrientation*>(this, "SComplexGradient.Orientation"); }
};

