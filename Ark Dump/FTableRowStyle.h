#pragma once

#include "BaseDeclarations.h"
#include "FSlateWidgetStyle.h"

struct FTableRowStyle : FSlateWidgetStyle
{
	char __padding[0x578L];
	FSlateColor& TextColorField() { return *GetNativePointerField<FSlateColor*>(this, "FTableRowStyle.TextColor"); }
	FSlateColor& SelectedTextColorField() { return *GetNativePointerField<FSlateColor*>(this, "FTableRowStyle.SelectedTextColor"); }

	// Functions

	static const FTableRowStyle * GetDefault() { return NativeCall<const FTableRowStyle *>(nullptr, "FTableRowStyle.GetDefault"); }
	void GetResources(TArray<FSlateBrush const *> * OutBrushes) { NativeCall<void, TArray<FSlateBrush const *> *>(this, "FTableRowStyle.GetResources", OutBrushes); }
	const FName * GetTypeName(const FName * result) { return NativeCall<const FName *, const FName *>(this, "FTableRowStyle.GetTypeName", result); }
	FTableColumnHeaderStyle * SetEvenRowBackgroundHoveredBrush(const FSlateBrush * InHoveredBrush) { return NativeCall<FTableColumnHeaderStyle *, const FSlateBrush *>(this, "FTableRowStyle.SetEvenRowBackgroundHoveredBrush", InHoveredBrush); }
	FTableRowStyle * SetOddRowBackgroundHoveredBrush(const FSlateBrush * InOddRowBackgroundHoveredBrush) { return NativeCall<FTableRowStyle *, const FSlateBrush *>(this, "FTableRowStyle.SetOddRowBackgroundHoveredBrush", InOddRowBackgroundHoveredBrush); }
	FTableRowStyle * SetSelectedTextColor(const FSlateColor * InSelectedTextColor) { return NativeCall<FTableRowStyle *, const FSlateColor *>(this, "FTableRowStyle.SetSelectedTextColor", InSelectedTextColor); }
	FTableRowStyle * SetTextColor(const FSlateColor * InTextColor) { return NativeCall<FTableRowStyle *, const FSlateColor *>(this, "FTableRowStyle.SetTextColor", InTextColor); }
	FTableRowStyle * operator=(const FTableRowStyle * __that) { return NativeCall<FTableRowStyle *, const FTableRowStyle *>(this, "FTableRowStyle.operator=", __that); }
};

