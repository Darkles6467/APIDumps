#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPGetItemIcon_Parms
{
	char __padding[0x10L];
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalItem_eventBPGetItemIcon_Parms.ForPC"); }
};

