#pragma once

#include "BaseDeclarations.h"
#include "FSlateWidgetStyle.h"

struct FEditableTextStyle : FSlateWidgetStyle
{
	char __padding[0x228L];
	FSlateFontInfo& FontField() { return *GetNativePointerField<FSlateFontInfo*>(this, "FEditableTextStyle.Font"); }
	FSlateColor& ColorAndOpacityField() { return *GetNativePointerField<FSlateColor*>(this, "FEditableTextStyle.ColorAndOpacity"); }

	// Functions

	FEditableTextStyle * operator=(const FEditableTextStyle * __that) { return NativeCall<FEditableTextStyle *, const FEditableTextStyle *>(this, "FEditableTextStyle.operator=", __that); }
	const FName * GetTypeName(const FName * result) { return NativeCall<const FName *, const FName *>(this, "FEditableTextStyle.GetTypeName", result); }
	static const FEditableTextStyle * GetDefault() { return NativeCall<const FEditableTextStyle *>(nullptr, "FEditableTextStyle.GetDefault"); }
	void GetResources(TArray<FSlateBrush const *> * OutBrushes) { NativeCall<void, TArray<FSlateBrush const *> *>(this, "FEditableTextStyle.GetResources", OutBrushes); }
};

