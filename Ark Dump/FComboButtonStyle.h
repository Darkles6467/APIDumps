#pragma once

#include "BaseDeclarations.h"
#include "FSlateWidgetStyle.h"

struct FComboButtonStyle : FSlateWidgetStyle
{
	char __padding[0x348L];
	FButtonStyle& ButtonStyleField() { return *GetNativePointerField<FButtonStyle*>(this, "FComboButtonStyle.ButtonStyle"); }
	FMargin& MenuBorderPaddingField() { return *GetNativePointerField<FMargin*>(this, "FComboButtonStyle.MenuBorderPadding"); }

	// Functions

	static const FComboButtonStyle * GetDefault() { return NativeCall<const FComboButtonStyle *>(nullptr, "FComboButtonStyle.GetDefault"); }
	void GetResources(TArray<FSlateBrush const *> * OutBrushes) { NativeCall<void, TArray<FSlateBrush const *> *>(this, "FComboButtonStyle.GetResources", OutBrushes); }
	const FName * GetTypeName(const FName * result) { return NativeCall<const FName *, const FName *>(this, "FComboButtonStyle.GetTypeName", result); }
};

