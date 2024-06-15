#pragma once

#include "BaseDeclarations.h"
struct FNavCollisionConvex
{
	char __padding[0x20L];
	TNavStatArray<FVector>& VertexBufferField() { return *GetNativePointerField<TNavStatArray<FVector>*>(this, "FNavCollisionConvex.VertexBuffer"); }
	TNavStatArray<int>& IndexBufferField() { return *GetNativePointerField<TNavStatArray<int>*>(this, "FNavCollisionConvex.IndexBuffer"); }
};

