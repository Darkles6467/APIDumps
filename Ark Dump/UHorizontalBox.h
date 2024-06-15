#pragma once

#include "BaseDeclarations.h"
#include "UPanelWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UHorizontalBox : UPanelWidget
{
	char __padding[0x10L];

	// Functions

	UHorizontalBoxSlot * AddChildToHorizontalBox(UWidget * Content) { return NativeCall<UHorizontalBoxSlot *, UWidget *>(this, "UHorizontalBox.AddChildToHorizontalBox", Content); }
	void OnSlotAdded(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UHorizontalBox.OnSlotAdded", Slot); }
	void OnSlotRemoved(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UHorizontalBox.OnSlotRemoved", Slot); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UHorizontalBox.ReleaseSlateResources", bReleaseChildren); }
};

