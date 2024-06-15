#pragma once

#include "BaseDeclarations.h"
struct UPropertyHelpers
{

	// Functions

	static const wchar_t * ReadToken(const wchar_t * Buffer, FString * String, bool DottedNames) { return NativeCall<const wchar_t *, const wchar_t *, FString *, bool>(nullptr, "UPropertyHelpers.ReadToken", Buffer, String, DottedNames); }
};

