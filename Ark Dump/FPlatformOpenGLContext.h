#pragma once

#include "BaseDeclarations.h"
struct FPlatformOpenGLContext
{
	char __padding[0x30L];
	HWND__ * WindowHandleField() { return GetNativePointerField<HWND__ *>(this, "FPlatformOpenGLContext.WindowHandle"); }
	HDC__ * DeviceContextField() { return GetNativePointerField<HDC__ *>(this, "FPlatformOpenGLContext.DeviceContext"); }
	HGLRC__ * OpenGLContextField() { return GetNativePointerField<HGLRC__ *>(this, "FPlatformOpenGLContext.OpenGLContext"); }
	bool& bReleaseWindowOnDestroyField() { return *GetNativePointerField<bool*>(this, "FPlatformOpenGLContext.bReleaseWindowOnDestroy"); }
	int& SyncIntervalField() { return *GetNativePointerField<int*>(this, "FPlatformOpenGLContext.SyncInterval"); }
	unsigned int& ViewportFramebufferField() { return *GetNativePointerField<unsigned int*>(this, "FPlatformOpenGLContext.ViewportFramebuffer"); }
	unsigned int& VertexArrayObjectField() { return *GetNativePointerField<unsigned int*>(this, "FPlatformOpenGLContext.VertexArrayObject"); }
	unsigned int& BackBufferResourceField() { return *GetNativePointerField<unsigned int*>(this, "FPlatformOpenGLContext.BackBufferResource"); }
	unsigned int& BackBufferTargetField() { return *GetNativePointerField<unsigned int*>(this, "FPlatformOpenGLContext.BackBufferTarget"); }
};

