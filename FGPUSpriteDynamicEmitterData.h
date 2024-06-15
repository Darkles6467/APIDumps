#pragma once

#include "BaseDeclarations.h"
#include "FDynamicEmitterDataBase.h"

struct FGPUSpriteDynamicEmitterData : FDynamicEmitterDataBase
{
	char __padding[0x148L];
	FFXSystem * FXSystemField() { return GetNativePointerField<FFXSystem *>(this, "FGPUSpriteDynamicEmitterData.FXSystem"); }
	FGPUSpriteResources * ResourcesField() { return GetNativePointerField<FGPUSpriteResources *>(this, "FGPUSpriteDynamicEmitterData.Resources"); }
	FParticleSimulationGPU * SimulationField() { return GetNativePointerField<FParticleSimulationGPU *>(this, "FGPUSpriteDynamicEmitterData.Simulation"); }
	FBox& SimulationBoundsField() { return *GetNativePointerField<FBox*>(this, "FGPUSpriteDynamicEmitterData.SimulationBounds"); }
	TArray<FNewParticle>& NewParticlesField() { return *GetNativePointerField<TArray<FNewParticle>*>(this, "FGPUSpriteDynamicEmitterData.NewParticles"); }
	TArray<unsigned int>& TilesToClearField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FGPUSpriteDynamicEmitterData.TilesToClear"); }
	FMatrix& LocalVectorFieldToWorldField() { return *GetNativePointerField<FMatrix*>(this, "FGPUSpriteDynamicEmitterData.LocalVectorFieldToWorld"); }
	float& LocalVectorFieldIntensityField() { return *GetNativePointerField<float*>(this, "FGPUSpriteDynamicEmitterData.LocalVectorFieldIntensity"); }
	float& LocalVectorFieldTightnessField() { return *GetNativePointerField<float*>(this, "FGPUSpriteDynamicEmitterData.LocalVectorFieldTightness"); }
	FParticlePerFrameSimulationParameters& PerFrameSimulationParametersField() { return *GetNativePointerField<FParticlePerFrameSimulationParameters*>(this, "FGPUSpriteDynamicEmitterData.PerFrameSimulationParameters"); }
	FGPUSpriteEmitterDynamicUniformParameters& EmitterDynamicParametersField() { return *GetNativePointerField<FGPUSpriteEmitterDynamicUniformParameters*>(this, "FGPUSpriteDynamicEmitterData.EmitterDynamicParameters"); }
	TUniformBufferRef<FGPUSpriteEmitterDynamicUniformParameters>& DynamicUniformBufferField() { return *GetNativePointerField<TUniformBufferRef<FGPUSpriteEmitterDynamicUniformParameters>*>(this, "FGPUSpriteDynamicEmitterData.DynamicUniformBuffer"); }
	EParticleSortMode& SortModeField() { return *GetNativePointerField<EParticleSortMode*>(this, "FGPUSpriteDynamicEmitterData.SortMode"); }
	bool& bUseLocalSpaceField() { return *GetNativePointerField<bool*>(this, "FGPUSpriteDynamicEmitterData.bUseLocalSpace"); }

	// Functions

	void GetDynamicMeshElementsEmitter(const FParticleSystemSceneProxy * Proxy, FSceneView * View, FSceneViewFamily * ViewFamily, int ViewIndex, FMeshElementCollector * Collector) { NativeCall<void, const FParticleSystemSceneProxy *, FSceneView *, FSceneViewFamily *, int, FMeshElementCollector *>(this, "FGPUSpriteDynamicEmitterData.GetDynamicMeshElementsEmitter", Proxy, View, ViewFamily, ViewIndex, Collector); }
	void PreRenderView(FParticleSystemSceneProxy * Proxy, FSceneViewFamily * ViewFamily, const unsigned int VisibilityMap, int FrameNumber) { NativeCall<void, FParticleSystemSceneProxy *, FSceneViewFamily *, const unsigned int, int>(this, "FGPUSpriteDynamicEmitterData.PreRenderView", Proxy, ViewFamily, VisibilityMap, FrameNumber); }
	int RenderEmitter(FParticleSystemSceneProxy * Proxy, FPrimitiveDrawInterface * PDI, FSceneView * View) { return NativeCall<int, FParticleSystemSceneProxy *, FPrimitiveDrawInterface *, FSceneView *>(this, "FGPUSpriteDynamicEmitterData.RenderEmitter", Proxy, PDI, View); }
	bool RendersWithTranslucentMaterial() { return NativeCall<bool>(this, "FGPUSpriteDynamicEmitterData.RendersWithTranslucentMaterial"); }
	void UpdateRenderThreadResourcesEmitter(const FParticleSystemSceneProxy * InOwnerProxy) { NativeCall<void, const FParticleSystemSceneProxy *>(this, "FGPUSpriteDynamicEmitterData.UpdateRenderThreadResourcesEmitter", InOwnerProxy); }
};

