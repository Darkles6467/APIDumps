#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureTurretBallista_eventTryFiring_Parms
{
	char __padding[0x1L];
	bool& shouldFireField() { return *GetNativePointerField<bool*>(this, "PrimalStructureTurretBallista_eventTryFiring_Parms.shouldFire"); }
};

