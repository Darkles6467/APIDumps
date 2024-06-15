#pragma once

#include "BaseDeclarations.h"
struct FBatchedMesh
{
	char __padding[0x30L];
	TArray<FVector>& MeshVertsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FBatchedMesh.MeshVerts"); }
	TArray<int>& MeshIndicesField() { return *GetNativePointerField<TArray<int>*>(this, "FBatchedMesh.MeshIndices"); }
	FColor& ColorField() { return *GetNativePointerField<FColor*>(this, "FBatchedMesh.Color"); }
	char& DepthPriorityField() { return *GetNativePointerField<char*>(this, "FBatchedMesh.DepthPriority"); }
	float& RemainingLifeTimeField() { return *GetNativePointerField<float*>(this, "FBatchedMesh.RemainingLifeTime"); }
};

