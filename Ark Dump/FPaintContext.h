#pragma once

#include "BaseDeclarations.h"
struct FPaintContext
{
	char __padding[0x30L];
	const FGeometry * AllottedGeometryField() { return GetNativePointerField<const FGeometry *>(this, "FPaintContext.AllottedGeometry"); }
	const FSlateRect * MyClippingRectField() { return GetNativePointerField<const FSlateRect *>(this, "FPaintContext.MyClippingRect"); }
	FSlateWindowElementList * OutDrawElementsField() { return GetNativePointerField<FSlateWindowElementList *>(this, "FPaintContext.OutDrawElements"); }
	int& LayerIdField() { return *GetNativePointerField<int*>(this, "FPaintContext.LayerId"); }
	const FWidgetStyle * InWidgetStyleField() { return GetNativePointerField<const FWidgetStyle *>(this, "FPaintContext.InWidgetStyle"); }
	bool& bParentEnabledField() { return *GetNativePointerField<bool*>(this, "FPaintContext.bParentEnabled"); }
	int& MaxLayerField() { return *GetNativePointerField<int*>(this, "FPaintContext.MaxLayer"); }

	// Functions

};

