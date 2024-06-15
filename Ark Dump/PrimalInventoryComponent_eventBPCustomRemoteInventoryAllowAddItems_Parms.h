#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventBPCustomRemoteInventoryAllowAddItems_Parms
{
	char __padding[0x18L];
	AShooterPlayerController * PCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalInventoryComponent_eventBPCustomRemoteInventoryAllowAddItems_Parms.PC"); }
	int& anItemQuantityOverrideField() { return *GetNativePointerField<int*>(this, "PrimalInventoryComponent_eventBPCustomRemoteInventoryAllowAddItems_Parms.anItemQuantityOverride"); }
	bool& bRequestedByPlayerField() { return *GetNativePointerField<bool*>(this, "PrimalInventoryComponent_eventBPCustomRemoteInventoryAllowAddItems_Parms.bRequestedByPlayer"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalInventoryComponent_eventBPCustomRemoteInventoryAllowAddItems_Parms.ReturnValue"); }

	// Functions

};

