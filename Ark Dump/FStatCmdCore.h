#pragma once

#include "BaseDeclarations.h"
#include "FSelfRegisteringExec.h"
#include "FExec.h"

struct FStatCmdCore : FSelfRegisteringExec
{

	// Functions

	bool Exec(UWorld * __formal, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "FStatCmdCore.Exec", __formal, Cmd, Ar); }
};

