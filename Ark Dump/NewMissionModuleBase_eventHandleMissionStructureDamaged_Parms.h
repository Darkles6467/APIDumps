#pragma once

#include "BaseDeclarations.h"
struct NewMissionModuleBase_eventHandleMissionStructureDamaged_Parms
{
	char __padding[0x48L];
	float& KillingDamageField() { return *GetNativePointerField<float*>(this, "NewMissionModuleBase_eventHandleMissionStructureDamaged_Parms.KillingDamage"); }
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "NewMissionModuleBase_eventHandleMissionStructureDamaged_Parms.ReturnValue"); }
};

