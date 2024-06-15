#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventBPCustomRemoteInventoryAllowRemoveItems_Parms
{
	char __padding[0x18L];
	AShooterPlayerController * PCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalInventoryComponent_eventBPCustomRemoteInventoryAllowRemoveItems_Parms.PC"); }
	int& requestedQuantityField() { return *GetNativePointerField<int*>(this, "PrimalInventoryComponent_eventBPCustomRemoteInventoryAllowRemoveItems_Parms.requestedQuantity"); }
	bool& bRequestedByPlayerField() { return *GetNativePointerField<bool*>(this, "PrimalInventoryComponent_eventBPCustomRemoteInventoryAllowRemoveItems_Parms.bRequestedByPlayer"); }
	bool& bRequestDroppingField() { return *GetNativePointerField<bool*>(this, "PrimalInventoryComponent_eventBPCustomRemoteInventoryAllowRemoveItems_Parms.bRequestDropping"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalInventoryComponent_eventBPCustomRemoteInventoryAllowRemoveItems_Parms.ReturnValue"); }

	// Functions

};

