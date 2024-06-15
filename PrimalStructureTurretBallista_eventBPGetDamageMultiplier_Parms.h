#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureTurretBallista_eventBPGetDamageMultiplier_Parms
{
	char __padding[0x4L];
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalStructureTurretBallista_eventBPGetDamageMultiplier_Parms.ReturnValue"); }
};

