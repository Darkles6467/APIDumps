#pragma once

#include "BaseDeclarations.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FDragDropEvent.h"

struct UDataListEntryWidget : UUserWidget
{
	char __padding[0xb0L];
	FName& DataListButtonNameField() { return *GetNativePointerField<FName*>(this, "UDataListEntryWidget.DataListButtonName"); }
	int& ExistingButtonExplicitIndexTypeField() { return *GetNativePointerField<int*>(this, "UDataListEntryWidget.ExistingButtonExplicitIndexType"); }
	FName& TraditionalButtonNameField() { return *GetNativePointerField<FName*>(this, "UDataListEntryWidget.TraditionalButtonName"); }
	FName& TraditionalLabelNameField() { return *GetNativePointerField<FName*>(this, "UDataListEntryWidget.TraditionalLabelName"); }
	FString& DisplayStringOverrideField() { return *GetNativePointerField<FString*>(this, "UDataListEntryWidget.DisplayStringOverride"); }
	int& PrimalItemButton_UseItemCraftQueueIndexField() { return *GetNativePointerField<int*>(this, "UDataListEntryWidget.PrimalItemButton_UseItemCraftQueueIndex"); }
	FVector2D& OverrideButtonDisplayStringOffsetValueField() { return *GetNativePointerField<FVector2D*>(this, "UDataListEntryWidget.OverrideButtonDisplayStringOffsetValue"); }
	float& OverrideButtonDisplayStringFontSizeValueField() { return *GetNativePointerField<float*>(this, "UDataListEntryWidget.OverrideButtonDisplayStringFontSizeValue"); }
	FVector2D& OverrideButtonDisplayStringScaleValueField() { return *GetNativePointerField<FVector2D*>(this, "UDataListEntryWidget.OverrideButtonDisplayStringScaleValue"); }
	bool& bBoundToDraggingField() { return *GetNativePointerField<bool*>(this, "UDataListEntryWidget.bBoundToDragging"); }
	bool& CanBeHighlightedWhenEmptyField() { return *GetNativePointerField<bool*>(this, "UDataListEntryWidget.CanBeHighlightedWhenEmpty"); }
	UTextBlock * TraditionalLabelField() { return GetNativePointerField<UTextBlock *>(this, "UDataListEntryWidget.TraditionalLabel"); }
	TWeakObjectPtr<UDataListPanel>& MyDataListPanelField() { return *GetNativePointerField<TWeakObjectPtr<UDataListPanel>*>(this, "UDataListEntryWidget.MyDataListPanel"); }
	int& EntryIndexField() { return *GetNativePointerField<int*>(this, "UDataListEntryWidget.EntryIndex"); }
	bool& bIsFavouriteField() { return *GetNativePointerField<bool*>(this, "UDataListEntryWidget.bIsFavourite"); }

	// Functions

	bool AllowDragging() { return NativeCall<bool>(this, "UDataListEntryWidget.AllowDragging"); }
	bool DoesDataListPanelUseListWidgets() { return NativeCall<bool>(this, "UDataListEntryWidget.DoesDataListPanelUseListWidgets"); }
	void DoubleClickedButton() { NativeCall<void>(this, "UDataListEntryWidget.DoubleClickedButton"); }
	IDataListEntryInterface * GetMyDataListEntryInterface() { return NativeCall<IDataListEntryInterface *>(this, "UDataListEntryWidget.GetMyDataListEntryInterface"); }
	int GetMyDataListPanelType() { return NativeCall<int>(this, "UDataListEntryWidget.GetMyDataListPanelType"); }
	AShooterPlayerController * GetPC() { return NativeCall<AShooterPlayerController *>(this, "UDataListEntryWidget.GetPC"); }
	void InitializeMe(UDataListPanel * forPanel, IDataListEntryInterface * MyDataListEntry, int forIndex, UPrimalUI * ForUI) { NativeCall<void, UDataListPanel *, IDataListEntryInterface *, int, UPrimalUI *>(this, "UDataListEntryWidget.InitializeMe", forPanel, MyDataListEntry, forIndex, ForUI); }
	void InitializeMeDefaults() { NativeCall<void>(this, "UDataListEntryWidget.InitializeMeDefaults"); }
	void OnDraggedClickedEventObject(UWidget * draggeddWidget) { NativeCall<void, UWidget *>(this, "UDataListEntryWidget.OnDraggedClickedEventObject", draggeddWidget); }
	bool OnDropWidgetEx(FGeometry MyGeometry, FDragDropEvent DragEvent) { return NativeCall<bool, FGeometry, FDragDropEvent>(this, "UDataListEntryWidget.OnDropWidgetEx", MyGeometry, DragEvent); }
	bool OnMimickDroppedWidget(UWidget * DroppedWidget, UWidget * DroppedOnWidget) { return NativeCall<bool, UWidget *, UWidget *>(this, "UDataListEntryWidget.OnMimickDroppedWidget", DroppedWidget, DroppedOnWidget); }
	void SelectedButton(UDataListEntryButton * theButton) { NativeCall<void, UDataListEntryButton *>(this, "UDataListEntryWidget.SelectedButton", theButton); }
	void SetEnabled(bool bEnable) { NativeCall<void, bool>(this, "UDataListEntryWidget.SetEnabled", bEnable); }
	bool UseCustomToolTip(bool bWantToDisplayTooltip) { return NativeCall<bool, bool>(this, "UDataListEntryWidget.UseCustomToolTip", bWantToDisplayTooltip); }
};

