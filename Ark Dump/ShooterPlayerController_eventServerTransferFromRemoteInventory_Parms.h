#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerTransferFromRemoteInventory_Parms
{
	char __padding[0x20L];
	FItemNetID& itemIDField() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventServerTransferFromRemoteInventory_Parms.itemID"); }
	int& requestedQuantityField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerTransferFromRemoteInventory_Parms.requestedQuantity"); }
	int& ToSlotIndexField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerTransferFromRemoteInventory_Parms.ToSlotIndex"); }
	bool& bEquipItemField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventServerTransferFromRemoteInventory_Parms.bEquipItem"); }
};

