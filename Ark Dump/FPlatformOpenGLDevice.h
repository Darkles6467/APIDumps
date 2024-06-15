#pragma once

#include "BaseDeclarations.h"
struct FPlatformOpenGLDevice
{
	char __padding[0x80L];
	FPlatformOpenGLContext& SharedContextField() { return *GetNativePointerField<FPlatformOpenGLContext*>(this, "FPlatformOpenGLDevice.SharedContext"); }
	FPlatformOpenGLContext& RenderingContextField() { return *GetNativePointerField<FPlatformOpenGLContext*>(this, "FPlatformOpenGLDevice.RenderingContext"); }
	TArray<FPlatformOpenGLContext *>& ViewportContextsField() { return *GetNativePointerField<TArray<FPlatformOpenGLContext *>*>(this, "FPlatformOpenGLDevice.ViewportContexts"); }
	bool& TargetDirtyField() { return *GetNativePointerField<bool*>(this, "FPlatformOpenGLDevice.TargetDirty"); }
	FWindowsCriticalSection * ContextUsageGuardField() { return GetNativePointerField<FWindowsCriticalSection *>(this, "FPlatformOpenGLDevice.ContextUsageGuard"); }

	// Functions

};

