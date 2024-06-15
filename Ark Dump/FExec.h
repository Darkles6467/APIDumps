#pragma once

#include "BaseDeclarations.h"
struct FExec
{
	char __padding[0x8L];

	// Functions

	bool Exec(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "FExec.Exec", InWorld, Cmd, Ar); }
};

