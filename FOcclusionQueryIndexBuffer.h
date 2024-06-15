#pragma once

#include "BaseDeclarations.h"
#include "FIndexBuffer.h"
#include "FRenderResource.h"

struct FOcclusionQueryIndexBuffer : FIndexBuffer
{

	// Functions

	void InitRHI() { NativeCall<void>(this, "FOcclusionQueryIndexBuffer.InitRHI"); }
};

