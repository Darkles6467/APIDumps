#pragma once

#include "BaseDeclarations.h"
#include "UTableViewBase.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "ITableRow.h"
#include "STableViewBase.h"

struct UListView : UTableViewBase
{
	char __padding[0x40L];
	float& ItemHeightField() { return *GetNativePointerField<float*>(this, "UListView.ItemHeight"); }
	TEnumAsByte<enum ESelectionMode::Type>& SelectionModeField() { return *GetNativePointerField<TEnumAsByte<enum ESelectionMode::Type>*>(this, "UListView.SelectionMode"); }

	// Functions

	TSharedRef<ITableRow,0> * HandleOnGenerateRow(TSharedRef<ITableRow,0> * result, UObject * Item, const TSharedRef<STableViewBase,0> * OwnerTable) { return NativeCall<TSharedRef<ITableRow,0> *, TSharedRef<ITableRow,0> *, UObject *, const TSharedRef<STableViewBase,0> *>(this, "UListView.HandleOnGenerateRow", result, Item, OwnerTable); }
};

