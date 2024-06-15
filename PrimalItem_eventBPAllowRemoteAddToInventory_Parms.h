#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPAllowRemoteAddToInventory_Parms
{
	char __padding[0x18L];
	AShooterPlayerController * ByPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalItem_eventBPAllowRemoteAddToInventory_Parms.ByPC"); }
	bool& bRequestedByPlayerField() { return *GetNativePointerField<bool*>(this, "PrimalItem_eventBPAllowRemoteAddToInventory_Parms.bRequestedByPlayer"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalItem_eventBPAllowRemoteAddToInventory_Parms.ReturnValue"); }

	// Functions

};

