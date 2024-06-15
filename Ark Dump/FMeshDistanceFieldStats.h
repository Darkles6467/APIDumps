#pragma once

#include "BaseDeclarations.h"
struct FMeshDistanceFieldStats
{
	char __padding[0x18L];
	unsigned __int64& MemoryBytesField() { return *GetNativePointerField<unsigned __int64*>(this, "FMeshDistanceFieldStats.MemoryBytes"); }
	float& ResolutionScaleField() { return *GetNativePointerField<float*>(this, "FMeshDistanceFieldStats.ResolutionScale"); }
	UStaticMesh * MeshField() { return GetNativePointerField<UStaticMesh *>(this, "FMeshDistanceFieldStats.Mesh"); }
};

