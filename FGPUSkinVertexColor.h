#pragma once

#include "BaseDeclarations.h"
struct FGPUSkinVertexColor
{
	char __padding[0x4L];
	FColor& VertexColorField() { return *GetNativePointerField<FColor*>(this, "FGPUSkinVertexColor.VertexColor"); }
};

