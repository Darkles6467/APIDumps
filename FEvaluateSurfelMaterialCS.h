#pragma once

#include "BaseDeclarations.h"
#include "FMaterialShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FEvaluateSurfelMaterialCS : FMaterialShader
{
	char __padding[0x30L];
	FSurfelBufferParameters& SurfelBufferParametersField() { return *GetNativePointerField<FSurfelBufferParameters*>(this, "FEvaluateSurfelMaterialCS.SurfelBufferParameters"); }

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FMaterial * Material, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FMaterial *, FShaderCompilerEnvironment *>(nullptr, "FEvaluateSurfelMaterialCS.ModifyCompilationEnvironment", Platform, Material, OutEnvironment); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FEvaluateSurfelMaterialCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, int SurfelStartIndexValue, int NumSurfelsToGenerateValue, const FMaterialRenderProxy * MaterialProxy, FRHIUniformBuffer * PrimitiveUniformBuffer, const FMatrix * Instance0Transform) { NativeCall<void, FRHICommandList *, FSceneView *, int, int, const FMaterialRenderProxy *, FRHIUniformBuffer *, const FMatrix *>(this, "FEvaluateSurfelMaterialCS.SetParameters", RHICmdList, View, SurfelStartIndexValue, NumSurfelsToGenerateValue, MaterialProxy, PrimitiveUniformBuffer, Instance0Transform); }
};

