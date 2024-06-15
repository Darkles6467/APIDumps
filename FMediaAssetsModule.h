#pragma once

#include "BaseDeclarations.h"
#include "FSelfRegisteringExec.h"
#include "FExec.h"

struct FMediaAssetsModule : FSelfRegisteringExec
{
	char __padding[0x8L];

	// Functions

	bool Exec(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "FMediaAssetsModule.Exec", InWorld, Cmd, Ar); }
};

