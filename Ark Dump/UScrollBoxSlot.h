#pragma once

#include "BaseDeclarations.h"
#include "UPanelSlot.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "SScrollBox.h"
#include "FMargin.h"

struct UScrollBoxSlot : UPanelSlot
{
	char __padding[0x20L];
	FMargin& PaddingField() { return *GetNativePointerField<FMargin*>(this, "UScrollBoxSlot.Padding"); }
	TEnumAsByte<enum EHorizontalAlignment>& HorizontalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EHorizontalAlignment>*>(this, "UScrollBoxSlot.HorizontalAlignment"); }
	SScrollBox::FSlot * SlotField() { return GetNativePointerField<SScrollBox::FSlot *>(this, "UScrollBoxSlot.Slot"); }

	// Functions

	void BuildSlot(TSharedRef<SScrollBox,0> ScrollBox) { NativeCall<void, TSharedRef<SScrollBox,0>>(this, "UScrollBoxSlot.BuildSlot", ScrollBox); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UScrollBoxSlot.ReleaseSlateResources", bReleaseChildren); }
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment) { NativeCall<void, EHorizontalAlignment>(this, "UScrollBoxSlot.SetHorizontalAlignment", InHorizontalAlignment); }
	void SetPadding(FMargin InPadding) { NativeCall<void, FMargin>(this, "UScrollBoxSlot.SetPadding", InPadding); }
	void SynchronizeProperties() { NativeCall<void>(this, "UScrollBoxSlot.SynchronizeProperties"); }
};

