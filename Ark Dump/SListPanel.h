#pragma once

#include "BaseDeclarations.h"
#include "SPanel.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SListPanel : SPanel
{
	char __padding[0x70L];
	TPanelChildren<SListPanel::FSlot>& ChildrenField() { return *GetNativePointerField<TPanelChildren<SListPanel::FSlot>*>(this, "SListPanel.Children"); }
	TAttribute<float>& ItemWidthField() { return *GetNativePointerField<TAttribute<float>*>(this, "SListPanel.ItemWidth"); }
	TAttribute<float>& ItemHeightField() { return *GetNativePointerField<TAttribute<float>*>(this, "SListPanel.ItemHeight"); }
	TAttribute<int>& NumDesiredItemsField() { return *GetNativePointerField<TAttribute<int>*>(this, "SListPanel.NumDesiredItems"); }
	float& SmoothScrollOffsetInItemsField() { return *GetNativePointerField<float*>(this, "SListPanel.SmoothScrollOffsetInItems"); }
	float& OverscrollAmountField() { return *GetNativePointerField<float*>(this, "SListPanel.OverscrollAmount"); }
	int& PreferredRowNumField() { return *GetNativePointerField<int*>(this, "SListPanel.PreferredRowNum"); }
	bool& bIsRefreshPendingField() { return *GetNativePointerField<bool*>(this, "SListPanel.bIsRefreshPending"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SListPanel.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SListPanel.FArguments"); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SListPanel.ComputeDesiredSize", result); }
	void Construct(const SListPanel::FArguments * InArgs) { NativeCall<void, const SListPanel::FArguments *>(this, "SListPanel.Construct", InArgs); }
	float GetItemPadding(const FGeometry * AllottedGeometry) { return NativeCall<float, const FGeometry *>(this, "SListPanel.GetItemPadding", AllottedGeometry); }
	void OnArrangeChildren(const FGeometry * AllottedGeometry, FArrangedChildren * ArrangedChildren) { NativeCall<void, const FGeometry *, FArrangedChildren *>(this, "SListPanel.OnArrangeChildren", AllottedGeometry, ArrangedChildren); }
	void SetItemHeight(TAttribute<float> Height) { NativeCall<void, TAttribute<float>>(this, "SListPanel.SetItemHeight", Height); }
	void SetItemWidth(TAttribute<float> Width) { NativeCall<void, TAttribute<float>>(this, "SListPanel.SetItemWidth", Width); }
	void Tick(const FGeometry * AllottedGeometry, const long double InCurrentTime, const float InDeltaTime) { NativeCall<void, const FGeometry *, const long double, const float>(this, "SListPanel.Tick", AllottedGeometry, InCurrentTime, InDeltaTime); }
};

