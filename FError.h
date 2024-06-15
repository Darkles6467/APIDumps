#pragma once

#include "BaseDeclarations.h"
struct FError
{

	// Functions

	static void(const char *File, int Line, const wchar_t *Format, ...) LowLevelFatal(const char * File, int Line, const wchar_t * Format) { return NativeCall<void(const char *File, int Line, const wchar_t *Format, ...), const char *, int, const wchar_t *>(nullptr, "FError.LowLevelFatal", File, Line, Format); }
	static void(const wchar_t *Fmt, ...) Throwf__VA(const wchar_t * Fmt) { return NativeCall<void(const wchar_t *Fmt, ...), const wchar_t *>(nullptr, "FError.Throwf__VA", Fmt); }
};

