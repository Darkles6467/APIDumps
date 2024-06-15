#pragma once

#include "BaseDeclarations.h"
#include "FRenderTarget.h"
#include "FKey.h"

struct FViewport : FRenderTarget
{
	char __padding[0xc0L];
	FString& AppVersionStringField() { return *GetNativePointerField<FString*>(this, "FViewport.AppVersionString"); }
	TArray<FColor>& CachedHitProxyDataField() { return *GetNativePointerField<TArray<FColor>*>(this, "FViewport.CachedHitProxyData"); }
	unsigned int& SizeXField() { return *GetNativePointerField<unsigned int*>(this, "FViewport.SizeX"); }
	unsigned int& SizeYField() { return *GetNativePointerField<unsigned int*>(this, "FViewport.SizeY"); }
	unsigned int& HitProxySizeField() { return *GetNativePointerField<unsigned int*>(this, "FViewport.HitProxySize"); }
	EWindowMode::Type& WindowModeField() { return *GetNativePointerField<EWindowMode::Type*>(this, "FViewport.WindowMode"); }
	bool& bTakeHighResScreenShotField() { return *GetNativePointerField<bool*>(this, "FViewport.bTakeHighResScreenShot"); }

	// Functions

	void FHitProxyMap() { NativeCall<void>(this, "FViewport.FHitProxyMap"); }
	void FHitProxyMap() { NativeCall<void>(this, "FViewport.FHitProxyMap"); }
	void FHitProxyMap(HHitProxy * HitProxy) { NativeCall<void, HHitProxy *>(this, "FViewport.FHitProxyMap", HitProxy); }
	void FHitProxyMap(FReferenceCollector * Collector) { NativeCall<void, FReferenceCollector *>(this, "FViewport.FHitProxyMap", Collector); }
	void BeginRenderFrame(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FViewport.BeginRenderFrame", RHICmdList); }
	FIntRect * CalculateViewExtents(FIntRect * result, float AspectRatio, const FIntRect * ViewRect) { return NativeCall<FIntRect *, FIntRect *, float, const FIntRect *>(this, "FViewport.CalculateViewExtents", result, AspectRatio, ViewRect); }
	void InvalidateHitProxy() { NativeCall<void>(this, "FViewport.InvalidateHitProxy"); }
	void Draw(bool bShouldPresent) { NativeCall<void, bool>(this, "FViewport.Draw", bShouldPresent); }
	int DrawStatsHUD(FCanvas * InCanvas, const int InX, const int InY) { return NativeCall<int, FCanvas *, const int, const int>(this, "FViewport.DrawStatsHUD", InCanvas, InX, InY); }
	void EndRenderFrame(FRHICommandListImmediate * RHICmdList, bool bPresent, bool bLockToVsync) { NativeCall<void, FRHICommandListImmediate *, bool, bool>(this, "FViewport.EndRenderFrame", RHICmdList, bPresent, bLockToVsync); }
	void EnqueueBeginRenderFrame() { NativeCall<void>(this, "FViewport.EnqueueBeginRenderFrame"); }
	float GetDesiredAspectRatio() { return NativeCall<float>(this, "FViewport.GetDesiredAspectRatio"); }
	FIntPoint * GetRenderTargetTextureSizeXY(FIntPoint * result) { return NativeCall<FIntPoint *, FIntPoint *>(this, "FViewport.GetRenderTargetTextureSizeXY", result); }
	FIntPoint * FHitProxyMap(FIntPoint * result) { return NativeCall<FIntPoint *, FIntPoint *>(this, "FViewport.FHitProxyMap", result); }
	FIntPoint * GetSizeXY(FIntPoint * result) { return NativeCall<FIntPoint *, FIntPoint *>(this, "FViewport.GetSizeXY", result); }
	bool HasToggleFreezeCommand() { return NativeCall<bool>(this, "FViewport.HasToggleFreezeCommand"); }
	void HighResScreenshot() { NativeCall<void>(this, "FViewport.HighResScreenshot"); }
	void FHitProxyMap(unsigned int NewSizeX, unsigned int NewSizeY) { NativeCall<void, unsigned int, unsigned int>(this, "FViewport.FHitProxyMap", NewSizeX, NewSizeY); }
	void InitDynamicRHI() { NativeCall<void>(this, "FViewport.InitDynamicRHI"); }
	void InitRHI() { NativeCall<void>(this, "FViewport.InitRHI"); }
	void FHitProxyMap() { NativeCall<void>(this, "FViewport.FHitProxyMap"); }
	void Invalidate() { NativeCall<void>(this, "FViewport.Invalidate"); }
	bool IsFullscreen() { return NativeCall<bool>(this, "FViewport.IsFullscreen"); }
	void ProcessToggleFreezeCommand() { NativeCall<void>(this, "FViewport.ProcessToggleFreezeCommand"); }
	void ReleaseDynamicRHI() { NativeCall<void>(this, "FViewport.ReleaseDynamicRHI"); }
	void ReleaseRHI() { NativeCall<void>(this, "FViewport.ReleaseRHI"); }
	static void SetGameRenderingEnabled(bool bIsEnabled, int InPresentAndStopMovieDelay) { NativeCall<void, bool, int>(nullptr, "FViewport.SetGameRenderingEnabled", bIsEnabled, InPresentAndStopMovieDelay); }
	void SetViewportClient(FViewportClient * InViewportClient) { NativeCall<void, FViewportClient *>(this, "FViewport.SetViewportClient", InViewportClient); }
	bool TakeHighResScreenShot() { return NativeCall<bool>(this, "FViewport.TakeHighResScreenShot"); }
	void UpdateViewportRHI(bool bDestroyed, unsigned int NewSizeX, unsigned int NewSizeY, EWindowMode::Type NewWindowMode) { NativeCall<void, bool, unsigned int, unsigned int, EWindowMode::Type>(this, "FViewport.UpdateViewportRHI", bDestroyed, NewSizeX, NewSizeY, NewWindowMode); }
};

struct FDummyViewport : FViewport
{
	char __padding[0x180L];
	FCanvas& DebugCanvasField() { return *GetNativePointerField<FCanvas*>(this, "FDummyViewport.DebugCanvas"); }

	// Functions

	bool KeyState(FKey Key) { return NativeCall<bool, FKey>(this, "FDummyViewport.KeyState", Key); }
	void BeginRenderFrame(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FDummyViewport.BeginRenderFrame", RHICmdList); }
	FCanvas * GetDebugCanvas() { return NativeCall<FCanvas *>(this, "FDummyViewport.GetDebugCanvas"); }
	FString * GetFriendlyName(FString * result) { return NativeCall<FString *, FString *>(this, "FDummyViewport.GetFriendlyName", result); }
	void GetMousePos(FIntPoint * MousePosition, const bool bLocalPosition) { NativeCall<void, FIntPoint *, const bool>(this, "FDummyViewport.GetMousePos", MousePosition, bLocalPosition); }
	void InitDynamicRHI() { NativeCall<void>(this, "FDummyViewport.InitDynamicRHI"); }
	void InitResource() { NativeCall<void>(this, "FDummyViewport.InitResource"); }
	FIntPoint * ViewportToVirtualDesktopPixel(FIntPoint * result, FVector2D ViewportCoordinate) { return NativeCall<FIntPoint *, FIntPoint *, FVector2D>(this, "FDummyViewport.ViewportToVirtualDesktopPixel", result, ViewportCoordinate); }
};

