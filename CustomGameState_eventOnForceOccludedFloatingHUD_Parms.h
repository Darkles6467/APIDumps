#pragma once

#include "BaseDeclarations.h"
struct CustomGameState_eventOnForceOccludedFloatingHUD_Parms
{
	char __padding[0x18L];
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "CustomGameState_eventOnForceOccludedFloatingHUD_Parms.ForPC"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameState_eventOnForceOccludedFloatingHUD_Parms.ReturnValue"); }
};

