#pragma once

#include "BaseDeclarations.h"
#include "UPanelWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UScrollBox : UPanelWidget
{
	char __padding[0x4a0L];
	FScrollBoxStyle& WidgetStyleField() { return *GetNativePointerField<FScrollBoxStyle*>(this, "UScrollBox.WidgetStyle"); }
	FScrollBarStyle& WidgetBarStyleField() { return *GetNativePointerField<FScrollBarStyle*>(this, "UScrollBox.WidgetBarStyle"); }
	USlateWidgetStyleAsset * Style_DEPRECATEDField() { return GetNativePointerField<USlateWidgetStyleAsset *>(this, "UScrollBox.Style_DEPRECATED"); }
	USlateWidgetStyleAsset * BarStyle_DEPRECATEDField() { return GetNativePointerField<USlateWidgetStyleAsset *>(this, "UScrollBox.BarStyle_DEPRECATED"); }
	TEnumAsByte<enum EOrientation>& OrientationField() { return *GetNativePointerField<TEnumAsByte<enum EOrientation>*>(this, "UScrollBox.Orientation"); }
	int& NumPreviewWidgetsField() { return *GetNativePointerField<int*>(this, "UScrollBox.NumPreviewWidgets"); }
	int& NumWidgetsBeforeWrappingField() { return *GetNativePointerField<int*>(this, "UScrollBox.NumWidgetsBeforeWrapping"); }
	FVector2D& WidgetSizeField() { return *GetNativePointerField<FVector2D*>(this, "UScrollBox.WidgetSize"); }
	FVector2D& WidgetPaddingField() { return *GetNativePointerField<FVector2D*>(this, "UScrollBox.WidgetPadding"); }
	TEnumAsByte<enum EHorizontalAlignment>& WidgetHorizontalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EHorizontalAlignment>*>(this, "UScrollBox.WidgetHorizontalAlignment"); }
	TEnumAsByte<enum EVerticalAlignment>& WidgetVerticalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EVerticalAlignment>*>(this, "UScrollBox.WidgetVerticalAlignment"); }
	bool& UseWidgetPaddingAsMarginField() { return *GetNativePointerField<bool*>(this, "UScrollBox.UseWidgetPaddingAsMargin"); }
	FMargin& WidgetMarginField() { return *GetNativePointerField<FMargin*>(this, "UScrollBox.WidgetMargin"); }
	bool& bGamepadMovementMovesScrollBoxField() { return *GetNativePointerField<bool*>(this, "UScrollBox.bGamepadMovementMovesScrollBox"); }
	bool& bPrimalAllowRightSpecialStickScrollField() { return *GetNativePointerField<bool*>(this, "UScrollBox.bPrimalAllowRightSpecialStickScroll"); }
	float& DesiredScrollOffsetField() { return *GetNativePointerField<float*>(this, "UScrollBox.DesiredScrollOffset"); }
	TSharedPtr<SScrollBox,0>& MyScrollBoxField() { return *GetNativePointerField<TSharedPtr<SScrollBox,0>*>(this, "UScrollBox.MyScrollBox"); }

	// Functions

	FVector2D * GetScrollContentSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "UScrollBox.GetScrollContentSize", result); }
	float GetScrollMax() { return NativeCall<float>(this, "UScrollBox.GetScrollMax"); }
	float GetScrollOffset() { return NativeCall<float>(this, "UScrollBox.GetScrollOffset"); }
	int GetVisibleChildrenCount() { return NativeCall<int>(this, "UScrollBox.GetVisibleChildrenCount"); }
	int GetVisibleChildrenOffset() { return NativeCall<int>(this, "UScrollBox.GetVisibleChildrenOffset"); }
	void OnSlotAdded(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UScrollBox.OnSlotAdded", Slot); }
	void OnSlotRemoved(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UScrollBox.OnSlotRemoved", Slot); }
	void PostLoad() { NativeCall<void>(this, "UScrollBox.PostLoad"); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UScrollBox.ReleaseSlateResources", bReleaseChildren); }
	void ScrollBy(float NewScrollAmount) { NativeCall<void, float>(this, "UScrollBox.ScrollBy", NewScrollAmount); }
	void SetScrollOffset(float NewScrollOffset) { NativeCall<void, float>(this, "UScrollBox.SetScrollOffset", NewScrollOffset); }
	void SynchronizeProperties() { NativeCall<void>(this, "UScrollBox.SynchronizeProperties"); }
};

struct UDataListPanel : UScrollBox
{
	char __padding[0x1a8L];
	TSubclassOf<UDataListEntryWidget>& EntryWidgetTemplateField() { return *GetNativePointerField<TSubclassOf<UDataListEntryWidget>*>(this, "UDataListPanel.EntryWidgetTemplate"); }
	TSubclassOf<UDataListEntryEngramList>& EntryListTemplateField() { return *GetNativePointerField<TSubclassOf<UDataListEntryEngramList>*>(this, "UDataListPanel.EntryListTemplate"); }
	TSubclassOf<UDataListEntryWidget>& NullEntryWidgetTemplateField() { return *GetNativePointerField<TSubclassOf<UDataListEntryWidget>*>(this, "UDataListPanel.NullEntryWidgetTemplate"); }
	TSubclassOf<UDataListEntryWidget>& PaddingEntryWidgetTemplateField() { return *GetNativePointerField<TSubclassOf<UDataListEntryWidget>*>(this, "UDataListPanel.PaddingEntryWidgetTemplate"); }
	TSubclassOf<UDataListEntryWidget>& FolderWidgetTemplateField() { return *GetNativePointerField<TSubclassOf<UDataListEntryWidget>*>(this, "UDataListPanel.FolderWidgetTemplate"); }
	TSubclassOf<UDataListEntryWidget>& GenericWidgetTemplateField() { return *GetNativePointerField<TSubclassOf<UDataListEntryWidget>*>(this, "UDataListPanel.GenericWidgetTemplate"); }
	TArray<FString>& CustomFoldersField() { return *GetNativePointerField<TArray<FString>*>(this, "UDataListPanel.CustomFolders"); }
	FColor& FolderColorField() { return *GetNativePointerField<FColor*>(this, "UDataListPanel.FolderColor"); }
	FColor& BackFolderColorField() { return *GetNativePointerField<FColor*>(this, "UDataListPanel.BackFolderColor"); }
	FColor& CustomFolderColorField() { return *GetNativePointerField<FColor*>(this, "UDataListPanel.CustomFolderColor"); }
	bool& bBringHoveredItemsToTopField() { return *GetNativePointerField<bool*>(this, "UDataListPanel.bBringHoveredItemsToTop"); }
	bool& bEnableSupportCustomFoldersField() { return *GetNativePointerField<bool*>(this, "UDataListPanel.bEnableSupportCustomFolders"); }
	bool& bForceDraggingField() { return *GetNativePointerField<bool*>(this, "UDataListPanel.bForceDragging"); }
	bool& bForceEntryDisplayStringField() { return *GetNativePointerField<bool*>(this, "UDataListPanel.bForceEntryDisplayString"); }
	bool& bForceEntryClickWhenNoDataField() { return *GetNativePointerField<bool*>(this, "UDataListPanel.bForceEntryClickWhenNoData"); }
	bool& bUseExistingButtonsField() { return *GetNativePointerField<bool*>(this, "UDataListPanel.bUseExistingButtons"); }
	bool& bUseExistingButtonExplicitEntryIndexTypeMappingField() { return *GetNativePointerField<bool*>(this, "UDataListPanel.bUseExistingButtonExplicitEntryIndexTypeMapping"); }
	bool& bSelectEntriesOnHighlightField() { return *GetNativePointerField<bool*>(this, "UDataListPanel.bSelectEntriesOnHighlight"); }
	int& MinimalItemCountField() { return *GetNativePointerField<int*>(this, "UDataListPanel.MinimalItemCount"); }
	bool& bSupplyAdjacentsToChildrenField() { return *GetNativePointerField<bool*>(this, "UDataListPanel.bSupplyAdjacentsToChildren"); }
	bool& bCanBeSelectedWhenEmptyField() { return *GetNativePointerField<bool*>(this, "UDataListPanel.bCanBeSelectedWhenEmpty"); }
	int& FilledRowsBeforeEnablingScrollingField() { return *GetNativePointerField<int*>(this, "UDataListPanel.FilledRowsBeforeEnablingScrolling"); }
	TArray<UDataListEntryWidget *>& EntryWidgetsField() { return *GetNativePointerField<TArray<UDataListEntryWidget *>*>(this, "UDataListPanel.EntryWidgets"); }
	TArray<UDataListEntryEngramList *>& ListWidgetsField() { return *GetNativePointerField<TArray<UDataListEntryEngramList *>*>(this, "UDataListPanel.ListWidgets"); }
	TArray<IDataListEntryInterface *>& RawDataListEntriesField() { return *GetNativePointerField<TArray<IDataListEntryInterface *>*>(this, "UDataListPanel.RawDataListEntries"); }
	bool& bCreateFoldersField() { return *GetNativePointerField<bool*>(this, "UDataListPanel.bCreateFolders"); }
	char& FolderLevelField() { return *GetNativePointerField<char*>(this, "UDataListPanel.FolderLevel"); }
	FString& CustomFolderFilterField() { return *GetNativePointerField<FString*>(this, "UDataListPanel.CustomFolderFilter"); }
	char& SortTypeField() { return *GetNativePointerField<char*>(this, "UDataListPanel.SortType"); }
	FString& NameFilterField() { return *GetNativePointerField<FString*>(this, "UDataListPanel.NameFilter"); }
	IDataListProviderInterface * MyDataListProviderInterfaceField() { return GetNativePointerField<IDataListProviderInterface *>(this, "UDataListPanel.MyDataListProviderInterface"); }
	TArray<IDataListEntryInterface *>& LastDataEntriesField() { return *GetNativePointerField<TArray<IDataListEntryInterface *>*>(this, "UDataListPanel.LastDataEntries"); }
	int& MyDataListTypeField() { return *GetNativePointerField<int*>(this, "UDataListPanel.MyDataListType"); }
	TArray<UDataListEntryWidget *>& CurrentCustomFoldersField() { return *GetNativePointerField<TArray<UDataListEntryWidget *>*>(this, "UDataListPanel.CurrentCustomFolders"); }
	UDataListEntryWidget * BackWidgetField() { return GetNativePointerField<UDataListEntryWidget *>(this, "UDataListPanel.BackWidget"); }
	TArray<int>& ListWidgetOffsetsField() { return *GetNativePointerField<TArray<int>*>(this, "UDataListPanel.ListWidgetOffsets"); }
	bool& bMinimalRefreshModeField() { return *GetNativePointerField<bool*>(this, "UDataListPanel.bMinimalRefreshMode"); }
	bool& bPendingNormalRefreshField() { return *GetNativePointerField<bool*>(this, "UDataListPanel.bPendingNormalRefresh"); }
	int& SelectedEntryWidgetField() { return *GetNativePointerField<int*>(this, "UDataListPanel.SelectedEntryWidget"); }

	// Functions

	UDataListEntryWidget * CreateDataListEntryWidget(UWorld * World, IDataListEntryInterface * ForEntry) { return NativeCall<UDataListEntryWidget *, UWorld *, IDataListEntryInterface *>(this, "UDataListPanel.CreateDataListEntryWidget", World, ForEntry); }
	void DeleteItem(UDataListEntryButton * item) { NativeCall<void, UDataListEntryButton *>(this, "UDataListPanel.DeleteItem", item); }
	void DeleteItemPrimalFolder(UDataListEntryButton_PrimalFolder * item) { NativeCall<void, UDataListEntryButton_PrimalFolder *>(this, "UDataListPanel.DeleteItemPrimalFolder", item); }
	void DeleteItemPrimalItem(UDataListEntryButton_PrimalItem * item) { NativeCall<void, UDataListEntryButton_PrimalItem *>(this, "UDataListPanel.DeleteItemPrimalItem", item); }
	void DoubleClickedEntryButton(UDataListEntryButton * theButton) { NativeCall<void, UDataListEntryButton *>(this, "UDataListPanel.DoubleClickedEntryButton", theButton); }
	UDataListEntryEngramList * GetEngramListByLevel(int ListLevel) { return NativeCall<UDataListEntryEngramList *, int>(this, "UDataListPanel.GetEngramListByLevel", ListLevel); }
	int GetItemsInSubfolder(const FString * FolderName, TArray<UPrimalItem *> * OutItems) { return NativeCall<int, const FString *, TArray<UPrimalItem *> *>(this, "UDataListPanel.GetItemsInSubfolder", FolderName, OutItems); }
	void GetRawDataListEntries(TArray<IDataListEntryInterface *> * OutDataListEntries) { NativeCall<void, TArray<IDataListEntryInterface *> *>(this, "UDataListPanel.GetRawDataListEntries", OutDataListEntries); }
	UDataListEntryWidget * GetSelectedEntryWidget() { return NativeCall<UDataListEntryWidget *>(this, "UDataListPanel.GetSelectedEntryWidget"); }
	int GetSelectedIndex() { return NativeCall<int>(this, "UDataListPanel.GetSelectedIndex"); }
	UDataListEntryWidget * GetWidgetForObject(UObject * EntryObject) { return NativeCall<UDataListEntryWidget *, UObject *>(this, "UDataListPanel.GetWidgetForObject", EntryObject); }
	void GoBackFolder() { NativeCall<void>(this, "UDataListPanel.GoBackFolder"); }
	void GoToRoot() { NativeCall<void>(this, "UDataListPanel.GoToRoot"); }
	void InitializeMe(UPrimalUI * forScene) { NativeCall<void, UPrimalUI *>(this, "UDataListPanel.InitializeMe", forScene); }
	void InternalMinimalRefresh(IDataListProviderInterface * ProviderInterface, int DataListType, bool bRestorePreviousSelection, bool bAutoSelectFirstEntry, IDataListEntryInterface * ForceSelectEntry, bool bDontUpdateIfSameArrayData, bool bDontSelectEntries, UObject * ForObject) { NativeCall<void, IDataListProviderInterface *, int, bool, bool, IDataListEntryInterface *, bool, bool, UObject *>(this, "UDataListPanel.InternalMinimalRefresh", ProviderInterface, DataListType, bRestorePreviousSelection, bAutoSelectFirstEntry, ForceSelectEntry, bDontUpdateIfSameArrayData, bDontSelectEntries, ForObject); }
	void InternalNormalRefresh(IDataListProviderInterface * ProviderInterface, int DataListType, bool bRestorePreviousSelection, bool bAutoSelectFirstEntry, IDataListEntryInterface * ForceSelectEntry, bool bDontUpdateIfSameArrayData, bool bDontSelectEntries, UObject * ForObject) { NativeCall<void, IDataListProviderInterface *, int, bool, bool, IDataListEntryInterface *, bool, bool, UObject *>(this, "UDataListPanel.InternalNormalRefresh", ProviderInterface, DataListType, bRestorePreviousSelection, bAutoSelectFirstEntry, ForceSelectEntry, bDontUpdateIfSameArrayData, bDontSelectEntries, ForObject); }
	void OnAddItemToCustomFolder(FString CFolderName, IDataListEntryInterface * Item, IDataListProviderInterface * CFolderDataListProvider) { NativeCall<void, FString, IDataListEntryInterface *, IDataListProviderInterface *>(this, "UDataListPanel.OnAddItemToCustomFolder", CFolderName, Item, CFolderDataListProvider); }
	void OnCustomFoldersSwap(FString CFolder1, FString CFolder2) { NativeCall<void, FString, FString>(this, "UDataListPanel.OnCustomFoldersSwap", CFolder1, CFolder2); }
	void OnDeleteRequest() { NativeCall<void>(this, "UDataListPanel.OnDeleteRequest"); }
	void OnDropOnBack(IDataListEntryInterface * DataListEntry) { NativeCall<void, IDataListEntryInterface *>(this, "UDataListPanel.OnDropOnBack", DataListEntry); }
	void OnFolderOperationFailed(FString CFolderName) { NativeCall<void, FString>(this, "UDataListPanel.OnFolderOperationFailed", CFolderName); }
	void OnTransferItemToRemoteFolder(FString CFolderName, IDataListEntryInterface * Item, IDataListProviderInterface * CFolderDataListProvider) { NativeCall<void, FString, IDataListEntryInterface *, IDataListProviderInterface *>(this, "UDataListPanel.OnTransferItemToRemoteFolder", CFolderName, Item, CFolderDataListProvider); }
	void OpenCustomFolder(FString CFolder) { NativeCall<void, FString>(this, "UDataListPanel.OpenCustomFolder", CFolder); }
	void OpenFolder(FString Folder) { NativeCall<void, FString>(this, "UDataListPanel.OpenFolder", Folder); }
	void RefreshDataList(IDataListProviderInterface * ProviderInterface, int DataListType, bool bRestorePreviousSelection, bool bAutoSelectFirstEntry, IDataListEntryInterface * ForceSelectEntry, bool bDontUpdateIfSameArrayData, bool bDontSelectEntries, UObject * ForObject) { NativeCall<void, IDataListProviderInterface *, int, bool, bool, IDataListEntryInterface *, bool, bool, UObject *>(this, "UDataListPanel.RefreshDataList", ProviderInterface, DataListType, bRestorePreviousSelection, bAutoSelectFirstEntry, ForceSelectEntry, bDontUpdateIfSameArrayData, bDontSelectEntries, ForObject); }
	void RefreshEngramList(TArray<IDataListEntryInterface *> DataListEntries, IDataListProviderInterface * ProviderInterface) { NativeCall<void, TArray<IDataListEntryInterface *>, IDataListProviderInterface *>(this, "UDataListPanel.RefreshEngramList", DataListEntries, ProviderInterface); }
	void RemoveDataListEntries() { NativeCall<void>(this, "UDataListPanel.RemoveDataListEntries"); }
	void SelectEntry(IDataListEntryInterface * TheEntry) { NativeCall<void, IDataListEntryInterface *>(this, "UDataListPanel.SelectEntry", TheEntry); }
	void SelectedButton(UDataListEntryButton * theButton) { NativeCall<void, UDataListEntryButton *>(this, "UDataListPanel.SelectedButton", theButton); }
	void SetHighlightCustomFolder(bool bHighLight) { NativeCall<void, bool>(this, "UDataListPanel.SetHighlightCustomFolder", bHighLight); }
	void SetMinimalRefreshMode(bool bMinimalRefreshMode) { NativeCall<void, bool>(this, "UDataListPanel.SetMinimalRefreshMode", bMinimalRefreshMode); }
	void SynchronizeProperties() { NativeCall<void>(this, "UDataListPanel.SynchronizeProperties"); }
	void UpdateEntryWidgetAdjacents() { NativeCall<void>(this, "UDataListPanel.UpdateEntryWidgetAdjacents"); }
	void UpdateFolderStatus(bool bClearCurrentFolderFilter, bool IgnoreFolderFilter, bool bDisableCustomFolder, TArray<FString> CFolders, bool bCreateFolder, int Flevel, FString CustomFolder) { NativeCall<void, bool, bool, bool, TArray<FString>, bool, int, FString>(this, "UDataListPanel.UpdateFolderStatus", bClearCurrentFolderFilter, IgnoreFolderFilter, bDisableCustomFolder, CFolders, bCreateFolder, Flevel, CustomFolder); }
};

