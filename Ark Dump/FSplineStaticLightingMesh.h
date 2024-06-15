#pragma once

#include "BaseDeclarations.h"
struct FStaticLightingMesh
{
	char __padding[0xb8L];
	FieldArray<_BYTE, 8> gap8Field() { return {this, "FStaticLightingMesh.gap8"}; }
	const int& NumTrianglesField() { return *GetNativePointerField<const int*>(this, "FStaticLightingMesh.NumTriangles"); }
	const int& NumShadingTrianglesField() { return *GetNativePointerField<const int*>(this, "FStaticLightingMesh.NumShadingTriangles"); }
	const int& NumVerticesField() { return *GetNativePointerField<const int*>(this, "FStaticLightingMesh.NumVertices"); }
	const int& NumShadingVerticesField() { return *GetNativePointerField<const int*>(this, "FStaticLightingMesh.NumShadingVertices"); }
	const int& TextureCoordinateIndexField() { return *GetNativePointerField<const int*>(this, "FStaticLightingMesh.TextureCoordinateIndex"); }
	TArray<int>& VisibilityIdsField() { return *GetNativePointerField<TArray<int>*>(this, "FStaticLightingMesh.VisibilityIds"); }
	FBox& BoundingBoxField() { return *GetNativePointerField<FBox*>(this, "FStaticLightingMesh.BoundingBox"); }
	FGuid& GuidField() { return *GetNativePointerField<FGuid*>(this, "FStaticLightingMesh.Guid"); }
	FGuid& SourceMeshGuidField() { return *GetNativePointerField<FGuid*>(this, "FStaticLightingMesh.SourceMeshGuid"); }
	FieldArray<_BYTE, 16> gapA8Field() { return {this, "FStaticLightingMesh.gapA8"}; }

	// Functions

	const FGuid * GetLightingGuid() { return NativeCall<const FGuid *>(this, "FStaticLightingMesh.GetLightingGuid"); }
	void GetShadingTriangle(int TriangleIndex, FStaticLightingVertex * OutV0, FStaticLightingVertex * OutV1, FStaticLightingVertex * OutV2) { NativeCall<void, int, FStaticLightingVertex *, FStaticLightingVertex *, FStaticLightingVertex *>(this, "FStaticLightingMesh.GetShadingTriangle", TriangleIndex, OutV0, OutV1, OutV2); }
	void GetShadingTriangleIndices(int TriangleIndex, int * OutI0, int * OutI1, int * OutI2) { NativeCall<void, int, int *, int *, int *>(this, "FStaticLightingMesh.GetShadingTriangleIndices", TriangleIndex, OutI0, OutI1, OutI2); }
	bool IsUniformShadowCaster(ULightComponent * Light, const FStaticLightingMapping * Receiver) { return NativeCall<bool, ULightComponent *, const FStaticLightingMapping *>(this, "FStaticLightingMesh.IsUniformShadowCaster", Light, Receiver); }
};

struct FStaticMeshStaticLightingMesh : FStaticLightingMesh
{
	char __padding[0xd8L];
	const int& LODIndexField() { return *GetNativePointerField<const int*>(this, "FStaticMeshStaticLightingMesh.LODIndex"); }
	const UStaticMesh * StaticMeshField() { return GetNativePointerField<const UStaticMesh *>(this, "FStaticMeshStaticLightingMesh.StaticMesh"); }
	FStaticMeshLODResources * LODRenderDataField() { return GetNativePointerField<FStaticMeshLODResources *>(this, "FStaticMeshStaticLightingMesh.LODRenderData"); }
	FIndexArrayView& LODIndexBufferField() { return *GetNativePointerField<FIndexArrayView*>(this, "FStaticMeshStaticLightingMesh.LODIndexBuffer"); }
	FMatrix& LocalToWorldField() { return *GetNativePointerField<FMatrix*>(this, "FStaticMeshStaticLightingMesh.LocalToWorld"); }
	FMatrix& LocalToWorldInverseTransposeField() { return *GetNativePointerField<FMatrix*>(this, "FStaticMeshStaticLightingMesh.LocalToWorldInverseTranspose"); }
	float& LocalToWorldDeterminantField() { return *GetNativePointerField<float*>(this, "FStaticMeshStaticLightingMesh.LocalToWorldDeterminant"); }
	FieldArray<_BYTE, 24> gap178Field() { return {this, "FStaticMeshStaticLightingMesh.gap178"}; }

	// Functions

	void GetTriangle(int TriangleIndex, FStaticLightingVertex * OutV0, FStaticLightingVertex * OutV1, FStaticLightingVertex * OutV2) { NativeCall<void, int, FStaticLightingVertex *, FStaticLightingVertex *, FStaticLightingVertex *>(this, "FStaticMeshStaticLightingMesh.GetTriangle", TriangleIndex, OutV0, OutV1, OutV2); }
	void GetTriangleIndices(int TriangleIndex, int * OutI0, int * OutI1, int * OutI2) { NativeCall<void, int, int *, int *, int *>(this, "FStaticMeshStaticLightingMesh.GetTriangleIndices", TriangleIndex, OutI0, OutI1, OutI2); }
	FLightRayIntersection * IntersectLightRay(FLightRayIntersection * result, const FVector * Start, const FVector * End, bool bFindNearestIntersection) { return NativeCall<FLightRayIntersection *, FLightRayIntersection *, const FVector *, const FVector *, bool>(this, "FStaticMeshStaticLightingMesh.IntersectLightRay", result, Start, End, bFindNearestIntersection); }
	bool IsControllingShadowPerElement() { return NativeCall<bool>(this, "FStaticMeshStaticLightingMesh.IsControllingShadowPerElement"); }
	bool IsTriangleCastingShadow(unsigned int TriangleIndex) { return NativeCall<bool, unsigned int>(this, "FStaticMeshStaticLightingMesh.IsTriangleCastingShadow", TriangleIndex); }
	bool IsUniformShadowCaster() { return NativeCall<bool>(this, "FStaticMeshStaticLightingMesh.IsUniformShadowCaster"); }
	void SetLocalToWorld(const FMatrix * InLocalToWorld) { NativeCall<void, const FMatrix *>(this, "FStaticMeshStaticLightingMesh.SetLocalToWorld", InLocalToWorld); }
	bool ShouldCastShadow(ULightComponent * Light, const FStaticLightingMapping * Receiver) { return NativeCall<bool, ULightComponent *, const FStaticLightingMapping *>(this, "FStaticMeshStaticLightingMesh.ShouldCastShadow", Light, Receiver); }
};

struct FSplineStaticLightingMesh : FStaticMeshStaticLightingMesh
{

	// Functions

};

