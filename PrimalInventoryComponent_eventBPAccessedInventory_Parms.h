#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventBPAccessedInventory_Parms
{
	char __padding[0x8L];
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalInventoryComponent_eventBPAccessedInventory_Parms.ForPC"); }
};

