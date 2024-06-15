#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessLensFlaresPS : FGlobalShader
{
	char __padding[0xd0L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FPostProcessLensFlaresPS.PostprocessParameter"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FPostProcessLensFlaresPS.Serialize", Ar); }
	void SetParameters(const FRenderingCompositePassContext * Context, FVector2D TexScaleValue) { NativeCall<void, const FRenderingCompositePassContext *, FVector2D>(this, "FPostProcessLensFlaresPS.SetParameters", Context, TexScaleValue); }
};

