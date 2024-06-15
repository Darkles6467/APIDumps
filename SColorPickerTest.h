#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SColorPickerTest : SCompoundWidget
{
	char __padding[0x30L];
	TAttribute<FLinearColor>& ColorField() { return *GetNativePointerField<TAttribute<FLinearColor>*>(this, "SColorPickerTest.Color"); }
	TSharedPtr<STextBlock,0>& OutputTextBlockField() { return *GetNativePointerField<TSharedPtr<STextBlock,0>*>(this, "SColorPickerTest.OutputTextBlock"); }
};

