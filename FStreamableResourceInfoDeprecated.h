#pragma once

#include "BaseDeclarations.h"
struct FStreamableResourceInfoDeprecated
{
	char __padding[0x18L];
	TArray<FStreamableResourceInstanceDeprecated>& ResourceInstancesField() { return *GetNativePointerField<TArray<FStreamableResourceInstanceDeprecated>*>(this, "FStreamableResourceInfoDeprecated.ResourceInstances"); }
};

