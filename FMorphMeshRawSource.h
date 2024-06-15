#pragma once

#include "BaseDeclarations.h"
struct FMorphMeshRawSource
{
	char __padding[0x38L];
	TArray<FMorphMeshVertexRaw>& VerticesField() { return *GetNativePointerField<TArray<FMorphMeshVertexRaw>*>(this, "FMorphMeshRawSource.Vertices"); }
	TArray<unsigned int>& IndicesField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FMorphMeshRawSource.Indices"); }
	TArray<unsigned int>& WedgePointIndicesField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FMorphMeshRawSource.WedgePointIndices"); }
};

