#pragma once

#include "BaseDeclarations.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FStreamingTexturePrimitiveInfo.h"

struct UModelComponent : UPrimitiveComponent
{
	char __padding[0x40L];
	UModel * ModelField() { return GetNativePointerField<UModel *>(this, "UModelComponent.Model"); }
	int& ComponentIndexField() { return *GetNativePointerField<int*>(this, "UModelComponent.ComponentIndex"); }
	TArray<unsigned short>& NodesField() { return *GetNativePointerField<TArray<unsigned short>*>(this, "UModelComponent.Nodes"); }
	TIndirectArray<FModelElement>& ElementsField() { return *GetNativePointerField<TIndirectArray<FModelElement>*>(this, "UModelComponent.Elements"); }

	// Functions

	static void AddReferencedObjects(UObject * InThis, FReferenceCollector * Collector) { NativeCall<void, UObject *, FReferenceCollector *>(nullptr, "UModelComponent.AddReferencedObjects", InThis, Collector); }
	void BuildRenderData() { NativeCall<void>(this, "UModelComponent.BuildRenderData"); }
	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "UModelComponent.CalcBounds", result, LocalToWorld); }
	void CommitSurfaces() { NativeCall<void>(this, "UModelComponent.CommitSurfaces"); }
	bool ContainsPhysicsTriMeshData(bool InUseAllTriData) { return NativeCall<bool, bool>(this, "UModelComponent.ContainsPhysicsTriMeshData", InUseAllTriData); }
	void CreateModelBodySetup() { NativeCall<void>(this, "UModelComponent.CreateModelBodySetup"); }
	void GetLightAndShadowMapMemoryUsage(int * LightMapMemoryUsage, int * ShadowMapMemoryUsage) { NativeCall<void, int *, int *>(this, "UModelComponent.GetLightAndShadowMapMemoryUsage", LightMapMemoryUsage, ShadowMapMemoryUsage); }
	bool GetLightMapResolution(int * Width, int * Height) { return NativeCall<bool, int *, int *>(this, "UModelComponent.GetLightMapResolution", Width, Height); }
	int GetNumMaterials() { return NativeCall<int>(this, "UModelComponent.GetNumMaterials"); }
	bool GetPhysicsTriMeshData(FTriMeshCollisionData * CollisionData, bool InUseAllTriData) { return NativeCall<bool, FTriMeshCollisionData *, bool>(this, "UModelComponent.GetPhysicsTriMeshData", CollisionData, InUseAllTriData); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "UModelComponent.GetResourceSize", Mode); }
	void GetStreamingTextureInfo(TArray<FStreamingTexturePrimitiveInfo> * OutStreamingTextures) { NativeCall<void, TArray<FStreamingTexturePrimitiveInfo> *>(this, "UModelComponent.GetStreamingTextureInfo", OutStreamingTextures); }
	void GetSurfaceLightMapResolution(int SurfaceIndex, int QualityScale, int * Width, int * Height, FMatrix * WorldToMap, TArray<int> * GatheredNodes) { NativeCall<void, int, int, int *, int *, FMatrix *, TArray<int> *>(this, "UModelComponent.GetSurfaceLightMapResolution", SurfaceIndex, QualityScale, Width, Height, WorldToMap, GatheredNodes); }
	void GetUsedMaterials(TArray<UMaterialInterface *> * OutMaterials) { NativeCall<void, TArray<UMaterialInterface *> *>(this, "UModelComponent.GetUsedMaterials", OutMaterials); }
	void InvalidateLightingCacheDetailed(bool bInvalidateBuildEnqueuedLighting, bool bTranslationOnly) { NativeCall<void, bool, bool>(this, "UModelComponent.InvalidateLightingCacheDetailed", bInvalidateBuildEnqueuedLighting, bTranslationOnly); }
	void PostLoad() { NativeCall<void>(this, "UModelComponent.PostLoad"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UModelComponent.Serialize", Ar); }
	int GetStaticLightMapResolution() { return NativeCall<int>(this, "UModelComponent.GetStaticLightMapResolution"); }
};

