#pragma once

#include "BaseDeclarations.h"
#include "FSlateWidgetStyle.h"

struct FSplitterStyle : FSlateWidgetStyle
{
	char __padding[0xf0L];

	// Functions

	static const FSplitterStyle * GetDefault() { return NativeCall<const FSplitterStyle *>(nullptr, "FSplitterStyle.GetDefault"); }
	void GetResources(TArray<FSlateBrush const *> * OutBrushes) { NativeCall<void, TArray<FSlateBrush const *> *>(this, "FSplitterStyle.GetResources", OutBrushes); }
	const FName * GetTypeName(const FName * result) { return NativeCall<const FName *, const FName *>(this, "FSplitterStyle.GetTypeName", result); }
	FTableColumnHeaderStyle * SetHandleHighlightBrush(const FSlateBrush * InSortPrimaryDescendingImage) { return NativeCall<FTableColumnHeaderStyle *, const FSlateBrush *>(this, "FSplitterStyle.SetHandleHighlightBrush", InSortPrimaryDescendingImage); }
};

