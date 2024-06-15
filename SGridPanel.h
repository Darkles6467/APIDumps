#pragma once

#include "BaseDeclarations.h"
#include "SPanel.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SGridPanel : SPanel
{
	char __padding[0x60L];
	TPanelChildren<SGridPanel::FSlot>& SlotsField() { return *GetNativePointerField<TPanelChildren<SGridPanel::FSlot>*>(this, "SGridPanel.Slots"); }
	TArray<float>& ColumnsField() { return *GetNativePointerField<TArray<float>*>(this, "SGridPanel.Columns"); }
	TArray<float>& RowsField() { return *GetNativePointerField<TArray<float>*>(this, "SGridPanel.Rows"); }
	FVector2D& TotalDesiredSizesField() { return *GetNativePointerField<FVector2D*>(this, "SGridPanel.TotalDesiredSizes"); }
	TArray<float>& ColFillCoefficientsField() { return *GetNativePointerField<TArray<float>*>(this, "SGridPanel.ColFillCoefficients"); }
	TArray<float>& RowFillCoefficientsField() { return *GetNativePointerField<TArray<float>*>(this, "SGridPanel.RowFillCoefficients"); }

	// Functions

	void FSlot(int Column, int Row, int InLayer) { NativeCall<void, int, int, int>(this, "SGridPanel.FSlot", Column, Row, InLayer); }
	SGridPanel::FSlot * AddSlot(int Column, int Row, SGridPanel::Layer InLayer) { return NativeCall<SGridPanel::FSlot *, int, int, SGridPanel::Layer>(this, "SGridPanel.AddSlot", Column, Row, InLayer); }
	void CacheDesiredSize() { NativeCall<void>(this, "SGridPanel.CacheDesiredSize"); }
	void ComputeDesiredCellSizes(TArray<float> * OutColumns, TArray<float> * OutRows) { NativeCall<void, TArray<float> *, TArray<float> *>(this, "SGridPanel.ComputeDesiredCellSizes", OutColumns, OutRows); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SGridPanel.ComputeDesiredSize", result); }
	void Construct(const SGridPanel::FArguments * InArgs) { NativeCall<void, const SGridPanel::FArguments *>(this, "SGridPanel.Construct", InArgs); }
	static void DistributeSizeContributions(float SizeContribution, TArray<float> * DistributeOverMe, int StartIndex, int UpperBound) { NativeCall<void, float, TArray<float> *, int, int>(nullptr, "SGridPanel.DistributeSizeContributions", SizeContribution, DistributeOverMe, StartIndex, UpperBound); }
	SGridPanel::FSlot * InsertSlot(SGridPanel::FSlot * InSlot) { return NativeCall<SGridPanel::FSlot *, SGridPanel::FSlot *>(this, "SGridPanel.InsertSlot", InSlot); }
	void NotifySlotChanged(SGridPanel::FSlot * InSlot) { NativeCall<void, SGridPanel::FSlot *>(this, "SGridPanel.NotifySlotChanged", InSlot); }
	void OnArrangeChildren(const FGeometry * AllottedGeometry, FArrangedChildren * ArrangedChildren) { NativeCall<void, const FGeometry *, FArrangedChildren *>(this, "SGridPanel.OnArrangeChildren", AllottedGeometry, ArrangedChildren); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SGridPanel.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	bool RemoveSlot(const TSharedRef<SWidget,0> * SlotWidget) { return NativeCall<bool, const TSharedRef<SWidget,0> *>(this, "SGridPanel.RemoveSlot", SlotWidget); }
	void SetColumnFill(int ColumnId, float Coefficient) { NativeCall<void, int, float>(this, "SGridPanel.SetColumnFill", ColumnId, Coefficient); }
	void SetRowFill(int RowId, float Coefficient) { NativeCall<void, int, float>(this, "SGridPanel.SetRowFill", RowId, Coefficient); }
	void FArguments() { NativeCall<void>(this, "SGridPanel.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SGridPanel.FArguments"); }
	SGridPanel::FSlot * FSlot(int ColumnSpan) { return NativeCall<SGridPanel::FSlot *, int>(this, "SGridPanel.FSlot", ColumnSpan); }
	SGridPanel::FSlot * FSlot(int RowSpan) { return NativeCall<SGridPanel::FSlot *, int>(this, "SGridPanel.FSlot", RowSpan); }
	SGridPanel::FSlot * FSlot(int Column) { return NativeCall<SGridPanel::FSlot *, int>(this, "SGridPanel.FSlot", Column); }
	SGridPanel::FSlot * FSlot(int Row) { return NativeCall<SGridPanel::FSlot *, int>(this, "SGridPanel.FSlot", Row); }
};

