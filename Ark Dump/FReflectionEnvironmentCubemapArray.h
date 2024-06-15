#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FReflectionEnvironmentCubemapArray : FRenderResource
{
	char __padding[0x10L];
	unsigned int& MaxCubemapsField() { return *GetNativePointerField<unsigned int*>(this, "FReflectionEnvironmentCubemapArray.MaxCubemaps"); }

	// Functions

	void InitDynamicRHI() { NativeCall<void>(this, "FReflectionEnvironmentCubemapArray.InitDynamicRHI"); }
	void ReleaseDynamicRHI() { NativeCall<void>(this, "FReflectionEnvironmentCubemapArray.ReleaseDynamicRHI"); }
};

