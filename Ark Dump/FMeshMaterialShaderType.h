#pragma once

#include "BaseDeclarations.h"
#include "FShaderType.h"

struct FMeshMaterialShaderType : FShaderType
{
	char __padding[0x20L];

	// Functions

	bool ShouldLoadInShipping(EShaderPlatform Platform, FMaterial * Material) { return NativeCall<bool, EShaderPlatform, FMaterial *>(this, "FMeshMaterialShaderType.ShouldLoadInShipping", Platform, Material); }
};

