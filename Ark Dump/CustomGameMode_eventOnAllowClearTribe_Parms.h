#pragma once

#include "BaseDeclarations.h"
struct CustomGameMode_eventOnAllowClearTribe_Parms
{
	char __padding[0x10L];
	AShooterPlayerState * ForPlayerStateField() { return GetNativePointerField<AShooterPlayerState *>(this, "CustomGameMode_eventOnAllowClearTribe_Parms.ForPlayerState"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameMode_eventOnAllowClearTribe_Parms.ReturnValue"); }
};

