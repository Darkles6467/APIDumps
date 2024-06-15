#pragma once

#include "BaseDeclarations.h"
#include "FRHIViewport.h"
#include "FRHIResource.h"

struct FD3D11Viewport : FRHIViewport
{
	char __padding[0xb0L];
	FD3D11DynamicRHI * D3DRHIField() { return GetNativePointerField<FD3D11DynamicRHI *>(this, "FD3D11Viewport.D3DRHI"); }
	unsigned __int64& LastFlipTimeField() { return *GetNativePointerField<unsigned __int64*>(this, "FD3D11Viewport.LastFlipTime"); }
	unsigned __int64& LastFrameCompleteField() { return *GetNativePointerField<unsigned __int64*>(this, "FD3D11Viewport.LastFrameComplete"); }
	unsigned __int64& LastCompleteTimeField() { return *GetNativePointerField<unsigned __int64*>(this, "FD3D11Viewport.LastCompleteTime"); }
	int& SyncCounterField() { return *GetNativePointerField<int*>(this, "FD3D11Viewport.SyncCounter"); }
	bool& bSyncedLastFrameField() { return *GetNativePointerField<bool*>(this, "FD3D11Viewport.bSyncedLastFrame"); }
	HWND__ * WindowHandleField() { return GetNativePointerField<HWND__ *>(this, "FD3D11Viewport.WindowHandle"); }
	unsigned int& MaximumFrameLatencyField() { return *GetNativePointerField<unsigned int*>(this, "FD3D11Viewport.MaximumFrameLatency"); }
	unsigned int& SizeXField() { return *GetNativePointerField<unsigned int*>(this, "FD3D11Viewport.SizeX"); }
	unsigned int& SizeYField() { return *GetNativePointerField<unsigned int*>(this, "FD3D11Viewport.SizeY"); }
	bool& bIsFullscreenField() { return *GetNativePointerField<bool*>(this, "FD3D11Viewport.bIsFullscreen"); }
	EPixelFormat& PixelFormatField() { return *GetNativePointerField<EPixelFormat*>(this, "FD3D11Viewport.PixelFormat"); }
	bool& bIsValidField() { return *GetNativePointerField<bool*>(this, "FD3D11Viewport.bIsValid"); }
	TRefCountPtr<IDXGISwapChain>& SwapChainField() { return *GetNativePointerField<TRefCountPtr<IDXGISwapChain>*>(this, "FD3D11Viewport.SwapChain"); }
	TRefCountPtr<TD3D11Texture2D<FD3D11BaseTexture2D> >& BackBufferField() { return *GetNativePointerField<TRefCountPtr<TD3D11Texture2D<FD3D11BaseTexture2D> >*>(this, "FD3D11Viewport.BackBuffer"); }
	TRefCountPtr<IDXGIOutput>& ForcedFullscreenOutputField() { return *GetNativePointerField<TRefCountPtr<IDXGIOutput>*>(this, "FD3D11Viewport.ForcedFullscreenOutput"); }
	bool& bForcedFullscreenDisplayField() { return *GetNativePointerField<bool*>(this, "FD3D11Viewport.bForcedFullscreenDisplay"); }
	FD3D11EventQuery& FrameSyncEventField() { return *GetNativePointerField<FD3D11EventQuery*>(this, "FD3D11Viewport.FrameSyncEvent"); }
	TRefCountPtr<FRHICustomPresent>& CustomPresentField() { return *GetNativePointerField<TRefCountPtr<FRHICustomPresent>*>(this, "FD3D11Viewport.CustomPresent"); }

	// Functions

	void ConditionalResetSwapChain(bool bIgnoreFocus) { NativeCall<void, bool>(this, "FD3D11Viewport.ConditionalResetSwapChain", bIgnoreFocus); }
	FRHICustomPresent * GetCustomPresent() { return NativeCall<FRHICustomPresent *>(this, "FD3D11Viewport.GetCustomPresent"); }
	void * GetNativeBackBufferRT() { return NativeCall<void *>(this, "FD3D11Viewport.GetNativeBackBufferRT"); }
	void * GetNativeBackBufferTexture() { return NativeCall<void *>(this, "FD3D11Viewport.GetNativeBackBufferTexture"); }
	bool Present(bool bLockToVsync) { return NativeCall<bool, bool>(this, "FD3D11Viewport.Present", bLockToVsync); }
	bool PresentChecked(int SyncInterval) { return NativeCall<bool, int>(this, "FD3D11Viewport.PresentChecked", SyncInterval); }
	void PresentWithVsyncDWM() { NativeCall<void>(this, "FD3D11Viewport.PresentWithVsyncDWM"); }
	void Resize(unsigned int InSizeX, unsigned int InSizeY, bool bInIsFullscreen, EPixelFormat PreferredPixelFormat) { NativeCall<void, unsigned int, unsigned int, bool, EPixelFormat>(this, "FD3D11Viewport.Resize", InSizeX, InSizeY, bInIsFullscreen, PreferredPixelFormat); }
	void SetCustomPresent(FRHICustomPresent * InCustomPresent) { NativeCall<void, FRHICustomPresent *>(this, "FD3D11Viewport.SetCustomPresent", InCustomPresent); }
};

