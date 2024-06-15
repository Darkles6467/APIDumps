#pragma once

#include "BaseDeclarations.h"
#include "NiagaraEffectRenderer.h"
#include "FParticleBeamTrailVertex.h"

struct NiagaraEffectRendererRibbon : NiagaraEffectRenderer
{
	char __padding[0x430L];
	FNiagaraDynamicDataRibbon * DynamicDataRenderField() { return GetNativePointerField<FNiagaraDynamicDataRibbon *>(this, "NiagaraEffectRendererRibbon.DynamicDataRender"); }
	TUniformBuffer<FPrimitiveUniformShaderParameters>& WorldSpacePrimitiveUniformBufferField() { return *GetNativePointerField<TUniformBuffer<FPrimitiveUniformShaderParameters>*>(this, "NiagaraEffectRendererRibbon.WorldSpacePrimitiveUniformBuffer"); }
	FParticleBeamTrailVertexFactory& VertexFactoryField() { return *GetNativePointerField<FParticleBeamTrailVertexFactory*>(this, "NiagaraEffectRendererRibbon.VertexFactory"); }
	FParticleBeamTrailUniformParameters& UniformParametersField() { return *GetNativePointerField<FParticleBeamTrailUniformParameters*>(this, "NiagaraEffectRendererRibbon.UniformParameters"); }
	TArray<TUniformBufferRef<FParticleBeamTrailUniformParameters>,TInlineAllocator<2> >& PerViewUniformBuffersField() { return *GetNativePointerField<TArray<TUniformBufferRef<FParticleBeamTrailUniformParameters>,TInlineAllocator<2> >*>(this, "NiagaraEffectRendererRibbon.PerViewUniformBuffers"); }
	FGlobalDynamicVertexBuffer::FAllocation& DynamicVertexAllocationField() { return *GetNativePointerField<FGlobalDynamicVertexBuffer::FAllocation*>(this, "NiagaraEffectRendererRibbon.DynamicVertexAllocation"); }

	// Functions

	void AddRibbonVert(TArray<FParticleBeamTrailVertex> * RenderData, FVector ParticlePos, const FNiagaraEmitterParticleData * Data, FVector2D UV1, const FVector4 * Color, const FVector4 * Age, const FVector4 * Rotation) { NativeCall<void, TArray<FParticleBeamTrailVertex> *, FVector, const FNiagaraEmitterParticleData *, FVector2D, const FVector4 *, const FVector4 *, const FVector4 *>(this, "NiagaraEffectRendererRibbon.AddRibbonVert", RenderData, ParticlePos, Data, UV1, Color, Age, Rotation); }
	void CreateRenderThreadResources() { NativeCall<void>(this, "NiagaraEffectRendererRibbon.CreateRenderThreadResources"); }
	void DrawDynamicElements(FPrimitiveDrawInterface * PDI, FSceneView * View) { NativeCall<void, FPrimitiveDrawInterface *, FSceneView *>(this, "NiagaraEffectRendererRibbon.DrawDynamicElements", PDI, View); }
	int GetDynamicDataSize() { return NativeCall<int>(this, "NiagaraEffectRendererRibbon.GetDynamicDataSize"); }
	void GetDynamicMeshElements(const TArray<FSceneView const *> * Views, FSceneViewFamily * ViewFamily, unsigned int VisibilityMap, FMeshElementCollector * Collector) { NativeCall<void, const TArray<FSceneView const *> *, FSceneViewFamily *, unsigned int, FMeshElementCollector *>(this, "NiagaraEffectRendererRibbon.GetDynamicMeshElements", Views, ViewFamily, VisibilityMap, Collector); }
	bool HasDynamicData() { return NativeCall<bool>(this, "NiagaraEffectRendererRibbon.HasDynamicData"); }
	void PreRenderView(FSceneViewFamily * ViewFamily, const unsigned int VisibilityMap, int FrameNumber) { NativeCall<void, FSceneViewFamily *, const unsigned int, int>(this, "NiagaraEffectRendererRibbon.PreRenderView", ViewFamily, VisibilityMap, FrameNumber); }
	void ReleaseRenderThreadResources() { NativeCall<void>(this, "NiagaraEffectRendererRibbon.ReleaseRenderThreadResources"); }
};

