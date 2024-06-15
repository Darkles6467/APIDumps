#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerCraftItem_Parms
{
	char __padding[0x10L];
	FItemNetID& itemIDField() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventServerCraftItem_Parms.itemID"); }
};

