#pragma once

#include "BaseDeclarations.h"
struct CustomGameState_eventOnDrawExtraPlayerFloatingHUD_Parms
{
	char __padding[0x20L];
	AShooterHUD * HUDField() { return GetNativePointerField<AShooterHUD *>(this, "CustomGameState_eventOnDrawExtraPlayerFloatingHUD_Parms.HUD"); }
	AShooterCharacter * theShooterCharField() { return GetNativePointerField<AShooterCharacter *>(this, "CustomGameState_eventOnDrawExtraPlayerFloatingHUD_Parms.theShooterChar"); }
	FVector& AtLocField() { return *GetNativePointerField<FVector*>(this, "CustomGameState_eventOnDrawExtraPlayerFloatingHUD_Parms.AtLoc"); }
};

