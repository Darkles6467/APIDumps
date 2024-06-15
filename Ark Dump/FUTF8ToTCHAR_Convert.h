#pragma once

#include "BaseDeclarations.h"
struct FUTF8ToTCHAR_Convert
{

	// Functions

	static int ConvertedLength(const char * Source, int SourceLen) { return NativeCall<int, const char *, int>(nullptr, "FUTF8ToTCHAR_Convert.ConvertedLength", Source, SourceLen); }
	static unsigned int utf8codepoint(const char ** _str) { return NativeCall<unsigned int, const char **>(nullptr, "FUTF8ToTCHAR_Convert.utf8codepoint", _str); }
};

