#pragma once

#include "BaseDeclarations.h"
#include "FLandscapeVertexFactory.h"
#include "FVertexFactory.h"
#include "FRenderResource.h"

struct FLandscapeXYOffsetVertexFactory : FLandscapeVertexFactory
{

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FMaterial * Material, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FMaterial *, FShaderCompilerEnvironment *>(nullptr, "FLandscapeXYOffsetVertexFactory.ModifyCompilationEnvironment", Platform, Material, OutEnvironment); }
};

