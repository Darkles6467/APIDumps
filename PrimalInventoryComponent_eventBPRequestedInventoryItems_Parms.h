#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventBPRequestedInventoryItems_Parms
{
	char __padding[0x8L];
	AShooterPlayerController * forPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalInventoryComponent_eventBPRequestedInventoryItems_Parms.forPC"); }
};

