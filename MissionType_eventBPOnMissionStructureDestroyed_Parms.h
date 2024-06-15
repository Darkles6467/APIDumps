#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPOnMissionStructureDestroyed_Parms
{
	char __padding[0x40L];
	float& KillingDamageField() { return *GetNativePointerField<float*>(this, "MissionType_eventBPOnMissionStructureDestroyed_Parms.KillingDamage"); }
};

