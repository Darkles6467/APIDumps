#pragma once

#include "BaseDeclarations.h"
struct CustomGameState_eventOnAllowFastTravel_Parms
{
	char __padding[0x18L];
	AShooterPlayerController * forPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "CustomGameState_eventOnAllowFastTravel_Parms.forPC"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameState_eventOnAllowFastTravel_Parms.ReturnValue"); }
};

