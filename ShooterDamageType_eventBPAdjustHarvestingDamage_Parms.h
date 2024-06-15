#pragma once

#include "BaseDeclarations.h"
struct ShooterDamageType_eventBPAdjustHarvestingDamage_Parms
{
	char __padding[0x48L];
	float& IncomingDamageField() { return *GetNativePointerField<float*>(this, "ShooterDamageType_eventBPAdjustHarvestingDamage_Parms.IncomingDamage"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "ShooterDamageType_eventBPAdjustHarvestingDamage_Parms.ReturnValue"); }
};

