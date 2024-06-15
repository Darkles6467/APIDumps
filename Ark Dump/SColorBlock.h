#pragma once

#include "BaseDeclarations.h"
#include "SLeafWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SColorBlock : SLeafWidget
{
	char __padding[0xa0L];
	TAttribute<FLinearColor>& ColorField() { return *GetNativePointerField<TAttribute<FLinearColor>*>(this, "SColorBlock.Color"); }
	TAttribute<bool>& ColorIsHSVField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SColorBlock.ColorIsHSV"); }
	TAttribute<bool>& IgnoreAlphaField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SColorBlock.IgnoreAlpha"); }
	TAttribute<bool>& ShowBackgroundForAlphaField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SColorBlock.ShowBackgroundForAlpha"); }
	TAttribute<bool>& bUseSRGBField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SColorBlock.bUseSRGB"); }
	TAttribute<FVector2D>& ColorBlockSizeField() { return *GetNativePointerField<TAttribute<FVector2D>*>(this, "SColorBlock.ColorBlockSize"); }

	// Functions

	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SColorBlock.ComputeDesiredSize", result); }
	void Construct(const SColorBlock::FArguments * InArgs) { NativeCall<void, const SColorBlock::FArguments *>(this, "SColorBlock.Construct", InArgs); }
	FReply * OnMouseButtonDown(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SColorBlock.OnMouseButtonDown", result, MyGeometry, MouseEvent); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SColorBlock.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	void FArguments() { NativeCall<void>(this, "SColorBlock.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SColorBlock.FArguments"); }
};

