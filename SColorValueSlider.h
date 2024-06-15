#pragma once

#include "BaseDeclarations.h"
#include "SLeafWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SColorValueSlider : SLeafWidget
{
	char __padding[0x40L];
	TAttribute<FLinearColor>& SelectedColorField() { return *GetNativePointerField<TAttribute<FLinearColor>*>(this, "SColorValueSlider.SelectedColor"); }
};

