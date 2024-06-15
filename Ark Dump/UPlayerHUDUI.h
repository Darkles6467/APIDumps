#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FHUDRichTextOverlayData.h"

struct UPlayerHUDUI : UPrimalUI
{
	char __padding[0x170L];
	FString& SlotItemsDataListNameField() { return *GetNativePointerField<FString*>(this, "UPlayerHUDUI.SlotItemsDataListName"); }
	FName& PrimaryStatusBarsWidgetNameField() { return *GetNativePointerField<FName*>(this, "UPlayerHUDUI.PrimaryStatusBarsWidgetName"); }
	FName& SecondaryStatusBarsWidgetNameField() { return *GetNativePointerField<FName*>(this, "UPlayerHUDUI.SecondaryStatusBarsWidgetName"); }
	FName& CraftQueueItemButtonNameField() { return *GetNativePointerField<FName*>(this, "UPlayerHUDUI.CraftQueueItemButtonName"); }
	FName& ExtraProgressBarNameField() { return *GetNativePointerField<FName*>(this, "UPlayerHUDUI.ExtraProgressBarName"); }
	FString& SlotItemsDataListParentPanelNameField() { return *GetNativePointerField<FString*>(this, "UPlayerHUDUI.SlotItemsDataListParentPanelName"); }
	FName& CompassBarWidgetNameField() { return *GetNativePointerField<FName*>(this, "UPlayerHUDUI.CompassBarWidgetName"); }
	FName& ElementBarWidgetNameField() { return *GetNativePointerField<FName*>(this, "UPlayerHUDUI.ElementBarWidgetName"); }
	TArray<FHUDRichTextOverlayData>& RichTextOverlayDataField() { return *GetNativePointerField<TArray<FHUDRichTextOverlayData>*>(this, "UPlayerHUDUI.RichTextOverlayData"); }
	TArray<UPrimalRichTextBlock *>& RichTextBlocksField() { return *GetNativePointerField<TArray<UPrimalRichTextBlock *>*>(this, "UPlayerHUDUI.RichTextBlocks"); }
	UDataListPanel * SlotItemsDataListField() { return GetNativePointerField<UDataListPanel *>(this, "UPlayerHUDUI.SlotItemsDataList"); }
	UDataListEntryWidget * CraftQueueItemButtonField() { return GetNativePointerField<UDataListEntryWidget *>(this, "UPlayerHUDUI.CraftQueueItemButton"); }
	UTextBlock * CurrentTimeLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPlayerHUDUI.CurrentTimeLabel"); }
	UTextBlock * CurrentDayLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPlayerHUDUI.CurrentDayLabel"); }
	UTextBlock * CurrentTemperatureLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPlayerHUDUI.CurrentTemperatureLabel"); }
	UTextBlock * PlayerNameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPlayerHUDUI.PlayerNameLabel"); }
	UTextBlock * CurrentUploadTimerLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPlayerHUDUI.CurrentUploadTimerLabel"); }
	UTextBlock * CurrentLocationLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPlayerHUDUI.CurrentLocationLabel"); }
	UTextBlock * OrderingGroupLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPlayerHUDUI.OrderingGroupLabel"); }
	UTextBlock * StructureDamageMultLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPlayerHUDUI.StructureDamageMultLabel"); }
	UCanvasPanel * SlotItemParentPanelField() { return GetNativePointerField<UCanvasPanel *>(this, "UPlayerHUDUI.SlotItemParentPanel"); }
	UCanvasPanel * GamepadQuickbarButtonsField() { return GetNativePointerField<UCanvasPanel *>(this, "UPlayerHUDUI.GamepadQuickbarButtons"); }
	UCanvasPanel * RightSideTopAnchorField() { return GetNativePointerField<UCanvasPanel *>(this, "UPlayerHUDUI.RightSideTopAnchor"); }
	UCanvasPanel * RightSideTopAnchorMarkerField() { return GetNativePointerField<UCanvasPanel *>(this, "UPlayerHUDUI.RightSideTopAnchorMarker"); }
	UCanvasPanel * RightSideBottomAnchorField() { return GetNativePointerField<UCanvasPanel *>(this, "UPlayerHUDUI.RightSideBottomAnchor"); }
	UCanvasPanel * RightSideBottomAnchorMarkerField() { return GetNativePointerField<UCanvasPanel *>(this, "UPlayerHUDUI.RightSideBottomAnchorMarker"); }
	UCanvasPanel * LeftSideAnchorField() { return GetNativePointerField<UCanvasPanel *>(this, "UPlayerHUDUI.LeftSideAnchor"); }
	UCanvasPanel * LeftSideAnchorMarkerField() { return GetNativePointerField<UCanvasPanel *>(this, "UPlayerHUDUI.LeftSideAnchorMarker"); }
	UCanvasPanel * TextOverlayContainerField() { return GetNativePointerField<UCanvasPanel *>(this, "UPlayerHUDUI.TextOverlayContainer"); }
	UProgressBarWidget * ExtraProgressBarField() { return GetNativePointerField<UProgressBarWidget *>(this, "UPlayerHUDUI.ExtraProgressBar"); }
	bool& bHubVisibleField() { return *GetNativePointerField<bool*>(this, "UPlayerHUDUI.bHubVisible"); }
	bool& bGamepadAltActiveField() { return *GetNativePointerField<bool*>(this, "UPlayerHUDUI.bGamepadAltActive"); }
	UUI_Compass * CompassBarWidgetField() { return GetNativePointerField<UUI_Compass *>(this, "UPlayerHUDUI.CompassBarWidget"); }
	UHUDStatusBarsWidget * PrimaryStatusBarsWidgetField() { return GetNativePointerField<UHUDStatusBarsWidget *>(this, "UPlayerHUDUI.PrimaryStatusBarsWidget"); }
	UHUDStatusBarsWidget * SecondaryStatusBarsWidgetField() { return GetNativePointerField<UHUDStatusBarsWidget *>(this, "UPlayerHUDUI.SecondaryStatusBarsWidget"); }
	UHUDElementBarWidget * ElementBarWidgetField() { return GetNativePointerField<UHUDElementBarWidget *>(this, "UPlayerHUDUI.ElementBarWidget"); }
	float& CurrentUIScalingField() { return *GetNativePointerField<float*>(this, "UPlayerHUDUI.CurrentUIScaling"); }
	float& CurrentUIQuickbarScalingField() { return *GetNativePointerField<float*>(this, "UPlayerHUDUI.CurrentUIQuickbarScaling"); }
	int& ConfirmationDialogTypeField() { return *GetNativePointerField<int*>(this, "UPlayerHUDUI.ConfirmationDialogType"); }

	// Functions

	void AddHUDRichTextOverlay(const FHUDRichTextOverlayData * InOverlay) { NativeCall<void, const FHUDRichTextOverlayData *>(this, "UPlayerHUDUI.AddHUDRichTextOverlay", InOverlay); }
	void AddHUDRichTextOverlayAtIndex(const FHUDRichTextOverlayData * InOverlay, const int InsertAtIndex) { NativeCall<void, const FHUDRichTextOverlayData *, const int>(this, "UPlayerHUDUI.AddHUDRichTextOverlayAtIndex", InOverlay, InsertAtIndex); }
	void AddToViewport() { NativeCall<void>(this, "UPlayerHUDUI.AddToViewport"); }
	void ConfirmationDialogAccepted() { NativeCall<void>(this, "UPlayerHUDUI.ConfirmationDialogAccepted"); }
	void ForceRefreshSlots() { NativeCall<void>(this, "UPlayerHUDUI.ForceRefreshSlots"); }
	TArray<FHUDRichTextOverlayData> * GetHUDRichTextOverlays(TArray<FHUDRichTextOverlayData> * result) { return NativeCall<TArray<FHUDRichTextOverlayData> *, TArray<FHUDRichTextOverlayData> *>(this, "UPlayerHUDUI.GetHUDRichTextOverlays", result); }
	void HideExtraProgressBar() { NativeCall<void>(this, "UPlayerHUDUI.HideExtraProgressBar"); }
	void InitializeWidgets() { NativeCall<void>(this, "UPlayerHUDUI.InitializeWidgets"); }
	void NotifyHubCreated() { NativeCall<void>(this, "UPlayerHUDUI.NotifyHubCreated"); }
	void NotifyHubDestroyed() { NativeCall<void>(this, "UPlayerHUDUI.NotifyHubDestroyed"); }
	void OnGamepadActiveChanged(bool bIsGamepadActive) { NativeCall<void, bool>(this, "UPlayerHUDUI.OnGamepadActiveChanged", bIsGamepadActive); }
	void ProcessSplitscreenScaling(bool ScaleX) { NativeCall<void, bool>(this, "UPlayerHUDUI.ProcessSplitscreenScaling", ScaleX); }
	void RemoveAllHUDRichTextOverlays() { NativeCall<void>(this, "UPlayerHUDUI.RemoveAllHUDRichTextOverlays"); }
	void RemoveHUDRichTextOverlay(const FHUDRichTextOverlayData * InOverlay) { NativeCall<void, const FHUDRichTextOverlayData *>(this, "UPlayerHUDUI.RemoveHUDRichTextOverlay", InOverlay); }
	void RemoveHUDRichTextOverlayAtIndex(int Index) { NativeCall<void, int>(this, "UPlayerHUDUI.RemoveHUDRichTextOverlayAtIndex", Index); }
	void RemoveHUDRichTextOverlaysByInstigator(AActor * Instigator) { NativeCall<void, AActor *>(this, "UPlayerHUDUI.RemoveHUDRichTextOverlaysByInstigator", Instigator); }
	void ShowBeforeUsingConfirmationDialog(UPrimalItem * Item) { NativeCall<void, UPrimalItem *>(this, "UPlayerHUDUI.ShowBeforeUsingConfirmationDialog", Item); }
	void ShowExtraProgressBar(UTexture2D * ProgressBarBackground, UTexture2D * ProgressBarForeground) { NativeCall<void, UTexture2D *, UTexture2D *>(this, "UPlayerHUDUI.ShowExtraProgressBar", ProgressBarBackground, ProgressBarForeground); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UPlayerHUDUI.Tick_Implementation", MyGeometry, InDeltaTime); }
	void UpdateAllHUDRichTextOverlays(const TArray<FHUDRichTextOverlayData> * InOverlayData) { NativeCall<void, const TArray<FHUDRichTextOverlayData> *>(this, "UPlayerHUDUI.UpdateAllHUDRichTextOverlays", InOverlayData); }
	void UpdateExtraProgressBar(float ProgressPercent, FString Text) { NativeCall<void, float, FString>(this, "UPlayerHUDUI.UpdateExtraProgressBar", ProgressPercent, Text); }
	void UpdateHUDRichTextOverlay(const FHUDRichTextOverlayData * InOverlay) { NativeCall<void, const FHUDRichTextOverlayData *>(this, "UPlayerHUDUI.UpdateHUDRichTextOverlay", InOverlay); }
	void UpdateHUDRichTextOverlayAtIndex(const FHUDRichTextOverlayData * InOverlay, const int Index) { NativeCall<void, const FHUDRichTextOverlayData *, const int>(this, "UPlayerHUDUI.UpdateHUDRichTextOverlayAtIndex", InOverlay, Index); }
	void UpdateHUDRichTextOverlaysByInstigator(AActor * Instigator) { NativeCall<void, AActor *>(this, "UPlayerHUDUI.UpdateHUDRichTextOverlaysByInstigator", Instigator); }
	void UpdateItemSlotVisibility() { NativeCall<void>(this, "UPlayerHUDUI.UpdateItemSlotVisibility"); }
	void UpdateQuickBarScaling() { NativeCall<void>(this, "UPlayerHUDUI.UpdateQuickBarScaling"); }
};

