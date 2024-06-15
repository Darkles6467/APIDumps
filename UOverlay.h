#pragma once

#include "BaseDeclarations.h"
#include "UPanelWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UOverlay : UPanelWidget
{
	char __padding[0x10L];
	TSharedPtr<SOverlay,0>& MyOverlayField() { return *GetNativePointerField<TSharedPtr<SOverlay,0>*>(this, "UOverlay.MyOverlay"); }

	// Functions

	UOverlaySlot * AddChildToOverlay(UWidget * Content) { return NativeCall<UOverlaySlot *, UWidget *>(this, "UOverlay.AddChildToOverlay", Content); }
	void OnSlotAdded(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UOverlay.OnSlotAdded", Slot); }
	void OnSlotRemoved(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UOverlay.OnSlotRemoved", Slot); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UOverlay.ReleaseSlateResources", bReleaseChildren); }
};

