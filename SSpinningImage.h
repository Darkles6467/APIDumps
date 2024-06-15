#pragma once

#include "BaseDeclarations.h"
#include "SLeafWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "FSlateColor.h"

struct SImage : SLeafWidget
{
	char __padding[0x70L];
	TAttribute<bool>& ShowDefaultDisabledEffectField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SImage.ShowDefaultDisabledEffect"); }
	TAttribute<FSlateColor>& ColorAndOpacityField() { return *GetNativePointerField<TAttribute<FSlateColor>*>(this, "SImage.ColorAndOpacity"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SImage.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SImage.FArguments"); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SImage.ComputeDesiredSize", result); }
	void Construct(const SImage::FArguments * InArgs) { NativeCall<void, const SImage::FArguments *>(this, "SImage.Construct", InArgs); }
	FReply * OnMouseButtonDown(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SImage.OnMouseButtonDown", result, MyGeometry, MouseEvent); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SImage.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	void SetColorAndOpacity(const TAttribute<FSlateColor> * InColorAndOpacity) { NativeCall<void, const TAttribute<FSlateColor> *>(this, "SImage.SetColorAndOpacity", InColorAndOpacity); }
	void SetColorAndOpacity(FLinearColor InColorAndOpacity) { NativeCall<void, FLinearColor>(this, "SImage.SetColorAndOpacity", InColorAndOpacity); }
	void SetImage(TAttribute<FSlateBrush const *> InImage) { NativeCall<void, TAttribute<FSlateBrush const *>>(this, "SImage.SetImage", InImage); }
	void SetShowDefaultDisabledEffect(bool InShow) { NativeCall<void, bool>(this, "SImage.SetShowDefaultDisabledEffect", InShow); }
};

struct SSpinningImage : SImage
{
	char __padding[0x30L];
	FCurveSequence& SequenceField() { return *GetNativePointerField<FCurveSequence*>(this, "SSpinningImage.Sequence"); }
	FCurveHandle& CurveField() { return *GetNativePointerField<FCurveHandle*>(this, "SSpinningImage.Curve"); }
};

