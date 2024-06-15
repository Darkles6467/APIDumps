#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FDragDropEvent.h"

struct UUI_Cooking : UPrimalUI
{
	char __padding[0x158L];
	UCustomButtonWidget * DrinkButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_Cooking.DrinkButton"); }
	UCustomButtonWidget * FoodButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_Cooking.FoodButton"); }
	FieldArray<UCustomButtonWidget *, 6> ColorRegionButtonField() { return {this, "UUI_Cooking.ColorRegionButton"}; }
	TArray<FColor>& PaletteColorsField() { return *GetNativePointerField<TArray<FColor>*>(this, "UUI_Cooking.PaletteColors"); }
	UDataListPanel * MyInventoryDataListField() { return GetNativePointerField<UDataListPanel *>(this, "UUI_Cooking.MyInventoryDataList"); }
	UDataListPanel * IngredientsDataListField() { return GetNativePointerField<UDataListPanel *>(this, "UUI_Cooking.IngredientsDataList"); }
	UImage * ItemIconImageField() { return GetNativePointerField<UImage *>(this, "UUI_Cooking.ItemIconImage"); }
	UMultiLineEditableTextBox * DescriptionEditBoxField() { return GetNativePointerField<UMultiLineEditableTextBox *>(this, "UUI_Cooking.DescriptionEditBox"); }
	USlider * ColorRedSliderField() { return GetNativePointerField<USlider *>(this, "UUI_Cooking.ColorRedSlider"); }
	USlider * ColorGreenSliderField() { return GetNativePointerField<USlider *>(this, "UUI_Cooking.ColorGreenSlider"); }
	USlider * ColorBlueSliderField() { return GetNativePointerField<USlider *>(this, "UUI_Cooking.ColorBlueSlider"); }
	UTextBlock * NoNoteInfoField() { return GetNativePointerField<UTextBlock *>(this, "UUI_Cooking.NoNoteInfo"); }
	UTextBlock * NoWaterInfoField() { return GetNativePointerField<UTextBlock *>(this, "UUI_Cooking.NoWaterInfo"); }
	UTextBlock * RecipeDeniedReasonLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_Cooking.RecipeDeniedReasonLabel"); }
	FString& RecipeDeniedReasonField() { return *GetNativePointerField<FString*>(this, "UUI_Cooking.RecipeDeniedReason"); }
	long double& RecipeDeniedTimeField() { return *GetNativePointerField<long double*>(this, "UUI_Cooking.RecipeDeniedTime"); }
	bool& bPlayedDragSoundField() { return *GetNativePointerField<bool*>(this, "UUI_Cooking.bPlayedDragSound"); }
	bool& bIsFoodRecipeField() { return *GetNativePointerField<bool*>(this, "UUI_Cooking.bIsFoodRecipe"); }
	unsigned int& CurrentTemplateNumberField() { return *GetNativePointerField<unsigned int*>(this, "UUI_Cooking.CurrentTemplateNumber"); }
	unsigned int& CurrentColorRegionField() { return *GetNativePointerField<unsigned int*>(this, "UUI_Cooking.CurrentColorRegion"); }
	FieldArray<FColor, 6> ColorPerRegionField() { return {this, "UUI_Cooking.ColorPerRegion"}; }
	bool& bIsShiftHeldField() { return *GetNativePointerField<bool*>(this, "UUI_Cooking.bIsShiftHeld"); }
	bool& bIsControlHeldField() { return *GetNativePointerField<bool*>(this, "UUI_Cooking.bIsControlHeld"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_Cooking.AddToViewport"); }
	bool CanBeHighlightedForGamePad(UWidget * widget) { return NativeCall<bool, UWidget *>(this, "UUI_Cooking.CanBeHighlightedForGamePad", widget); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_Cooking.ClickedButton", clickedWidget); }
	int GetActualColorRegionIndex(int ColorRegionNumber) { return NativeCall<int, int>(this, "UUI_Cooking.GetActualColorRegionIndex", ColorRegionNumber); }
	bool MakeRecipe() { return NativeCall<bool>(this, "UUI_Cooking.MakeRecipe"); }
	void MyInventoryItemDoubleClicked(UDataListEntryButton * theButton) { NativeCall<void, UDataListEntryButton *>(this, "UUI_Cooking.MyInventoryItemDoubleClicked", theButton); }
	void NotifyInventoryFolderAdded(UPrimalInventoryComponent * inventoryComp, FString CustomFolderName, int InventoryCompType) { NativeCall<void, UPrimalInventoryComponent *, FString, int>(this, "UUI_Cooking.NotifyInventoryFolderAdded", inventoryComp, CustomFolderName, InventoryCompType); }
	void NotifyInventoryPrimalItemAdded(UPrimalInventoryComponent * inventoryComp, UPrimalItem * theItem, bool bEquippedItem) { NativeCall<void, UPrimalInventoryComponent *, UPrimalItem *, bool>(this, "UUI_Cooking.NotifyInventoryPrimalItemAdded", inventoryComp, theItem, bEquippedItem); }
	void NotifyInventoryPrimalItemRemoved(UPrimalInventoryComponent * inventoryComp, UPrimalItem * theItem) { NativeCall<void, UPrimalInventoryComponent *, UPrimalItem *>(this, "UUI_Cooking.NotifyInventoryPrimalItemRemoved", inventoryComp, theItem); }
	void NotifyInventoryPrimalItemSwapped(UPrimalInventoryComponent * inventoryComp, UPrimalItem * Item1, UPrimalItem * Item2) { NativeCall<void, UPrimalInventoryComponent *, UPrimalItem *, UPrimalItem *>(this, "UUI_Cooking.NotifyInventoryPrimalItemSwapped", inventoryComp, Item1, Item2); }
	void OnBlueSliderValueChanged(float SliderValue) { NativeCall<void, float>(this, "UUI_Cooking.OnBlueSliderValueChanged", SliderValue); }
	bool OnDragOverEx(FGeometry MyGeometry, FDragDropEvent DragEvent) { return NativeCall<bool, FGeometry, FDragDropEvent>(this, "UUI_Cooking.OnDragOverEx", MyGeometry, DragEvent); }
	bool OnDropWidgetEx(FGeometry MyGeometry, FDragDropEvent DragEvent) { return NativeCall<bool, FGeometry, FDragDropEvent>(this, "UUI_Cooking.OnDropWidgetEx", MyGeometry, DragEvent); }
	void OnGamepadActiveChanged(bool bIsGamepadActive) { NativeCall<void, bool>(this, "UUI_Cooking.OnGamepadActiveChanged", bIsGamepadActive); }
	void OnGreenSliderValueChanged(float SliderValue) { NativeCall<void, float>(this, "UUI_Cooking.OnGreenSliderValueChanged", SliderValue); }
	void OnItemDescriptionChanged(const FText * Text) { NativeCall<void, const FText *>(this, "UUI_Cooking.OnItemDescriptionChanged", Text); }
	void OnItemNameChanged(const FText * Text) { NativeCall<void, const FText *>(this, "UUI_Cooking.OnItemNameChanged", Text); }
	void OnRedSliderValueChanged(float SliderValue) { NativeCall<void, float>(this, "UUI_Cooking.OnRedSliderValueChanged", SliderValue); }
	void RefreshColorRegionSliders() { NativeCall<void>(this, "UUI_Cooking.RefreshColorRegionSliders"); }
	void RefreshItemColors() { NativeCall<void>(this, "UUI_Cooking.RefreshItemColors"); }
	void RefreshItemLists() { NativeCall<void>(this, "UUI_Cooking.RefreshItemLists"); }
	void RemoveFromViewport() { NativeCall<void>(this, "UUI_Cooking.RemoveFromViewport"); }
	void SetConsoleImageVisibility(bool bIsVisible) { NativeCall<void, bool>(this, "UUI_Cooking.SetConsoleImageVisibility", bIsVisible); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_Cooking.Tick_Implementation", MyGeometry, InDeltaTime); }
};

