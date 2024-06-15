#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FDistortionApplyScreenPS : FGlobalShader
{
	char __padding[0x20L];

	// Functions

	unsigned int GetTypeSize() { return NativeCall<unsigned int>(this, "FDistortionApplyScreenPS.GetTypeSize"); }
	void SetParameters(const FRenderingCompositePassContext * Context, IPooledRenderTarget * DistortionRT) { NativeCall<void, const FRenderingCompositePassContext *, IPooledRenderTarget *>(this, "FDistortionApplyScreenPS.SetParameters", Context, DistortionRT); }
};

