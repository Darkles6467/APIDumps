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

struct UTileView : UTableViewBase
{
	char __padding[0x40L];
	float& ItemWidthField() { return *GetNativePointerField<float*>(this, "UTileView.ItemWidth"); }
	float& ItemHeightField() { return *GetNativePointerField<float*>(this, "UTileView.ItemHeight"); }
	TEnumAsByte<enum ESelectionMode::Type>& SelectionModeField() { return *GetNativePointerField<TEnumAsByte<enum ESelectionMode::Type>*>(this, "UTileView.SelectionMode"); }

	// Functions

	TSharedRef<ITableRow,0> * HandleOnGenerateTile(TSharedRef<ITableRow,0> * result, UObject * Item, const TSharedRef<STableViewBase,0> * OwnerTable) { return NativeCall<TSharedRef<ITableRow,0> *, TSharedRef<ITableRow,0> *, UObject *, const TSharedRef<STableViewBase,0> *>(this, "UTileView.HandleOnGenerateTile", result, Item, OwnerTable); }
	void RequestListRefresh() { NativeCall<void>(this, "UTileView.RequestListRefresh"); }
	void SetItemHeight(float Height) { NativeCall<void, float>(this, "UTileView.SetItemHeight", Height); }
	void SetItemWidth(float Width) { NativeCall<void, float>(this, "UTileView.SetItemWidth", Width); }
};

