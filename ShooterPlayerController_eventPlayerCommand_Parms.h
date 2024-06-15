#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventPlayerCommand_Parms
{
	char __padding[0x20L];
	FString& TheCommandField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventPlayerCommand_Parms.TheCommand"); }
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventPlayerCommand_Parms.ReturnValue"); }

	// Functions

};

