#pragma once

#include "BaseDeclarations.h"
struct FSpeedTreeWindComputation
{
	char __padding[0x7c0L];
	FSpeedTreeWind& WindField() { return *GetNativePointerField<FSpeedTreeWind*>(this, "FSpeedTreeWindComputation.Wind"); }
	TUniformBuffer<FSpeedTreeUniformParameters>& UniformBufferField() { return *GetNativePointerField<TUniformBuffer<FSpeedTreeUniformParameters>*>(this, "FSpeedTreeWindComputation.UniformBuffer"); }
	int& ReferenceCountField() { return *GetNativePointerField<int*>(this, "FSpeedTreeWindComputation.ReferenceCount"); }

	// Functions

};

