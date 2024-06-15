#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerGrindItemInRemoteInventory_Parms
{
	char __padding[0x18L];
	FItemNetID& itemIDField() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventServerGrindItemInRemoteInventory_Parms.itemID"); }
	bool& grindStackField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventServerGrindItemInRemoteInventory_Parms.grindStack"); }
};

