#pragma once

#include "BaseDeclarations.h"
#include "FSlateWidgetStyle.h"

struct FSliderStyle : FSlateWidgetStyle
{
	char __padding[0x1e0L];

	// Functions

	static const FSliderStyle * GetDefault() { return NativeCall<const FSliderStyle *>(nullptr, "FSliderStyle.GetDefault"); }
	const FName * GetTypeName(const FName * result) { return NativeCall<const FName *, const FName *>(this, "FSliderStyle.GetTypeName", result); }
};

