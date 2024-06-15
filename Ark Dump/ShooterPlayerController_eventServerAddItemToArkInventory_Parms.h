#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerAddItemToArkInventory_Parms
{
	char __padding[0x18L];
	FItemNetID& itemIDField() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventServerAddItemToArkInventory_Parms.itemID"); }
	int& requestedQuantityField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerAddItemToArkInventory_Parms.requestedQuantity"); }
};

