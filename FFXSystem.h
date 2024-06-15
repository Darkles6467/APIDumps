#pragma once

#include "BaseDeclarations.h"
struct FFXSystemInterface
{
	char __padding[0x8L];

	// Functions

};

struct FFXSystem : FFXSystemInterface
{
	char __padding[0x90L];
	FParticleSimulationResources * ParticleSimulationResourcesField() { return GetNativePointerField<FParticleSimulationResources *>(this, "FFXSystem.ParticleSimulationResources"); }
	ERHIFeatureLevel::Type& FeatureLevelField() { return *GetNativePointerField<ERHIFeatureLevel::Type*>(this, "FFXSystem.FeatureLevel"); }
	TArray<FNewParticle>& LastFrameNewParticlesField() { return *GetNativePointerField<TArray<FNewParticle>*>(this, "FFXSystem.LastFrameNewParticles"); }

	// Functions

	void AddVectorField(UVectorFieldComponent * VectorFieldComponent) { NativeCall<void, UVectorFieldComponent *>(this, "FFXSystem.AddVectorField", VectorFieldComponent); }
	void DrawDebug(FCanvas * Canvas) { NativeCall<void, FCanvas *>(this, "FFXSystem.DrawDebug", Canvas); }
	void PostRenderOpaque(FRHICommandListImmediate * RHICmdList, FSceneView * CollisionView, FRHITexture2D * SceneDepthTexture, FRHITexture2D * GBufferATexture) { NativeCall<void, FRHICommandListImmediate *, FSceneView *, FRHITexture2D *, FRHITexture2D *>(this, "FFXSystem.PostRenderOpaque", RHICmdList, CollisionView, SceneDepthTexture, GBufferATexture); }
	void PreInitViews() { NativeCall<void>(this, "FFXSystem.PreInitViews"); }
	void PreRender(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FFXSystem.PreRender", RHICmdList); }
	void RemoveVectorField(UVectorFieldComponent * VectorFieldComponent) { NativeCall<void, UVectorFieldComponent *>(this, "FFXSystem.RemoveVectorField", VectorFieldComponent); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "FFXSystem.Tick", DeltaSeconds); }
	void UpdateVectorField(UVectorFieldComponent * VectorFieldComponent) { NativeCall<void, UVectorFieldComponent *>(this, "FFXSystem.UpdateVectorField", VectorFieldComponent); }
	int AddSortedGPUSimulation(FParticleSimulationGPU * Simulation, const FVector * ViewOrigin) { return NativeCall<int, FParticleSimulationGPU *, const FVector *>(this, "FFXSystem.AddSortedGPUSimulation", Simulation, ViewOrigin); }
	void AdvanceGPUParticleFrame() { NativeCall<void>(this, "FFXSystem.AdvanceGPUParticleFrame"); }
	void DestroyGPUSimulation() { NativeCall<void>(this, "FFXSystem.DestroyGPUSimulation"); }
	void InitGPUSimulation() { NativeCall<void>(this, "FFXSystem.InitGPUSimulation"); }
	void SimulateGPUParticles(FRHICommandListImmediate * RHICmdList, EParticleSimulatePhase::Type Phase, FSceneView * CollisionView, FRHITexture2D * SceneDepthTexture, FRHITexture2D * GBufferATexture) { NativeCall<void, FRHICommandListImmediate *, EParticleSimulatePhase::Type, FSceneView *, FRHITexture2D *, FRHITexture2D *>(this, "FFXSystem.SimulateGPUParticles", RHICmdList, Phase, CollisionView, SceneDepthTexture, GBufferATexture); }
	void SortGPUParticles(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FFXSystem.SortGPUParticles", RHICmdList); }
	void UpdateMultiGPUResources(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FFXSystem.UpdateMultiGPUResources", RHICmdList); }
};

