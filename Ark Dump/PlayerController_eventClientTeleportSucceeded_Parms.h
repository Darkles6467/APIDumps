#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientTeleportSucceeded_Parms
{
	char __padding[0x1cL];
	FVector& TeleportLocField() { return *GetNativePointerField<FVector*>(this, "PlayerController_eventClientTeleportSucceeded_Parms.TeleportLoc"); }
	FRotator& TeleportRotField() { return *GetNativePointerField<FRotator*>(this, "PlayerController_eventClientTeleportSucceeded_Parms.TeleportRot"); }
	bool& bSimpleTeleportField() { return *GetNativePointerField<bool*>(this, "PlayerController_eventClientTeleportSucceeded_Parms.bSimpleTeleport"); }
};

