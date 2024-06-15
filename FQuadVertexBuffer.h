#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FQuadVertexBuffer : FVertexBuffer
{

	// Functions

	void InitRHI() { NativeCall<void>(this, "FQuadVertexBuffer.InitRHI"); }
};

