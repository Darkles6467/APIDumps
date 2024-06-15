#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPDrawToRiderHUD_Parms
{
	char __padding[0x8L];
	AShooterHUD * HUDField() { return GetNativePointerField<AShooterHUD *>(this, "PrimalDinoCharacter_eventBPDrawToRiderHUD_Parms.HUD"); }
};

