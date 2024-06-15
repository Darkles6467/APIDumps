#pragma once

#include "BaseDeclarations.h"
#include "FLightSceneProxy.h"

struct FPointLightSceneProxyBase : FLightSceneProxy
{
	char __padding[0x20L];
	float& FalloffExponentField() { return *GetNativePointerField<float*>(this, "FPointLightSceneProxyBase.FalloffExponent"); }
	float& SourceRadiusField() { return *GetNativePointerField<float*>(this, "FPointLightSceneProxyBase.SourceRadius"); }
	float& SourceLengthField() { return *GetNativePointerField<float*>(this, "FPointLightSceneProxyBase.SourceLength"); }
	float& MaxDrawDistanceSqField() { return *GetNativePointerField<float*>(this, "FPointLightSceneProxyBase.MaxDrawDistanceSq"); }

	// Functions

	bool AffectsBounds(const FBoxSphereBounds * Bounds) { return NativeCall<bool, const FBoxSphereBounds *>(this, "FPointLightSceneProxyBase.AffectsBounds", Bounds); }
	bool GetPerObjectProjectedShadowInitializer(const FBoxSphereBounds * SubjectBounds, FPerObjectProjectedShadowInitializer * OutInitializer) { return NativeCall<bool, const FBoxSphereBounds *, FPerObjectProjectedShadowInitializer *>(this, "FPointLightSceneProxyBase.GetPerObjectProjectedShadowInitializer", SubjectBounds, OutInitializer); }
	float GetRadius() { return NativeCall<float>(this, "FPointLightSceneProxyBase.GetRadius"); }
	bool GetScissorRect(FIntRect * ScissorRect, FSceneView * View) { return NativeCall<bool, FIntRect *, FSceneView *>(this, "FPointLightSceneProxyBase.GetScissorRect", ScissorRect, View); }
	float GetSortPriority(const FVector * ViewLoc) { return NativeCall<float, const FVector *>(this, "FPointLightSceneProxyBase.GetSortPriority", ViewLoc); }
	float GetSourceRadius() { return NativeCall<float>(this, "FPointLightSceneProxyBase.GetSourceRadius"); }
	bool IsInverseSquared() { return NativeCall<bool>(this, "FPointLightSceneProxyBase.IsInverseSquared"); }
	void SetScissorRect(FRHICommandList * RHICmdList, FSceneView * View) { NativeCall<void, FRHICommandList *, FSceneView *>(this, "FPointLightSceneProxyBase.SetScissorRect", RHICmdList, View); }
};

