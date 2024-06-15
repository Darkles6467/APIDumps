#pragma once

#include "BaseDeclarations.h"
#include "FSlateWidgetStyle.h"

struct FCustomButtonWidgetStyle : FSlateWidgetStyle
{
	char __padding[0x40L];
	FLinearColor& NormalChildTintColorField() { return *GetNativePointerField<FLinearColor*>(this, "FCustomButtonWidgetStyle.NormalChildTintColor"); }
	FLinearColor& HoveredChildTintColorField() { return *GetNativePointerField<FLinearColor*>(this, "FCustomButtonWidgetStyle.HoveredChildTintColor"); }
	FLinearColor& PressedChildTintColorField() { return *GetNativePointerField<FLinearColor*>(this, "FCustomButtonWidgetStyle.PressedChildTintColor"); }
	FLinearColor& DisabledChildTintColorField() { return *GetNativePointerField<FLinearColor*>(this, "FCustomButtonWidgetStyle.DisabledChildTintColor"); }

	// Functions

	static const FCustomButtonWidgetStyle * GetDefault() { return NativeCall<const FCustomButtonWidgetStyle *>(nullptr, "FCustomButtonWidgetStyle.GetDefault"); }
	const FName * GetTypeName(const FName * result) { return NativeCall<const FName *, const FName *>(this, "FCustomButtonWidgetStyle.GetTypeName", result); }
};

