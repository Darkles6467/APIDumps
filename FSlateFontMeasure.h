#pragma once

#include "BaseDeclarations.h"
struct FSlateFontMeasure
{
	enum ELastCharacterIndexFormat
	{
		LastWholeCharacterBeforeOffset = 0x0,
		CharacterAtOffset = 0x1,
		Unused = 0x2,
	};

	char __padding[0x68L];
	TSharedRef<FSlateFontCache,0>& FontCacheField() { return *GetNativePointerField<TSharedRef<FSlateFontCache,0>*>(this, "FSlateFontMeasure.FontCache"); }

	// Functions

	unsigned __int16 GetBaseline(const FSlateFontInfo * InFontInfo, float FontScale) { return NativeCall<unsigned __int16, const FSlateFontInfo *, float>(this, "FSlateFontMeasure.GetBaseline", InFontInfo, FontScale); }
	float GetKerning(const FSlateFontInfo * InFontInfo, float FontScale, wchar_t PreviousCharacter, wchar_t CurrentCharacter) { return NativeCall<float, const FSlateFontInfo *, float, wchar_t, wchar_t>(this, "FSlateFontMeasure.GetKerning", InFontInfo, FontScale, PreviousCharacter, CurrentCharacter); }
	unsigned __int16 GetMaxCharacterHeight(const FSlateFontInfo * InFontInfo, float FontScale) { return NativeCall<unsigned __int16, const FSlateFontInfo *, float>(this, "FSlateFontMeasure.GetMaxCharacterHeight", InFontInfo, FontScale); }
};

