#pragma once

#include "BaseDeclarations.h"
struct FConnection
{

	// Functions

	static void(const wchar_t *Fmt, ...) Logf(const wchar_t * Fmt) { return NativeCall<void(const wchar_t *Fmt, ...), const wchar_t *>(nullptr, "FConnection.Logf", Fmt); }
};

