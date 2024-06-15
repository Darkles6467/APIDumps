#pragma once

#include "BaseDeclarations.h"
struct FTCHARToUTF8_Convert
{

	// Functions

	static int ConvertedLength(const wchar_t * Source, int SourceLen) { return NativeCall<int, const wchar_t *, int>(nullptr, "FTCHARToUTF8_Convert.ConvertedLength", Source, SourceLen); }
};

