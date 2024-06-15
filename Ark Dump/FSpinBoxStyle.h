#pragma once

#include "BaseDeclarations.h"
#include "FSlateWidgetStyle.h"

struct FSpinBoxStyle : FSlateWidgetStyle
{
	char __padding[0x290L];
	FSlateColor& ForegroundColorField() { return *GetNativePointerField<FSlateColor*>(this, "FSpinBoxStyle.ForegroundColor"); }
	FMargin& TextPaddingField() { return *GetNativePointerField<FMargin*>(this, "FSpinBoxStyle.TextPadding"); }

	// Functions

	static const FSpinBoxStyle * GetDefault() { return NativeCall<const FSpinBoxStyle *>(nullptr, "FSpinBoxStyle.GetDefault"); }
	void GetResources(TArray<FSlateBrush const *> * OutBrushes) { NativeCall<void, TArray<FSlateBrush const *> *>(this, "FSpinBoxStyle.GetResources", OutBrushes); }
	const FName * GetTypeName(const FName * result) { return NativeCall<const FName *, const FName *>(this, "FSpinBoxStyle.GetTypeName", result); }
	FSpinBoxStyle * SetForegroundColor(const FSlateColor * InForegroundColor) { return NativeCall<FSpinBoxStyle *, const FSlateColor *>(this, "FSpinBoxStyle.SetForegroundColor", InForegroundColor); }
	FTableColumnHeaderStyle * SetArrowsImage(const FSlateBrush * InNormalBrush) { return NativeCall<FTableColumnHeaderStyle *, const FSlateBrush *>(this, "FSpinBoxStyle.SetArrowsImage", InNormalBrush); }
	FSpinBoxStyle * SetTextPadding(const FMargin * InTextPadding) { return NativeCall<FSpinBoxStyle *, const FMargin *>(this, "FSpinBoxStyle.SetTextPadding", InTextPadding); }
	FSpinBoxStyle * operator=(const FSpinBoxStyle * __that) { return NativeCall<FSpinBoxStyle *, const FSpinBoxStyle *>(this, "FSpinBoxStyle.operator=", __that); }
};

