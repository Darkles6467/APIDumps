#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerRequestActorItems_Parms
{
	char __padding[0x10L];
	bool& bInventoryItemsField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventServerRequestActorItems_Parms.bInventoryItems"); }
	bool& bIsFirstSpawnField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventServerRequestActorItems_Parms.bIsFirstSpawn"); }
};

