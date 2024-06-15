#pragma once

#include "BaseDeclarations.h"
#include "FSceneRenderer.h"

struct FForwardShadingSceneRenderer : FSceneRenderer
{

	// Functions

	void InitViews(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FForwardShadingSceneRenderer.InitViews", RHICmdList); }
	void Render(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FForwardShadingSceneRenderer.Render", RHICmdList); }
	void RenderForwardShadingBasePass(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FForwardShadingSceneRenderer.RenderForwardShadingBasePass", RHICmdList); }
	void RenderTranslucency(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FForwardShadingSceneRenderer.RenderTranslucency", RHICmdList); }
	void InitDynamicShadows(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FForwardShadingSceneRenderer.InitDynamicShadows", RHICmdList); }
	bool RenderShadowDepthMap(FRHICommandListImmediate * RHICmdList, const FLightSceneInfo * LightSceneInfo) { return NativeCall<bool, FRHICommandListImmediate *, const FLightSceneInfo *>(this, "FForwardShadingSceneRenderer.RenderShadowDepthMap", RHICmdList, LightSceneInfo); }
	void RenderShadowDepthMaps(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FForwardShadingSceneRenderer.RenderShadowDepthMaps", RHICmdList); }
};

