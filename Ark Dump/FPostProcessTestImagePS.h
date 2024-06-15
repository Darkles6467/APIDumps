#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessTestImagePS : FGlobalShader
{
	char __padding[0x150L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FPostProcessTestImagePS.PostprocessParameter"); }
	FDeferredPixelShaderParameters& DeferredParametersField() { return *GetNativePointerField<FDeferredPixelShaderParameters*>(this, "FPostProcessTestImagePS.DeferredParameters"); }
	FColorRemapShaderParameters& ColorRemapShaderParametersField() { return *GetNativePointerField<FColorRemapShaderParameters*>(this, "FPostProcessTestImagePS.ColorRemapShaderParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FPostProcessTestImagePS.Serialize", Ar); }
	void SetPS(const FRenderingCompositePassContext * Context) { NativeCall<void, const FRenderingCompositePassContext *>(this, "FPostProcessTestImagePS.SetPS", Context); }
};

