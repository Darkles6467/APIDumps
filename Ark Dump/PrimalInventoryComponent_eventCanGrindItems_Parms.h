#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventCanGrindItems_Parms
{
	char __padding[0x10L];
	const AShooterPlayerController * PCField() { return GetNativePointerField<const AShooterPlayerController *>(this, "PrimalInventoryComponent_eventCanGrindItems_Parms.PC"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalInventoryComponent_eventCanGrindItems_Parms.ReturnValue"); }
};

