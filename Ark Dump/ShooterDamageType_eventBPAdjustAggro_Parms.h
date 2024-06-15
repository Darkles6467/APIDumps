#pragma once

#include "BaseDeclarations.h"
struct ShooterDamageType_eventBPAdjustAggro_Parms
{
	char __padding[0x50L];
	float& DesiredAggroValueField() { return *GetNativePointerField<float*>(this, "ShooterDamageType_eventBPAdjustAggro_Parms.DesiredAggroValue"); }
	float& IncomingDamageField() { return *GetNativePointerField<float*>(this, "ShooterDamageType_eventBPAdjustAggro_Parms.IncomingDamage"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "ShooterDamageType_eventBPAdjustAggro_Parms.ReturnValue"); }

	// Functions

};

