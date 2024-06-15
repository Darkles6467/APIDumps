#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FOpenGLEventQuery : FRenderResource
{
	char __padding[0x10L];
	FOpenGLDynamicRHI * OpenGLRHIField() { return GetNativePointerField<FOpenGLDynamicRHI *>(this, "FOpenGLEventQuery.OpenGLRHI"); }
	__GLsync * SyncField() { return GetNativePointerField<__GLsync *>(this, "FOpenGLEventQuery.Sync"); }

	// Functions

	void InitDynamicRHI() { NativeCall<void>(this, "FOpenGLEventQuery.InitDynamicRHI"); }
	void ReleaseDynamicRHI() { NativeCall<void>(this, "FOpenGLEventQuery.ReleaseDynamicRHI"); }
};

