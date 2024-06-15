#pragma once

#include "BaseDeclarations.h"
struct FBlendableEntry
{
	char __padding[0x10L];
	float& WeightField() { return *GetNativePointerField<float*>(this, "FBlendableEntry.Weight"); }
	FName& BlendableTypeField() { return *GetNativePointerField<FName*>(this, "FBlendableEntry.BlendableType"); }
	unsigned int& DataSizeField() { return *GetNativePointerField<unsigned int*>(this, "FBlendableEntry.DataSize"); }
};

