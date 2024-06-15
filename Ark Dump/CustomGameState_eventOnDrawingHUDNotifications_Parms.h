#pragma once

#include "BaseDeclarations.h"
struct CustomGameState_eventOnDrawingHUDNotifications_Parms
{
	char __padding[0x10L];
	AShooterHUD * HUDField() { return GetNativePointerField<AShooterHUD *>(this, "CustomGameState_eventOnDrawingHUDNotifications_Parms.HUD"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameState_eventOnDrawingHUDNotifications_Parms.ReturnValue"); }
};

