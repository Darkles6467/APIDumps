#pragma once

#include "BaseDeclarations.h"
struct FAISightEvent
{
	char __padding[0x18L];
	float& AgeField() { return *GetNativePointerField<float*>(this, "FAISightEvent.Age"); }
	ESightPerceptionEventName::Type& EventTypeField() { return *GetNativePointerField<ESightPerceptionEventName::Type*>(this, "FAISightEvent.EventType"); }

	// Functions

};

