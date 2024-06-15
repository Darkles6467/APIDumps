#pragma once

#include "BaseDeclarations.h"
#include "FSlateWidgetStyle.h"

struct FEditableTextBoxStyle : FSlateWidgetStyle
{
	char __padding[0x508L];
	FMargin& PaddingField() { return *GetNativePointerField<FMargin*>(this, "FEditableTextBoxStyle.Padding"); }
	FSlateFontInfo& FontField() { return *GetNativePointerField<FSlateFontInfo*>(this, "FEditableTextBoxStyle.Font"); }
	FSlateColor& ForegroundColorField() { return *GetNativePointerField<FSlateColor*>(this, "FEditableTextBoxStyle.ForegroundColor"); }
	FSlateColor& BackgroundColorField() { return *GetNativePointerField<FSlateColor*>(this, "FEditableTextBoxStyle.BackgroundColor"); }
	FSlateColor& ReadOnlyForegroundColorField() { return *GetNativePointerField<FSlateColor*>(this, "FEditableTextBoxStyle.ReadOnlyForegroundColor"); }
	FMargin& HScrollBarPaddingField() { return *GetNativePointerField<FMargin*>(this, "FEditableTextBoxStyle.HScrollBarPadding"); }
	FMargin& VScrollBarPaddingField() { return *GetNativePointerField<FMargin*>(this, "FEditableTextBoxStyle.VScrollBarPadding"); }
	FScrollBarStyle& ScrollBarStyleField() { return *GetNativePointerField<FScrollBarStyle*>(this, "FEditableTextBoxStyle.ScrollBarStyle"); }

	// Functions

	FEditableTextBoxStyle * operator=(const FEditableTextBoxStyle * __that) { return NativeCall<FEditableTextBoxStyle *, const FEditableTextBoxStyle *>(this, "FEditableTextBoxStyle.operator=", __that); }
	static const FEditableTextBoxStyle * GetDefault() { return NativeCall<const FEditableTextBoxStyle *>(nullptr, "FEditableTextBoxStyle.GetDefault"); }
	void GetResources(TArray<FSlateBrush const *> * OutBrushes) { NativeCall<void, TArray<FSlateBrush const *> *>(this, "FEditableTextBoxStyle.GetResources", OutBrushes); }
	const FName * GetTypeName(const FName * result) { return NativeCall<const FName *, const FName *>(this, "FEditableTextBoxStyle.GetTypeName", result); }
	FEditableTextBoxStyle * SetFont(const FSlateFontInfo * InFont) { return NativeCall<FEditableTextBoxStyle *, const FSlateFontInfo *>(this, "FEditableTextBoxStyle.SetFont", InFont); }
	FEditableTextBoxStyle * SetScrollBarStyle(const FScrollBarStyle * InScrollBarStyle) { return NativeCall<FEditableTextBoxStyle *, const FScrollBarStyle *>(this, "FEditableTextBoxStyle.SetScrollBarStyle", InScrollBarStyle); }
};

