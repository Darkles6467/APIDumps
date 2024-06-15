#pragma once

#include "BaseDeclarations.h"
struct FGenericPlatformString
{

	// Functions

	static void * Memcpy(void * Dest, const void * Src, unsigned __int64 Count) { return NativeCall<void *, void *, const void *, unsigned __int64>(nullptr, "FGenericPlatformString.Memcpy", Dest, Src, Count); }
};

struct FMicrosoftPlatformString : FGenericPlatformString
{
};

struct FWindowsPlatformString : FMicrosoftPlatformString
{
};

