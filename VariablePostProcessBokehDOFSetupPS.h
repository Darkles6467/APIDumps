#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct VariablePostProcessBokehDOFSetupPS : FGlobalShader
{
	char __padding[0x148L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "VariablePostProcessBokehDOFSetupPS.PostprocessParameter"); }
	FDeferredPixelShaderParameters& DeferredParametersField() { return *GetNativePointerField<FDeferredPixelShaderParameters*>(this, "VariablePostProcessBokehDOFSetupPS.DeferredParameters"); }

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "VariablePostProcessBokehDOFSetupPS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	void SetParameters(const FRenderingCompositePassContext * Context, float PassCount) { NativeCall<void, const FRenderingCompositePassContext *, float>(this, "VariablePostProcessBokehDOFSetupPS.SetParameters", Context, PassCount); }
};

