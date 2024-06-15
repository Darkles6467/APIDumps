#pragma once

#include "BaseDeclarations.h"
#include "UAISense.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAISense_Touch : UAISense
{
	char __padding[0x10L];
	TArray<FAITouchEvent>& RegisteredEventsField() { return *GetNativePointerField<TArray<FAITouchEvent>*>(this, "UAISense_Touch.RegisteredEvents"); }

	// Functions

	float Update() { return NativeCall<float>(this, "UAISense_Touch.Update"); }
};

