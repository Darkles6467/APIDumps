#pragma once

#include "BaseDeclarations.h"
#include "FPrimitiveSceneProxy.h"

struct FArrowSceneProxy : FPrimitiveSceneProxy
{
	char __padding[0x4a0L];
	FieldArray<_BYTE, 64> VertexBufferField() { return {this, "FArrowSceneProxy.VertexBuffer"}; }
	FArrowIndexBuffer& IndexBufferField() { return *GetNativePointerField<FArrowIndexBuffer*>(this, "FArrowSceneProxy.IndexBuffer"); }
	FArrowVertexFactory& VertexFactoryField() { return *GetNativePointerField<FArrowVertexFactory*>(this, "FArrowSceneProxy.VertexFactory"); }
	FVector& OriginField() { return *GetNativePointerField<FVector*>(this, "FArrowSceneProxy.Origin"); }
	FColor& ArrowColorField() { return *GetNativePointerField<FColor*>(this, "FArrowSceneProxy.ArrowColor"); }
	float& ArrowSizeField() { return *GetNativePointerField<float*>(this, "FArrowSceneProxy.ArrowSize"); }
	bool& bIsScreenSizeScaledField() { return *GetNativePointerField<bool*>(this, "FArrowSceneProxy.bIsScreenSizeScaled"); }
	float& ScreenSizeField() { return *GetNativePointerField<float*>(this, "FArrowSceneProxy.ScreenSize"); }

	// Functions

	void DrawDynamicElements(FPrimitiveDrawInterface * PDI, FSceneView * View) { NativeCall<void, FPrimitiveDrawInterface *, FSceneView *>(this, "FArrowSceneProxy.DrawDynamicElements", PDI, View); }
	void GetDynamicMeshElements(const TArray<FSceneView const *> * Views, FSceneViewFamily * ViewFamily, unsigned int VisibilityMap, FMeshElementCollector * Collector) { NativeCall<void, const TArray<FSceneView const *> *, FSceneViewFamily *, unsigned int, FMeshElementCollector *>(this, "FArrowSceneProxy.GetDynamicMeshElements", Views, ViewFamily, VisibilityMap, Collector); }
	unsigned int GetMemoryFootprint() { return NativeCall<unsigned int>(this, "FArrowSceneProxy.GetMemoryFootprint"); }
	FPrimitiveViewRelevance * GetViewRelevance(FPrimitiveViewRelevance * result, FSceneView * View) { return NativeCall<FPrimitiveViewRelevance *, FPrimitiveViewRelevance *, FSceneView *>(this, "FArrowSceneProxy.GetViewRelevance", result, View); }
	void OnTransformChanged() { NativeCall<void>(this, "FArrowSceneProxy.OnTransformChanged"); }
};

