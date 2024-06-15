#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerGlobalCommand_Parms
{
	char __padding[0x10L];
	FString& MsgField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerGlobalCommand_Parms.Msg"); }
};

