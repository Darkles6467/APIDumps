#pragma once

#include "BaseDeclarations.h"
#include "FPrimitiveSceneProxy.h"

struct FSpriteSceneProxy : FPrimitiveSceneProxy
{
	char __padding[0x40L];
	FieldArray<_BYTE, 4> OriginField() { return {this, "FSpriteSceneProxy.Origin"}; }
	float& SizeXField() { return *GetNativePointerField<float*>(this, "FSpriteSceneProxy.SizeX"); }
	float& SizeYField() { return *GetNativePointerField<float*>(this, "FSpriteSceneProxy.SizeY"); }
	const float& ScreenSizeField() { return *GetNativePointerField<const float*>(this, "FSpriteSceneProxy.ScreenSize"); }
	const float& UField() { return *GetNativePointerField<const float*>(this, "FSpriteSceneProxy.U"); }
	float& ULField() { return *GetNativePointerField<float*>(this, "FSpriteSceneProxy.UL"); }
	const float& VField() { return *GetNativePointerField<const float*>(this, "FSpriteSceneProxy.V"); }
	float& VLField() { return *GetNativePointerField<float*>(this, "FSpriteSceneProxy.VL"); }
	FLinearColor& ColorField() { return *GetNativePointerField<FLinearColor*>(this, "FSpriteSceneProxy.Color"); }

	// Functions

	void DrawDynamicElements(FPrimitiveDrawInterface * PDI, FSceneView * View) { NativeCall<void, FPrimitiveDrawInterface *, FSceneView *>(this, "FSpriteSceneProxy.DrawDynamicElements", PDI, View); }
	void GetDynamicMeshElements(const TArray<FSceneView const *> * Views, FSceneViewFamily * ViewFamily, unsigned int VisibilityMap, FMeshElementCollector * Collector) { NativeCall<void, const TArray<FSceneView const *> *, FSceneViewFamily *, unsigned int, FMeshElementCollector *>(this, "FSpriteSceneProxy.GetDynamicMeshElements", Views, ViewFamily, VisibilityMap, Collector); }
	FPrimitiveViewRelevance * GetViewRelevance(FPrimitiveViewRelevance * result, FSceneView * View) { return NativeCall<FPrimitiveViewRelevance *, FPrimitiveViewRelevance *, FSceneView *>(this, "FSpriteSceneProxy.GetViewRelevance", result, View); }
	void OnTransformChanged() { NativeCall<void>(this, "FSpriteSceneProxy.OnTransformChanged"); }
};

