#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientRunLocalConsoleCommand_Parms
{
	char __padding[0x18L];
	FString& CommandField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventClientRunLocalConsoleCommand_Parms.Command"); }
	bool& bWriteToLogField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientRunLocalConsoleCommand_Parms.bWriteToLog"); }
};

