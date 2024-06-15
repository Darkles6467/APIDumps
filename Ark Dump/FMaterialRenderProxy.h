#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FMaterialRenderProxy : FRenderResource
{
	char __padding[0x110L];
	FieldArray<FUniformExpressionCache, 4> UniformExpressionCacheField() { return {this, "FMaterialRenderProxy.UniformExpressionCache"}; }
	void * SubsurfaceProfileRTField() { return GetNativePointerField<void *>(this, "FMaterialRenderProxy.SubsurfaceProfileRT"); }

	// Functions

	void EvaluateUniformExpressions(FUniformExpressionCache * OutUniformExpressionCache, const FMaterialRenderContext * Context, FRHICommandList * CommandListIfLocalMode) { NativeCall<void, FUniformExpressionCache *, const FMaterialRenderContext *, FRHICommandList *>(this, "FMaterialRenderProxy.EvaluateUniformExpressions", OutUniformExpressionCache, Context, CommandListIfLocalMode); }
	void InitDynamicRHI() { NativeCall<void>(this, "FMaterialRenderProxy.InitDynamicRHI"); }
	void InvalidateUniformExpressionCache() { NativeCall<void>(this, "FMaterialRenderProxy.InvalidateUniformExpressionCache"); }
	void ReleaseDynamicRHI() { NativeCall<void>(this, "FMaterialRenderProxy.ReleaseDynamicRHI"); }
	void UpdateUniformExpressionCacheIfNeeded(ERHIFeatureLevel::Type InFeatureLevel) { NativeCall<void, ERHIFeatureLevel::Type>(this, "FMaterialRenderProxy.UpdateUniformExpressionCacheIfNeeded", InFeatureLevel); }
};

