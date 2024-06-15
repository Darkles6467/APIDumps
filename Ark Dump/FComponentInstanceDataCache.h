#pragma once

#include "BaseDeclarations.h"
struct FComponentInstanceDataCache
{
	char __padding[0x50L];

	// Functions

	void ApplyToActor(AActor * Actor) { NativeCall<void, AActor *>(this, "FComponentInstanceDataCache.ApplyToActor", Actor); }
};

