#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPGetMissionTargetingDesire_Parms
{
	char __padding[0x18L];
	APrimalDinoCharacter * MissionDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "MissionType_eventBPGetMissionTargetingDesire_Parms.MissionDino"); }
	float& ForTargetingDesireValueField() { return *GetNativePointerField<float*>(this, "MissionType_eventBPGetMissionTargetingDesire_Parms.ForTargetingDesireValue"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "MissionType_eventBPGetMissionTargetingDesire_Parms.ReturnValue"); }
};

