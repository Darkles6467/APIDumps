#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDataListEntryEngramList : UPrimalUI
{
	char __padding[0xb8L];
	TSubclassOf<UDataListEntryWidget>& EntryWidgetTemplateField() { return *GetNativePointerField<TSubclassOf<UDataListEntryWidget>*>(this, "UDataListEntryEngramList.EntryWidgetTemplate"); }
	FName& DataPanelNameField() { return *GetNativePointerField<FName*>(this, "UDataListEntryEngramList.DataPanelName"); }
	FName& LevelLabelNameField() { return *GetNativePointerField<FName*>(this, "UDataListEntryEngramList.LevelLabelName"); }
	FName& LevelEnabledEffectNameField() { return *GetNativePointerField<FName*>(this, "UDataListEntryEngramList.LevelEnabledEffectName"); }
	FName& ElementIconNameField() { return *GetNativePointerField<FName*>(this, "UDataListEntryEngramList.ElementIconName"); }
	FName& EngramRowStartNameField() { return *GetNativePointerField<FName*>(this, "UDataListEntryEngramList.EngramRowStartName"); }
	FName& EngramRowMiddleNameField() { return *GetNativePointerField<FName*>(this, "UDataListEntryEngramList.EngramRowMiddleName"); }
	FName& EngramRowEndNameField() { return *GetNativePointerField<FName*>(this, "UDataListEntryEngramList.EngramRowEndName"); }
	FLinearColor& SwitcherTextActiveColorField() { return *GetNativePointerField<FLinearColor*>(this, "UDataListEntryEngramList.SwitcherTextActiveColor"); }
	FLinearColor& SwitcherTextInactiveColorField() { return *GetNativePointerField<FLinearColor*>(this, "UDataListEntryEngramList.SwitcherTextInactiveColor"); }
	int& WidgetLimitField() { return *GetNativePointerField<int*>(this, "UDataListEntryEngramList.WidgetLimit"); }
	int& EngramLevelField() { return *GetNativePointerField<int*>(this, "UDataListEntryEngramList.EngramLevel"); }
	int& EntryCountField() { return *GetNativePointerField<int*>(this, "UDataListEntryEngramList.EntryCount"); }
	bool& bIsTekField() { return *GetNativePointerField<bool*>(this, "UDataListEntryEngramList.bIsTek"); }
	UTextBlock * LevelLabelField() { return GetNativePointerField<UTextBlock *>(this, "UDataListEntryEngramList.LevelLabel"); }
	UHorizontalBox * DataPanelField() { return GetNativePointerField<UHorizontalBox *>(this, "UDataListEntryEngramList.DataPanel"); }
	TArray<UDataListEntryWidget *>& DataListEntriesField() { return *GetNativePointerField<TArray<UDataListEntryWidget *>*>(this, "UDataListEntryEngramList.DataListEntries"); }
	UImage * ElementIconField() { return GetNativePointerField<UImage *>(this, "UDataListEntryEngramList.ElementIcon"); }
	UImage * EngramRowStartField() { return GetNativePointerField<UImage *>(this, "UDataListEntryEngramList.EngramRowStart"); }
	UImage * EngramRowMiddleField() { return GetNativePointerField<UImage *>(this, "UDataListEntryEngramList.EngramRowMiddle"); }
	UImage * EngramRowEndField() { return GetNativePointerField<UImage *>(this, "UDataListEntryEngramList.EngramRowEnd"); }

	// Functions

	void AddEntry(UDataListEntryWidget * DataEntry) { NativeCall<void, UDataListEntryWidget *>(this, "UDataListEntryEngramList.AddEntry", DataEntry); }
	int GetEngramLevel() { return NativeCall<int>(this, "UDataListEntryEngramList.GetEngramLevel"); }
	void InitializeMe(bool bCanExpire) { NativeCall<void, bool>(this, "UDataListEntryEngramList.InitializeMe", bCanExpire); }
	bool IsFull() { return NativeCall<bool>(this, "UDataListEntryEngramList.IsFull"); }
	void RemoveEntries() { NativeCall<void>(this, "UDataListEntryEngramList.RemoveEntries"); }
	void SetEndRow() { NativeCall<void>(this, "UDataListEntryEngramList.SetEndRow"); }
	void SetEngramLevel(int Level) { NativeCall<void, int>(this, "UDataListEntryEngramList.SetEngramLevel", Level); }
	void SetIsTekRow(bool bIsTekRow) { NativeCall<void, bool>(this, "UDataListEntryEngramList.SetIsTekRow", bIsTekRow); }
	void SetLevelLabelActive(bool bIsActive) { NativeCall<void, bool>(this, "UDataListEntryEngramList.SetLevelLabelActive", bIsActive); }
	void SetMiddleRow() { NativeCall<void>(this, "UDataListEntryEngramList.SetMiddleRow"); }
	void SetStartRow() { NativeCall<void>(this, "UDataListEntryEngramList.SetStartRow"); }
};

