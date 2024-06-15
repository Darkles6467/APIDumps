#pragma once

#include "BaseDeclarations.h"
struct FParticleSimulationResources
{
	char __padding[0x401a0L];
	FieldArray<FParticleStateTextures, 2> StateTexturesField() { return {this, "FParticleSimulationResources.StateTextures"}; }
	FParticleAttributesTexture& RenderAttributesTextureField() { return *GetNativePointerField<FParticleAttributesTexture*>(this, "FParticleSimulationResources.RenderAttributesTexture"); }
	FParticleAttributesTexture& SimulationAttributesTextureField() { return *GetNativePointerField<FParticleAttributesTexture*>(this, "FParticleSimulationResources.SimulationAttributesTexture"); }
	int& FrameIndexField() { return *GetNativePointerField<int*>(this, "FParticleSimulationResources.FrameIndex"); }
	TArray<FParticleSimulationSortInfo>& SimulationsToSortField() { return *GetNativePointerField<TArray<FParticleSimulationSortInfo>*>(this, "FParticleSimulationResources.SimulationsToSort"); }
	int& SortedParticleCountField() { return *GetNativePointerField<int*>(this, "FParticleSimulationResources.SortedParticleCount"); }
	FParticleTileAllocator& TileAllocatorField() { return *GetNativePointerField<FParticleTileAllocator*>(this, "FParticleSimulationResources.TileAllocator"); }

	// Functions

};

