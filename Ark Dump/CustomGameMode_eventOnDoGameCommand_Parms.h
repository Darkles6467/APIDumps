#pragma once

#include "BaseDeclarations.h"
struct CustomGameMode_eventOnDoGameCommand_Parms
{
	char __padding[0x20L];
	FString& TheCommandField() { return *GetNativePointerField<FString*>(this, "CustomGameMode_eventOnDoGameCommand_Parms.TheCommand"); }
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "CustomGameMode_eventOnDoGameCommand_Parms.ReturnValue"); }

	// Functions

};

