#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessHistogramReducePS : FGlobalShader
{
	char __padding[0xd8L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FPostProcessHistogramReducePS.PostprocessParameter"); }

	// Functions

	unsigned int GetTypeSize() { return NativeCall<unsigned int>(this, "FPostProcessHistogramReducePS.GetTypeSize"); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FPostProcessHistogramReducePS.Serialize", Ar); }
	void SetPS(const FRenderingCompositePassContext * Context, unsigned int LoopSizeValue) { NativeCall<void, const FRenderingCompositePassContext *, unsigned int>(this, "FPostProcessHistogramReducePS.SetPS", Context, LoopSizeValue); }
};

