#pragma once

#include "BaseDeclarations.h"
struct FPrimalChatFontData
{
	char __padding[0x38L];
	FName& FontNameField() { return *GetNativePointerField<FName*>(this, "FPrimalChatFontData.FontName"); }
	int& FontSizeField() { return *GetNativePointerField<int*>(this, "FPrimalChatFontData.FontSize"); }
	FSlateColor& FontColorField() { return *GetNativePointerField<FSlateColor*>(this, "FPrimalChatFontData.FontColor"); }

	// Functions

};

