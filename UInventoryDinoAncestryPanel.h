#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInventoryDinoAncestryPanel : UPrimalUI
{
	char __padding[0x78L];
	TSubclassOf<UDinoAncestryEntryWidget>& AncestryEntryWidgetTemplateField() { return *GetNativePointerField<TSubclassOf<UDinoAncestryEntryWidget>*>(this, "UInventoryDinoAncestryPanel.AncestryEntryWidgetTemplate"); }
	UUI_Inventory * InventoryUIField() { return GetNativePointerField<UUI_Inventory *>(this, "UInventoryDinoAncestryPanel.InventoryUI"); }
	APrimalDinoCharacter * ActiveDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "UInventoryDinoAncestryPanel.ActiveDino"); }
	UTextBlock * DinoMotherLabelField() { return GetNativePointerField<UTextBlock *>(this, "UInventoryDinoAncestryPanel.DinoMotherLabel"); }
	UTextBlock * DinoFatherLabelField() { return GetNativePointerField<UTextBlock *>(this, "UInventoryDinoAncestryPanel.DinoFatherLabel"); }
	UTextBlock * RandomMutationsFemaleLabelField() { return GetNativePointerField<UTextBlock *>(this, "UInventoryDinoAncestryPanel.RandomMutationsFemaleLabel"); }
	UTextBlock * RandomMutationsMaleLabelField() { return GetNativePointerField<UTextBlock *>(this, "UInventoryDinoAncestryPanel.RandomMutationsMaleLabel"); }
	UTextBlock * DinoSelfLabelField() { return GetNativePointerField<UTextBlock *>(this, "UInventoryDinoAncestryPanel.DinoSelfLabel"); }
	UTextBlock * DinoAncestorsTitleField() { return GetNativePointerField<UTextBlock *>(this, "UInventoryDinoAncestryPanel.DinoAncestorsTitle"); }
	UTextBlock * DinoAncestorsMaleTitleField() { return GetNativePointerField<UTextBlock *>(this, "UInventoryDinoAncestryPanel.DinoAncestorsMaleTitle"); }
	bool& bRefreshDinoAncestorsField() { return *GetNativePointerField<bool*>(this, "UInventoryDinoAncestryPanel.bRefreshDinoAncestors"); }

	// Functions

	void ClickedButton(UWidget * clickedButton) { NativeCall<void, UWidget *>(this, "UInventoryDinoAncestryPanel.ClickedButton", clickedButton); }
	void EscapeClosed() { NativeCall<void>(this, "UInventoryDinoAncestryPanel.EscapeClosed"); }
	void HighlightCloseButton() { NativeCall<void>(this, "UInventoryDinoAncestryPanel.HighlightCloseButton"); }
	void Init(UUI_Inventory * InInventory) { NativeCall<void, UUI_Inventory *>(this, "UInventoryDinoAncestryPanel.Init", InInventory); }
	void RefreshAncestry(APrimalDinoCharacter * InDino) { NativeCall<void, APrimalDinoCharacter *>(this, "UInventoryDinoAncestryPanel.RefreshAncestry", InDino); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UInventoryDinoAncestryPanel.Tick_Implementation", MyGeometry, InDeltaTime); }
	void UpdateAncestry() { NativeCall<void>(this, "UInventoryDinoAncestryPanel.UpdateAncestry"); }
};

