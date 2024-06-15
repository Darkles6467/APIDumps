#pragma once

#include "BaseDeclarations.h"
#include "SLeafWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "FSlateColor.h"

struct SSlider : SLeafWidget
{
	char __padding[0xe0L];
	const FSliderStyle * StyleField() { return GetNativePointerField<const FSliderStyle *>(this, "SSlider.Style"); }
	TAttribute<bool>& IndentHandleField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SSlider.IndentHandle"); }
	TAttribute<bool>& LockedAttributeField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SSlider.LockedAttribute"); }
	EOrientation& OrientationField() { return *GetNativePointerField<EOrientation*>(this, "SSlider.Orientation"); }
	TAttribute<FSlateColor>& SliderBarColorField() { return *GetNativePointerField<TAttribute<FSlateColor>*>(this, "SSlider.SliderBarColor"); }
	TAttribute<FSlateColor>& SliderHandleColorField() { return *GetNativePointerField<TAttribute<FSlateColor>*>(this, "SSlider.SliderHandleColor"); }
	TAttribute<float>& ValueAttributeField() { return *GetNativePointerField<TAttribute<float>*>(this, "SSlider.ValueAttribute"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SSlider.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SSlider.FArguments"); }
	void CommitValue(float NewValue) { NativeCall<void, float>(this, "SSlider.CommitValue", NewValue); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SSlider.ComputeDesiredSize", result); }
	void Construct(const SSlider::FArguments * InDeclaration) { NativeCall<void, const SSlider::FArguments *>(this, "SSlider.Construct", InDeclaration); }
	float GetValue() { return NativeCall<float>(this, "SSlider.GetValue"); }
	FReply * OnMouseButtonDown(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SSlider.OnMouseButtonDown", result, MyGeometry, MouseEvent); }
	FReply * OnMouseButtonUp(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SSlider.OnMouseButtonUp", result, MyGeometry, MouseEvent); }
	FReply * OnMouseMove(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SSlider.OnMouseMove", result, MyGeometry, MouseEvent); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SSlider.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	float PositionToValue(const FGeometry * MyGeometry, const FVector2D * AbsolutePosition) { return NativeCall<float, const FGeometry *, const FVector2D *>(this, "SSlider.PositionToValue", MyGeometry, AbsolutePosition); }
	void SetOrientation(EOrientation InOrientation) { NativeCall<void, EOrientation>(this, "SSlider.SetOrientation", InOrientation); }
	void SetSliderBarColor(FSlateColor InSliderBarColor) { NativeCall<void, FSlateColor>(this, "SSlider.SetSliderBarColor", InSliderBarColor); }
	void SetSliderHandleColor(FSlateColor InSliderHandleColor) { NativeCall<void, FSlateColor>(this, "SSlider.SetSliderHandleColor", InSliderHandleColor); }
	void SetValue(const TAttribute<float> * InValueAttribute) { NativeCall<void, const TAttribute<float> *>(this, "SSlider.SetValue", InValueAttribute); }
};

