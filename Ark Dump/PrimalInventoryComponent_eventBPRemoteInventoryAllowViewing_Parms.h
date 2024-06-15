#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventBPRemoteInventoryAllowViewing_Parms
{
	char __padding[0x10L];
	AShooterPlayerController * PCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalInventoryComponent_eventBPRemoteInventoryAllowViewing_Parms.PC"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalInventoryComponent_eventBPRemoteInventoryAllowViewing_Parms.ReturnValue"); }
};

