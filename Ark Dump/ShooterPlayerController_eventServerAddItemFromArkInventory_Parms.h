#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerAddItemFromArkInventory_Parms
{
	char __padding[0x18L];
	FItemNetID& itemIDField() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventServerAddItemFromArkInventory_Parms.itemID"); }
	int& requestedQuantityField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerAddItemFromArkInventory_Parms.requestedQuantity"); }
};

