#pragma once

#include "BaseDeclarations.h"
#include "FDynamicMeshVertex.h"

struct FKConvexElem
{
	char __padding[0x70L];
	TArray<FVector>& VertexDataField() { return *GetNativePointerField<TArray<FVector>*>(this, "FKConvexElem.VertexData"); }
	FBox& ElemBoxField() { return *GetNativePointerField<FBox*>(this, "FKConvexElem.ElemBox"); }
	FTransform& TransformField() { return *GetNativePointerField<FTransform*>(this, "FKConvexElem.Transform"); }
	physx::PxConvexMesh * ConvexMeshField() { return GetNativePointerField<physx::PxConvexMesh *>(this, "FKConvexElem.ConvexMesh"); }
	physx::PxConvexMesh * ConvexMeshNegXField() { return GetNativePointerField<physx::PxConvexMesh *>(this, "FKConvexElem.ConvexMeshNegX"); }

	// Functions

	FBox * CalcAABB(FBox * result, const FTransform * BoneTM, const FVector * Scale3D) { return NativeCall<FBox *, FBox *, const FTransform *, const FVector *>(this, "FKConvexElem.CalcAABB", result, BoneTM, Scale3D); }
	void AddCachedSolidConvexGeom(TArray<FDynamicMeshVertex> * VertexBuffer, TArray<int> * IndexBuffer, const FColor VertexColor) { NativeCall<void, TArray<FDynamicMeshVertex> *, TArray<int> *, const FColor>(this, "FKConvexElem.AddCachedSolidConvexGeom", VertexBuffer, IndexBuffer, VertexColor); }
	void DrawElemWire(FPrimitiveDrawInterface * PDI, const FTransform * ElemTM, const FColor Color) { NativeCall<void, FPrimitiveDrawInterface *, const FTransform *, const FColor>(this, "FKConvexElem.DrawElemWire", PDI, ElemTM, Color); }
	float GetVolume(const FVector * Scale) { return NativeCall<float, const FVector *>(this, "FKConvexElem.GetVolume", Scale); }
};

