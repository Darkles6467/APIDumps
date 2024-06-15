#pragma once

#include "BaseDeclarations.h"
#include "SLeafWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SCircularThrobber : SLeafWidget
{
	char __padding[0x48L];
	FCurveSequence& SequenceField() { return *GetNativePointerField<FCurveSequence*>(this, "SCircularThrobber.Sequence"); }
	FCurveHandle& CurveField() { return *GetNativePointerField<FCurveHandle*>(this, "SCircularThrobber.Curve"); }
	int& NumPiecesField() { return *GetNativePointerField<int*>(this, "SCircularThrobber.NumPieces"); }
	float& PeriodField() { return *GetNativePointerField<float*>(this, "SCircularThrobber.Period"); }
	float& RadiusField() { return *GetNativePointerField<float*>(this, "SCircularThrobber.Radius"); }

	// Functions

	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SCircularThrobber.ComputeDesiredSize", result); }
	void Construct(const SCircularThrobber::FArguments * InArgs) { NativeCall<void, const SCircularThrobber::FArguments *>(this, "SCircularThrobber.Construct", InArgs); }
	void ConstructSequence() { NativeCall<void>(this, "SCircularThrobber.ConstructSequence"); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SCircularThrobber.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	void SetPeriod(float InPeriod) { NativeCall<void, float>(this, "SCircularThrobber.SetPeriod", InPeriod); }
	void SetRadius(float InRadius) { NativeCall<void, float>(this, "SCircularThrobber.SetRadius", InRadius); }
	void FArguments() { NativeCall<void>(this, "SCircularThrobber.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SCircularThrobber.FArguments"); }
};

