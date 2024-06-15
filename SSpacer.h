#pragma once

#include "BaseDeclarations.h"
#include "SLeafWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SSpacer : SLeafWidget
{
	char __padding[0x18L];
	TAttribute<FVector2D>& SpacerSizeField() { return *GetNativePointerField<TAttribute<FVector2D>*>(this, "SSpacer.SpacerSize"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SSpacer.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SSpacer.FArguments"); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SSpacer.ComputeDesiredSize", result); }
	void Construct(const SSpacer::FArguments * InArgs) { NativeCall<void, const SSpacer::FArguments *>(this, "SSpacer.Construct", InArgs); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SSpacer.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	void SetSize(TAttribute<FVector2D> InSpacerSize) { NativeCall<void, TAttribute<FVector2D>>(this, "SSpacer.SetSize", InSpacerSize); }
};

