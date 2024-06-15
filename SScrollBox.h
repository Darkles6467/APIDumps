#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "SScrollBar.h"

struct SScrollBox : SCompoundWidget
{
	char __padding[0x100L];
	float& DesiredScrollOffsetField() { return *GetNativePointerField<float*>(this, "SScrollBox.DesiredScrollOffset"); }
	TSharedPtr<SScrollPanel,0>& ScrollPanelField() { return *GetNativePointerField<TSharedPtr<SScrollPanel,0>*>(this, "SScrollBox.ScrollPanel"); }
	TSharedPtr<SScrollBar,0>& ScrollBarField() { return *GetNativePointerField<TSharedPtr<SScrollBar,0>*>(this, "SScrollBox.ScrollBar"); }
	bool& bScrollBarIsExternalField() { return *GetNativePointerField<bool*>(this, "SScrollBox.bScrollBarIsExternal"); }
	bool& bIsScrollingField() { return *GetNativePointerField<bool*>(this, "SScrollBox.bIsScrolling"); }
	bool& bAnimateScrollField() { return *GetNativePointerField<bool*>(this, "SScrollBox.bAnimateScroll"); }
	float& AmountScrolledWhileRightMouseDownField() { return *GetNativePointerField<float*>(this, "SScrollBox.AmountScrolledWhileRightMouseDown"); }
	FInertialScrollManager& InertialScrollManagerField() { return *GetNativePointerField<FInertialScrollManager*>(this, "SScrollBox.InertialScrollManager"); }
	FVector2D& SoftwareCursorPositionField() { return *GetNativePointerField<FVector2D*>(this, "SScrollBox.SoftwareCursorPosition"); }
	bool& bShowSoftwareCursorField() { return *GetNativePointerField<bool*>(this, "SScrollBox.bShowSoftwareCursor"); }
	EOrientation& OrientationField() { return *GetNativePointerField<EOrientation*>(this, "SScrollBox.Orientation"); }
	int& NumPreviewWidgetsField() { return *GetNativePointerField<int*>(this, "SScrollBox.NumPreviewWidgets"); }
	int& NumWidgetsBeforeWrappingField() { return *GetNativePointerField<int*>(this, "SScrollBox.NumWidgetsBeforeWrapping"); }
	FVector2D& WidgetSizeField() { return *GetNativePointerField<FVector2D*>(this, "SScrollBox.WidgetSize"); }
	FVector2D& WidgetPaddingField() { return *GetNativePointerField<FVector2D*>(this, "SScrollBox.WidgetPadding"); }
	FGeometry& MyCachedGeometryField() { return *GetNativePointerField<FGeometry*>(this, "SScrollBox.MyCachedGeometry"); }
	bool& UseWidgetPaddingAsMarginField() { return *GetNativePointerField<bool*>(this, "SScrollBox.UseWidgetPaddingAsMargin"); }
	FMargin& WidgetMarginField() { return *GetNativePointerField<FMargin*>(this, "SScrollBox.WidgetMargin"); }
	EHorizontalAlignment& WidgetHorizontalAlignmentField() { return *GetNativePointerField<EHorizontalAlignment*>(this, "SScrollBox.WidgetHorizontalAlignment"); }
	EVerticalAlignment& WidgetVerticalAlignmentField() { return *GetNativePointerField<EVerticalAlignment*>(this, "SScrollBox.WidgetVerticalAlignment"); }
	const FScrollBoxStyle * StyleField() { return GetNativePointerField<const FScrollBoxStyle *>(this, "SScrollBox.Style"); }
	const FScrollBarStyle * ScrollBarStyleField() { return GetNativePointerField<const FScrollBarStyle *>(this, "SScrollBox.ScrollBarStyle"); }
	TArray<int>& WidgetOffsetsField() { return *GetNativePointerField<TArray<int>*>(this, "SScrollBox.WidgetOffsets"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SScrollBox.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SScrollBox.FArguments"); }
	SScrollBox::FSlot * AddSlot() { return NativeCall<SScrollBox::FSlot *>(this, "SScrollBox.AddSlot"); }
	void Construct(const SScrollBox::FArguments * InArgs) { NativeCall<void, const SScrollBox::FArguments *>(this, "SScrollBox.Construct", InArgs); }
	void ConstructHorizontalLayout() { NativeCall<void>(this, "SScrollBox.ConstructHorizontalLayout"); }
	TSharedPtr<SScrollBar,0> * ConstructScrollBar(TSharedPtr<SScrollBar,0> * result) { return NativeCall<TSharedPtr<SScrollBar,0> *, TSharedPtr<SScrollBar,0> *>(this, "SScrollBox.ConstructScrollBar", result); }
	void ConstructVerticalLayout() { NativeCall<void>(this, "SScrollBox.ConstructVerticalLayout"); }
	float GetClampedDesiredScrollOffset() { return NativeCall<float>(this, "SScrollBox.GetClampedDesiredScrollOffset"); }
	FVector2D * GetContentPanelSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SScrollBox.GetContentPanelSize", result); }
	FSlateColor * GetEndShadowOpacity(FSlateColor * result) { return NativeCall<FSlateColor *, FSlateColor *>(this, "SScrollBox.GetEndShadowOpacity", result); }
	float GetScrollMax() { return NativeCall<float>(this, "SScrollBox.GetScrollMax"); }
	float GetScrollOffset() { return NativeCall<float>(this, "SScrollBox.GetScrollOffset"); }
	FSlateColor * GetStartShadowOpacity(FSlateColor * result) { return NativeCall<FSlateColor *, FSlateColor *>(this, "SScrollBox.GetStartShadowOpacity", result); }
	int GetVisibleChildrenCount() { return NativeCall<int>(this, "SScrollBox.GetVisibleChildrenCount"); }
	int GetVisibleChildrenOffset() { return NativeCall<int>(this, "SScrollBox.GetVisibleChildrenOffset"); }
	FCursorReply * OnCursorQuery(FCursorReply * result, const FGeometry * MyGeometry, const FPointerEvent * CursorEvent) { return NativeCall<FCursorReply *, FCursorReply *, const FGeometry *, const FPointerEvent *>(this, "SScrollBox.OnCursorQuery", result, MyGeometry, CursorEvent); }
	FReply * OnDragDetected(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SScrollBox.OnDragDetected", result, MyGeometry, MouseEvent); }
	FReply * OnMouseButtonDown(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SScrollBox.OnMouseButtonDown", result, MyGeometry, MouseEvent); }
	FReply * OnMouseButtonUp(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SScrollBox.OnMouseButtonUp", result, MyGeometry, MouseEvent); }
	void OnMouseLeave(const FPointerEvent * MouseEvent) { NativeCall<void, const FPointerEvent *>(this, "SScrollBox.OnMouseLeave", MouseEvent); }
	FReply * OnMouseMove(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SScrollBox.OnMouseMove", result, MyGeometry, MouseEvent); }
	FReply * OnMouseWheel(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SScrollBox.OnMouseWheel", result, MyGeometry, MouseEvent); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SScrollBox.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	void RemoveSlot(const TSharedRef<SWidget,0> * WidgetToRemove) { NativeCall<void, const TSharedRef<SWidget,0> *>(this, "SScrollBox.RemoveSlot", WidgetToRemove); }
	void ScrollBar_OnUserScrolled(float InScrollOffsetFraction) { NativeCall<void, float>(this, "SScrollBox.ScrollBar_OnUserScrolled", InScrollOffsetFraction); }
	bool ScrollBy(const FGeometry * AllottedGeometry, float ScrollAmount, bool InAnimateScroll) { return NativeCall<bool, const FGeometry *, float, bool>(this, "SScrollBox.ScrollBy", AllottedGeometry, ScrollAmount, InAnimateScroll); }
	void SetNumPreviewWidgets(int InNumPreviewWidgets) { NativeCall<void, int>(this, "SScrollBox.SetNumPreviewWidgets", InNumPreviewWidgets); }
	void SetNumWidgetsBeforeWrapping(int InNumWidgetsBeforeWrapping) { NativeCall<void, int>(this, "SScrollBox.SetNumWidgetsBeforeWrapping", InNumWidgetsBeforeWrapping); }
	void SetOnSortRenderOrderSlotsCallback(bool (__fastcall *)(const SScrollBox::SortStruct *, const SScrollBox::SortStruct *) bool) { NativeCall<void, bool (__fastcall *)(const SScrollBox::SortStruct *, const SScrollBox::SortStruct *)>(this, "SScrollBox.SetOnSortRenderOrderSlotsCallback", bool); }
	void SetOrientation(EOrientation InOrientation) { NativeCall<void, EOrientation>(this, "SScrollBox.SetOrientation", InOrientation); }
	void SetScrollOffset(float NewScrollOffset) { NativeCall<void, float>(this, "SScrollBox.SetScrollOffset", NewScrollOffset); }
	void SetUseWidgetPaddingAsMargin(bool value) { NativeCall<void, bool>(this, "SScrollBox.SetUseWidgetPaddingAsMargin", value); }
	void SetWidgetHorizontalAlignment(EHorizontalAlignment InWidgetHorizontalAlignment) { NativeCall<void, EHorizontalAlignment>(this, "SScrollBox.SetWidgetHorizontalAlignment", InWidgetHorizontalAlignment); }
	void SetWidgetMargin(const FMargin * margin) { NativeCall<void, const FMargin *>(this, "SScrollBox.SetWidgetMargin", margin); }
	void SetWidgetOffsets(const TArray<int> offsets) { NativeCall<void, const TArray<int>>(this, "SScrollBox.SetWidgetOffsets", offsets); }
	void SetWidgetPadding(const FVector2D * InWidgetPadding) { NativeCall<void, const FVector2D *>(this, "SScrollBox.SetWidgetPadding", InWidgetPadding); }
	void SetWidgetSize(const FVector2D * InWidgetSize) { NativeCall<void, const FVector2D *>(this, "SScrollBox.SetWidgetSize", InWidgetSize); }
	void SetWidgetVerticalAlignment(EVerticalAlignment InWidgetVerticalAlignment) { NativeCall<void, EVerticalAlignment>(this, "SScrollBox.SetWidgetVerticalAlignment", InWidgetVerticalAlignment); }
	static SScrollBox::FSlot * Slot() { return NativeCall<SScrollBox::FSlot *>(nullptr, "SScrollBox.Slot"); }
	void Tick(const FGeometry * AllottedGeometry, const long double InCurrentTime, const float InDeltaTime) { NativeCall<void, const FGeometry *, const long double, const float>(this, "SScrollBox.Tick", AllottedGeometry, InCurrentTime, InDeltaTime); }
	SVerticalBox::FArguments * FArguments(SVerticalBox::FSlot * SlotToAdd) { return NativeCall<SVerticalBox::FArguments *, SVerticalBox::FSlot *>(this, "SScrollBox.FArguments", SlotToAdd); }
};

