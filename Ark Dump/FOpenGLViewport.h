#pragma once

#include "BaseDeclarations.h"
#include "FRHIViewport.h"
#include "FRHIResource.h"

struct FOpenGLViewport : FRHIViewport
{
	char __padding[0x78L];
	FOpenGLDynamicRHI * OpenGLRHIField() { return GetNativePointerField<FOpenGLDynamicRHI *>(this, "FOpenGLViewport.OpenGLRHI"); }
	FPlatformOpenGLContext * OpenGLContextField() { return GetNativePointerField<FPlatformOpenGLContext *>(this, "FOpenGLViewport.OpenGLContext"); }
	unsigned int& SizeXField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLViewport.SizeX"); }
	unsigned int& SizeYField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLViewport.SizeY"); }
	bool& bIsFullscreenField() { return *GetNativePointerField<bool*>(this, "FOpenGLViewport.bIsFullscreen"); }
	EPixelFormat& PixelFormatField() { return *GetNativePointerField<EPixelFormat*>(this, "FOpenGLViewport.PixelFormat"); }
	bool& bIsValidField() { return *GetNativePointerField<bool*>(this, "FOpenGLViewport.bIsValid"); }
	FOpenGLEventQuery& FrameSyncEventField() { return *GetNativePointerField<FOpenGLEventQuery*>(this, "FOpenGLViewport.FrameSyncEvent"); }
	TRefCountPtr<FRHICustomPresent>& CustomPresentField() { return *GetNativePointerField<TRefCountPtr<FRHICustomPresent>*>(this, "FOpenGLViewport.CustomPresent"); }

	// Functions

	void IssueFrameEvent() { NativeCall<void>(this, "FOpenGLViewport.IssueFrameEvent"); }
	void Resize(unsigned int InSizeX, unsigned int InSizeY, bool bInIsFullscreen) { NativeCall<void, unsigned int, unsigned int, bool>(this, "FOpenGLViewport.Resize", InSizeX, InSizeY, bInIsFullscreen); }
	void SetCustomPresent(FRHICustomPresent * InCustomPresent) { NativeCall<void, FRHICustomPresent *>(this, "FOpenGLViewport.SetCustomPresent", InCustomPresent); }
};

