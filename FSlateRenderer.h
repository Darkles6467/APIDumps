#pragma once

#include "BaseDeclarations.h"
struct FSlateRenderer
{
	char __padding[0x48L];
	TSharedPtr<FSlateFontCache,0>& FontCacheField() { return *GetNativePointerField<TSharedPtr<FSlateFontCache,0>*>(this, "FSlateRenderer.FontCache"); }
	TSharedPtr<FSlateFontMeasure,0>& FontMeasureField() { return *GetNativePointerField<TSharedPtr<FSlateFontMeasure,0>*>(this, "FSlateRenderer.FontMeasure"); }
};

