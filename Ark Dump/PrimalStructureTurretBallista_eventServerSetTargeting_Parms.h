#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureTurretBallista_eventServerSetTargeting_Parms
{
	char __padding[0x1L];
	bool& bTargetingField() { return *GetNativePointerField<bool*>(this, "PrimalStructureTurretBallista_eventServerSetTargeting_Parms.bTargeting"); }
};

