#pragma once

#include "BaseDeclarations.h"
#include "UAISense.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAISense_Team : UAISense
{
	char __padding[0x10L];
	TArray<FAITeamStimulusEvent>& RegisteredEventsField() { return *GetNativePointerField<TArray<FAITeamStimulusEvent>*>(this, "UAISense_Team.RegisteredEvents"); }

	// Functions

	float Update() { return NativeCall<float>(this, "UAISense_Team.Update"); }
};

