#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessBokehDOFPS : FGlobalShader
{
	char __padding[0xd0L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FPostProcessBokehDOFPS.PostprocessParameter"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FPostProcessBokehDOFPS.Serialize", Ar); }
	void SetParameters(const FRenderingCompositePassContext * Context, float PixelKernelSize) { NativeCall<void, const FRenderingCompositePassContext *, float>(this, "FPostProcessBokehDOFPS.SetParameters", Context, PixelKernelSize); }
};

