#pragma once

#include "BaseDeclarations.h"
#include "SLeafWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "FSlateColor.h"

struct SProgressBar : SLeafWidget
{
	char __padding[0xc8L];
	bool& bInterpolatePercentField() { return *GetNativePointerField<bool*>(this, "SProgressBar.bInterpolatePercent"); }
	float& CurrentPercentField() { return *GetNativePointerField<float*>(this, "SProgressBar.CurrentPercent"); }
	float& InterpolatePercentSpeedField() { return *GetNativePointerField<float*>(this, "SProgressBar.InterpolatePercentSpeed"); }
	int& PercentInterpolationKeyCurrentField() { return *GetNativePointerField<int*>(this, "SProgressBar.PercentInterpolationKeyCurrent"); }
	int& PercentInterpolationKeyField() { return *GetNativePointerField<int*>(this, "SProgressBar.PercentInterpolationKey"); }
	const FProgressBarStyle * StyleField() { return GetNativePointerField<const FProgressBarStyle *>(this, "SProgressBar.Style"); }
	TAttribute<TOptional<float> >& PercentField() { return *GetNativePointerField<TAttribute<TOptional<float> >*>(this, "SProgressBar.Percent"); }
	EProgressBarFillType::Type& BarFillTypeField() { return *GetNativePointerField<EProgressBarFillType::Type*>(this, "SProgressBar.BarFillType"); }
	TAttribute<FSlateColor>& FillColorAndOpacityField() { return *GetNativePointerField<TAttribute<FSlateColor>*>(this, "SProgressBar.FillColorAndOpacity"); }
	TAttribute<FVector2D>& BorderPaddingField() { return *GetNativePointerField<TAttribute<FVector2D>*>(this, "SProgressBar.BorderPadding"); }
	FCurveSequence& CurveSequenceField() { return *GetNativePointerField<FCurveSequence*>(this, "SProgressBar.CurveSequence"); }

	// Functions

	SProgressBar::FArguments * FArguments(SShooterLoadingScreen * InUserObject, __int128 InFunc) { return NativeCall<SProgressBar::FArguments *, SShooterLoadingScreen *, __int128>(this, "SProgressBar.FArguments", InUserObject, InFunc); }
	void FArguments() { NativeCall<void>(this, "SProgressBar.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SProgressBar.FArguments"); }
	SProgressBar::FArguments * FArguments(const FSlateBrush * InArg) { return NativeCall<SProgressBar::FArguments *, const FSlateBrush *>(this, "SProgressBar.FArguments", InArg); }
	SProgressBar::FArguments * FArguments(const FSlateBrush * InArg) { return NativeCall<SProgressBar::FArguments *, const FSlateBrush *>(this, "SProgressBar.FArguments", InArg); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SProgressBar.ComputeDesiredSize", result); }
	void Construct(const SProgressBar::FArguments * InArgs) { NativeCall<void, const SProgressBar::FArguments *>(this, "SProgressBar.Construct", InArgs); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SProgressBar.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	void SetFillColorAndOpacity(TAttribute<FSlateColor> InFillColorAndOpacity) { NativeCall<void, TAttribute<FSlateColor>>(this, "SProgressBar.SetFillColorAndOpacity", InFillColorAndOpacity); }
	void SetPercent(TAttribute<TOptional<float> > InPercent) { NativeCall<void, TAttribute<TOptional<float> >>(this, "SProgressBar.SetPercent", InPercent); }
	void SetStyle(const FProgressBarStyle * InStyle) { NativeCall<void, const FProgressBarStyle *>(this, "SProgressBar.SetStyle", InStyle); }
	void Tick(const FGeometry * AllottedGeometry, const long double InCurrentTime, const float InDeltaTime) { NativeCall<void, const FGeometry *, const long double, const float>(this, "SProgressBar.Tick", AllottedGeometry, InCurrentTime, InDeltaTime); }
};

