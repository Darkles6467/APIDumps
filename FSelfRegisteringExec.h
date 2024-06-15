#pragma once

#include "BaseDeclarations.h"
#include "FExec.h"

struct FSelfRegisteringExec : FExec
{

	// Functions

	static bool StaticExec(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(nullptr, "FSelfRegisteringExec.StaticExec", InWorld, Cmd, Ar); }
};

