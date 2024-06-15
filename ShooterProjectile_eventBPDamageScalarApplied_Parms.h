#pragma once

#include "BaseDeclarations.h"
struct ShooterProjectile_eventBPDamageScalarApplied_Parms
{
	char __padding[0x4L];
	float& ScalarField() { return *GetNativePointerField<float*>(this, "ShooterProjectile_eventBPDamageScalarApplied_Parms.Scalar"); }
};

