#pragma once

#include "BaseDeclarations.h"
struct FBTFocusMemory
{
	char __padding[0x18L];
	FVector& FocusLocationSetField() { return *GetNativePointerField<FVector*>(this, "FBTFocusMemory.FocusLocationSet"); }
	bool& bActorSetField() { return *GetNativePointerField<bool*>(this, "FBTFocusMemory.bActorSet"); }
};

