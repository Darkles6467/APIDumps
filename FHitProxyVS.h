#pragma once

#include "BaseDeclarations.h"
#include "FMeshMaterialShader.h"
#include "FMaterialShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FHitProxyVS : FMeshMaterialShader
{

	// Functions

	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material, const FVertexFactoryType * VertexFactoryType) { return NativeCall<bool, EShaderPlatform, FMaterial *, const FVertexFactoryType *>(nullptr, "FHitProxyVS.ShouldCache", Platform, Material, VertexFactoryType); }
};

