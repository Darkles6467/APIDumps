#pragma once

#include "BaseDeclarations.h"
struct ShooterGameState_eventBPDrawGameStateHUD_Parms
{
	char __padding[0x8L];
	AShooterHUD * HUDField() { return GetNativePointerField<AShooterHUD *>(this, "ShooterGameState_eventBPDrawGameStateHUD_Parms.HUD"); }
};

