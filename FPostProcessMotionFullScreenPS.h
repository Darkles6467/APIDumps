#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessMotionFullScreenPS : FGlobalShader
{
	char __padding[0x150L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FPostProcessMotionFullScreenPS.PostprocessParameter"); }
	FDeferredPixelShaderParameters& DeferredParametersField() { return *GetNativePointerField<FDeferredPixelShaderParameters*>(this, "FPostProcessMotionFullScreenPS.DeferredParameters"); }

	// Functions

	unsigned int GetTypeSize() { return NativeCall<unsigned int>(this, "FPostProcessMotionFullScreenPS.GetTypeSize"); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FPostProcessMotionFullScreenPS.Serialize", Ar); }
};

