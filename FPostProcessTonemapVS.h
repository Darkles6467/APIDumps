#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessTonemapVS : FGlobalShader
{
	char __padding[0xd8L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FPostProcessTonemapVS.PostprocessParameter"); }

	// Functions

	void SetVS(const FRenderingCompositePassContext * Context) { NativeCall<void, const FRenderingCompositePassContext *>(this, "FPostProcessTonemapVS.SetVS", Context); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FPostProcessTonemapVS.Serialize", Ar); }
};

