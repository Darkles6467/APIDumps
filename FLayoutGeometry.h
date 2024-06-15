#pragma once

#include "BaseDeclarations.h"
struct FLayoutGeometry
{
	char __padding[0x14L];
	FSlateLayoutTransform& LocalToParentField() { return *GetNativePointerField<FSlateLayoutTransform*>(this, "FLayoutGeometry.LocalToParent"); }
	FVector2D& LocalSizeField() { return *GetNativePointerField<FVector2D*>(this, "FLayoutGeometry.LocalSize"); }
};

