#pragma once

#include "BaseDeclarations.h"
#include "FLocalVertexFactory.h"
#include "FVertexFactory.h"
#include "FRenderResource.h"

struct FGroundClutterVertexFactory : FLocalVertexFactory
{
	char __padding[0xf8L];
	FGroundClutterVertexFactory::DataType& DataField() { return *GetNativePointerField<FGroundClutterVertexFactory::DataType*>(this, "FGroundClutterVertexFactory.Data"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FGroundClutterVertexFactory.InitRHI"); }
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FMaterial * Material, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FMaterial *, FShaderCompilerEnvironment *>(nullptr, "FGroundClutterVertexFactory.ModifyCompilationEnvironment", Platform, Material, OutEnvironment); }
	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material, FShaderType * ShaderType) { return NativeCall<bool, EShaderPlatform, FMaterial *, FShaderType *>(nullptr, "FGroundClutterVertexFactory.ShouldCache", Platform, Material, ShaderType); }
};

