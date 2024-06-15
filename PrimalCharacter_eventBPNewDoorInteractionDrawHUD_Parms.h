#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPNewDoorInteractionDrawHUD_Parms
{
	char __padding[0x10L];
	AShooterHUD * HUDField() { return GetNativePointerField<AShooterHUD *>(this, "PrimalCharacter_eventBPNewDoorInteractionDrawHUD_Parms.HUD"); }
	FVector2D& DoorDescriptionLocField() { return *GetNativePointerField<FVector2D*>(this, "PrimalCharacter_eventBPNewDoorInteractionDrawHUD_Parms.DoorDescriptionLoc"); }
};

