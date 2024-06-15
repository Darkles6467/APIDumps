#pragma once

#include "BaseDeclarations.h"
#include "FDynamicMeshVertex.h"

struct FDynamicMeshBuilder
{
	char __padding[0x10L];
	FDynamicMeshIndexBuffer * IndexBufferField() { return GetNativePointerField<FDynamicMeshIndexBuffer *>(this, "FDynamicMeshBuilder.IndexBuffer"); }
	FDynamicMeshVertexBuffer * VertexBufferField() { return GetNativePointerField<FDynamicMeshVertexBuffer *>(this, "FDynamicMeshBuilder.VertexBuffer"); }

	// Functions

	void AddTriangle(int V0, int V1, int V2) { NativeCall<void, int, int, int>(this, "FDynamicMeshBuilder.AddTriangle", V0, V1, V2); }
	void AddTriangles(const TArray<int> * InIndices) { NativeCall<void, const TArray<int> *>(this, "FDynamicMeshBuilder.AddTriangles", InIndices); }
	int AddVertex(const FDynamicMeshVertex * InVertex) { return NativeCall<int, const FDynamicMeshVertex *>(this, "FDynamicMeshBuilder.AddVertex", InVertex); }
	int AddVertex(const FVector * InPosition, const FVector2D * InTextureCoordinate, const FVector * InTangentX, const FVector * InTangentY, const FVector * InTangentZ, const FColor * InColor) { return NativeCall<int, const FVector *, const FVector2D *, const FVector *, const FVector *, const FVector *, const FColor *>(this, "FDynamicMeshBuilder.AddVertex", InPosition, InTextureCoordinate, InTangentX, InTangentY, InTangentZ, InColor); }
	int AddVertices(const TArray<FDynamicMeshVertex> * InVertices) { return NativeCall<int, const TArray<FDynamicMeshVertex> *>(this, "FDynamicMeshBuilder.AddVertices", InVertices); }
	void Draw(FPrimitiveDrawInterface * PDI, const FMatrix * LocalToWorld, const FMaterialRenderProxy * MaterialRenderProxy, char DepthPriorityGroup, bool bDisableBackfaceCulling, bool bReceivesDecals) { NativeCall<void, FPrimitiveDrawInterface *, const FMatrix *, const FMaterialRenderProxy *, char, bool, bool>(this, "FDynamicMeshBuilder.Draw", PDI, LocalToWorld, MaterialRenderProxy, DepthPriorityGroup, bDisableBackfaceCulling, bReceivesDecals); }
	void GetMesh(const FMatrix * LocalToWorld, const FMaterialRenderProxy * MaterialRenderProxy, char DepthPriorityGroup, bool bDisableBackfaceCulling, bool bReceivesDecals, int ViewIndex, FMeshElementCollector * Collector) { NativeCall<void, const FMatrix *, const FMaterialRenderProxy *, char, bool, bool, int, FMeshElementCollector *>(this, "FDynamicMeshBuilder.GetMesh", LocalToWorld, MaterialRenderProxy, DepthPriorityGroup, bDisableBackfaceCulling, bReceivesDecals, ViewIndex, Collector); }
};

