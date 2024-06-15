#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FShaderComplexityApplyPS : FGlobalShader
{
	char __padding[0xc8L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FShaderComplexityApplyPS.PostprocessParameter"); }

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FShaderComplexityApplyPS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FShaderComplexityApplyPS.Serialize", Ar); }
	void SetParameters(const FRenderingCompositePassContext * Context, const TArray<FLinearColor> * Colors) { NativeCall<void, const FRenderingCompositePassContext *, const TArray<FLinearColor> *>(this, "FShaderComplexityApplyPS.SetParameters", Context, Colors); }
};

