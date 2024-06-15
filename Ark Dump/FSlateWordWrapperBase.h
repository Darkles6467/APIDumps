#pragma once

#include "BaseDeclarations.h"
#include "FWordWrapper.h"

struct FSlateWordWrapperBase : FWordWrapper
{
	char __padding[0x10L];
	const FSlateFontInfo * FontInfoField() { return GetNativePointerField<const FSlateFontInfo *>(this, "FSlateWordWrapperBase.FontInfo"); }
	const int& WrapWidthField() { return *GetNativePointerField<const int*>(this, "FSlateWordWrapperBase.WrapWidth"); }
	const float& FontScaleField() { return *GetNativePointerField<const float*>(this, "FSlateWordWrapperBase.FontScale"); }
};

