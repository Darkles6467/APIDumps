#pragma once

#include "BaseDeclarations.h"
#include "FSlateWidgetStyle.h"

struct FSearchBoxStyle : FSlateWidgetStyle
{
	char __padding[0x710L];
	FEditableTextBoxStyle& TextBoxStyleField() { return *GetNativePointerField<FEditableTextBoxStyle*>(this, "FSearchBoxStyle.TextBoxStyle"); }
	FSlateFontInfo& ActiveFontInfoField() { return *GetNativePointerField<FSlateFontInfo*>(this, "FSearchBoxStyle.ActiveFontInfo"); }

	// Functions

	void GetResources(TArray<FSlateBrush const *> * OutBrushes) { NativeCall<void, TArray<FSlateBrush const *> *>(this, "FSearchBoxStyle.GetResources", OutBrushes); }
	const FName * GetTypeName(const FName * result) { return NativeCall<const FName *, const FName *>(this, "FSearchBoxStyle.GetTypeName", result); }
	FSearchBoxStyle * SetClearImage(const FSlateBrush * InClearImage) { return NativeCall<FSearchBoxStyle *, const FSlateBrush *>(this, "FSearchBoxStyle.SetClearImage", InClearImage); }
	FSearchBoxStyle * SetDownArrowImage(const FSlateBrush * InDownArrowImage) { return NativeCall<FSearchBoxStyle *, const FSlateBrush *>(this, "FSearchBoxStyle.SetDownArrowImage", InDownArrowImage); }
	FSearchBoxStyle * SetGlassImage(const FSlateBrush * InGlassImage) { return NativeCall<FSearchBoxStyle *, const FSlateBrush *>(this, "FSearchBoxStyle.SetGlassImage", InGlassImage); }
	FSearchBoxStyle * SetTextBoxStyle(const FEditableTextBoxStyle * InTextBoxStyle) { return NativeCall<FSearchBoxStyle *, const FEditableTextBoxStyle *>(this, "FSearchBoxStyle.SetTextBoxStyle", InTextBoxStyle); }
	FSearchBoxStyle * SetUpArrowImage(const FSlateBrush * InUpArrowImage) { return NativeCall<FSearchBoxStyle *, const FSlateBrush *>(this, "FSearchBoxStyle.SetUpArrowImage", InUpArrowImage); }
	FSearchBoxStyle * operator=(const FSearchBoxStyle * __that) { return NativeCall<FSearchBoxStyle *, const FSearchBoxStyle *>(this, "FSearchBoxStyle.operator=", __that); }
};

