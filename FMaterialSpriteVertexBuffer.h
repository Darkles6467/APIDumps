#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FMaterialSpriteVertexBuffer : FVertexBuffer
{

	// Functions

	void InitRHI() { NativeCall<void>(this, "FMaterialSpriteVertexBuffer.InitRHI"); }
};

