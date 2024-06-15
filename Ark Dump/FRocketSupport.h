#pragma once

#include "BaseDeclarations.h"
struct FRocketSupport
{

	// Functions

	static bool IsRocket(const wchar_t * CmdLine) { return NativeCall<bool, const wchar_t *>(nullptr, "FRocketSupport.IsRocket", CmdLine); }
};

