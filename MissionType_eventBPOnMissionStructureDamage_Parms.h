#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPOnMissionStructureDamage_Parms
{
	char __padding[0x40L];
	float& DamageField() { return *GetNativePointerField<float*>(this, "MissionType_eventBPOnMissionStructureDamage_Parms.Damage"); }
};

