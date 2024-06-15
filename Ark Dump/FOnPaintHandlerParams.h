#pragma once

#include "BaseDeclarations.h"
struct FOnPaintHandlerParams
{
	char __padding[0x20L];
	const FGeometry * GeometryField() { return GetNativePointerField<const FGeometry *>(this, "FOnPaintHandlerParams.Geometry"); }
	const FSlateRect * ClippingRectField() { return GetNativePointerField<const FSlateRect *>(this, "FOnPaintHandlerParams.ClippingRect"); }
	FSlateWindowElementList * OutDrawElementsField() { return GetNativePointerField<FSlateWindowElementList *>(this, "FOnPaintHandlerParams.OutDrawElements"); }
	const int& LayerField() { return *GetNativePointerField<const int*>(this, "FOnPaintHandlerParams.Layer"); }
	const bool& bEnabledField() { return *GetNativePointerField<const bool*>(this, "FOnPaintHandlerParams.bEnabled"); }
};

