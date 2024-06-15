#pragma once

#include "BaseDeclarations.h"
#include "FBaseHS.h"
#include "FMeshMaterialShader.h"
#include "FMaterialShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FVelocityHS : FBaseHS
{

	// Functions

	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material, const FVertexFactoryType * VertexFactoryType) { return NativeCall<bool, EShaderPlatform, FMaterial *, const FVertexFactoryType *>(nullptr, "FVelocityHS.ShouldCache", Platform, Material, VertexFactoryType); }
};

