#pragma once

#include "BaseDeclarations.h"
struct FBTInstancedNodeMemory
{
	char __padding[0x4L];
	int& NodeIdxField() { return *GetNativePointerField<int*>(this, "FBTInstancedNodeMemory.NodeIdx"); }
};

struct FBTAuxiliaryMemory : FBTInstancedNodeMemory
{
	char __padding[0x8L];
	float& NextTickRemainingTimeField() { return *GetNativePointerField<float*>(this, "FBTAuxiliaryMemory.NextTickRemainingTime"); }
	float& AccumulatedDeltaTimeField() { return *GetNativePointerField<float*>(this, "FBTAuxiliaryMemory.AccumulatedDeltaTime"); }
};

