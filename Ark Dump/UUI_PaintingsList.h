#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_PaintingsList : UPrimalUI
{
	char __padding[0x180L];
	FName& PaintingListNameField() { return *GetNativePointerField<FName*>(this, "UUI_PaintingsList.PaintingListName"); }
	FName& SelectButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_PaintingsList.SelectButtonName"); }
	FName& CloseButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_PaintingsList.CloseButtonName"); }
	FName& FailCloseButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_PaintingsList.FailCloseButtonName"); }
	FName& LoadingLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_PaintingsList.LoadingLabelName"); }
	FName& LoadingCanvasNameField() { return *GetNativePointerField<FName*>(this, "UUI_PaintingsList.LoadingCanvasName"); }
	FName& MissingTextNameField() { return *GetNativePointerField<FName*>(this, "UUI_PaintingsList.MissingTextName"); }
	FName& NeededTextNameField() { return *GetNativePointerField<FName*>(this, "UUI_PaintingsList.NeededTextName"); }
	FName& RenamePaintingNameField() { return *GetNativePointerField<FName*>(this, "UUI_PaintingsList.RenamePaintingName"); }
	TSubclassOf<UDataListEntryWidget>& SlotButtonTemplateField() { return *GetNativePointerField<TSubclassOf<UDataListEntryWidget>*>(this, "UUI_PaintingsList.SlotButtonTemplate"); }
	FString& FolderPathField() { return *GetNativePointerField<FString*>(this, "UUI_PaintingsList.FolderPath"); }
	FString& PaintingTypeField() { return *GetNativePointerField<FString*>(this, "UUI_PaintingsList.PaintingType"); }
	FString& CurrentFilePathField() { return *GetNativePointerField<FString*>(this, "UUI_PaintingsList.CurrentFilePath"); }
	TArray<UDataListEntryWidget *>& EntryWidgetsField() { return *GetNativePointerField<TArray<UDataListEntryWidget *>*>(this, "UUI_PaintingsList.EntryWidgets"); }
	int& SelectedIndexField() { return *GetNativePointerField<int*>(this, "UUI_PaintingsList.SelectedIndex"); }
	UTextBlock * MissingBoxField() { return GetNativePointerField<UTextBlock *>(this, "UUI_PaintingsList.MissingBox"); }
	UTextBlock * NeededBoxField() { return GetNativePointerField<UTextBlock *>(this, "UUI_PaintingsList.NeededBox"); }
	UTextBlock * LoadingLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_PaintingsList.LoadingLabel"); }
	UCanvasPanel * LoadingPanelField() { return GetNativePointerField<UCanvasPanel *>(this, "UUI_PaintingsList.LoadingPanel"); }
	bool& bPaintingFailedField() { return *GetNativePointerField<bool*>(this, "UUI_PaintingsList.bPaintingFailed"); }
	UPaintingTexture * PreviewField() { return GetNativePointerField<UPaintingTexture *>(this, "UUI_PaintingsList.Preview"); }
	TArray<FColor>& ColorTableField() { return *GetNativePointerField<TArray<FColor>*>(this, "UUI_PaintingsList.ColorTable"); }
	bool& MultiplicativeBlendingField() { return *GetNativePointerField<bool*>(this, "UUI_PaintingsList.MultiplicativeBlending"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_PaintingsList.AddToViewport"); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_PaintingsList.ClickedButton", clickedWidget); }
	void ConfirmationDialogAccepted() { NativeCall<void>(this, "UUI_PaintingsList.ConfirmationDialogAccepted"); }
	void DeletePaintingAtIndex(int PaintingIndex) { NativeCall<void, int>(this, "UUI_PaintingsList.DeletePaintingAtIndex", PaintingIndex); }
	void LoadPaintingFiles() { NativeCall<void>(this, "UUI_PaintingsList.LoadPaintingFiles"); }
	void PaintTemplate() { NativeCall<void>(this, "UUI_PaintingsList.PaintTemplate"); }
	void PaintingFailed() { NativeCall<void>(this, "UUI_PaintingsList.PaintingFailed"); }
	bool RenamePainting(FString NewName) { return NativeCall<bool, FString>(this, "UUI_PaintingsList.RenamePainting", NewName); }
	void SlotButtonSelected(UDataListEntryWidget * theWidget) { NativeCall<void, UDataListEntryWidget *>(this, "UUI_PaintingsList.SlotButtonSelected", theWidget); }
	void UpdatePreview(const TMap<int,FSaveLoadDyePaintingItem,FDefaultSetAllocator,TDefaultMapKeyFuncs<int,FSaveLoadDyePaintingItem,0> > * PixelData) { NativeCall<void, const TMap<int,FSaveLoadDyePaintingItem,FDefaultSetAllocator,TDefaultMapKeyFuncs<int,FSaveLoadDyePaintingItem,0> > *>(this, "UUI_PaintingsList.UpdatePreview", PixelData); }
};

