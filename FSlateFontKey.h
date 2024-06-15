#pragma once

#include "BaseDeclarations.h"
struct FSlateFontKey
{
	char __padding[0x28L];
	FSlateFontInfo& FontInfoField() { return *GetNativePointerField<FSlateFontInfo*>(this, "FSlateFontKey.FontInfo"); }
	float& ScaleField() { return *GetNativePointerField<float*>(this, "FSlateFontKey.Scale"); }

	// Functions

	bool operator==(const FSlateFontKey * Other) { return NativeCall<bool, const FSlateFontKey *>(this, "FSlateFontKey.operator==", Other); }
};

