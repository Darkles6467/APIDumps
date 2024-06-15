#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FGPUSpriteResources : FRenderResource
{
	char __padding[0x1e0L];
	TUniformBufferRef<FGPUSpriteEmitterUniformParameters>& UniformBufferField() { return *GetNativePointerField<TUniformBufferRef<FGPUSpriteEmitterUniformParameters>*>(this, "FGPUSpriteResources.UniformBuffer"); }
	FParticleEmitterSimulationResources& EmitterSimulationResourcesField() { return *GetNativePointerField<FParticleEmitterSimulationResources*>(this, "FGPUSpriteResources.EmitterSimulationResources"); }
	FTexelAllocation& ColorTexelAllocationField() { return *GetNativePointerField<FTexelAllocation*>(this, "FGPUSpriteResources.ColorTexelAllocation"); }
	FTexelAllocation& MiscTexelAllocationField() { return *GetNativePointerField<FTexelAllocation*>(this, "FGPUSpriteResources.MiscTexelAllocation"); }
	FTexelAllocation& SimulationAttrTexelAllocationField() { return *GetNativePointerField<FTexelAllocation*>(this, "FGPUSpriteResources.SimulationAttrTexelAllocation"); }
	FGPUSpriteEmitterUniformParameters& UniformParametersField() { return *GetNativePointerField<FGPUSpriteEmitterUniformParameters*>(this, "FGPUSpriteResources.UniformParameters"); }
	FParticleSimulationParameters& SimulationParametersField() { return *GetNativePointerField<FParticleSimulationParameters*>(this, "FGPUSpriteResources.SimulationParameters"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FGPUSpriteResources.InitRHI"); }
};

