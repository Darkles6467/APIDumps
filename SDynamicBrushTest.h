#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SDynamicBrushTest : SCompoundWidget
{
	char __padding[0x38L];
	FText& FilenameTextField() { return *GetNativePointerField<FText*>(this, "SDynamicBrushTest.FilenameText"); }
};

