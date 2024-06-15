#pragma once

#include "BaseDeclarations.h"
struct FRecastDebugGeometry
{
	enum EOffMeshLinkEnd
	{
		OMLE_None = 0x0,
		OMLE_Left = 0x1,
		OMLE_Right = 0x2,
		OMLE_Both = 0x3,
	};

	char __padding[0x888L];
	TArray<FVector>& MeshVertsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FRecastDebugGeometry.MeshVerts"); }
	FieldArray<TArray<int>, 64> AreaIndicesField() { return {this, "FRecastDebugGeometry.AreaIndices"}; }
	TArray<int>& BuiltMeshIndicesField() { return *GetNativePointerField<TArray<int>*>(this, "FRecastDebugGeometry.BuiltMeshIndices"); }
	TArray<FVector>& PolyEdgesField() { return *GetNativePointerField<TArray<FVector>*>(this, "FRecastDebugGeometry.PolyEdges"); }
	TArray<FVector>& NavMeshEdgesField() { return *GetNativePointerField<TArray<FVector>*>(this, "FRecastDebugGeometry.NavMeshEdges"); }
	TArray<FRecastDebugGeometry::FOffMeshLink>& OffMeshLinksField() { return *GetNativePointerField<TArray<FRecastDebugGeometry::FOffMeshLink>*>(this, "FRecastDebugGeometry.OffMeshLinks"); }
	TArray<FRecastDebugGeometry::FCluster>& ClustersField() { return *GetNativePointerField<TArray<FRecastDebugGeometry::FCluster>*>(this, "FRecastDebugGeometry.Clusters"); }
	TArray<FRecastDebugGeometry::FClusterLink>& ClusterLinksField() { return *GetNativePointerField<TArray<FRecastDebugGeometry::FClusterLink>*>(this, "FRecastDebugGeometry.ClusterLinks"); }
	TArray<FRecastDebugGeometry::FOffMeshSegment>& OffMeshSegmentsField() { return *GetNativePointerField<TArray<FRecastDebugGeometry::FOffMeshSegment>*>(this, "FRecastDebugGeometry.OffMeshSegments"); }
	FieldArray<TArray<int>, 64> OffMeshSegmentAreasField() { return {this, "FRecastDebugGeometry.OffMeshSegmentAreas"}; }
};

