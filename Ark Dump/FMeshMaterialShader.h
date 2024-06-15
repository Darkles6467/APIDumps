#pragma once

#include "BaseDeclarations.h"
#include "FMaterialShader.h"

struct FMeshMaterialShader : FMaterialShader
{
	char __padding[0x28L];

	// Functions

	unsigned int GetAllocatedSize() { return NativeCall<unsigned int>(this, "FMeshMaterialShader.GetAllocatedSize"); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FMeshMaterialShader.Serialize", Ar); }
};

