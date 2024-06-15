#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureTurret_eventBPTurretPreventsTargeting_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructureTurret_eventBPTurretPreventsTargeting_Parms.ReturnValue"); }
};

