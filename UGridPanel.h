#pragma once

#include "BaseDeclarations.h"
#include "UPanelWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UGridPanel : UPanelWidget
{
	char __padding[0x30L];
	TArray<float>& ColumnFillField() { return *GetNativePointerField<TArray<float>*>(this, "UGridPanel.ColumnFill"); }
	TArray<float>& RowFillField() { return *GetNativePointerField<TArray<float>*>(this, "UGridPanel.RowFill"); }
	TSharedPtr<SGridPanel,0>& MyGridPanelField() { return *GetNativePointerField<TSharedPtr<SGridPanel,0>*>(this, "UGridPanel.MyGridPanel"); }

	// Functions

	UGridSlot * AddChildToGrid(UWidget * Content) { return NativeCall<UGridSlot *, UWidget *>(this, "UGridPanel.AddChildToGrid", Content); }
	void OnSlotAdded(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UGridPanel.OnSlotAdded", Slot); }
	void OnSlotRemoved(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UGridPanel.OnSlotRemoved", Slot); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UGridPanel.ReleaseSlateResources", bReleaseChildren); }
	void SynchronizeProperties() { NativeCall<void>(this, "UGridPanel.SynchronizeProperties"); }
};

