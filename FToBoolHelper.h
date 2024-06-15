#pragma once

#include "BaseDeclarations.h"
struct FToBoolHelper
{

	// Functions

	static bool FromCStringWide(const wchar_t * String) { return NativeCall<bool, const wchar_t *>(nullptr, "FToBoolHelper.FromCStringWide", String); }
};

