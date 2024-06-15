#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessTonemapVS_ES2 : FGlobalShader
{
	char __padding[0xd0L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FPostProcessTonemapVS_ES2.PostprocessParameter"); }
	bool& bUsedFramebufferFetchField() { return *GetNativePointerField<bool*>(this, "FPostProcessTonemapVS_ES2.bUsedFramebufferFetch"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FPostProcessTonemapVS_ES2.Serialize", Ar); }
	void SetVS(const FRenderingCompositePassContext * Context) { NativeCall<void, const FRenderingCompositePassContext *>(this, "FPostProcessTonemapVS_ES2.SetVS", Context); }
};

