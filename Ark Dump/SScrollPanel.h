#pragma once

#include "BaseDeclarations.h"
#include "SPanel.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SScrollPanel : SPanel
{
	char __padding[0x98L];
	float& PhysicalOffsetField() { return *GetNativePointerField<float*>(this, "SScrollPanel.PhysicalOffset"); }
	TPanelChildren<SScrollBox::FSlot>& ChildrenField() { return *GetNativePointerField<TPanelChildren<SScrollBox::FSlot>*>(this, "SScrollPanel.Children"); }
	FVisibleChildren& VisibleChildrenField() { return *GetNativePointerField<FVisibleChildren*>(this, "SScrollPanel.VisibleChildren"); }
	EOrientation& OrientationField() { return *GetNativePointerField<EOrientation*>(this, "SScrollPanel.Orientation"); }
	int& NumWidgetsBeforeWrappingField() { return *GetNativePointerField<int*>(this, "SScrollPanel.NumWidgetsBeforeWrapping"); }
	FVector2D& WidgetSizeField() { return *GetNativePointerField<FVector2D*>(this, "SScrollPanel.WidgetSize"); }
	FVector2D& WidgetPaddingField() { return *GetNativePointerField<FVector2D*>(this, "SScrollPanel.WidgetPadding"); }
	EVerticalAlignment& WidgetVerticalAlignmentField() { return *GetNativePointerField<EVerticalAlignment*>(this, "SScrollPanel.WidgetVerticalAlignment"); }
	EHorizontalAlignment& WidgetHorizontalAlignmentField() { return *GetNativePointerField<EHorizontalAlignment*>(this, "SScrollPanel.WidgetHorizontalAlignment"); }
	bool& UseWidgetPaddingAsMarginField() { return *GetNativePointerField<bool*>(this, "SScrollPanel.UseWidgetPaddingAsMargin"); }
	FMargin& WidgetMarginField() { return *GetNativePointerField<FMargin*>(this, "SScrollPanel.WidgetMargin"); }
	TArray<SScrollBox::SortStruct>& RenderOrderedChildrenField() { return *GetNativePointerField<TArray<SScrollBox::SortStruct>*>(this, "SScrollPanel.RenderOrderedChildren"); }
	TArray<int>& WidgetOffsetsField() { return *GetNativePointerField<TArray<int>*>(this, "SScrollPanel.WidgetOffsets"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SScrollPanel.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SScrollPanel.FArguments"); }
	float ArrangeChildHorizontalAndReturnOffset(const FGeometry * AllottedGeometry, FArrangedChildren * ArrangedChildren, const SScrollBox::FSlot * ThisSlot, float CurChildOffset) { return NativeCall<float, const FGeometry *, FArrangedChildren *, const SScrollBox::FSlot *, float>(this, "SScrollPanel.ArrangeChildHorizontalAndReturnOffset", AllottedGeometry, ArrangedChildren, ThisSlot, CurChildOffset); }
	float ArrangeChildVerticalAndReturnOffset(const FGeometry * AllottedGeometry, FArrangedChildren * ArrangedChildren, const SScrollBox::FSlot * ThisSlot, float CurChildOffset) { return NativeCall<float, const FGeometry *, FArrangedChildren *, const SScrollBox::FSlot *, float>(this, "SScrollPanel.ArrangeChildVerticalAndReturnOffset", AllottedGeometry, ArrangedChildren, ThisSlot, CurChildOffset); }
	FVector2D * CalculateItemPosition(FVector2D * result, int index, const FVector2D wrappingAlignment, bool usePhysicalOffset) { return NativeCall<FVector2D *, FVector2D *, int, const FVector2D, bool>(this, "SScrollPanel.CalculateItemPosition", result, index, wrappingAlignment, usePhysicalOffset); }
	FVector2D * CalculateWrappingAlignment(FVector2D * result, const FVector2D * AlottedGeometrySize, int numChildren) { return NativeCall<FVector2D *, FVector2D *, const FVector2D *, int>(this, "SScrollPanel.CalculateWrappingAlignment", result, AlottedGeometrySize, numChildren); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SScrollPanel.ComputeDesiredSize", result); }
	void Construct(const SScrollPanel::FArguments * InArgs, const TArray<SScrollBox::FSlot *> * InSlots) { NativeCall<void, const SScrollPanel::FArguments *, const TArray<SScrollBox::FSlot *> *>(this, "SScrollPanel.Construct", InArgs, InSlots); }
	const TArray<SScrollBox::SortStruct> * GetSortedChildrenRenderOrder(bool (__fastcall *)(const SScrollBox::SortStruct *, const SScrollBox::SortStruct *) bool) { return NativeCall<const TArray<SScrollBox::SortStruct> *, bool (__fastcall *)(const SScrollBox::SortStruct *, const SScrollBox::SortStruct *)>(this, "SScrollPanel.GetSortedChildrenRenderOrder", bool); }
	void OnArrangeChildren(const FGeometry * AllottedGeometry, FArrangedChildren * ArrangedChildren) { NativeCall<void, const FGeometry *, FArrangedChildren *>(this, "SScrollPanel.OnArrangeChildren", AllottedGeometry, ArrangedChildren); }
	int PaintPreview(int numPreviewWidgets, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, int, const FGeometry *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SScrollPanel.PaintPreview", numPreviewWidgets, AllottedGeometry, MyClippingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	void UpdateVisibleChildren(const FGeometry * AllottedGeometry) { NativeCall<void, const FGeometry *>(this, "SScrollPanel.UpdateVisibleChildren", AllottedGeometry); }
};

