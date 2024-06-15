#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerTransferToRemoteInventory_Parms
{
	char __padding[0x18L];
	FItemNetID& itemIDField() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventServerTransferToRemoteInventory_Parms.itemID"); }
	bool& bAlsoTryToEqupField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventServerTransferToRemoteInventory_Parms.bAlsoTryToEqup"); }
	int& requestedQuantityField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerTransferToRemoteInventory_Parms.requestedQuantity"); }
};

