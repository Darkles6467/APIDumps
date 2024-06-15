#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventSelectedCustomContextMenuItem_Parms
{
	char __padding[0x10L];
	FName& ContextItemField() { return *GetNativePointerField<FName*>(this, "PrimalItem_eventSelectedCustomContextMenuItem_Parms.ContextItem"); }
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalItem_eventSelectedCustomContextMenuItem_Parms.ForPC"); }
};

