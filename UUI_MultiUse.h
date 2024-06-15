#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_MultiUse : UPrimalUI
{
	char __padding[0x48L];
	FName& MyScrollBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_MultiUse.MyScrollBoxName"); }
	FName& ActorDescriptionLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_MultiUse.ActorDescriptionLabelName"); }
	TSubclassOf<UDataListEntryWidget>& ButtonEntryWidgetTemplateField() { return *GetNativePointerField<TSubclassOf<UDataListEntryWidget>*>(this, "UUI_MultiUse.ButtonEntryWidgetTemplate"); }
	TArray<UDataListEntryWidget *>& EntryWidgetsField() { return *GetNativePointerField<TArray<UDataListEntryWidget *>*>(this, "UUI_MultiUse.EntryWidgets"); }
	UTextBlock * ActorDescriptionLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_MultiUse.ActorDescriptionLabel"); }
	int& NumMultiUseEntriesField() { return *GetNativePointerField<int*>(this, "UUI_MultiUse.NumMultiUseEntries"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_MultiUse.AddToViewport"); }
	void ClickedEntry(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_MultiUse.ClickedEntry", clickedWidget); }
	void RefreshMultiUseEntries() { NativeCall<void>(this, "UUI_MultiUse.RefreshMultiUseEntries"); }
	void SelectedClose() { NativeCall<void>(this, "UUI_MultiUse.SelectedClose"); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_MultiUse.Tick_Implementation", MyGeometry, InDeltaTime); }
};

