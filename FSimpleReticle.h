#pragma once

#include "BaseDeclarations.h"
struct FSimpleReticle
{
	char __padding[0x20L];
	FVector2D& HorizontalOffsetMinField() { return *GetNativePointerField<FVector2D*>(this, "FSimpleReticle.HorizontalOffsetMin"); }
	FVector2D& HorizontalOffsetMaxField() { return *GetNativePointerField<FVector2D*>(this, "FSimpleReticle.HorizontalOffsetMax"); }
	FVector2D& VerticalOffsetMinField() { return *GetNativePointerField<FVector2D*>(this, "FSimpleReticle.VerticalOffsetMin"); }
	FVector2D& VerticalOffsetMaxField() { return *GetNativePointerField<FVector2D*>(this, "FSimpleReticle.VerticalOffsetMax"); }
};

