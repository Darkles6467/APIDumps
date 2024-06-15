#pragma once

#include "BaseDeclarations.h"
#include "FSlateWidgetStyle.h"

struct FHeaderRowStyle : FSlateWidgetStyle
{
	char __padding[0xa18L];
	FTableColumnHeaderStyle& ColumnStyleField() { return *GetNativePointerField<FTableColumnHeaderStyle*>(this, "FHeaderRowStyle.ColumnStyle"); }
	FTableColumnHeaderStyle& LastColumnStyleField() { return *GetNativePointerField<FTableColumnHeaderStyle*>(this, "FHeaderRowStyle.LastColumnStyle"); }
	FSplitterStyle& ColumnSplitterStyleField() { return *GetNativePointerField<FSplitterStyle*>(this, "FHeaderRowStyle.ColumnSplitterStyle"); }
	FSlateColor& ForegroundColorField() { return *GetNativePointerField<FSlateColor*>(this, "FHeaderRowStyle.ForegroundColor"); }

	// Functions

	static const FHeaderRowStyle * GetDefault() { return NativeCall<const FHeaderRowStyle *>(nullptr, "FHeaderRowStyle.GetDefault"); }
	void GetResources(TArray<FSlateBrush const *> * OutBrushes) { NativeCall<void, TArray<FSlateBrush const *> *>(this, "FHeaderRowStyle.GetResources", OutBrushes); }
	const FName * GetTypeName(const FName * result) { return NativeCall<const FName *, const FName *>(this, "FHeaderRowStyle.GetTypeName", result); }
	FHeaderRowStyle * SetBackgroundBrush(const FSlateBrush * InBackgroundBrush) { return NativeCall<FHeaderRowStyle *, const FSlateBrush *>(this, "FHeaderRowStyle.SetBackgroundBrush", InBackgroundBrush); }
	FHeaderRowStyle * SetColumnSplitterStyle(const FSplitterStyle * InColumnSplitterStyle) { return NativeCall<FHeaderRowStyle *, const FSplitterStyle *>(this, "FHeaderRowStyle.SetColumnSplitterStyle", InColumnSplitterStyle); }
	FHeaderRowStyle * SetColumnStyle(const FTableColumnHeaderStyle * InColumnStyle) { return NativeCall<FHeaderRowStyle *, const FTableColumnHeaderStyle *>(this, "FHeaderRowStyle.SetColumnStyle", InColumnStyle); }
	FHeaderRowStyle * SetForegroundColor(const FSlateColor * InForegroundColor) { return NativeCall<FHeaderRowStyle *, const FSlateColor *>(this, "FHeaderRowStyle.SetForegroundColor", InForegroundColor); }
	FHeaderRowStyle * SetLastColumnStyle(const FTableColumnHeaderStyle * InLastColumnStyle) { return NativeCall<FHeaderRowStyle *, const FTableColumnHeaderStyle *>(this, "FHeaderRowStyle.SetLastColumnStyle", InLastColumnStyle); }
};

