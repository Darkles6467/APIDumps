#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"

struct UStatsPanelWidget : UPrimalUI
{
	char __padding[0x310L];
	FName& MultiUseButton1NameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget.MultiUseButton1Name"); }
	FName& MultiUseButton2NameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget.MultiUseButton2Name"); }
	FName& MultiUseButton3NameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget.MultiUseButton3Name"); }
	FName& MultiUseButton4NameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget.MultiUseButton4Name"); }
	FName& MultiUseButton5NameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget.MultiUseButton5Name"); }
	FName& MultiUseButton6NameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget.MultiUseButton6Name"); }
	FCustomButtonWidgetStyle& DefaultMultiuseButtonExtendedStyleField() { return *GetNativePointerField<FCustomButtonWidgetStyle*>(this, "UStatsPanelWidget.DefaultMultiuseButtonExtendedStyle"); }
	FButtonStyle& DefaultMultiuseButtonStyleField() { return *GetNativePointerField<FButtonStyle*>(this, "UStatsPanelWidget.DefaultMultiuseButtonStyle"); }
	UUI_Inventory * InventoryUIField() { return GetNativePointerField<UUI_Inventory *>(this, "UStatsPanelWidget.InventoryUI"); }
	FString& PanelNameField() { return *GetNativePointerField<FString*>(this, "UStatsPanelWidget.PanelName"); }

	// Functions

	void ClickedButton(UWidget * clickedButton) { NativeCall<void, UWidget *>(this, "UStatsPanelWidget.ClickedButton", clickedButton); }
	FString * GetPanelName(FString * result) { return NativeCall<FString *, FString *>(this, "UStatsPanelWidget.GetPanelName", result); }
	void Init(UUI_Inventory * InInventoryUI) { NativeCall<void, UUI_Inventory *>(this, "UStatsPanelWidget.Init", InInventoryUI); }
	void RefreshStats() { NativeCall<void>(this, "UStatsPanelWidget.RefreshStats"); }
	void SetInventoryComp(UPrimalInventoryComponent * InInventoryComponent) { NativeCall<void, UPrimalInventoryComponent *>(this, "UStatsPanelWidget.SetInventoryComp", InInventoryComponent); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UStatsPanelWidget.Tick_Implementation", MyGeometry, InDeltaTime); }
};

