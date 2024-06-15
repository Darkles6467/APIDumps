#pragma once

#include "BaseDeclarations.h"
#include "FPooledRenderTarget.h"

struct FPostProcessing
{

	// Functions

	bool AllowFullPostProcessing(const FViewInfo * View, ERHIFeatureLevel::Type FeatureLevel) { return NativeCall<bool, const FViewInfo *, ERHIFeatureLevel::Type>(this, "FPostProcessing.AllowFullPostProcessing", View, FeatureLevel); }
	void Process(FRHICommandListImmediate * RHICmdList, FViewInfo * View, TRefCountPtr<IPooledRenderTarget> * VelocityRT) { NativeCall<void, FRHICommandListImmediate *, FViewInfo *, TRefCountPtr<IPooledRenderTarget> *>(this, "FPostProcessing.Process", RHICmdList, View, VelocityRT); }
	void ProcessES2(FRHICommandListImmediate * RHICmdList, FViewInfo * View, bool bUsedFramebufferFetch) { NativeCall<void, FRHICommandListImmediate *, FViewInfo *, bool>(this, "FPostProcessing.ProcessES2", RHICmdList, View, bUsedFramebufferFetch); }
};

