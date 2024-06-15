#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventBPAllowUseInInventory_Parms
{
	char __padding[0x20L];
	bool& bIsRemoteInventoryField() { return *GetNativePointerField<bool*>(this, "PrimalInventoryComponent_eventBPAllowUseInInventory_Parms.bIsRemoteInventory"); }
	AShooterPlayerController * ByPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalInventoryComponent_eventBPAllowUseInInventory_Parms.ByPC"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalInventoryComponent_eventBPAllowUseInInventory_Parms.ReturnValue"); }
};

