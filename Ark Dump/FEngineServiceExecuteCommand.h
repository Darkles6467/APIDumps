#pragma once

#include "BaseDeclarations.h"
struct FEngineServiceExecuteCommand
{
	char __padding[0x20L];
	FString& CommandField() { return *GetNativePointerField<FString*>(this, "FEngineServiceExecuteCommand.Command"); }
	FString& UserNameField() { return *GetNativePointerField<FString*>(this, "FEngineServiceExecuteCommand.UserName"); }

	// Functions

};

