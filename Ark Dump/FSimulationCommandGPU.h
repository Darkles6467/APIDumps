#pragma once

#include "BaseDeclarations.h"
struct FSimulationCommandGPU
{
	char __padding[0x70L];
	FParticlePerFrameSimulationParameters& PerFrameParametersField() { return *GetNativePointerField<FParticlePerFrameSimulationParameters*>(this, "FSimulationCommandGPU.PerFrameParameters"); }
	TUniformBufferRef<FVectorFieldUniformParameters>& VectorFieldsUniformBufferField() { return *GetNativePointerField<TUniformBufferRef<FVectorFieldUniformParameters>*>(this, "FSimulationCommandGPU.VectorFieldsUniformBuffer"); }
	int& TileCountField() { return *GetNativePointerField<int*>(this, "FSimulationCommandGPU.TileCount"); }
};

