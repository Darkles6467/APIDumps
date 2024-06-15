#pragma once

#include "BaseDeclarations.h"
struct FStyleDefaults
{

	// Functions

	static const FSlateFontInfo * GetFontInfo(const FSlateFontInfo * result, unsigned __int16 Size) { return NativeCall<const FSlateFontInfo *, const FSlateFontInfo *, unsigned __int16>(nullptr, "FStyleDefaults.GetFontInfo", result, Size); }
};

