#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_HexagonConversion : UPrimalUI
{
	char __padding[0x8e0L];
	UImage * ItemIconField() { return GetNativePointerField<UImage *>(this, "UUI_HexagonConversion.ItemIcon"); }
	UImage * ConvertButtonItemIconField() { return GetNativePointerField<UImage *>(this, "UUI_HexagonConversion.ConvertButtonItemIcon"); }
	UTextBlock * ItemNameTextBoxField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HexagonConversion.ItemNameTextBox"); }
	UTextBlock * CostCountTextBoxField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HexagonConversion.CostCountTextBox"); }
	UTextBlock * CurrentCountTextBoxField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HexagonConversion.CurrentCountTextBox"); }
	UTextBlock * SubtotalCountTextBoxField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HexagonConversion.SubtotalCountTextBox"); }
	UTextBlock * RemainingCountTextBoxField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HexagonConversion.RemainingCountTextBox"); }
	UCustomButtonWidget * ConvertButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HexagonConversion.ConvertButton"); }
	UCustomButtonWidget * CloseButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_HexagonConversion.CloseButton"); }
	UTextBlock * ItemQuantityTextBoxField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HexagonConversion.ItemQuantityTextBox"); }
	UTextBlock * SecondaryQuantityValueTextBoxField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HexagonConversion.SecondaryQuantityValueTextBox"); }
	UTextBlock * ItemDescriptionTextBoxField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HexagonConversion.ItemDescriptionTextBox"); }
	UTextBlock * ItemWeightValueTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HexagonConversion.ItemWeightValueTextBlock"); }
	UTextBlock * ItemInventoryQuantityValueTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HexagonConversion.ItemInventoryQuantityValueTextBlock"); }
	UHorizontalBox * CurrentHorizontalBoxField() { return GetNativePointerField<UHorizontalBox *>(this, "UUI_HexagonConversion.CurrentHorizontalBox"); }
	UTextBlock * QuantitySelectorTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HexagonConversion.QuantitySelectorTextBlock"); }
	UTextBlock * ConvertButtonSubtotalTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HexagonConversion.ConvertButtonSubtotalTextBlock"); }
	UTextBlock * ConvertButtonQuantityTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HexagonConversion.ConvertButtonQuantityTextBlock"); }
	UTextBlock * WeightBeforePurchaseTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HexagonConversion.WeightBeforePurchaseTextBlock"); }
	UTextBlock * WeightAfterPurchaseTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HexagonConversion.WeightAfterPurchaseTextBlock"); }
	UProgressBar * WeightBeforePurchaseProgressBarField() { return GetNativePointerField<UProgressBar *>(this, "UUI_HexagonConversion.WeightBeforePurchaseProgressBar"); }
	UProgressBar * WeightAfterPurchaseProgressBarField() { return GetNativePointerField<UProgressBar *>(this, "UUI_HexagonConversion.WeightAfterPurchaseProgressBar"); }
	UTextBlock * PlayerHexagonAmountTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HexagonConversion.PlayerHexagonAmountTextBlock"); }
	UTextBlock * ConvertButtonConvertTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HexagonConversion.ConvertButtonConvertTextBlock"); }
	UTextBlock * ConvertButtonIntoTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HexagonConversion.ConvertButtonIntoTextBlock"); }
	UImage * ConvertButtonHexagonIconField() { return GetNativePointerField<UImage *>(this, "UUI_HexagonConversion.ConvertButtonHexagonIcon"); }
	UImage * ConvertButtonQualityImageField() { return GetNativePointerField<UImage *>(this, "UUI_HexagonConversion.ConvertButtonQualityImage"); }
	FName& ItemIconNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.ItemIconName"); }
	FName& ItemIconPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.ItemIconPanelName"); }
	FName& ItemNameTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.ItemNameTextBoxName"); }
	FName& CostPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.CostPanelName"); }
	FName& CostCountTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.CostCountTextBoxName"); }
	FName& CurrentCountTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.CurrentCountTextBoxName"); }
	FName& SubtotalCountTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.SubtotalCountTextBoxName"); }
	FName& RemainingCountTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.RemainingCountTextBoxName"); }
	FName& AvailableItemsScrollboxNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.AvailableItemsScrollboxName"); }
	FName& ConvertButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.ConvertButtonName"); }
	FName& CloseButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.CloseButtonName"); }
	FName& ItemQuantityTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.ItemQuantityTextBoxName"); }
	FName& ItemDescriptionTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.ItemDescriptionTextBoxName"); }
	FName& ItemWeightValueTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.ItemWeightValueTextBlockName"); }
	FName& ItemInventoryQuantityValueTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.ItemInventoryQuantityValueTextBlockName"); }
	FName& ConvertButtonItemIconNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.ConvertButtonItemIconName"); }
	FName& QuantitySelectorTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.QuantitySelectorTextBlockName"); }
	FName& ConvertButtonSubtotalTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.ConvertButtonSubtotalTextBlockName"); }
	FName& ConvertButtonQuantityTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.ConvertButtonQuantityTextBlockName"); }
	FName& WeightBeforePurchaseTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.WeightBeforePurchaseTextBlockName"); }
	FName& WeightAfterPurchaseTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.WeightAfterPurchaseTextBlockName"); }
	FName& WeightBeforePurchaseProgressBarNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.WeightBeforePurchaseProgressBarName"); }
	FName& WeightAfterPurchaseProgressBarNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.WeightAfterPurchaseProgressBarName"); }
	FName& IncreaseQuantityButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.IncreaseQuantityButtonName"); }
	FName& IncreaseQuantity10ButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.IncreaseQuantity10ButtonName"); }
	FName& MaxIncreaseQuantityButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.MaxIncreaseQuantityButtonName"); }
	FName& DecreaseQuantityButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.DecreaseQuantityButtonName"); }
	FName& DecreaseQuantity10ButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.DecreaseQuantity10ButtonName"); }
	FName& MaxDecreaseQuantityButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.MaxDecreaseQuantityButtonName"); }
	FName& SearchTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_HexagonConversion.SearchTextBoxName"); }
	int& AvailableItemsPerRowField() { return *GetNativePointerField<int*>(this, "UUI_HexagonConversion.AvailableItemsPerRow"); }
	TArray<bool>& CurrentAvailableItemsField() { return *GetNativePointerField<TArray<bool>*>(this, "UUI_HexagonConversion.CurrentAvailableItems"); }
	TArray<UTradeItemButtonWidget *>& AvailableItemsWidgetsField() { return *GetNativePointerField<TArray<UTradeItemButtonWidget *>*>(this, "UUI_HexagonConversion.AvailableItemsWidgets"); }
	TSubclassOf<UTradeItemButtonWidget>& SlotButtonTemplateField() { return *GetNativePointerField<TSubclassOf<UTradeItemButtonWidget>*>(this, "UUI_HexagonConversion.SlotButtonTemplate"); }
	FCustomButtonWidgetStyle& UnavailableItemButtonStyleField() { return *GetNativePointerField<FCustomButtonWidgetStyle*>(this, "UUI_HexagonConversion.UnavailableItemButtonStyle"); }
	FCustomButtonWidgetStyle& AvailableItemButtonStyleField() { return *GetNativePointerField<FCustomButtonWidgetStyle*>(this, "UUI_HexagonConversion.AvailableItemButtonStyle"); }
	FCustomButtonWidgetStyle& UnavailableConvertButtonStyleField() { return *GetNativePointerField<FCustomButtonWidgetStyle*>(this, "UUI_HexagonConversion.UnavailableConvertButtonStyle"); }
	FCustomButtonWidgetStyle& AvailableConvertButtonStyleField() { return *GetNativePointerField<FCustomButtonWidgetStyle*>(this, "UUI_HexagonConversion.AvailableConvertButtonStyle"); }
	FSlateColor& NotAbleToPurchaseTextColorField() { return *GetNativePointerField<FSlateColor*>(this, "UUI_HexagonConversion.NotAbleToPurchaseTextColor"); }
	FSlateColor& AbleToPurchaseTextColorField() { return *GetNativePointerField<FSlateColor*>(this, "UUI_HexagonConversion.AbleToPurchaseTextColor"); }
	FSlateColor& NeutralTextColorField() { return *GetNativePointerField<FSlateColor*>(this, "UUI_HexagonConversion.NeutralTextColor"); }
	FCompanionReactionData& PurchaseItemReactionField() { return *GetNativePointerField<FCompanionReactionData*>(this, "UUI_HexagonConversion.PurchaseItemReaction"); }
	FCompanionReactionData& CloseStoreReactionNoPurchaseField() { return *GetNativePointerField<FCompanionReactionData*>(this, "UUI_HexagonConversion.CloseStoreReactionNoPurchase"); }
	FCompanionReactionData& CloseStoreReactionDidPurchaseField() { return *GetNativePointerField<FCompanionReactionData*>(this, "UUI_HexagonConversion.CloseStoreReactionDidPurchase"); }
	FCompanionReactionData& OpenStoreReactionField() { return *GetNativePointerField<FCompanionReactionData*>(this, "UUI_HexagonConversion.OpenStoreReaction"); }
	FCompanionReactionData& OpenStoreReactionSaleField() { return *GetNativePointerField<FCompanionReactionData*>(this, "UUI_HexagonConversion.OpenStoreReactionSale"); }
	FCompanionReactionData& OpenStoreReactionChangeField() { return *GetNativePointerField<FCompanionReactionData*>(this, "UUI_HexagonConversion.OpenStoreReactionChange"); }
	FCompanionReactionData& OpenStoreReactionNewItemUnlockedField() { return *GetNativePointerField<FCompanionReactionData*>(this, "UUI_HexagonConversion.OpenStoreReactionNewItemUnlocked"); }
	bool& PlayerCanPurchaseCurrentItemField() { return *GetNativePointerField<bool*>(this, "UUI_HexagonConversion.PlayerCanPurchaseCurrentItem"); }
	bool& PurchaseWasMadeField() { return *GetNativePointerField<bool*>(this, "UUI_HexagonConversion.PurchaseWasMade"); }
	bool& DebugTestSaleReactionField() { return *GetNativePointerField<bool*>(this, "UUI_HexagonConversion.DebugTestSaleReaction"); }
	bool& DebugTestChangeReactionField() { return *GetNativePointerField<bool*>(this, "UUI_HexagonConversion.DebugTestChangeReaction"); }
	bool& DebugTestNewReactionField() { return *GetNativePointerField<bool*>(this, "UUI_HexagonConversion.DebugTestNewReaction"); }
	USoundCue * StoreOpenSoundField() { return GetNativePointerField<USoundCue *>(this, "UUI_HexagonConversion.StoreOpenSound"); }
	USoundCue * StoreCloseSoundField() { return GetNativePointerField<USoundCue *>(this, "UUI_HexagonConversion.StoreCloseSound"); }
	int& RequiredQuantityField() { return *GetNativePointerField<int*>(this, "UUI_HexagonConversion.RequiredQuantity"); }
	UHexagonTradableOption * CurrentTradableItemOptionField() { return GetNativePointerField<UHexagonTradableOption *>(this, "UUI_HexagonConversion.CurrentTradableItemOption"); }
	FSlateColor& WeightTextColorField() { return *GetNativePointerField<FSlateColor*>(this, "UUI_HexagonConversion.WeightTextColor"); }
	FSlateColor& OverencumberedTextColorField() { return *GetNativePointerField<FSlateColor*>(this, "UUI_HexagonConversion.OverencumberedTextColor"); }
	int& ItemRowField() { return *GetNativePointerField<int*>(this, "UUI_HexagonConversion.ItemRow"); }
	int& ItemColumnField() { return *GetNativePointerField<int*>(this, "UUI_HexagonConversion.ItemColumn"); }
	int& PreviousHexagonCountField() { return *GetNativePointerField<int*>(this, "UUI_HexagonConversion.PreviousHexagonCount"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_HexagonConversion.AddToViewport"); }
	void AddTradableItem(UHexagonTradableOption * TradableOption, int index, bool IsLastItem) { NativeCall<void, UHexagonTradableOption *, int, bool>(this, "UUI_HexagonConversion.AddTradableItem", TradableOption, index, IsLastItem); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_HexagonConversion.ClickedButton", clickedWidget); }
	void CloseWithAnimation() { NativeCall<void>(this, "UUI_HexagonConversion.CloseWithAnimation"); }
	void EmptyInfo() { NativeCall<void>(this, "UUI_HexagonConversion.EmptyInfo"); }
	void FilterAvailableTradeItems(TArray<bool> AvailableTradableItems, FString FilterText) { NativeCall<void, TArray<bool>, FString>(this, "UUI_HexagonConversion.FilterAvailableTradeItems", AvailableTradableItems, FilterText); }
	int GetCurrentlySelectedTradeItemWidgetIndex() { return NativeCall<int>(this, "UUI_HexagonConversion.GetCurrentlySelectedTradeItemWidgetIndex"); }
	int GetMaxQuantityPlayerCanAfford(UHexagonTradableOption * TradableOption) { return NativeCall<int, UHexagonTradableOption *>(this, "UUI_HexagonConversion.GetMaxQuantityPlayerCanAfford", TradableOption); }
	int GetWidgetIndexOfAssociatedItemIndex(int ItemIndex) { return NativeCall<int, int>(this, "UUI_HexagonConversion.GetWidgetIndexOfAssociatedItemIndex", ItemIndex); }
	void HideItem(int ItemIndex) { NativeCall<void, int>(this, "UUI_HexagonConversion.HideItem", ItemIndex); }
	void OnSearchTextChanged(const FText * Text) { NativeCall<void, const FText *>(this, "UUI_HexagonConversion.OnSearchTextChanged", Text); }
	void PopulateAvailableTradeItems(TArray<bool> AvailableItems) { NativeCall<void, TArray<bool>>(this, "UUI_HexagonConversion.PopulateAvailableTradeItems", AvailableItems); }
	void RefreshCurrentlySelectedItemCost() { NativeCall<void>(this, "UUI_HexagonConversion.RefreshCurrentlySelectedItemCost"); }
	void RefreshItemAvailable(UTradeItemButtonWidget * ItemWidget) { NativeCall<void, UTradeItemButtonWidget *>(this, "UUI_HexagonConversion.RefreshItemAvailable", ItemWidget); }
	void RefreshTradeItemInfo(int TradeItemIndex) { NativeCall<void, int>(this, "UUI_HexagonConversion.RefreshTradeItemInfo", TradeItemIndex); }
	void RefreshTradeItems() { NativeCall<void>(this, "UUI_HexagonConversion.RefreshTradeItems"); }
	void RequiredQuantityChanged() { NativeCall<void>(this, "UUI_HexagonConversion.RequiredQuantityChanged"); }
	void SetHighlightedWidget(UWidget * widget, bool bSetLastHighlightedPosition) { NativeCall<void, UWidget *, bool>(this, "UUI_HexagonConversion.SetHighlightedWidget", widget, bSetLastHighlightedPosition); }
	void SetRequiredQuantity(int Quantity) { NativeCall<void, int>(this, "UUI_HexagonConversion.SetRequiredQuantity", Quantity); }
	void TradableItemSelected(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UUI_HexagonConversion.TradableItemSelected", theWidget); }
	void UpdateItemWidgetOffset(UWidget * Widget) { NativeCall<void, UWidget *>(this, "UUI_HexagonConversion.UpdateItemWidgetOffset", Widget); }
};

