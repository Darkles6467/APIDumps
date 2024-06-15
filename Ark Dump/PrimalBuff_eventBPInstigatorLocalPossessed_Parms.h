#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPInstigatorLocalPossessed_Parms
{
	char __padding[0x8L];
	AShooterPlayerController * ByControllerField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalBuff_eventBPInstigatorLocalPossessed_Parms.ByController"); }
};

