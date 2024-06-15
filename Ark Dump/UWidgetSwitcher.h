#pragma once

#include "BaseDeclarations.h"
#include "UPanelWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UWidgetSwitcher : UPanelWidget
{
	char __padding[0x18L];
	int& ActiveWidgetIndexField() { return *GetNativePointerField<int*>(this, "UWidgetSwitcher.ActiveWidgetIndex"); }

	// Functions

	int GetActiveWidgetIndex() { return NativeCall<int>(this, "UWidgetSwitcher.GetActiveWidgetIndex"); }
	int GetNumWidgets() { return NativeCall<int>(this, "UWidgetSwitcher.GetNumWidgets"); }
	void OnSlotAdded(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UWidgetSwitcher.OnSlotAdded", Slot); }
	void OnSlotRemoved(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UWidgetSwitcher.OnSlotRemoved", Slot); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UWidgetSwitcher.ReleaseSlateResources", bReleaseChildren); }
	void SetActiveWidget(UWidget * Widget) { NativeCall<void, UWidget *>(this, "UWidgetSwitcher.SetActiveWidget", Widget); }
	void SetActiveWidgetIndex(int Index) { NativeCall<void, int>(this, "UWidgetSwitcher.SetActiveWidgetIndex", Index); }
	void SynchronizeProperties() { NativeCall<void>(this, "UWidgetSwitcher.SynchronizeProperties"); }
};

