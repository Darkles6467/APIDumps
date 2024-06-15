#pragma once

#include "BaseDeclarations.h"
#include "UContentWidget.h"
#include "UPanelWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UScaleBox : UContentWidget
{
	char __padding[0x18L];
	TEnumAsByte<enum EStretchDirection::Type>& StretchDirectionField() { return *GetNativePointerField<TEnumAsByte<enum EStretchDirection::Type>*>(this, "UScaleBox.StretchDirection"); }
	TEnumAsByte<enum EStretch::Type>& StretchField() { return *GetNativePointerField<TEnumAsByte<enum EStretch::Type>*>(this, "UScaleBox.Stretch"); }
	TSharedPtr<SScaleBox,0>& MyScaleBoxField() { return *GetNativePointerField<TSharedPtr<SScaleBox,0>*>(this, "UScaleBox.MyScaleBox"); }

	// Functions

	void OnSlotAdded(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UScaleBox.OnSlotAdded", Slot); }
	void OnSlotRemoved(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UScaleBox.OnSlotRemoved", Slot); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UScaleBox.ReleaseSlateResources", bReleaseChildren); }
	void SynchronizeProperties() { NativeCall<void>(this, "UScaleBox.SynchronizeProperties"); }
};

