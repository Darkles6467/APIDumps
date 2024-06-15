#pragma once

#include "BaseDeclarations.h"
struct CustomGameState_eventOnAllowTribeManager_Parms
{
	char __padding[0x10L];
	AShooterPlayerController * forPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "CustomGameState_eventOnAllowTribeManager_Parms.forPC"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameState_eventOnAllowTribeManager_Parms.ReturnValue"); }
};

