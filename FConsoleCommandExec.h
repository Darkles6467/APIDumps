#pragma once

#include "BaseDeclarations.h"
#include "FConsoleCommandBase.h"
#include "IConsoleCommand.h"
#include "IConsoleObject.h"

struct FConsoleCommandExec : FConsoleCommandBase
{

	// Functions

	bool Execute(const TArray<FString> Args, UWorld * InCmdWorld, FOutputDevice * OutputDevice) { return NativeCall<bool, const TArray<FString>, UWorld *, FOutputDevice *>(this, "FConsoleCommandExec.Execute", Args, InCmdWorld, OutputDevice); }
};

