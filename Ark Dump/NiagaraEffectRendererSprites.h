#pragma once

#include "BaseDeclarations.h"
#include "NiagaraEffectRenderer.h"

struct NiagaraEffectRendererSprites : NiagaraEffectRenderer
{
	char __padding[0x490L];
	FNiagaraDynamicDataSprites * DynamicDataRenderField() { return GetNativePointerField<FNiagaraDynamicDataSprites *>(this, "NiagaraEffectRendererSprites.DynamicDataRender"); }
	TUniformBuffer<FPrimitiveUniformShaderParameters>& WorldSpacePrimitiveUniformBufferField() { return *GetNativePointerField<TUniformBuffer<FPrimitiveUniformShaderParameters>*>(this, "NiagaraEffectRendererSprites.WorldSpacePrimitiveUniformBuffer"); }
	FParticleSpriteUniformParameters& UniformParametersField() { return *GetNativePointerField<FParticleSpriteUniformParameters*>(this, "NiagaraEffectRendererSprites.UniformParameters"); }
	TArray<TUniformBufferRef<FParticleSpriteUniformParameters>,TInlineAllocator<2> >& PerViewUniformBuffersField() { return *GetNativePointerField<TArray<TUniformBufferRef<FParticleSpriteUniformParameters>,TInlineAllocator<2> >*>(this, "NiagaraEffectRendererSprites.PerViewUniformBuffers"); }
	FGlobalDynamicVertexBuffer::FAllocation& DynamicVertexAllocationField() { return *GetNativePointerField<FGlobalDynamicVertexBuffer::FAllocation*>(this, "NiagaraEffectRendererSprites.DynamicVertexAllocation"); }

	// Functions

	void CreateRenderThreadResources() { NativeCall<void>(this, "NiagaraEffectRendererSprites.CreateRenderThreadResources"); }
	void DrawDynamicElements(FPrimitiveDrawInterface * PDI, FSceneView * View) { NativeCall<void, FPrimitiveDrawInterface *, FSceneView *>(this, "NiagaraEffectRendererSprites.DrawDynamicElements", PDI, View); }
	int GetDynamicDataSize() { return NativeCall<int>(this, "NiagaraEffectRendererSprites.GetDynamicDataSize"); }
	void GetDynamicMeshElements(const TArray<FSceneView const *> * Views, FSceneViewFamily * ViewFamily, unsigned int VisibilityMap, FMeshElementCollector * Collector) { NativeCall<void, const TArray<FSceneView const *> *, FSceneViewFamily *, unsigned int, FMeshElementCollector *>(this, "NiagaraEffectRendererSprites.GetDynamicMeshElements", Views, ViewFamily, VisibilityMap, Collector); }
	void PreRenderView(FSceneViewFamily * ViewFamily, const unsigned int VisibilityMap, int FrameNumber) { NativeCall<void, FSceneViewFamily *, const unsigned int, int>(this, "NiagaraEffectRendererSprites.PreRenderView", ViewFamily, VisibilityMap, FrameNumber); }
	void ReleaseRenderThreadResources() { NativeCall<void>(this, "NiagaraEffectRendererSprites.ReleaseRenderThreadResources"); }
	void SetDynamicData_RenderThread(FNiagaraDynamicDataBase * NewDynamicData) { NativeCall<void, FNiagaraDynamicDataBase *>(this, "NiagaraEffectRendererSprites.SetDynamicData_RenderThread", NewDynamicData); }
};

