#pragma once

#include "BaseDeclarations.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FStreamingTexturePrimitiveInfo.h"

struct ULandscapeComponent : UPrimitiveComponent
{
	char __padding[0x150L];
	int& ComponentSizeQuadsField() { return *GetNativePointerField<int*>(this, "ULandscapeComponent.ComponentSizeQuads"); }
	int& SubsectionSizeQuadsField() { return *GetNativePointerField<int*>(this, "ULandscapeComponent.SubsectionSizeQuads"); }
	int& NumSubsectionsField() { return *GetNativePointerField<int*>(this, "ULandscapeComponent.NumSubsections"); }
	TArray<FWeightmapLayerAllocationInfo>& WeightmapLayerAllocationsField() { return *GetNativePointerField<TArray<FWeightmapLayerAllocationInfo>*>(this, "ULandscapeComponent.WeightmapLayerAllocations"); }
	FVector4& WeightmapScaleBiasField() { return *GetNativePointerField<FVector4*>(this, "ULandscapeComponent.WeightmapScaleBias"); }
	float& WeightmapSubsectionOffsetField() { return *GetNativePointerField<float*>(this, "ULandscapeComponent.WeightmapSubsectionOffset"); }
	FVector4& HeightmapScaleBiasField() { return *GetNativePointerField<FVector4*>(this, "ULandscapeComponent.HeightmapScaleBias"); }
	FBoxSphereBounds& CachedBoxSphereBounds_DEPRECATEDField() { return *GetNativePointerField<FBoxSphereBounds*>(this, "ULandscapeComponent.CachedBoxSphereBounds_DEPRECATED"); }
	FBox& CachedLocalBoxField() { return *GetNativePointerField<FBox*>(this, "ULandscapeComponent.CachedLocalBox"); }
	TArray<FGuid>& IrrelevantLightsField() { return *GetNativePointerField<TArray<FGuid>*>(this, "ULandscapeComponent.IrrelevantLights"); }
	int& CollisionMipLevelField() { return *GetNativePointerField<int*>(this, "ULandscapeComponent.CollisionMipLevel"); }
	float& StaticLightingResolutionField() { return *GetNativePointerField<float*>(this, "ULandscapeComponent.StaticLightingResolution"); }
	int& ForcedLODField() { return *GetNativePointerField<int*>(this, "ULandscapeComponent.ForcedLOD"); }
	FieldArray<char, 8> NeighborLODField() { return {this, "ULandscapeComponent.NeighborLOD"}; }
	int& LODBiasField() { return *GetNativePointerField<int*>(this, "ULandscapeComponent.LODBias"); }
	FieldArray<char, 8> NeighborLODBiasField() { return {this, "ULandscapeComponent.NeighborLODBias"}; }
	FGuid& StateIdField() { return *GetNativePointerField<FGuid*>(this, "ULandscapeComponent.StateId"); }
	FLandscapeEditToolRenderData * EditToolRenderDataField() { return GetNativePointerField<FLandscapeEditToolRenderData *>(this, "ULandscapeComponent.EditToolRenderData"); }
	FLandscapeComponentDerivedData& PlatformDataField() { return *GetNativePointerField<FLandscapeComponentDerivedData*>(this, "ULandscapeComponent.PlatformData"); }

	// Functions

	static void AddReferencedObjects(UObject * InThis, FReferenceCollector * Collector) { NativeCall<void, UObject *, FReferenceCollector *>(nullptr, "ULandscapeComponent.AddReferencedObjects", InThis, Collector); }
	void BeginDestroy() { NativeCall<void>(this, "ULandscapeComponent.BeginDestroy"); }
	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "ULandscapeComponent.CalcBounds", result, LocalToWorld); }
	void DestroyComponent() { NativeCall<void>(this, "ULandscapeComponent.DestroyComponent"); }
	void GenerateHeightmapMips(TArray<FColor *> * HeightmapTextureMipData, int ComponentX1, int ComponentY1, int ComponentX2, int ComponentY2, FLandscapeTextureDataInfo * TextureDataInfo) { NativeCall<void, TArray<FColor *> *, int, int, int, int, FLandscapeTextureDataInfo *>(this, "ULandscapeComponent.GenerateHeightmapMips", HeightmapTextureMipData, ComponentX1, ComponentY1, ComponentX2, ComponentY2, TextureDataInfo); }
	FString * GetLayerAllocationKey(FString * result, bool bMobile) { return NativeCall<FString *, FString *, bool>(this, "ULandscapeComponent.GetLayerAllocationKey", result, bMobile); }
	FIntPoint * GetSectionBase(FIntPoint * result) { return NativeCall<FIntPoint *, FIntPoint *>(this, "ULandscapeComponent.GetSectionBase", result); }
	void GetUsedMaterials(TArray<UMaterialInterface *> * OutMaterials) { NativeCall<void, TArray<UMaterialInterface *> *>(this, "ULandscapeComponent.GetUsedMaterials", OutMaterials); }
	void Init(int InBaseX, int InBaseY, int InComponentSizeQuads, int InNumSubsections, int InSubsectionSizeQuads) { NativeCall<void, int, int, int, int, int>(this, "ULandscapeComponent.Init", InBaseX, InBaseY, InComponentSizeQuads, InNumSubsections, InSubsectionSizeQuads); }
	void OnUnregister() { NativeCall<void>(this, "ULandscapeComponent.OnUnregister"); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "ULandscapeComponent.PostDuplicate", bDuplicateForPIE); }
	void PostInitProperties() { NativeCall<void>(this, "ULandscapeComponent.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "ULandscapeComponent.Serialize", Ar); }
	void UpdateCollisionHeightData(const FColor * HeightmapTextureMipData, int ComponentX1, int ComponentY1, int ComponentX2, int ComponentY2, bool bUpdateBounds, const FColor * XYOffsetmapTextureData, bool bRebuild) { NativeCall<void, const FColor *, int, int, int, int, bool, const FColor *, bool>(this, "ULandscapeComponent.UpdateCollisionHeightData", HeightmapTextureMipData, ComponentX1, ComponentY1, ComponentX2, ComponentY2, bUpdateBounds, XYOffsetmapTextureData, bRebuild); }
	void UpdateCollisionLayerData(TArray<FColor *> * WeightmapTextureMipData, int ComponentX1, int ComponentY1, int ComponentX2, int ComponentY2) { NativeCall<void, TArray<FColor *> *, int, int, int, int>(this, "ULandscapeComponent.UpdateCollisionLayerData", WeightmapTextureMipData, ComponentX1, ComponentY1, ComponentX2, ComponentY2); }
	void UpdateCollisionLayerData() { NativeCall<void>(this, "ULandscapeComponent.UpdateCollisionLayerData"); }
	void UpdateMaterialInstances(ILandscapeMaterialUpdateRedirection * InRedirection) { NativeCall<void, ILandscapeMaterialUpdateRedirection *>(this, "ULandscapeComponent.UpdateMaterialInstances", InRedirection); }
	void GetStreamingTextureInfo(TArray<FStreamingTexturePrimitiveInfo> * OutStreamingTextures) { NativeCall<void, TArray<FStreamingTexturePrimitiveInfo> *>(this, "ULandscapeComponent.GetStreamingTextureInfo", OutStreamingTextures); }
	void InvalidateLightingCacheDetailed(bool bInvalidateBuildEnqueuedLighting, bool bTranslationOnly) { NativeCall<void, bool, bool>(this, "ULandscapeComponent.InvalidateLightingCacheDetailed", bInvalidateBuildEnqueuedLighting, bTranslationOnly); }
	void OnRegister() { NativeCall<void>(this, "ULandscapeComponent.OnRegister"); }
};

