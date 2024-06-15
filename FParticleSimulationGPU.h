#pragma once

#include "BaseDeclarations.h"
struct FParticleSimulationGPU
{
	char __padding[0x250L];
	FParticleTileVertexBuffer& TileVertexBufferField() { return *GetNativePointerField<FParticleTileVertexBuffer*>(this, "FParticleSimulationGPU.TileVertexBuffer"); }
	const FParticleEmitterSimulationResources * EmitterSimulationResourcesField() { return GetNativePointerField<const FParticleEmitterSimulationResources *>(this, "FParticleSimulationGPU.EmitterSimulationResources"); }
	FParticlePerFrameSimulationParameters& PerFrameSimulationParametersField() { return *GetNativePointerField<FParticlePerFrameSimulationParameters*>(this, "FParticleSimulationGPU.PerFrameSimulationParameters"); }
	FBox& BoundsField() { return *GetNativePointerField<FBox*>(this, "FParticleSimulationGPU.Bounds"); }
	TArray<FNewParticle>& NewParticlesField() { return *GetNativePointerField<TArray<FNewParticle>*>(this, "FParticleSimulationGPU.NewParticles"); }
	TArray<unsigned int>& TilesToClearField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FParticleSimulationGPU.TilesToClear"); }
	FVectorFieldInstance& LocalVectorFieldField() { return *GetNativePointerField<FVectorFieldInstance*>(this, "FParticleSimulationGPU.LocalVectorField"); }
	FGPUParticleVertexBuffer& VertexBufferField() { return *GetNativePointerField<FGPUParticleVertexBuffer*>(this, "FParticleSimulationGPU.VertexBuffer"); }
	TIndirectArray<FGPUSpriteVertexFactory,TInlineAllocator<2> >& VertexFactoriesField() { return *GetNativePointerField<TIndirectArray<FGPUSpriteVertexFactory,TInlineAllocator<2> >*>(this, "FParticleSimulationGPU.VertexFactories"); }
	FVectorFieldVisualizationVertexFactory * VectorFieldVisualizationVertexFactoryField() { return GetNativePointerField<FVectorFieldVisualizationVertexFactory *>(this, "FParticleSimulationGPU.VectorFieldVisualizationVertexFactory"); }
	int& SimulationIndexField() { return *GetNativePointerField<int*>(this, "FParticleSimulationGPU.SimulationIndex"); }
	EParticleSimulatePhase::Type& SimulationPhaseField() { return *GetNativePointerField<EParticleSimulatePhase::Type*>(this, "FParticleSimulationGPU.SimulationPhase"); }
	bool& bWantsCollisionField() { return *GetNativePointerField<bool*>(this, "FParticleSimulationGPU.bWantsCollision"); }
	bool& bDirty_GameThreadField() { return *GetNativePointerField<bool*>(this, "FParticleSimulationGPU.bDirty_GameThread"); }
	bool& bReleased_GameThreadField() { return *GetNativePointerField<bool*>(this, "FParticleSimulationGPU.bReleased_GameThread"); }
	bool& bDestroyed_GameThreadField() { return *GetNativePointerField<bool*>(this, "FParticleSimulationGPU.bDestroyed_GameThread"); }

	// Functions

	void CreateVectorFieldVisualizationVertexFactory() { NativeCall<void>(this, "FParticleSimulationGPU.CreateVectorFieldVisualizationVertexFactory"); }
};

