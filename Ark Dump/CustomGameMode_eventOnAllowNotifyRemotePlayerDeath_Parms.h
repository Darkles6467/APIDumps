#pragma once

#include "BaseDeclarations.h"
struct CustomGameMode_eventOnAllowNotifyRemotePlayerDeath_Parms
{
	char __padding[0x10L];
	AShooterCharacter * forCharField() { return GetNativePointerField<AShooterCharacter *>(this, "CustomGameMode_eventOnAllowNotifyRemotePlayerDeath_Parms.forChar"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameMode_eventOnAllowNotifyRemotePlayerDeath_Parms.ReturnValue"); }
};

