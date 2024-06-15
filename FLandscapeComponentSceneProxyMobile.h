#pragma once

#include "BaseDeclarations.h"
#include "FPrimitiveSceneProxy.h"

struct FLandscapeComponentSceneProxy : FPrimitiveSceneProxy
{
	char __padding[0x400L];
	FieldArray<_BYTE, 8> WeightmapTexturesField() { return {this, "FLandscapeComponentSceneProxy.WeightmapTextures"}; }
	int& NumWeightmapLayerAllocationsField() { return *GetNativePointerField<int*>(this, "FLandscapeComponentSceneProxy.NumWeightmapLayerAllocations"); }
	FieldArray<unsigned int, 32> LandscapeInfoIDsField() { return {this, "FLandscapeComponentSceneProxy.LandscapeInfoIDs"}; }
	FieldArray<float, 32> ValidMasksField() { return {this, "FLandscapeComponentSceneProxy.ValidMasks"}; }
	int& LandscapeVisibilityOffsetField() { return *GetNativePointerField<int*>(this, "FLandscapeComponentSceneProxy.LandscapeVisibilityOffset"); }
	int& MaxLODField() { return *GetNativePointerField<int*>(this, "FLandscapeComponentSceneProxy.MaxLOD"); }
	int& ComponentSizeQuadsField() { return *GetNativePointerField<int*>(this, "FLandscapeComponentSceneProxy.ComponentSizeQuads"); }
	int& ComponentSizeVertsField() { return *GetNativePointerField<int*>(this, "FLandscapeComponentSceneProxy.ComponentSizeVerts"); }
	int& NumSubsectionsField() { return *GetNativePointerField<int*>(this, "FLandscapeComponentSceneProxy.NumSubsections"); }
	int& SubsectionSizeQuadsField() { return *GetNativePointerField<int*>(this, "FLandscapeComponentSceneProxy.SubsectionSizeQuads"); }
	int& SubsectionSizeVertsField() { return *GetNativePointerField<int*>(this, "FLandscapeComponentSceneProxy.SubsectionSizeVerts"); }
	FIntPoint& SectionBaseField() { return *GetNativePointerField<FIntPoint*>(this, "FLandscapeComponentSceneProxy.SectionBase"); }
	float& StaticLightingResolutionField() { return *GetNativePointerField<float*>(this, "FLandscapeComponentSceneProxy.StaticLightingResolution"); }
	unsigned int& StaticLightingLODField() { return *GetNativePointerField<unsigned int*>(this, "FLandscapeComponentSceneProxy.StaticLightingLOD"); }
	FMatrix& LocalToWorldNoScalingField() { return *GetNativePointerField<FMatrix*>(this, "FLandscapeComponentSceneProxy.LocalToWorldNoScaling"); }
	TArray<FLandscapeBatchElementParams>& StaticBatchParamArrayField() { return *GetNativePointerField<TArray<FLandscapeBatchElementParams>*>(this, "FLandscapeComponentSceneProxy.StaticBatchParamArray"); }
	float& LODDistanceField() { return *GetNativePointerField<float*>(this, "FLandscapeComponentSceneProxy.LODDistance"); }
	float& PrecomputedLODFactorField() { return *GetNativePointerField<float*>(this, "FLandscapeComponentSceneProxy.PrecomputedLODFactor"); }
	float& DistDiffField() { return *GetNativePointerField<float*>(this, "FLandscapeComponentSceneProxy.DistDiff"); }
	FVector4& WeightmapScaleBiasField() { return *GetNativePointerField<FVector4*>(this, "FLandscapeComponentSceneProxy.WeightmapScaleBias"); }
	float& WeightmapSubsectionOffsetField() { return *GetNativePointerField<float*>(this, "FLandscapeComponentSceneProxy.WeightmapSubsectionOffset"); }
	FVector4& HeightmapScaleBiasField() { return *GetNativePointerField<FVector4*>(this, "FLandscapeComponentSceneProxy.HeightmapScaleBias"); }
	float& HeightmapSubsectionOffsetUField() { return *GetNativePointerField<float*>(this, "FLandscapeComponentSceneProxy.HeightmapSubsectionOffsetU"); }
	float& HeightmapSubsectionOffsetVField() { return *GetNativePointerField<float*>(this, "FLandscapeComponentSceneProxy.HeightmapSubsectionOffsetV"); }
	bool& bRequiresAdjacencyInformationField() { return *GetNativePointerField<bool*>(this, "FLandscapeComponentSceneProxy.bRequiresAdjacencyInformation"); }
	unsigned int& SharedBuffersKeyField() { return *GetNativePointerField<unsigned int*>(this, "FLandscapeComponentSceneProxy.SharedBuffersKey"); }
	FLandscapeSharedBuffers * SharedBuffersField() { return GetNativePointerField<FLandscapeSharedBuffers *>(this, "FLandscapeComponentSceneProxy.SharedBuffers"); }
	FLandscapeEditToolRenderData * EditToolRenderDataField() { return GetNativePointerField<FLandscapeEditToolRenderData *>(this, "FLandscapeComponentSceneProxy.EditToolRenderData"); }
	const ULandscapeComponent * LandscapeComponentField() { return GetNativePointerField<const ULandscapeComponent *>(this, "FLandscapeComponentSceneProxy.LandscapeComponent"); }
	FieldArray<FVector2D[4], 24> NeighborPositionField() { return {this, "FLandscapeComponentSceneProxy.NeighborPosition"}; }
	int& ForcedLODField() { return *GetNativePointerField<int*>(this, "FLandscapeComponentSceneProxy.ForcedLOD"); }
	int& LODBiasField() { return *GetNativePointerField<int*>(this, "FLandscapeComponentSceneProxy.LODBias"); }
	FieldArray<char, 4> ForcedNeighborLODField() { return {this, "FLandscapeComponentSceneProxy.ForcedNeighborLOD"}; }
	FieldArray<char, 4> NeighborLODBiasField() { return {this, "FLandscapeComponentSceneProxy.NeighborLODBias"}; }
	ELandscapeLODFalloff::Type& LODFalloffField() { return *GetNativePointerField<ELandscapeLODFalloff::Type*>(this, "FLandscapeComponentSceneProxy.LODFalloff"); }
	TUniformBuffer<FLandscapeUniformShaderParameters>& LandscapeUniformShaderParametersField() { return *GetNativePointerField<TUniformBuffer<FLandscapeUniformShaderParameters>*>(this, "FLandscapeComponentSceneProxy.LandscapeUniformShaderParameters"); }
	FMatrix& WorldToLocalField() { return *GetNativePointerField<FMatrix*>(this, "FLandscapeComponentSceneProxy.WorldToLocal"); }
	FMatrix& WorldToUVField() { return *GetNativePointerField<FMatrix*>(this, "FLandscapeComponentSceneProxy.WorldToUV"); }
	TArray<FLandscapeBatchElementParams>& DynamicMeshBatchParamArrayField() { return *GetNativePointerField<TArray<FLandscapeBatchElementParams>*>(this, "FLandscapeComponentSceneProxy.DynamicMeshBatchParamArray"); }

	// Functions

	int CalcLODForSubsectionNoForced(FSceneView * View, int SubX, int SubY, const FVector2D * CameraLocalPos) { return NativeCall<int, FSceneView *, int, int, const FVector2D *>(this, "FLandscapeComponentSceneProxy.CalcLODForSubsectionNoForced", View, SubX, SubY, CameraLocalPos); }
	void CalcLODParamsForSubsection(FSceneView * View, const FVector2D * CameraLocalPos, int SubX, int SubY, float * OutfLOD, FVector4 * OutNeighborLODs, float * OutDistLOD) { NativeCall<void, FSceneView *, const FVector2D *, int, int, float *, FVector4 *, float *>(this, "FLandscapeComponentSceneProxy.CalcLODParamsForSubsection", View, CameraLocalPos, SubX, SubY, OutfLOD, OutNeighborLODs, OutDistLOD); }
	bool CanBeOccluded() { return NativeCall<bool>(this, "FLandscapeComponentSceneProxy.CanBeOccluded"); }
	void CreateRenderThreadResources() { NativeCall<void>(this, "FLandscapeComponentSceneProxy.CreateRenderThreadResources"); }
	void DrawDynamicElements(FPrimitiveDrawInterface * PDI, FSceneView * View) { NativeCall<void, FPrimitiveDrawInterface *, FSceneView *>(this, "FLandscapeComponentSceneProxy.DrawDynamicElements", PDI, View); }
	void DrawStaticElements(FStaticPrimitiveDrawInterface * PDI) { NativeCall<void, FStaticPrimitiveDrawInterface *>(this, "FLandscapeComponentSceneProxy.DrawStaticElements", PDI); }
	void GetDynamicMeshElements(const TArray<FSceneView const *> * Views, FSceneViewFamily * ViewFamily, unsigned int VisibilityMap, FMeshElementCollector * Collector) { NativeCall<void, const TArray<FSceneView const *> *, FSceneViewFamily *, unsigned int, FMeshElementCollector *>(this, "FLandscapeComponentSceneProxy.GetDynamicMeshElements", Views, ViewFamily, VisibilityMap, Collector); }
	void GetHeightfieldRepresentation(UTexture2D ** OutHeightmapTexture, UTexture2D ** OutVisibilityTexture, FHeightfieldComponentDescription * OutDescription) { NativeCall<void, UTexture2D **, UTexture2D **, FHeightfieldComponentDescription *>(this, "FLandscapeComponentSceneProxy.GetHeightfieldRepresentation", OutHeightmapTexture, OutVisibilityTexture, OutDescription); }
	FLightInteraction * FLandscapeLCI(FLightInteraction * result, FLightSceneProxy * LightSceneProxy) { return NativeCall<FLightInteraction *, FLightInteraction *, FLightSceneProxy *>(this, "FLandscapeComponentSceneProxy.FLandscapeLCI", result, LightSceneProxy); }
	const FMatrix * GetLandscapeWorldToUV() { return NativeCall<const FMatrix *>(this, "FLandscapeComponentSceneProxy.GetLandscapeWorldToUV"); }
	void GetLightRelevance(FLightSceneProxy * LightSceneProxy, bool * bDynamic, bool * bRelevant, bool * bLightMapped, bool * bShadowMapped) { NativeCall<void, FLightSceneProxy *, bool *, bool *, bool *, bool *>(this, "FLandscapeComponentSceneProxy.GetLightRelevance", LightSceneProxy, bDynamic, bRelevant, bLightMapped, bShadowMapped); }
	unsigned int GetMemoryFootprint() { return NativeCall<unsigned int>(this, "FLandscapeComponentSceneProxy.GetMemoryFootprint"); }
	unsigned __int64 GetStaticBatchElementVisibility(FSceneView * View, const FMeshBatch * Batch) { return NativeCall<unsigned __int64, FSceneView *, const FMeshBatch *>(this, "FLandscapeComponentSceneProxy.GetStaticBatchElementVisibility", View, Batch); }
	FPrimitiveViewRelevance * GetViewRelevance(FPrimitiveViewRelevance * result, FSceneView * View) { return NativeCall<FPrimitiveViewRelevance *, FPrimitiveViewRelevance *, FSceneView *>(this, "FLandscapeComponentSceneProxy.GetViewRelevance", result, View); }
	void OnTransformChanged() { NativeCall<void>(this, "FLandscapeComponentSceneProxy.OnTransformChanged"); }
};

struct FLandscapeComponentSceneProxyMobile : FLandscapeComponentSceneProxy
{
	char __padding[0x20L];
	FLandscapeVertexBufferMobile * VertexBufferField() { return GetNativePointerField<FLandscapeVertexBufferMobile *>(this, "FLandscapeComponentSceneProxyMobile.VertexBuffer"); }
	TArray<unsigned char>& PlatformDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FLandscapeComponentSceneProxyMobile.PlatformData"); }

	// Functions

	void CreateRenderThreadResources() { NativeCall<void>(this, "FLandscapeComponentSceneProxyMobile.CreateRenderThreadResources"); }
};

