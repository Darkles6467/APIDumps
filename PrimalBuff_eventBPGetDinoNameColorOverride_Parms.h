#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPGetDinoNameColorOverride_Parms
{
	char __padding[0x10L];
	AShooterHUD * HUDField() { return GetNativePointerField<AShooterHUD *>(this, "PrimalBuff_eventBPGetDinoNameColorOverride_Parms.HUD"); }
	FColor& ColorToOverrideField() { return *GetNativePointerField<FColor*>(this, "PrimalBuff_eventBPGetDinoNameColorOverride_Parms.ColorToOverride"); }
	FColor& ReturnValueField() { return *GetNativePointerField<FColor*>(this, "PrimalBuff_eventBPGetDinoNameColorOverride_Parms.ReturnValue"); }
};

