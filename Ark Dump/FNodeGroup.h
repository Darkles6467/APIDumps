#pragma once

#include "BaseDeclarations.h"
struct FNodeGroup
{
	char __padding[0x130L];
	TArray<int>& NodesField() { return *GetNativePointerField<TArray<int>*>(this, "FNodeGroup.Nodes"); }
	FVector& TangentXField() { return *GetNativePointerField<FVector*>(this, "FNodeGroup.TangentX"); }
	FVector& TangentYField() { return *GetNativePointerField<FVector*>(this, "FNodeGroup.TangentY"); }
	FVector& TangentZField() { return *GetNativePointerField<FVector*>(this, "FNodeGroup.TangentZ"); }
	FMatrix& MapToWorldField() { return *GetNativePointerField<FMatrix*>(this, "FNodeGroup.MapToWorld"); }
	FMatrix& WorldToMapField() { return *GetNativePointerField<FMatrix*>(this, "FNodeGroup.WorldToMap"); }
	FBox& BoundingBoxField() { return *GetNativePointerField<FBox*>(this, "FNodeGroup.BoundingBox"); }
	int& SizeXField() { return *GetNativePointerField<int*>(this, "FNodeGroup.SizeX"); }
	int& SizeYField() { return *GetNativePointerField<int*>(this, "FNodeGroup.SizeY"); }
	TArray<FStaticLightingVertex>& VerticesField() { return *GetNativePointerField<TArray<FStaticLightingVertex>*>(this, "FNodeGroup.Vertices"); }
	TArray<int>& TriangleVertexIndicesField() { return *GetNativePointerField<TArray<int>*>(this, "FNodeGroup.TriangleVertexIndices"); }
	TArray<int>& TriangleSurfaceMapField() { return *GetNativePointerField<TArray<int>*>(this, "FNodeGroup.TriangleSurfaceMap"); }
};

