#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPDrawBuffStatusHUD_Parms
{
	char __padding[0x18L];
	AShooterHUD * HUDField() { return GetNativePointerField<AShooterHUD *>(this, "PrimalBuff_eventBPDrawBuffStatusHUD_Parms.HUD"); }
	float& XPosField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBPDrawBuffStatusHUD_Parms.XPos"); }
	float& YPosField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBPDrawBuffStatusHUD_Parms.YPos"); }
	float& ScaleMultField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBPDrawBuffStatusHUD_Parms.ScaleMult"); }
};

