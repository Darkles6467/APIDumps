#pragma once

#include "BaseDeclarations.h"
#include "FDeferredCleanupInterface.h"

struct FStaticMeshLODResources : FDeferredCleanupInterface
{
	char __padding[0x690L];
	FStaticMeshVertexBuffer& VertexBufferField() { return *GetNativePointerField<FStaticMeshVertexBuffer*>(this, "FStaticMeshLODResources.VertexBuffer"); }
	FPositionVertexBuffer& PositionVertexBufferField() { return *GetNativePointerField<FPositionVertexBuffer*>(this, "FStaticMeshLODResources.PositionVertexBuffer"); }
	FColorVertexBuffer& ColorVertexBufferField() { return *GetNativePointerField<FColorVertexBuffer*>(this, "FStaticMeshLODResources.ColorVertexBuffer"); }
	FRawStaticIndexBuffer& IndexBufferField() { return *GetNativePointerField<FRawStaticIndexBuffer*>(this, "FStaticMeshLODResources.IndexBuffer"); }
	FRawStaticIndexBuffer& DepthOnlyIndexBufferField() { return *GetNativePointerField<FRawStaticIndexBuffer*>(this, "FStaticMeshLODResources.DepthOnlyIndexBuffer"); }
	FRawStaticIndexBuffer& WireframeIndexBufferField() { return *GetNativePointerField<FRawStaticIndexBuffer*>(this, "FStaticMeshLODResources.WireframeIndexBuffer"); }
	FRawStaticIndexBuffer& AdjacencyIndexBufferField() { return *GetNativePointerField<FRawStaticIndexBuffer*>(this, "FStaticMeshLODResources.AdjacencyIndexBuffer"); }
	TArray<FStaticMeshSection>& SectionsField() { return *GetNativePointerField<TArray<FStaticMeshSection>*>(this, "FStaticMeshLODResources.Sections"); }
	FDistanceFieldVolumeData * DistanceFieldDataField() { return GetNativePointerField<FDistanceFieldVolumeData *>(this, "FStaticMeshLODResources.DistanceFieldData"); }
	float& MaxDeviationField() { return *GetNativePointerField<float*>(this, "FStaticMeshLODResources.MaxDeviation"); }
	bool& bHasAdjacencyInfoField() { return *GetNativePointerField<bool*>(this, "FStaticMeshLODResources.bHasAdjacencyInfo"); }

	// Functions

	int GetNumTriangles() { return NativeCall<int>(this, "FStaticMeshLODResources.GetNumTriangles"); }
	void InitResources(UStaticMesh * Parent) { NativeCall<void, UStaticMesh *>(this, "FStaticMeshLODResources.InitResources", Parent); }
	void Serialize(FArchive * Ar, UObject * Owner, int Index) { NativeCall<void, FArchive *, UObject *, int>(this, "FStaticMeshLODResources.Serialize", Ar, Owner, Index); }
};

