#pragma once

#include "BaseDeclarations.h"
#include "FSlateWidgetStyle.h"

struct FScrollBarStyle : FSlateWidgetStyle
{
	char __padding[0x258L];

	// Functions

	const FName * GetTypeName(const FName * result) { return NativeCall<const FName *, const FName *>(this, "FScrollBarStyle.GetTypeName", result); }
	FScrollBarStyle * operator=(const FScrollBarStyle * __that) { return NativeCall<FScrollBarStyle *, const FScrollBarStyle *>(this, "FScrollBarStyle.operator=", __that); }
	static const FScrollBarStyle * GetDefault() { return NativeCall<const FScrollBarStyle *>(nullptr, "FScrollBarStyle.GetDefault"); }
};

