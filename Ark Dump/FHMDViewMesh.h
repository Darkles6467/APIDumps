#pragma once

#include "BaseDeclarations.h"
struct FHMDViewMesh
{
	enum EHMDMeshType
	{
		MT_HiddenArea = 0x0,
		MT_VisibleArea = 0x1,
	};

	char __padding[0x20L];
	FFilterVertex * pVerticesField() { return GetNativePointerField<FFilterVertex *>(this, "FHMDViewMesh.pVertices"); }
	unsigned __int16 * pIndicesField() { return GetNativePointerField<unsigned __int16 *>(this, "FHMDViewMesh.pIndices"); }
	unsigned int& NumVerticesField() { return *GetNativePointerField<unsigned int*>(this, "FHMDViewMesh.NumVertices"); }
	unsigned int& NumIndicesField() { return *GetNativePointerField<unsigned int*>(this, "FHMDViewMesh.NumIndices"); }
	unsigned int& NumTrianglesField() { return *GetNativePointerField<unsigned int*>(this, "FHMDViewMesh.NumTriangles"); }

	// Functions

	void BuildMesh(const FVector2D * Positions, unsigned int VertexCount, FHMDViewMesh::EHMDMeshType MeshType) { NativeCall<void, const FVector2D *, unsigned int, FHMDViewMesh::EHMDMeshType>(this, "FHMDViewMesh.BuildMesh", Positions, VertexCount, MeshType); }
};

