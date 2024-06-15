#pragma once

#include "BaseDeclarations.h"
#include "FDynamicSpriteEmitterDataBase.h"
#include "FDynamicEmitterDataBase.h"

struct FDynamicSpriteEmitterData : FDynamicSpriteEmitterDataBase
{
	char __padding[0x160L];
	FieldArray<_BYTE, 176> SourceField() { return {this, "FDynamicSpriteEmitterData.Source"}; }
	FParticleSpriteUniformParameters& UniformParametersField() { return *GetNativePointerField<FParticleSpriteUniformParameters*>(this, "FDynamicSpriteEmitterData.UniformParameters"); }
	TArray<TUniformBufferRef<FParticleSpriteUniformParameters>,TInlineAllocator<2> >& PerViewUniformBuffersField() { return *GetNativePointerField<TArray<TUniformBufferRef<FParticleSpriteUniformParameters>,TInlineAllocator<2> >*>(this, "FDynamicSpriteEmitterData.PerViewUniformBuffers"); }

	// Functions

	int GetDynamicVertexStride(ERHIFeatureLevel::Type InFeatureLevel) { return NativeCall<int, ERHIFeatureLevel::Type>(this, "FDynamicSpriteEmitterData.GetDynamicVertexStride", InFeatureLevel); }
	void GatherSimpleLights(const FParticleSystemSceneProxy * Proxy, FSceneViewFamily * ViewFamily, FSimpleLightArray * OutParticleLights) { NativeCall<void, const FParticleSystemSceneProxy *, FSceneViewFamily *, FSimpleLightArray *>(this, "FDynamicSpriteEmitterData.GatherSimpleLights", Proxy, ViewFamily, OutParticleLights); }
	void GetDynamicMeshElementsEmitter(const FParticleSystemSceneProxy * Proxy, FSceneView * View, FSceneViewFamily * ViewFamily, int ViewIndex, FMeshElementCollector * Collector) { NativeCall<void, const FParticleSystemSceneProxy *, FSceneView *, FSceneViewFamily *, int, FMeshElementCollector *>(this, "FDynamicSpriteEmitterData.GetDynamicMeshElementsEmitter", Proxy, View, ViewFamily, ViewIndex, Collector); }
	bool GetVertexAndIndexData(void * VertexData, void * DynamicParameterVertexData, void * FillIndexData, FParticleOrder * ParticleOrder, const FVector * InCameraPosition, const FMatrix * InLocalToWorld) { return NativeCall<bool, void *, void *, void *, FParticleOrder *, const FVector *, const FMatrix *>(this, "FDynamicSpriteEmitterData.GetVertexAndIndexData", VertexData, DynamicParameterVertexData, FillIndexData, ParticleOrder, InCameraPosition, InLocalToWorld); }
	bool GetVertexAndIndexDataNonInstanced(void * VertexData, void * DynamicParameterVertexData, void * FillIndexData, FParticleOrder * ParticleOrder, const FVector * InCameraPosition, const FMatrix * InLocalToWorld) { return NativeCall<bool, void *, void *, void *, FParticleOrder *, const FVector *, const FMatrix *>(this, "FDynamicSpriteEmitterData.GetVertexAndIndexDataNonInstanced", VertexData, DynamicParameterVertexData, FillIndexData, ParticleOrder, InCameraPosition, InLocalToWorld); }
	void Init(bool bInSelected) { NativeCall<void, bool>(this, "FDynamicSpriteEmitterData.Init", bInSelected); }
	void PreRenderView(FParticleSystemSceneProxy * Proxy, FSceneViewFamily * ViewFamily, const unsigned int VisibilityMap, int FrameNumber) { NativeCall<void, FParticleSystemSceneProxy *, FSceneViewFamily *, const unsigned int, int>(this, "FDynamicSpriteEmitterData.PreRenderView", Proxy, ViewFamily, VisibilityMap, FrameNumber); }
	void ReleaseRenderThreadResources(const FParticleSystemSceneProxy * InOwnerProxy) { NativeCall<void, const FParticleSystemSceneProxy *>(this, "FDynamicSpriteEmitterData.ReleaseRenderThreadResources", InOwnerProxy); }
	int RenderEmitter(FParticleSystemSceneProxy * Proxy, FPrimitiveDrawInterface * PDI, FSceneView * View) { return NativeCall<int, FParticleSystemSceneProxy *, FPrimitiveDrawInterface *, FSceneView *>(this, "FDynamicSpriteEmitterData.RenderEmitter", Proxy, PDI, View); }
	void UpdateRenderThreadResourcesEmitter(const FParticleSystemSceneProxy * InOwnerProxy) { NativeCall<void, const FParticleSystemSceneProxy *>(this, "FDynamicSpriteEmitterData.UpdateRenderThreadResourcesEmitter", InOwnerProxy); }
};

