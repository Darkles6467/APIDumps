#pragma once

#include "BaseDeclarations.h"
struct FOverrideMultiuseButtonStyle
{
	char __padding[0x290L];
	FButtonStyle& StyleField() { return *GetNativePointerField<FButtonStyle*>(this, "FOverrideMultiuseButtonStyle.Style"); }
	FCustomButtonWidgetStyle& ExtendedStyleField() { return *GetNativePointerField<FCustomButtonWidgetStyle*>(this, "FOverrideMultiuseButtonStyle.ExtendedStyle"); }

	// Functions

	FOverrideMultiuseButtonStyle * operator=(const FOverrideMultiuseButtonStyle * __that) { return NativeCall<FOverrideMultiuseButtonStyle *, const FOverrideMultiuseButtonStyle *>(this, "FOverrideMultiuseButtonStyle.operator=", __that); }
};

