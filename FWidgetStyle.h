#pragma once

#include "BaseDeclarations.h"
#include "FSlateColor.h"

struct FWidgetStyle
{
	char __padding[0x30L];
	FLinearColor& ColorAndOpacityTintField() { return *GetNativePointerField<FLinearColor*>(this, "FWidgetStyle.ColorAndOpacityTint"); }
	FLinearColor& ForegroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "FWidgetStyle.ForegroundColor"); }
	FLinearColor& SubduedForegroundField() { return *GetNativePointerField<FLinearColor*>(this, "FWidgetStyle.SubduedForeground"); }

	// Functions

	FWidgetStyle * BlendColorAndOpacityTint(const FLinearColor * InTint) { return NativeCall<FWidgetStyle *, const FLinearColor *>(this, "FWidgetStyle.BlendColorAndOpacityTint", InTint); }
	FWidgetStyle * SetForegroundColor(const FLinearColor * InForeground) { return NativeCall<FWidgetStyle *, const FLinearColor *>(this, "FWidgetStyle.SetForegroundColor", InForeground); }
	FWidgetStyle * SetForegroundColor(const TAttribute<FSlateColor> * InForeground) { return NativeCall<FWidgetStyle *, const TAttribute<FSlateColor> *>(this, "FWidgetStyle.SetForegroundColor", InForeground); }
};

