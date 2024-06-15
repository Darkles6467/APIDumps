#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct FVisualizeRTWidget : SCompoundWidget
{
	char __padding[0x20L];
	TArray<TSharedPtr<FRTInfo,0>>& ListItemsField() { return *GetNativePointerField<TArray<TSharedPtr<FRTInfo,0>>*>(this, "FVisualizeRTWidget.ListItems"); }
	FRTInfo * SelectedField() { return GetNativePointerField<FRTInfo *>(this, "FVisualizeRTWidget.Selected"); }
};

