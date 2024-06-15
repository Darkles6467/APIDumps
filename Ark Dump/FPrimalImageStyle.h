#pragma once

#include "BaseDeclarations.h"
struct FPrimalImageStyle
{
	char __padding[0x90L];
	FName& StyleNameField() { return *GetNativePointerField<FName*>(this, "FPrimalImageStyle.StyleName"); }
	FInlineTextImageStyle& ImageStyleField() { return *GetNativePointerField<FInlineTextImageStyle*>(this, "FPrimalImageStyle.ImageStyle"); }

	// Functions

	FPrimalImageStyle * operator=(const FPrimalImageStyle * __that) { return NativeCall<FPrimalImageStyle *, const FPrimalImageStyle *>(this, "FPrimalImageStyle.operator=", __that); }
};

