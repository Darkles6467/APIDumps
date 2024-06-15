#pragma once

#include "BaseDeclarations.h"
#include "FSlateWidgetStyle.h"

struct FHyperlinkStyle : FSlateWidgetStyle
{
	char __padding[0x370L];
	FButtonStyle& UnderlineStyleField() { return *GetNativePointerField<FButtonStyle*>(this, "FHyperlinkStyle.UnderlineStyle"); }
	FTextBlockStyle& TextStyleField() { return *GetNativePointerField<FTextBlockStyle*>(this, "FHyperlinkStyle.TextStyle"); }
	FMargin& PaddingField() { return *GetNativePointerField<FMargin*>(this, "FHyperlinkStyle.Padding"); }

	// Functions

	static const FHyperlinkStyle * GetDefault() { return NativeCall<const FHyperlinkStyle *>(nullptr, "FHyperlinkStyle.GetDefault"); }
	void GetResources(TArray<FSlateBrush const *> * OutBrushes) { NativeCall<void, TArray<FSlateBrush const *> *>(this, "FHyperlinkStyle.GetResources", OutBrushes); }
	const FName * GetTypeName(const FName * result) { return NativeCall<const FName *, const FName *>(this, "FHyperlinkStyle.GetTypeName", result); }
	FHyperlinkStyle * operator=(const FHyperlinkStyle * __that) { return NativeCall<FHyperlinkStyle *, const FHyperlinkStyle *>(this, "FHyperlinkStyle.operator=", __that); }
};

