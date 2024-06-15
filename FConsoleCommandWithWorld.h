#pragma once

#include "BaseDeclarations.h"
#include "FConsoleCommandBase.h"
#include "IConsoleCommand.h"
#include "IConsoleObject.h"

struct FConsoleCommandWithWorld : FConsoleCommandBase
{
	char __padding[0x8L];

	// Functions

	bool Execute(const TArray<FString> Args, UWorld * InWorld, FOutputDevice * OutputDevice) { return NativeCall<bool, const TArray<FString>, UWorld *, FOutputDevice *>(this, "FConsoleCommandWithWorld.Execute", Args, InWorld, OutputDevice); }
};

