#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPOnMissionDinoDamage_Parms
{
	char __padding[0x40L];
	APrimalDinoCharacter * DinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "MissionType_eventBPOnMissionDinoDamage_Parms.Dino"); }
	float& DamageField() { return *GetNativePointerField<float*>(this, "MissionType_eventBPOnMissionDinoDamage_Parms.Damage"); }
};

