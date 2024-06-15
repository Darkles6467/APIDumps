#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPOnMissionDinoDied_Parms
{
	char __padding[0x40L];
	APrimalDinoCharacter * DinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "MissionType_eventBPOnMissionDinoDied_Parms.Dino"); }
	float& KillingDamageField() { return *GetNativePointerField<float*>(this, "MissionType_eventBPOnMissionDinoDied_Parms.KillingDamage"); }
};

