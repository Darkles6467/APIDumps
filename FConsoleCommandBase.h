#pragma once

#include "BaseDeclarations.h"
#include "IConsoleCommand.h"

struct FConsoleCommandBase : IConsoleCommand
{
	char __padding[0x18L];
	FString& HelpField() { return *GetNativePointerField<FString*>(this, "FConsoleCommandBase.Help"); }
	EConsoleVariableFlags& FlagsField() { return *GetNativePointerField<EConsoleVariableFlags*>(this, "FConsoleCommandBase.Flags"); }

	// Functions

	const wchar_t * GetHelp() { return NativeCall<const wchar_t *>(this, "FConsoleCommandBase.GetHelp"); }
};

