#pragma once

#include "BaseDeclarations.h"
#include "FPrimitiveSceneProxy.h"

struct FSkeletalMeshSceneProxy : FPrimitiveSceneProxy
{
	char __padding[0x90L];
	FSkeletalMeshResource * SkelMeshResourceField() { return GetNativePointerField<FSkeletalMeshResource *>(this, "FSkeletalMeshSceneProxy.SkelMeshResource"); }
	UPhysicsAsset * PhysicsAssetForDebugField() { return GetNativePointerField<UPhysicsAsset *>(this, "FSkeletalMeshSceneProxy.PhysicsAssetForDebug"); }
	TArray<FSkeletalMeshSceneProxy::FLODSectionElements>& LODSectionsField() { return *GetNativePointerField<TArray<FSkeletalMeshSceneProxy::FLODSectionElements>*>(this, "FSkeletalMeshSceneProxy.LODSections"); }
	bool& bMaterialsNeedMorphUsage_GameThreadField() { return *GetNativePointerField<bool*>(this, "FSkeletalMeshSceneProxy.bMaterialsNeedMorphUsage_GameThread"); }

	// Functions

	bool CanBeOccluded() { return NativeCall<bool>(this, "FSkeletalMeshSceneProxy.CanBeOccluded"); }
	void DrawDynamicElements(FPrimitiveDrawInterface * PDI, FSceneView * View) { NativeCall<void, FPrimitiveDrawInterface *, FSceneView *>(this, "FSkeletalMeshSceneProxy.DrawDynamicElements", PDI, View); }
	void DrawDynamicElementsSection(FPrimitiveDrawInterface * PDI, FSceneView * View, const FStaticLODModel * LODModel, const int LODIndex, const FSkelMeshSection * Section, const FSkelMeshChunk * Chunk, const FSkeletalMeshSceneProxy::FSectionElementInfo * SectionElementInfo, const FTwoVectors * CustomLeftRightVectors) { NativeCall<void, FPrimitiveDrawInterface *, FSceneView *, const FStaticLODModel *, const int, const FSkelMeshSection *, const FSkelMeshChunk *, const FSkeletalMeshSceneProxy::FSectionElementInfo *, const FTwoVectors *>(this, "FSkeletalMeshSceneProxy.DrawDynamicElementsSection", PDI, View, LODModel, LODIndex, Section, Chunk, SectionElementInfo, CustomLeftRightVectors); }
	void GetDynamicElementsSection(const TArray<FSceneView const *> * Views, FSceneViewFamily * ViewFamily, unsigned int VisibilityMap, const FStaticLODModel * LODModel, const int LODIndex, const FSkelMeshSection * Section, const FSkelMeshChunk * Chunk, const FSkeletalMeshSceneProxy::FSectionElementInfo * SectionElementInfo, const FTwoVectors * CustomLeftRightVectors, bool bSelectable, FMeshElementCollector * Collector) { NativeCall<void, const TArray<FSceneView const *> *, FSceneViewFamily *, unsigned int, const FStaticLODModel *, const int, const FSkelMeshSection *, const FSkelMeshChunk *, const FSkeletalMeshSceneProxy::FSectionElementInfo *, const FTwoVectors *, bool, FMeshElementCollector *>(this, "FSkeletalMeshSceneProxy.GetDynamicElementsSection", Views, ViewFamily, VisibilityMap, LODModel, LODIndex, Section, Chunk, SectionElementInfo, CustomLeftRightVectors, bSelectable, Collector); }
	void GetDynamicMeshElements(const TArray<FSceneView const *> * Views, FSceneViewFamily * ViewFamily, unsigned int VisibilityMap, FMeshElementCollector * Collector) { NativeCall<void, const TArray<FSceneView const *> *, FSceneViewFamily *, unsigned int, FMeshElementCollector *>(this, "FSkeletalMeshSceneProxy.GetDynamicMeshElements", Views, ViewFamily, VisibilityMap, Collector); }
	unsigned int GetMemoryFootprint() { return NativeCall<unsigned int>(this, "FSkeletalMeshSceneProxy.GetMemoryFootprint"); }
	void GetMeshElementsConditionallySelectable(const TArray<FSceneView const *> * Views, FSceneViewFamily * ViewFamily, bool bSelectable, unsigned int VisibilityMap, FMeshElementCollector * Collector) { NativeCall<void, const TArray<FSceneView const *> *, FSceneViewFamily *, bool, unsigned int, FMeshElementCollector *>(this, "FSkeletalMeshSceneProxy.GetMeshElementsConditionallySelectable", Views, ViewFamily, bSelectable, VisibilityMap, Collector); }
	FPrimitiveViewRelevance * GetViewRelevance(FPrimitiveViewRelevance * result, FSceneView * View) { return NativeCall<FPrimitiveViewRelevance *, FPrimitiveViewRelevance *, FSceneView *>(this, "FSkeletalMeshSceneProxy.GetViewRelevance", result, View); }
	void PreRenderView(FSceneViewFamily * ViewFamily, const unsigned int VisibilityMap, int FrameNumber) { NativeCall<void, FSceneViewFamily *, const unsigned int, int>(this, "FSkeletalMeshSceneProxy.PreRenderView", ViewFamily, VisibilityMap, FrameNumber); }
	void UpdateMorphMaterialUsage_GameThread(bool bNeedsMorphUsage) { NativeCall<void, bool>(this, "FSkeletalMeshSceneProxy.UpdateMorphMaterialUsage_GameThread", bNeedsMorphUsage); }
};

