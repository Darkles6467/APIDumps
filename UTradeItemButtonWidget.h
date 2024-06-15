#pragma once

#include "BaseDeclarations.h"
#include "UBaseSelectableButtonWidget.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UTradeItemButtonWidget : UBaseSelectableButtonWidget
{
	char __padding[0x80L];
	FName& ItemCostTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UTradeItemButtonWidget.ItemCostTextBlockName"); }
	FName& ItemQuantityTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UTradeItemButtonWidget.ItemQuantityTextBlockName"); }
	FName& ItemImageNameField() { return *GetNativePointerField<FName*>(this, "UTradeItemButtonWidget.ItemImageName"); }
	FName& ItemWeightTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UTradeItemButtonWidget.ItemWeightTextBlockName"); }
	FLinearColor& CanAffordPriceTextField() { return *GetNativePointerField<FLinearColor*>(this, "UTradeItemButtonWidget.CanAffordPriceText"); }
	FLinearColor& TooExpensivePriceTextField() { return *GetNativePointerField<FLinearColor*>(this, "UTradeItemButtonWidget.TooExpensivePriceText"); }
	int& AssociatedOptionIndexField() { return *GetNativePointerField<int*>(this, "UTradeItemButtonWidget.AssociatedOptionIndex"); }
	UCustomButtonWidget * ButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UTradeItemButtonWidget.Button"); }
	UTextBlock * ItemCostTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UTradeItemButtonWidget.ItemCostTextBlock"); }
	UTextBlock * ItemQuantityTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UTradeItemButtonWidget.ItemQuantityTextBlock"); }
	UTextBlock * ItemWeightTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UTradeItemButtonWidget.ItemWeightTextBlock"); }
	UImage * ItemImageField() { return GetNativePointerField<UImage *>(this, "UTradeItemButtonWidget.ItemImage"); }
	bool& bAllowButtonClickField() { return *GetNativePointerField<bool*>(this, "UTradeItemButtonWidget.bAllowButtonClick"); }

	// Functions

	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UTradeItemButtonWidget.ClickedButton", clickedWidget); }
	UCustomButtonWidget * GetButton() { return NativeCall<UCustomButtonWidget *>(this, "UTradeItemButtonWidget.GetButton"); }
	void InitializeMe(bool bCanExpire) { NativeCall<void, bool>(this, "UTradeItemButtonWidget.InitializeMe", bCanExpire); }
	bool IsSelected() { return NativeCall<bool>(this, "UTradeItemButtonWidget.IsSelected"); }
	void SetItemCostString(const FString * NewCost) { NativeCall<void, const FString *>(this, "UTradeItemButtonWidget.SetItemCostString", NewCost); }
	void SetItemImageBrush(UTexture2D * NewBrush) { NativeCall<void, UTexture2D *>(this, "UTradeItemButtonWidget.SetItemImageBrush", NewBrush); }
	void SetItemQualityColor(FLinearColor NewColor) { NativeCall<void, FLinearColor>(this, "UTradeItemButtonWidget.SetItemQualityColor", NewColor); }
	void SetItemQuantityString(const FString * NewQuantity) { NativeCall<void, const FString *>(this, "UTradeItemButtonWidget.SetItemQuantityString", NewQuantity); }
	void SetItemWeightString(const FString * NewWeight) { NativeCall<void, const FString *>(this, "UTradeItemButtonWidget.SetItemWeightString", NewWeight); }
	void SetSelected(bool bSelected) { NativeCall<void, bool>(this, "UTradeItemButtonWidget.SetSelected", bSelected); }
	bool UseCustomToolTip(bool bIgnoreLockedToSeat) { return NativeCall<bool, bool>(this, "UTradeItemButtonWidget.UseCustomToolTip", bIgnoreLockedToSeat); }
};

