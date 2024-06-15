#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UAISense : UObject
{
	char __padding[0x28L];
	UAIPerceptionSystem * PerceptionSystemInstanceField() { return GetNativePointerField<UAIPerceptionSystem *>(this, "UAISense.PerceptionSystemInstance"); }
	float& TimeUntilNextUpdateField() { return *GetNativePointerField<float*>(this, "UAISense.TimeUntilNextUpdate"); }

	// Functions

	void PostInitProperties() { NativeCall<void>(this, "UAISense.PostInitProperties"); }
};

