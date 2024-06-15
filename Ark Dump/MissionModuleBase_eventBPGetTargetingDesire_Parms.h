#pragma once

#include "BaseDeclarations.h"
struct MissionModuleBase_eventBPGetTargetingDesire_Parms
{
	char __padding[0x18L];
	APrimalDinoCharacter * MissionDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "MissionModuleBase_eventBPGetTargetingDesire_Parms.MissionDino"); }
	float& ForTargetingDesireValueField() { return *GetNativePointerField<float*>(this, "MissionModuleBase_eventBPGetTargetingDesire_Parms.ForTargetingDesireValue"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "MissionModuleBase_eventBPGetTargetingDesire_Parms.ReturnValue"); }
};

