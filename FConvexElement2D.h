#pragma once

#include "BaseDeclarations.h"
struct FConvexElement2D
{
	char __padding[0x10L];
	TArray<FVector2D>& VertexDataField() { return *GetNativePointerField<TArray<FVector2D>*>(this, "FConvexElement2D.VertexData"); }

	// Functions

};

