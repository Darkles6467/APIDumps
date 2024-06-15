#pragma once

#include "BaseDeclarations.h"
#include "FInputEvent.h"

struct FControllerEvent : FInputEvent
{
	char __padding[0x20L];
	FKey& EffectingButtonField() { return *GetNativePointerField<FKey*>(this, "FControllerEvent.EffectingButton"); }
	unsigned int& UserIndexField() { return *GetNativePointerField<unsigned int*>(this, "FControllerEvent.UserIndex"); }
	float& AnalogValueField() { return *GetNativePointerField<float*>(this, "FControllerEvent.AnalogValue"); }

	// Functions

};

