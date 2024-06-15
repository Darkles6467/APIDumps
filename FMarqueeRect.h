#pragma once

#include "BaseDeclarations.h"
struct FMarqueeRect
{
	char __padding[0x10L];
	FVector2D& StartPointField() { return *GetNativePointerField<FVector2D*>(this, "FMarqueeRect.StartPoint"); }
	FVector2D& EndPointField() { return *GetNativePointerField<FVector2D*>(this, "FMarqueeRect.EndPoint"); }
};

