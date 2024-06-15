#pragma once

#include "BaseDeclarations.h"
struct FSemaphoreEntry
{
	char __padding[0xcL];
	float& PriorityWeightField() { return *GetNativePointerField<float*>(this, "FSemaphoreEntry.PriorityWeight"); }
};

