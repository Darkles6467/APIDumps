#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FVolumeRasterizeVertexBuffer : FVertexBuffer
{

	// Functions

	void InitRHI() { NativeCall<void>(this, "FVolumeRasterizeVertexBuffer.InitRHI"); }
};

