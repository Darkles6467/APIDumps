#pragma once

#include "BaseDeclarations.h"
struct ShooterDamageType_eventBPAdjustDamage_Parms
{
	char __padding[0x48L];
	float& IncomingDamageField() { return *GetNativePointerField<float*>(this, "ShooterDamageType_eventBPAdjustDamage_Parms.IncomingDamage"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "ShooterDamageType_eventBPAdjustDamage_Parms.ReturnValue"); }
};

