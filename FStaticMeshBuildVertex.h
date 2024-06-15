#pragma once

#include "BaseDeclarations.h"
struct FStaticMeshBuildVertex
{
	char __padding[0x5cL];
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FStaticMeshBuildVertex.Position"); }
	FPackedNormal& TangentXField() { return *GetNativePointerField<FPackedNormal*>(this, "FStaticMeshBuildVertex.TangentX"); }
	FPackedNormal& TangentYField() { return *GetNativePointerField<FPackedNormal*>(this, "FStaticMeshBuildVertex.TangentY"); }
	FPackedNormal& TangentZField() { return *GetNativePointerField<FPackedNormal*>(this, "FStaticMeshBuildVertex.TangentZ"); }
	FieldArray<FVector2D[8], 28> UVsField() { return {this, "FStaticMeshBuildVertex.UVs"}; }
	FColor& ColorField() { return *GetNativePointerField<FColor*>(this, "FStaticMeshBuildVertex.Color"); }
};

