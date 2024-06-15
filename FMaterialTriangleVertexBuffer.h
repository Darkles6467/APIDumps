#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FMaterialTriangleVertexBuffer : FVertexBuffer
{

	// Functions

	void InitRHI() { NativeCall<void>(this, "FMaterialTriangleVertexBuffer.InitRHI"); }
};

