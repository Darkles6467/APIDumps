#pragma once

#include "BaseDeclarations.h"
struct NewMissionModuleBase_eventBPGetTargetingDesire_Parms
{
	char __padding[0x18L];
	APrimalDinoCharacter * MissionDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "NewMissionModuleBase_eventBPGetTargetingDesire_Parms.MissionDino"); }
	float& ForTargetingDesireValueField() { return *GetNativePointerField<float*>(this, "NewMissionModuleBase_eventBPGetTargetingDesire_Parms.ForTargetingDesireValue"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "NewMissionModuleBase_eventBPGetTargetingDesire_Parms.ReturnValue"); }

	// Functions

};

