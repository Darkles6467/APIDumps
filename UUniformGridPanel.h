#pragma once

#include "BaseDeclarations.h"
#include "UPanelWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUniformGridPanel : UPanelWidget
{
	char __padding[0x28L];
	FMargin& SlotPaddingField() { return *GetNativePointerField<FMargin*>(this, "UUniformGridPanel.SlotPadding"); }
	float& MinDesiredSlotWidthField() { return *GetNativePointerField<float*>(this, "UUniformGridPanel.MinDesiredSlotWidth"); }
	float& MinDesiredSlotHeightField() { return *GetNativePointerField<float*>(this, "UUniformGridPanel.MinDesiredSlotHeight"); }
	TSharedPtr<SUniformGridPanel,0>& MyUniformGridPanelField() { return *GetNativePointerField<TSharedPtr<SUniformGridPanel,0>*>(this, "UUniformGridPanel.MyUniformGridPanel"); }

	// Functions

	UUniformGridSlot * AddChildToUniformGrid(UWidget * Content) { return NativeCall<UUniformGridSlot *, UWidget *>(this, "UUniformGridPanel.AddChildToUniformGrid", Content); }
	void OnSlotAdded(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UUniformGridPanel.OnSlotAdded", Slot); }
	void OnSlotRemoved(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UUniformGridPanel.OnSlotRemoved", Slot); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UUniformGridPanel.ReleaseSlateResources", bReleaseChildren); }
	void SynchronizeProperties() { NativeCall<void>(this, "UUniformGridPanel.SynchronizeProperties"); }
};

