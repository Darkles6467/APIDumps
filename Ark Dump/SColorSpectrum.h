#pragma once

#include "BaseDeclarations.h"
#include "SLeafWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SColorSpectrum : SLeafWidget
{
	char __padding[0x48L];
	TAttribute<FLinearColor>& SelectedColorField() { return *GetNativePointerField<TAttribute<FLinearColor>*>(this, "SColorSpectrum.SelectedColor"); }
};

