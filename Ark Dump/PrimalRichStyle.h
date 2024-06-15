#pragma once

#include "BaseDeclarations.h"
#include "FPrimalTextStyle.h"
#include "FPrimalImageStyle.h"

struct PrimalRichStyle
{
	char __padding[0x10L];

	// Functions

	void InitStyleSets(FTextBlockStyle DefaultTextStyle, TArray<FPrimalTextStyle> TextStyles, TArray<FPrimalImageStyle> ImageStyles) { NativeCall<void, FTextBlockStyle, TArray<FPrimalTextStyle>, TArray<FPrimalImageStyle>>(this, "PrimalRichStyle.InitStyleSets", DefaultTextStyle, TextStyles, ImageStyles); }
};

