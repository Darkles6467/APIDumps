#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessBloomSetupVS : FGlobalShader
{
	char __padding[0xc8L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FPostProcessBloomSetupVS.PostprocessParameter"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FPostProcessBloomSetupVS.Serialize", Ar); }
	void SetVS(const FRenderingCompositePassContext * Context) { NativeCall<void, const FRenderingCompositePassContext *>(this, "FPostProcessBloomSetupVS.SetVS", Context); }
};

