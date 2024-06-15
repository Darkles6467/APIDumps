#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureTurretBallista_eventBPCanFire_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructureTurretBallista_eventBPCanFire_Parms.ReturnValue"); }
};

