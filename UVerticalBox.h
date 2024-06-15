#pragma once

#include "BaseDeclarations.h"
#include "UPanelWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UVerticalBox : UPanelWidget
{
	char __padding[0x10L];
	TSharedPtr<SVerticalBox,0>& MyVerticalBoxField() { return *GetNativePointerField<TSharedPtr<SVerticalBox,0>*>(this, "UVerticalBox.MyVerticalBox"); }

	// Functions

	UVerticalBoxSlot * AddChildVerticalBox(UWidget * Content) { return NativeCall<UVerticalBoxSlot *, UWidget *>(this, "UVerticalBox.AddChildVerticalBox", Content); }
	void OnSlotAdded(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UVerticalBox.OnSlotAdded", Slot); }
	void OnSlotRemoved(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UVerticalBox.OnSlotRemoved", Slot); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UVerticalBox.ReleaseSlateResources", bReleaseChildren); }
};

