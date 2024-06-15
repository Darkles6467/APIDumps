#pragma once

#include "BaseDeclarations.h"
struct FInstancedStaticMeshMappingInfo
{
	char __padding[0x18L];
	struct FInstancedStaticMeshStaticLightingTextureMapping * MappingField() { return GetNativePointerField<struct FInstancedStaticMeshStaticLightingTextureMapping *>(this, "FInstancedStaticMeshMappingInfo.Mapping"); }
	struct FInstancedLightMap2D * LightmapField() { return GetNativePointerField<struct FInstancedLightMap2D *>(this, "FInstancedStaticMeshMappingInfo.Lightmap"); }

	// Functions

};

