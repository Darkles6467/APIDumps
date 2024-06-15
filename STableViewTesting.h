#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct STableViewTesting : SCompoundWidget
{
	char __padding[0xc8L];
	TSharedPtr<SListView<TSharedPtr<FTestData,0> >,0>& ListBeingTestedField() { return *GetNativePointerField<TSharedPtr<SListView<TSharedPtr<FTestData,0> >,0>*>(this, "STableViewTesting.ListBeingTested"); }
	TSharedPtr<STileView<TSharedPtr<FTestData,0> >,0>& TileViewBeingTestedField() { return *GetNativePointerField<TSharedPtr<STileView<TSharedPtr<FTestData,0> >,0>*>(this, "STableViewTesting.TileViewBeingTested"); }
	TSharedPtr<STreeView<TSharedPtr<FTestData,0> >,0>& TreeBeingTestedField() { return *GetNativePointerField<TSharedPtr<STreeView<TSharedPtr<FTestData,0> >,0>*>(this, "STableViewTesting.TreeBeingTested"); }
	TArray<TSharedPtr<FTestData,0>>& ItemsField() { return *GetNativePointerField<TArray<TSharedPtr<FTestData,0>>*>(this, "STableViewTesting.Items"); }
	int& TotalItemsField() { return *GetNativePointerField<int*>(this, "STableViewTesting.TotalItems"); }
	int& ScrollToIndexField() { return *GetNativePointerField<int*>(this, "STableViewTesting.ScrollToIndex"); }
	TSharedPtr<enum ESelectionMode::Type,0>& CurSelectionModeField() { return *GetNativePointerField<TSharedPtr<enum ESelectionMode::Type,0>*>(this, "STableViewTesting.CurSelectionMode"); }
	TSharedPtr<SComboBox<TSharedPtr<enum ESelectionMode::Type,0> >,0>& SelectionModeComboField() { return *GetNativePointerField<TSharedPtr<SComboBox<TSharedPtr<enum ESelectionMode::Type,0> >,0>*>(this, "STableViewTesting.SelectionModeCombo"); }
	TArray<TSharedPtr<enum ESelectionMode::Type,0>>& SelectionModesField() { return *GetNativePointerField<TArray<TSharedPtr<enum ESelectionMode::Type,0>>*>(this, "STableViewTesting.SelectionModes"); }
};

