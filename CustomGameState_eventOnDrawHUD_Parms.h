#pragma once

#include "BaseDeclarations.h"
struct CustomGameState_eventOnDrawHUD_Parms
{
	char __padding[0x10L];
	AShooterHUD * HUDField() { return GetNativePointerField<AShooterHUD *>(this, "CustomGameState_eventOnDrawHUD_Parms.HUD"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameState_eventOnDrawHUD_Parms.ReturnValue"); }
};

