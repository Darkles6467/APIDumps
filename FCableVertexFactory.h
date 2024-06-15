#pragma once

#include "BaseDeclarations.h"
#include "FLocalVertexFactory.h"
#include "FVertexFactory.h"
#include "FRenderResource.h"

struct FCableVertexFactory : FLocalVertexFactory
{

	// Functions

	void Init(const FCableVertexBuffer * VertexBuffer) { NativeCall<void, const FCableVertexBuffer *>(this, "FCableVertexFactory.Init", VertexBuffer); }
};

