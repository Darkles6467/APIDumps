#pragma once

#include "BaseDeclarations.h"
#include "FPrimitiveSceneProxy.h"

struct FDebugRenderSceneProxy : FPrimitiveSceneProxy
{
	char __padding[0xa0L];
	FieldArray<_BYTE, 8> CylindersField() { return {this, "FDebugRenderSceneProxy.Cylinders"}; }
	unsigned int& ViewFlagIndexField() { return *GetNativePointerField<unsigned int*>(this, "FDebugRenderSceneProxy.ViewFlagIndex"); }
	FString& ViewFlagNameField() { return *GetNativePointerField<FString*>(this, "FDebugRenderSceneProxy.ViewFlagName"); }
	float& TextWithoutShadowDistanceField() { return *GetNativePointerField<float*>(this, "FDebugRenderSceneProxy.TextWithoutShadowDistance"); }

	// Functions

	unsigned int GetMemoryFootprint() { return NativeCall<unsigned int>(this, "FDebugRenderSceneProxy.GetMemoryFootprint"); }
	void DrawDebugLabels(UCanvas * Canvas, APlayerController * __formal) { NativeCall<void, UCanvas *, APlayerController *>(this, "FDebugRenderSceneProxy.DrawDebugLabels", Canvas, __formal); }
	void DrawDynamicElements(FPrimitiveDrawInterface * PDI, FSceneView * View) { NativeCall<void, FPrimitiveDrawInterface *, FSceneView *>(this, "FDebugRenderSceneProxy.DrawDynamicElements", PDI, View); }
	void DrawLineArrow(FPrimitiveDrawInterface * PDI, const FVector * Start, const FVector * End, const FColor * Color, float Mag) { NativeCall<void, FPrimitiveDrawInterface *, const FVector *, const FVector *, const FColor *, float>(this, "FDebugRenderSceneProxy.DrawLineArrow", PDI, Start, End, Color, Mag); }
	unsigned int GetAllocatedSize() { return NativeCall<unsigned int>(this, "FDebugRenderSceneProxy.GetAllocatedSize"); }
	void GetDynamicMeshElements(const TArray<FSceneView const *> * Views, FSceneViewFamily * ViewFamily, unsigned int VisibilityMap, FMeshElementCollector * Collector) { NativeCall<void, const TArray<FSceneView const *> *, FSceneViewFamily *, unsigned int, FMeshElementCollector *>(this, "FDebugRenderSceneProxy.GetDynamicMeshElements", Views, ViewFamily, VisibilityMap, Collector); }
	void RegisterDebugDrawDelgate() { NativeCall<void>(this, "FDebugRenderSceneProxy.RegisterDebugDrawDelgate"); }
	void UnregisterDebugDrawDelgate() { NativeCall<void>(this, "FDebugRenderSceneProxy.UnregisterDebugDrawDelgate"); }
};

