#pragma once

#include "BaseDeclarations.h"
#include "FSlateWidgetStyle.h"

struct FScrollBorderStyle : FSlateWidgetStyle
{
	char __padding[0xf0L];

	// Functions

	const FName * GetTypeName(const FName * result) { return NativeCall<const FName *, const FName *>(this, "FScrollBorderStyle.GetTypeName", result); }
};

