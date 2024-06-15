#pragma once

#include "BaseDeclarations.h"
struct FSetCVarFromIni
{

	// Functions

	static void OnEntry(const wchar_t * Key, const wchar_t * Value) { NativeCall<void, const wchar_t *, const wchar_t *>(nullptr, "FSetCVarFromIni.OnEntry", Key, Value); }
};

