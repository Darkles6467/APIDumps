#pragma once

#include "BaseDeclarations.h"
struct FDynamicMeshVertex
{
	char __padding[0x20L];
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FDynamicMeshVertex.Position"); }
	FVector2D& TextureCoordinateField() { return *GetNativePointerField<FVector2D*>(this, "FDynamicMeshVertex.TextureCoordinate"); }
	FPackedNormal& TangentXField() { return *GetNativePointerField<FPackedNormal*>(this, "FDynamicMeshVertex.TangentX"); }
	FPackedNormal& TangentZField() { return *GetNativePointerField<FPackedNormal*>(this, "FDynamicMeshVertex.TangentZ"); }
	FColor& ColorField() { return *GetNativePointerField<FColor*>(this, "FDynamicMeshVertex.Color"); }

	// Functions

	void SetTangents(const FVector * InTangentX, const FVector * InTangentY, const FVector * InTangentZ) { NativeCall<void, const FVector *, const FVector *, const FVector *>(this, "FDynamicMeshVertex.SetTangents", InTangentX, InTangentY, InTangentZ); }
};

