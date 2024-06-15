#pragma once

#include "BaseDeclarations.h"
#include "ILayoutBlock.h"

struct FWidgetLayoutBlock : ILayoutBlock
{
	char __padding[0x48L];
	FTextRange& RangeField() { return *GetNativePointerField<FTextRange*>(this, "FWidgetLayoutBlock.Range"); }
	FVector2D& SizeField() { return *GetNativePointerField<FVector2D*>(this, "FWidgetLayoutBlock.Size"); }
	FVector2D& LocationOffsetField() { return *GetNativePointerField<FVector2D*>(this, "FWidgetLayoutBlock.LocationOffset"); }
};

