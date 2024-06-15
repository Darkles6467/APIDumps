#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBlueprintDrawHUD_Parms
{
	char __padding[0x10L];
	AShooterHUD * HUDField() { return GetNativePointerField<AShooterHUD *>(this, "PrimalStructure_eventBlueprintDrawHUD_Parms.HUD"); }
	float& CenterXField() { return *GetNativePointerField<float*>(this, "PrimalStructure_eventBlueprintDrawHUD_Parms.CenterX"); }
	float& CenterYField() { return *GetNativePointerField<float*>(this, "PrimalStructure_eventBlueprintDrawHUD_Parms.CenterY"); }
};

