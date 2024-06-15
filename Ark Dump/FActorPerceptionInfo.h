#pragma once

#include "BaseDeclarations.h"
struct FActorPerceptionInfo
{
	char __padding[0x100L];
	FieldArray<FAIStimulus, 6> LastSensedStimuliField() { return {this, "FActorPerceptionInfo.LastSensedStimuli"}; }
	ECorePerceptionTypes::Type& DominantSenseField() { return *GetNativePointerField<ECorePerceptionTypes::Type*>(this, "FActorPerceptionInfo.DominantSense"); }
};

