#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessHistogramCS : FGlobalShader
{
	char __padding[0xe0L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FPostProcessHistogramCS.PostprocessParameter"); }

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FPostProcessHistogramCS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FPostProcessHistogramCS.Serialize", Ar); }
	void SetCS(FRHICommandList * RHICmdList, const FRenderingCompositePassContext * Context, FIntPoint ThreadGroupCountValue, FIntPoint LeftTopOffsetValue, FIntPoint GatherExtent) { NativeCall<void, FRHICommandList *, const FRenderingCompositePassContext *, FIntPoint, FIntPoint, FIntPoint>(this, "FPostProcessHistogramCS.SetCS", RHICmdList, Context, ThreadGroupCountValue, LeftTopOffsetValue, GatherExtent); }
};

