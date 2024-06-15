#pragma once

#include "BaseDeclarations.h"
struct FTriMeshCollisionData
{
	char __padding[0x38L];
	TArray<FVector>& VerticesField() { return *GetNativePointerField<TArray<FVector>*>(this, "FTriMeshCollisionData.Vertices"); }
	TArray<FTriIndices>& IndicesField() { return *GetNativePointerField<TArray<FTriIndices>*>(this, "FTriMeshCollisionData.Indices"); }
	TArray<unsigned short>& MaterialIndicesField() { return *GetNativePointerField<TArray<unsigned short>*>(this, "FTriMeshCollisionData.MaterialIndices"); }

	// Functions

};

