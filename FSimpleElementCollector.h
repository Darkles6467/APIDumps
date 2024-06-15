#pragma once

#include "BaseDeclarations.h"
#include "FPrimitiveDrawInterface.h"
#include "FRHITexture2D.h"

struct FSimpleElementCollector : FPrimitiveDrawInterface
{
	char __padding[0x200L];
	FBatchedElements& BatchedElementsField() { return *GetNativePointerField<FBatchedElements*>(this, "FSimpleElementCollector.BatchedElements"); }
	FHitProxyId& HitProxyIdField() { return *GetNativePointerField<FHitProxyId*>(this, "FSimpleElementCollector.HitProxyId"); }

	// Functions

	void DrawBatchedElements(FRHICommandList * RHICmdList, FSceneView * View, TRefCountPtr<FRHITexture2D> DepthTexture, EBlendModeFilter::Type Filter) { NativeCall<void, FRHICommandList *, FSceneView *, TRefCountPtr<FRHITexture2D>, EBlendModeFilter::Type>(this, "FSimpleElementCollector.DrawBatchedElements", RHICmdList, View, DepthTexture, Filter); }
	void DrawLine(const FVector * Start, const FVector * End, const FLinearColor * Color, char DepthPriorityGroup, float Thickness, float DepthBias, bool bScreenSpace) { NativeCall<void, const FVector *, const FVector *, const FLinearColor *, char, float, float, bool>(this, "FSimpleElementCollector.DrawLine", Start, End, Color, DepthPriorityGroup, Thickness, DepthBias, bScreenSpace); }
	int DrawMesh(const FMeshBatch * Mesh) { return NativeCall<int, const FMeshBatch *>(this, "FSimpleElementCollector.DrawMesh", Mesh); }
	void DrawPoint(const FVector * Position, const FLinearColor * Color, float PointSize, char DepthPriorityGroup) { NativeCall<void, const FVector *, const FLinearColor *, float, char>(this, "FSimpleElementCollector.DrawPoint", Position, Color, PointSize, DepthPriorityGroup); }
	void DrawSprite(const FVector * Position, float SizeX, float SizeY, const FTexture * Sprite, const FLinearColor * Color, char DepthPriorityGroup, float U, float UL, float V, float VL, char BlendMode) { NativeCall<void, const FVector *, float, float, const FTexture *, const FLinearColor *, char, float, float, float, float, char>(this, "FSimpleElementCollector.DrawSprite", Position, SizeX, SizeY, Sprite, Color, DepthPriorityGroup, U, UL, V, VL, BlendMode); }
	bool IsHitTesting() { return NativeCall<bool>(this, "FSimpleElementCollector.IsHitTesting"); }
	bool IsMaterialIgnored(const FMaterialRenderProxy * MaterialRenderProxy, ERHIFeatureLevel::Type InFeatureLevel) { return NativeCall<bool, const FMaterialRenderProxy *, ERHIFeatureLevel::Type>(this, "FSimpleElementCollector.IsMaterialIgnored", MaterialRenderProxy, InFeatureLevel); }
	bool IsRenderingSelectionOutline() { return NativeCall<bool>(this, "FSimpleElementCollector.IsRenderingSelectionOutline"); }
	void RegisterDynamicResource(FDynamicPrimitiveResource * DynamicResource) { NativeCall<void, FDynamicPrimitiveResource *>(this, "FSimpleElementCollector.RegisterDynamicResource", DynamicResource); }
	void SetHitProxy(HHitProxy * HitProxy) { NativeCall<void, HHitProxy *>(this, "FSimpleElementCollector.SetHitProxy", HitProxy); }
};

