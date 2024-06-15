#pragma once

#include "BaseDeclarations.h"
#include "FIndexBuffer.h"
#include "FRenderResource.h"

struct FScreenRectangleIndexBuffer : FIndexBuffer
{

	// Functions

	void InitRHI() { NativeCall<void>(this, "FScreenRectangleIndexBuffer.InitRHI"); }
};

