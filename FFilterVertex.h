#pragma once

#include "BaseDeclarations.h"
struct FFilterVertex
{
	char __padding[0x20L];
	FVector4& PositionField() { return *GetNativePointerField<FVector4*>(this, "FFilterVertex.Position"); }
	FVector2D& UVField() { return *GetNativePointerField<FVector2D*>(this, "FFilterVertex.UV"); }
};

