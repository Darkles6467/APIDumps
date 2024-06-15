#pragma once

#include "BaseDeclarations.h"
#include "SBorder.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "EVisibility.h"

struct SScrollBar : SBorder
{
	char __padding[0x68L];
	TAttribute<EVisibility>& UserVisibilityField() { return *GetNativePointerField<TAttribute<EVisibility>*>(this, "SScrollBar.UserVisibility"); }
	bool& bDraggingThumbField() { return *GetNativePointerField<bool*>(this, "SScrollBar.bDraggingThumb"); }
	TSharedPtr<SScrollBarTrack,0>& TrackField() { return *GetNativePointerField<TSharedPtr<SScrollBarTrack,0>*>(this, "SScrollBar.Track"); }
	float& DragGrabOffsetField() { return *GetNativePointerField<float*>(this, "SScrollBar.DragGrabOffset"); }
	EOrientation& OrientationField() { return *GetNativePointerField<EOrientation*>(this, "SScrollBar.Orientation"); }

	// Functions

	void SetUserVisibility(TAttribute<EVisibility> InUserVisibility) { NativeCall<void, TAttribute<EVisibility>>(this, "SScrollBar.SetUserVisibility", InUserVisibility); }
	void FArguments() { NativeCall<void>(this, "SScrollBar.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SScrollBar.FArguments"); }
	void Construct(const SScrollBar::FArguments * InArgs) { NativeCall<void, const SScrollBar::FArguments *>(this, "SScrollBar.Construct", InArgs); }
	float DistanceFromBottom() { return NativeCall<float>(this, "SScrollBar.DistanceFromBottom"); }
	float DistanceFromTop() { return NativeCall<float>(this, "SScrollBar.DistanceFromTop"); }
	void ExecuteOnUserScrolled(const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { NativeCall<void, const FGeometry *, const FPointerEvent *>(this, "SScrollBar.ExecuteOnUserScrolled", MyGeometry, MouseEvent); }
	FLinearColor * GetThumbOpacity(FLinearColor * result) { return NativeCall<FLinearColor *, FLinearColor *>(this, "SScrollBar.GetThumbOpacity", result); }
	FSlateColor * GetTrackOpacity(FSlateColor * result) { return NativeCall<FSlateColor *, FSlateColor *>(this, "SScrollBar.GetTrackOpacity", result); }
	bool IsNeeded() { return NativeCall<bool>(this, "SScrollBar.IsNeeded"); }
	FReply * OnMouseButtonDown(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SScrollBar.OnMouseButtonDown", result, MyGeometry, MouseEvent); }
	FReply * OnMouseButtonUp(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SScrollBar.OnMouseButtonUp", result, MyGeometry, MouseEvent); }
	FReply * OnMouseMove(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SScrollBar.OnMouseMove", result, MyGeometry, MouseEvent); }
	void SetState(float InOffsetFraction, float InThumbSizeFraction) { NativeCall<void, float, float>(this, "SScrollBar.SetState", InOffsetFraction, InThumbSizeFraction); }
	EVisibility * ShouldBeVisible(EVisibility * result) { return NativeCall<EVisibility *, EVisibility *>(this, "SScrollBar.ShouldBeVisible", result); }
};

