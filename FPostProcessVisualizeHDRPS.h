#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessVisualizeHDRPS : FGlobalShader
{
	char __padding[0x108L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FPostProcessVisualizeHDRPS.PostprocessParameter"); }

	// Functions

	unsigned int GetTypeSize() { return NativeCall<unsigned int>(this, "FPostProcessVisualizeHDRPS.GetTypeSize"); }
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FPostProcessVisualizeHDRPS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FPostProcessVisualizeHDRPS.Serialize", Ar); }
	void SetPS(const FRenderingCompositePassContext * Context) { NativeCall<void, const FRenderingCompositePassContext *>(this, "FPostProcessVisualizeHDRPS.SetPS", Context); }
};

