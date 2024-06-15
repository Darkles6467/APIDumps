#pragma once

#include "BaseDeclarations.h"
#include "UAISense.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAISense_Damage : UAISense
{
	char __padding[0x10L];
	TArray<FAIDamageEvent>& RegisteredEventsField() { return *GetNativePointerField<TArray<FAIDamageEvent>*>(this, "UAISense_Damage.RegisteredEvents"); }

	// Functions

	float Update() { return NativeCall<float>(this, "UAISense_Damage.Update"); }
};

