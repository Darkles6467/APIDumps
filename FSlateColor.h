#pragma once

#include "BaseDeclarations.h"
struct FSlateColor
{
	char __padding[0x28L];
	FLinearColor& SpecifiedColorField() { return *GetNativePointerField<FLinearColor*>(this, "FSlateColor.SpecifiedColor"); }
	TEnumAsByte<enum ESlateColorStylingMode::Type>& ColorUseRuleField() { return *GetNativePointerField<TEnumAsByte<enum ESlateColorStylingMode::Type>*>(this, "FSlateColor.ColorUseRule"); }
	TSharedPtr<FLinearColor,0>& LinkedSpecifiedColorField() { return *GetNativePointerField<TSharedPtr<FLinearColor,0>*>(this, "FSlateColor.LinkedSpecifiedColor"); }

	// Functions

	FLinearColor * GetSpecifiedColor(FLinearColor * result) { return NativeCall<FLinearColor *, FLinearColor *>(this, "FSlateColor.GetSpecifiedColor", result); }
	const FLinearColor * GetColor(const FWidgetStyle * InWidgetStyle) { return NativeCall<const FLinearColor *, const FWidgetStyle *>(this, "FSlateColor.GetColor", InWidgetStyle); }
	FSlateColor * operator=(const FSlateColor * __that) { return NativeCall<FSlateColor *, const FSlateColor *>(this, "FSlateColor.operator=", __that); }
	bool operator==(const FSlateColor * Other) { return NativeCall<bool, const FSlateColor *>(this, "FSlateColor.operator==", Other); }
	static FSlateColor * UseForeground(FSlateColor * result) { return NativeCall<FSlateColor *, FSlateColor *>(nullptr, "FSlateColor.UseForeground", result); }
	bool SerializeFromMismatchedTag(const FPropertyTag * Tag, FArchive * Ar) { return NativeCall<bool, const FPropertyTag *, FArchive *>(this, "FSlateColor.SerializeFromMismatchedTag", Tag, Ar); }
	static FSlateColor * UseSubduedForeground(FSlateColor * result) { return NativeCall<FSlateColor *, FSlateColor *>(nullptr, "FSlateColor.UseSubduedForeground", result); }
};

