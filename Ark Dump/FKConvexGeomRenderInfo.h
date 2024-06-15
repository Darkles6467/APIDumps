#pragma once

#include "BaseDeclarations.h"
struct FKConvexGeomRenderInfo
{
	char __padding[0x18L];
	FConvexCollisionVertexBuffer * VertexBufferField() { return GetNativePointerField<FConvexCollisionVertexBuffer *>(this, "FKConvexGeomRenderInfo.VertexBuffer"); }
	FConvexCollisionIndexBuffer * IndexBufferField() { return GetNativePointerField<FConvexCollisionIndexBuffer *>(this, "FKConvexGeomRenderInfo.IndexBuffer"); }
	FConvexCollisionVertexFactory * CollisionVertexFactoryField() { return GetNativePointerField<FConvexCollisionVertexFactory *>(this, "FKConvexGeomRenderInfo.CollisionVertexFactory"); }
};

