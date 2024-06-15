#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FReflectionCaptureSpecularBouncePS : FGlobalShader
{
	char __padding[0x78L];
	FDeferredPixelShaderParameters& DeferredParametersField() { return *GetNativePointerField<FDeferredPixelShaderParameters*>(this, "FReflectionCaptureSpecularBouncePS.DeferredParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FReflectionCaptureSpecularBouncePS.Serialize", Ar); }
};

