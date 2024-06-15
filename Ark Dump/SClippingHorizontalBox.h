#pragma once

#include "BaseDeclarations.h"
#include "SHorizontalBox.h"
#include "SBoxPanel.h"
#include "SPanel.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SClippingHorizontalBox : SHorizontalBox
{
	char __padding[0x38L];
	int& ClippedIdxField() { return *GetNativePointerField<int*>(this, "SClippingHorizontalBox.ClippedIdx"); }
	FName& StyleNameField() { return *GetNativePointerField<FName*>(this, "SClippingHorizontalBox.StyleName"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SClippingHorizontalBox.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SClippingHorizontalBox.FArguments"); }
	void AddWrapButton() { NativeCall<void>(this, "SClippingHorizontalBox.AddWrapButton"); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SClippingHorizontalBox.ComputeDesiredSize", result); }
	void OnArrangeChildren(const FGeometry * AllottedGeometry, FArrangedChildren * ArrangedChildren) { NativeCall<void, const FGeometry *, FArrangedChildren *>(this, "SClippingHorizontalBox.OnArrangeChildren", AllottedGeometry, ArrangedChildren); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SClippingHorizontalBox.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	void Tick(const FGeometry * AllottedGeometry, const long double InCurrentTime, const float InDeltaTime) { NativeCall<void, const FGeometry *, const long double, const float>(this, "SClippingHorizontalBox.Tick", AllottedGeometry, InCurrentTime, InDeltaTime); }
};

