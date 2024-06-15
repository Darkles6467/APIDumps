#pragma once

#include "BaseDeclarations.h"
#include "FBaseDS.h"
#include "FMeshMaterialShader.h"
#include "FMaterialShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FDepthOnlyDS : FBaseDS
{

	// Functions

	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material, const FVertexFactoryType * VertexFactoryType) { return NativeCall<bool, EShaderPlatform, FMaterial *, const FVertexFactoryType *>(nullptr, "FDepthOnlyDS.ShouldCache", Platform, Material, VertexFactoryType); }
};

