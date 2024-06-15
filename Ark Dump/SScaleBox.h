#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SScaleBox : SCompoundWidget
{
	char __padding[0x30L];
	TAttribute<enum EStretchDirection::Type>& StretchDirectionField() { return *GetNativePointerField<TAttribute<enum EStretchDirection::Type>*>(this, "SScaleBox.StretchDirection"); }
	TAttribute<enum EStretch::Type>& StretchField() { return *GetNativePointerField<TAttribute<enum EStretch::Type>*>(this, "SScaleBox.Stretch"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SScaleBox.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SScaleBox.FArguments"); }
	void OnArrangeChildren(const FGeometry * AllottedGeometry, FArrangedChildren * ArrangedChildren) { NativeCall<void, const FGeometry *, FArrangedChildren *>(this, "SScaleBox.OnArrangeChildren", AllottedGeometry, ArrangedChildren); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SScaleBox.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
};

