#pragma once

#include "BaseDeclarations.h"
struct CustomGameState_eventOnAllowRemoveItems_Parms
{
	char __padding[0x20L];
	AShooterPlayerController * PCField() { return GetNativePointerField<AShooterPlayerController *>(this, "CustomGameState_eventOnAllowRemoveItems_Parms.PC"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameState_eventOnAllowRemoveItems_Parms.ReturnValue"); }
};

