#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientReceiveTribeLog_Parms
{
	char __padding[0x10L];
	FString& LogStringField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventClientReceiveTribeLog_Parms.LogString"); }
};

