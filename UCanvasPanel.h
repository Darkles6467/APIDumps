#pragma once

#include "BaseDeclarations.h"
#include "UPanelWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UCanvasPanel : UPanelWidget
{
	char __padding[0x38L];
	FLinearColor& ColorAndOpacityField() { return *GetNativePointerField<FLinearColor*>(this, "UCanvasPanel.ColorAndOpacity"); }
	TSharedPtr<SConstraintCanvas,0>& MyCanvasField() { return *GetNativePointerField<TSharedPtr<SConstraintCanvas,0>*>(this, "UCanvasPanel.MyCanvas"); }
	bool& bDontUpdateSlotField() { return *GetNativePointerField<bool*>(this, "UCanvasPanel.bDontUpdateSlot"); }

	// Functions

	void OnSlotAdded(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UCanvasPanel.OnSlotAdded", Slot); }
	void OnSlotRemoved(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UCanvasPanel.OnSlotRemoved", Slot); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UCanvasPanel.ReleaseSlateResources", bReleaseChildren); }
	void SetColorAndOpacity(FLinearColor InColorAndOpacity) { NativeCall<void, FLinearColor>(this, "UCanvasPanel.SetColorAndOpacity", InColorAndOpacity); }
	void SynchronizeProperties() { NativeCall<void>(this, "UCanvasPanel.SynchronizeProperties"); }
};

