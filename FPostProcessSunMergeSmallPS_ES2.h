#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessSunMergeSmallPS_ES2 : FGlobalShader
{
	char __padding[0xe0L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FPostProcessSunMergeSmallPS_ES2.PostprocessParameter"); }

	// Functions

	unsigned int GetTypeSize() { return NativeCall<unsigned int>(this, "FPostProcessSunMergeSmallPS_ES2.GetTypeSize"); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FPostProcessSunMergeSmallPS_ES2.Serialize", Ar); }
	void SetPS(const FRenderingCompositePassContext * Context) { NativeCall<void, const FRenderingCompositePassContext *>(this, "FPostProcessSunMergeSmallPS_ES2.SetPS", Context); }
};

