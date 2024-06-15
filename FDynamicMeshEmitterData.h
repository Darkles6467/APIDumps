#pragma once

#include "BaseDeclarations.h"
#include "FDynamicSpriteEmitterDataBase.h"
#include "FDynamicEmitterDataBase.h"

struct FDynamicMeshEmitterData : FDynamicSpriteEmitterDataBase
{
	char __padding[0x210L];
	FieldArray<_BYTE, 216> SourceField() { return {this, "FDynamicMeshEmitterData.Source"}; }
	int& LastFramePreRenderedField() { return *GetNativePointerField<int*>(this, "FDynamicMeshEmitterData.LastFramePreRendered"); }
	UStaticMesh * StaticMeshField() { return GetNativePointerField<UStaticMesh *>(this, "FDynamicMeshEmitterData.StaticMesh"); }
	TArray<FStaticMeshLODResources *>& CachedLODResourcesField() { return *GetNativePointerField<TArray<FStaticMeshLODResources *>*>(this, "FDynamicMeshEmitterData.CachedLODResources"); }
	TArray<FMeshParticleVertexFactory::FBatchParametersCPU,TInlineAllocator<4> >& MeshBatchParametersField() { return *GetNativePointerField<TArray<FMeshParticleVertexFactory::FBatchParametersCPU,TInlineAllocator<4> >*>(this, "FDynamicMeshEmitterData.MeshBatchParameters"); }
	TArray<int,TInlineAllocator<4> >& FirstBatchForViewField() { return *GetNativePointerField<TArray<int,TInlineAllocator<4> >*>(this, "FDynamicMeshEmitterData.FirstBatchForView"); }
	TArray<FMeshParticleInstanceVertex>& InstanceDataAllocationsCPUField() { return *GetNativePointerField<TArray<FMeshParticleInstanceVertex>*>(this, "FDynamicMeshEmitterData.InstanceDataAllocationsCPU"); }
	TArray<FMeshParticleInstanceVertexDynamicParameter>& DynamicParameterDataAllocationsCPUField() { return *GetNativePointerField<TArray<FMeshParticleInstanceVertexDynamicParameter>*>(this, "FDynamicMeshEmitterData.DynamicParameterDataAllocationsCPU"); }
	TUniformBufferRef<FMeshParticleUniformParameters>& UniformBufferField() { return *GetNativePointerField<TUniformBufferRef<FMeshParticleUniformParameters>*>(this, "FDynamicMeshEmitterData.UniformBuffer"); }
	unsigned int& MeshTypeDataOffsetField() { return *GetNativePointerField<unsigned int*>(this, "FDynamicMeshEmitterData.MeshTypeDataOffset"); }
	char& CameraFacingOptionField() { return *GetNativePointerField<char*>(this, "FDynamicMeshEmitterData.CameraFacingOption"); }

	// Functions

	void GetDynamicMeshElementsEmitter(const FParticleSystemSceneProxy * Proxy, FSceneView * View, FSceneViewFamily * ViewFamily, int ViewIndex, FMeshElementCollector * Collector) { NativeCall<void, const FParticleSystemSceneProxy *, FSceneView *, FSceneViewFamily *, int, FMeshElementCollector *>(this, "FDynamicMeshEmitterData.GetDynamicMeshElementsEmitter", Proxy, View, ViewFamily, ViewIndex, Collector); }
	int GetDynamicVertexStride(ERHIFeatureLevel::Type __formal) { return NativeCall<int, ERHIFeatureLevel::Type>(this, "FDynamicMeshEmitterData.GetDynamicVertexStride", __formal); }
	void GetInstanceData(void * InstanceData, void * DynamicParameterData, const FParticleSystemSceneProxy * Proxy, FSceneView * View) { NativeCall<void, void *, void *, const FParticleSystemSceneProxy *, FSceneView *>(this, "FDynamicMeshEmitterData.GetInstanceData", InstanceData, DynamicParameterData, Proxy, View); }
	void GetParticleTransform(const FBaseParticle * InParticle, const FVector * CameraPosition, const FVector * CameraFacingOpVector, const FQuat * PointToLockedAxis, const FParticleSystemSceneProxy * Proxy, FSceneView * View, FMatrix * OutTransformMat) { NativeCall<void, const FBaseParticle *, const FVector *, const FVector *, const FQuat *, const FParticleSystemSceneProxy *, FSceneView *, FMatrix *>(this, "FDynamicMeshEmitterData.GetParticleTransform", InParticle, CameraPosition, CameraFacingOpVector, PointToLockedAxis, Proxy, View, OutTransformMat); }
	void Init(bool bInSelected, const FParticleMeshEmitterInstance * InEmitterInstance, UStaticMesh * InStaticMesh) { NativeCall<void, bool, const FParticleMeshEmitterInstance *, UStaticMesh *>(this, "FDynamicMeshEmitterData.Init", bInSelected, InEmitterInstance, InStaticMesh); }
	void PreRenderView(FParticleSystemSceneProxy * Proxy, FSceneViewFamily * ViewFamily, const unsigned int VisibilityMap, int FrameNumber) { NativeCall<void, FParticleSystemSceneProxy *, FSceneViewFamily *, const unsigned int, int>(this, "FDynamicMeshEmitterData.PreRenderView", Proxy, ViewFamily, VisibilityMap, FrameNumber); }
	int RenderEmitter(FParticleSystemSceneProxy * Proxy, FPrimitiveDrawInterface * PDI, FSceneView * View) { return NativeCall<int, FParticleSystemSceneProxy *, FPrimitiveDrawInterface *, FSceneView *>(this, "FDynamicMeshEmitterData.RenderEmitter", Proxy, PDI, View); }
	void SetupVertexFactory(FMeshParticleVertexFactory * VertexFactory, FStaticMeshLODResources * LODResources) { NativeCall<void, FMeshParticleVertexFactory *, FStaticMeshLODResources *>(this, "FDynamicMeshEmitterData.SetupVertexFactory", VertexFactory, LODResources); }
	void UpdateRenderThreadResourcesEmitter(const FParticleSystemSceneProxy * InOwnerProxy) { NativeCall<void, const FParticleSystemSceneProxy *>(this, "FDynamicMeshEmitterData.UpdateRenderThreadResourcesEmitter", InOwnerProxy); }
};

