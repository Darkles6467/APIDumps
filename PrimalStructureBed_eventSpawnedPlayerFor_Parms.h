#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureBed_eventSpawnedPlayerFor_Parms
{
	char __padding[0x10L];
	AShooterPlayerController * PCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalStructureBed_eventSpawnedPlayerFor_Parms.PC"); }
};

