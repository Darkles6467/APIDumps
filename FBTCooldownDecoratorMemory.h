#pragma once

#include "BaseDeclarations.h"
struct FBTCooldownDecoratorMemory
{
	char __padding[0x8L];
	float& LastUseTimestampField() { return *GetNativePointerField<float*>(this, "FBTCooldownDecoratorMemory.LastUseTimestamp"); }
};

