#pragma once

#include "BaseDeclarations.h"
struct FStaticMeshVertexDataInterface
{
	char __padding[0x8L];
};

struct FStaticMeshInstanceData : FStaticMeshVertexDataInterface
{
	char __padding[0x20L];

	// Functions

	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FStaticMeshInstanceData.Serialize", Ar); }
};

