#pragma once

#include "BaseDeclarations.h"
#include "UAISense.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAISense_Prediction : UAISense
{
	char __padding[0x10L];
	TArray<FAIPredictionEvent>& RegisteredEventsField() { return *GetNativePointerField<TArray<FAIPredictionEvent>*>(this, "UAISense_Prediction.RegisteredEvents"); }

	// Functions

	float Update() { return NativeCall<float>(this, "UAISense_Prediction.Update"); }
};

