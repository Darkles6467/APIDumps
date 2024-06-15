#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPAllowRemoteRemoveFromInventory_Parms
{
	char __padding[0x18L];
	AShooterPlayerController * ByPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalItem_eventBPAllowRemoteRemoveFromInventory_Parms.ByPC"); }
	bool& bRequestedByPlayerField() { return *GetNativePointerField<bool*>(this, "PrimalItem_eventBPAllowRemoteRemoveFromInventory_Parms.bRequestedByPlayer"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalItem_eventBPAllowRemoteRemoveFromInventory_Parms.ReturnValue"); }
};

