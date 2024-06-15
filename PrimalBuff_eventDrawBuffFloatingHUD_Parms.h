#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventDrawBuffFloatingHUD_Parms
{
	char __padding[0x20L];
	int& BuffIndexField() { return *GetNativePointerField<int*>(this, "PrimalBuff_eventDrawBuffFloatingHUD_Parms.BuffIndex"); }
	AShooterHUD * HUDField() { return GetNativePointerField<AShooterHUD *>(this, "PrimalBuff_eventDrawBuffFloatingHUD_Parms.HUD"); }
	float& CenterXField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventDrawBuffFloatingHUD_Parms.CenterX"); }
	float& CenterYField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventDrawBuffFloatingHUD_Parms.CenterY"); }
	float& DrawScaleField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventDrawBuffFloatingHUD_Parms.DrawScale"); }
};

