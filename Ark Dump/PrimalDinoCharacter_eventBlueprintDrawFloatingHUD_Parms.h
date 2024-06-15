#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBlueprintDrawFloatingHUD_Parms
{
	char __padding[0x18L];
	AShooterHUD * HUDField() { return GetNativePointerField<AShooterHUD *>(this, "PrimalDinoCharacter_eventBlueprintDrawFloatingHUD_Parms.HUD"); }
	float& CenterXField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBlueprintDrawFloatingHUD_Parms.CenterX"); }
	float& CenterYField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBlueprintDrawFloatingHUD_Parms.CenterY"); }
	float& DrawScaleField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBlueprintDrawFloatingHUD_Parms.DrawScale"); }
};

