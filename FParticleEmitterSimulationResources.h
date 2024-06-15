#pragma once

#include "BaseDeclarations.h"
struct FParticleEmitterSimulationResources
{
	char __padding[0x10L];
	TUniformBufferRef<FParticleSimulationParameters>& SimulationUniformBufferField() { return *GetNativePointerField<TUniformBufferRef<FParticleSimulationParameters>*>(this, "FParticleEmitterSimulationResources.SimulationUniformBuffer"); }
	float& GlobalVectorFieldScaleField() { return *GetNativePointerField<float*>(this, "FParticleEmitterSimulationResources.GlobalVectorFieldScale"); }
	float& GlobalVectorFieldTightnessField() { return *GetNativePointerField<float*>(this, "FParticleEmitterSimulationResources.GlobalVectorFieldTightness"); }
};

