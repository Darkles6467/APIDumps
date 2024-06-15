#pragma once

#include "BaseDeclarations.h"
struct FNavigableGeometryExport
{
	char __padding[0x8L];

	// Functions

};

struct FRecastGeometryExport : FNavigableGeometryExport
{
	char __padding[0x30L];
	FNavigationRelevantData * DataField() { return GetNativePointerField<FNavigationRelevantData *>(this, "FRecastGeometryExport.Data"); }
	TNavStatArray<float>& VertexBufferField() { return *GetNativePointerField<TNavStatArray<float>*>(this, "FRecastGeometryExport.VertexBuffer"); }
	TNavStatArray<int>& IndexBufferField() { return *GetNativePointerField<TNavStatArray<int>*>(this, "FRecastGeometryExport.IndexBuffer"); }
	FWalkableSlopeOverride& SlopeOverrideField() { return *GetNativePointerField<FWalkableSlopeOverride*>(this, "FRecastGeometryExport.SlopeOverride"); }

	// Functions

	void AddNavModifiers(const FCompositeNavModifier * Modifiers) { NativeCall<void, const FCompositeNavModifier *>(this, "FRecastGeometryExport.AddNavModifiers", Modifiers); }
	void ExportCustomMesh(const FVector * InVertices, int NumVerts, const int * InIndices, int NumIndices, const FTransform * LocalToWorld) { NativeCall<void, const FVector *, int, const int *, int, const FTransform *>(this, "FRecastGeometryExport.ExportCustomMesh", InVertices, NumVerts, InIndices, NumIndices, LocalToWorld); }
	void ExportPxConvexMesh(const physx::PxConvexMesh *const ConvexMesh, const FTransform * LocalToWorld) { NativeCall<void, const physx::PxConvexMesh *const, const FTransform *>(this, "FRecastGeometryExport.ExportPxConvexMesh", ConvexMesh, LocalToWorld); }
	void ExportPxHeightField(const physx::PxHeightField *const HeightField, const FTransform * LocalToWorld) { NativeCall<void, const physx::PxHeightField *const, const FTransform *>(this, "FRecastGeometryExport.ExportPxHeightField", HeightField, LocalToWorld); }
	void ExportPxTriMesh16Bit(const physx::PxTriangleMesh *const TriMesh, const FTransform * LocalToWorld) { NativeCall<void, const physx::PxTriangleMesh *const, const FTransform *>(this, "FRecastGeometryExport.ExportPxTriMesh16Bit", TriMesh, LocalToWorld); }
	void ExportPxTriMesh32Bit(const physx::PxTriangleMesh *const TriMesh, const FTransform * LocalToWorld) { NativeCall<void, const physx::PxTriangleMesh *const, const FTransform *>(this, "FRecastGeometryExport.ExportPxTriMesh32Bit", TriMesh, LocalToWorld); }
	void ExportRigidBodySetup(UBodySetup * BodySetup, const FTransform * LocalToWorld) { NativeCall<void, UBodySetup *, const FTransform *>(this, "FRecastGeometryExport.ExportRigidBodySetup", BodySetup, LocalToWorld); }
};

