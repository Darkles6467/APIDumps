#pragma once

#include "BaseDeclarations.h"
#include "FBox.h"

struct FRecastTileGenerator
{
	char __padding[0x178L];
	FRecastTileDirtyState& DirtyStateField() { return *GetNativePointerField<FRecastTileDirtyState*>(this, "FRecastTileGenerator.DirtyState"); }
	FRecastTileDirtyState& GeneratingStateField() { return *GetNativePointerField<FRecastTileDirtyState*>(this, "FRecastTileGenerator.GeneratingState"); }
	int& TileXField() { return *GetNativePointerField<int*>(this, "FRecastTileGenerator.TileX"); }
	int& TileYField() { return *GetNativePointerField<int*>(this, "FRecastTileGenerator.TileY"); }
	int& TileIdField() { return *GetNativePointerField<int*>(this, "FRecastTileGenerator.TileId"); }
	unsigned int& VersionField() { return *GetNativePointerField<unsigned int*>(this, "FRecastTileGenerator.Version"); }
	FieldArray<float, 3> BMinField() { return {this, "FRecastTileGenerator.BMin"}; }
	FieldArray<float, 3> BMaxField() { return {this, "FRecastTileGenerator.BMax"}; }
	FBox& TileBBField() { return *GetNativePointerField<FBox*>(this, "FRecastTileGenerator.TileBB"); }
	TArray<FBox>& LayerBBField() { return *GetNativePointerField<TArray<FBox>*>(this, "FRecastTileGenerator.LayerBB"); }
	TSharedPtr<FRecastNavMeshCachedData,1>& AdditionalCachedDataField() { return *GetNativePointerField<TSharedPtr<FRecastNavMeshCachedData,1>*>(this, "FRecastTileGenerator.AdditionalCachedData"); }
	TArray<FNavMeshTileData>& CompressedLayersField() { return *GetNativePointerField<TArray<FNavMeshTileData>*>(this, "FRecastTileGenerator.CompressedLayers"); }
	TArray<FNavMeshTileData>& NavigationDataField() { return *GetNativePointerField<TArray<FNavMeshTileData>*>(this, "FRecastTileGenerator.NavigationData"); }
	float& RasterizationPaddingField() { return *GetNativePointerField<float*>(this, "FRecastTileGenerator.RasterizationPadding"); }
	int& WalkableClimbVXField() { return *GetNativePointerField<int*>(this, "FRecastTileGenerator.WalkableClimbVX"); }
	float& WalkableSlopeCosField() { return *GetNativePointerField<float*>(this, "FRecastTileGenerator.WalkableSlopeCos"); }
	TNavStatArray<float>& GeomCoordsField() { return *GetNativePointerField<TNavStatArray<float>*>(this, "FRecastTileGenerator.GeomCoords"); }
	TNavStatArray<int>& GeomIndicesField() { return *GetNativePointerField<TNavStatArray<int>*>(this, "FRecastTileGenerator.GeomIndices"); }
	TArray<FRecastRawGeometryElement>& RawGeometryField() { return *GetNativePointerField<TArray<FRecastRawGeometryElement>*>(this, "FRecastTileGenerator.RawGeometry"); }
	TNavStatArray<FBox>& InclusionBoundsField() { return *GetNativePointerField<TNavStatArray<FBox>*>(this, "FRecastTileGenerator.InclusionBounds"); }
	TArray<FAreaNavModifier>& StaticAreasField() { return *GetNativePointerField<TArray<FAreaNavModifier>*>(this, "FRecastTileGenerator.StaticAreas"); }
	TArray<FAreaNavModifier>& DynamicAreasField() { return *GetNativePointerField<TArray<FAreaNavModifier>*>(this, "FRecastTileGenerator.DynamicAreas"); }
	TArray<FSimpleLinkNavModifier>& OffmeshLinksField() { return *GetNativePointerField<TArray<FSimpleLinkNavModifier>*>(this, "FRecastTileGenerator.OffmeshLinks"); }
	FWindowsCriticalSection& GenerationLockField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FRecastTileGenerator.GenerationLock"); }

	// Functions

	void AbadonGeneration() { NativeCall<void>(this, "FRecastTileGenerator.AbadonGeneration"); }
	void AbortRebuild() { NativeCall<void>(this, "FRecastTileGenerator.AbortRebuild"); }
	void AppendModifier(const FCompositeNavModifier * Modifier, bool bStatic) { NativeCall<void, const FCompositeNavModifier *, bool>(this, "FRecastTileGenerator.AppendModifier", Modifier, bStatic); }
	void ApplyVoxelFilter(rcHeightfield * HF, float WalkableRadius) { NativeCall<void, rcHeightfield *, float>(this, "FRecastTileGenerator.ApplyVoxelFilter", HF, WalkableRadius); }
	void ClearGeometry() { NativeCall<void>(this, "FRecastTileGenerator.ClearGeometry"); }
	void ClearModifiers() { NativeCall<void>(this, "FRecastTileGenerator.ClearModifiers"); }
	void FinishRebuild() { NativeCall<void>(this, "FRecastTileGenerator.FinishRebuild"); }
	bool GenerateCompressedLayers(FNavMeshBuildContext * BuildContext, FRecastNavMeshGenerator * Generator) { return NativeCall<bool, FNavMeshBuildContext *, FRecastNavMeshGenerator *>(this, "FRecastTileGenerator.GenerateCompressedLayers", BuildContext, Generator); }
	bool GenerateNavigationData(FNavMeshBuildContext * BuildContext, FRecastNavMeshGenerator * Generator) { return NativeCall<bool, FNavMeshBuildContext *, FRecastNavMeshGenerator *>(this, "FRecastTileGenerator.GenerateNavigationData", BuildContext, Generator); }
	bool GenerateTile() { return NativeCall<bool>(this, "FRecastTileGenerator.GenerateTile"); }
	unsigned int GetUsedMemCount() { return NativeCall<unsigned int>(this, "FRecastTileGenerator.GetUsedMemCount"); }
	void Init(FRecastNavMeshGenerator * ParentGenerator, const int X, const int Y, const float * TileBmin, const float * TileBmax, const TNavStatArray<FBox> * BoundingBoxes) { NativeCall<void, FRecastNavMeshGenerator *, const int, const int, const float *, const float *, const TNavStatArray<FBox> *>(this, "FRecastTileGenerator.Init", ParentGenerator, X, Y, TileBmin, TileBmax, BoundingBoxes); }
	void InitiateRebuild() { NativeCall<void>(this, "FRecastTileGenerator.InitiateRebuild"); }
	void MarkDynamicAreas(dtTileCacheLayer * Layer, const FRecastBuildConfig * TileConfig) { NativeCall<void, dtTileCacheLayer *, const FRecastBuildConfig *>(this, "FRecastTileGenerator.MarkDynamicAreas", Layer, TileConfig); }
	void MarkStaticAreas(FNavMeshBuildContext * BuildContext, rcCompactHeightfield * CompactHF, const FRecastBuildConfig * TileConfig) { NativeCall<void, FNavMeshBuildContext *, rcCompactHeightfield *, const FRecastBuildConfig *>(this, "FRecastTileGenerator.MarkStaticAreas", BuildContext, CompactHF, TileConfig); }
	void SetDirty(const FNavigationDirtyArea * DirtyArea, const FBox * AreaBounds) { NativeCall<void, const FNavigationDirtyArea *, const FBox *>(this, "FRecastTileGenerator.SetDirty", DirtyArea, AreaBounds); }
	void TriggerAsyncBuild() { NativeCall<void>(this, "FRecastTileGenerator.TriggerAsyncBuild"); }
};

