#pragma once

#include "BaseDeclarations.h"
#include "FKey.h"

struct FViewportClient
{
	char __padding[0x8L];

	// Functions

	void RequestInvalidateHitProxy(FViewport * Viewport) { NativeCall<void, FViewport *>(this, "FViewportClient.RequestInvalidateHitProxy", Viewport); }
	bool InputAxis(FViewport * Viewport, int ControllerId, FKey Key, EInputEvent Event, float AmountDepressed, bool bGamepad) { return NativeCall<bool, FViewport *, int, FKey, EInputEvent, float, bool>(this, "FViewportClient.InputAxis", Viewport, ControllerId, Key, Event, AmountDepressed, bGamepad); }
	void RedrawRequested(FViewport * Viewport) { NativeCall<void, FViewport *>(this, "FViewportClient.RedrawRequested", Viewport); }
};

struct FCommonViewportClient : FViewportClient
{

	// Functions

};

struct FUMGViewportClient : FCommonViewportClient
{
	char __padding[0x468L];
	FPreviewScene * PreviewSceneField() { return GetNativePointerField<FPreviewScene *>(this, "FUMGViewportClient.PreviewScene"); }
	FMinimalViewInfo& ViewInfoField() { return *GetNativePointerField<FMinimalViewInfo*>(this, "FUMGViewportClient.ViewInfo"); }
	FLinearColor& BackgroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "FUMGViewportClient.BackgroundColor"); }
	FUMGViewportCameraTransform& ViewTransformField() { return *GetNativePointerField<FUMGViewportCameraTransform*>(this, "FUMGViewportClient.ViewTransform"); }
	float& NearPlaneField() { return *GetNativePointerField<float*>(this, "FUMGViewportClient.NearPlane"); }
	float& FarPlaneField() { return *GetNativePointerField<float*>(this, "FUMGViewportClient.FarPlane"); }
	float& ViewFOVField() { return *GetNativePointerField<float*>(this, "FUMGViewportClient.ViewFOV"); }
	float& FOVAngleField() { return *GetNativePointerField<float*>(this, "FUMGViewportClient.FOVAngle"); }
	float& AspectRatioField() { return *GetNativePointerField<float*>(this, "FUMGViewportClient.AspectRatio"); }
	FEngineShowFlags& EngineShowFlagsField() { return *GetNativePointerField<FEngineShowFlags*>(this, "FUMGViewportClient.EngineShowFlags"); }

	// Functions

	void Draw(FViewport * InViewport, FCanvas * Canvas) { NativeCall<void, FViewport *, FCanvas *>(this, "FUMGViewportClient.Draw", InViewport, Canvas); }
	UWorld * GetWorld() { return NativeCall<UWorld *>(this, "FUMGViewportClient.GetWorld"); }
	bool IsOrtho() { return NativeCall<bool>(this, "FUMGViewportClient.IsOrtho"); }
	void Tick(float InDeltaTime) { NativeCall<void, float>(this, "FUMGViewportClient.Tick", InDeltaTime); }
};

