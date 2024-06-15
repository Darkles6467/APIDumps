#pragma once

#include "BaseDeclarations.h"
#include "FLocalVertexFactory.h"
#include "FVertexFactory.h"
#include "FRenderResource.h"

struct FConvexCollisionVertexFactory : FLocalVertexFactory
{

	// Functions

	void InitConvexVertexFactory(const FArrowVertexBuffer * VertexBuffer) { NativeCall<void, const FArrowVertexBuffer *>(this, "FConvexCollisionVertexFactory.InitConvexVertexFactory", VertexBuffer); }
};

