#pragma once

#include "BaseDeclarations.h"
#include "UAISense.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAISense_Hearing : UAISense
{
	char __padding[0x10L];
	TArray<FAINoiseEvent>& NoiseEventsField() { return *GetNativePointerField<TArray<FAINoiseEvent>*>(this, "UAISense_Hearing.NoiseEvents"); }

	// Functions

	float Update() { return NativeCall<float>(this, "UAISense_Hearing.Update"); }
};

