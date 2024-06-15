#pragma once

#include "BaseDeclarations.h"
#include "UPanelSlot.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "SOverlay.h"
#include "FMargin.h"

struct UOverlaySlot : UPanelSlot
{
	char __padding[0x20L];
	FMargin& PaddingField() { return *GetNativePointerField<FMargin*>(this, "UOverlaySlot.Padding"); }
	TEnumAsByte<enum EHorizontalAlignment>& HorizontalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EHorizontalAlignment>*>(this, "UOverlaySlot.HorizontalAlignment"); }
	TEnumAsByte<enum EVerticalAlignment>& VerticalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EVerticalAlignment>*>(this, "UOverlaySlot.VerticalAlignment"); }
	SOverlay::FOverlaySlot * SlotField() { return GetNativePointerField<SOverlay::FOverlaySlot *>(this, "UOverlaySlot.Slot"); }

	// Functions

	void BuildSlot(TSharedRef<SOverlay,0> Overlay) { NativeCall<void, TSharedRef<SOverlay,0>>(this, "UOverlaySlot.BuildSlot", Overlay); }
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment) { NativeCall<void, EHorizontalAlignment>(this, "UOverlaySlot.SetHorizontalAlignment", InHorizontalAlignment); }
	void SetPadding(FMargin InPadding) { NativeCall<void, FMargin>(this, "UOverlaySlot.SetPadding", InPadding); }
	void SynchronizeProperties() { NativeCall<void>(this, "UOverlaySlot.SynchronizeProperties"); }
};

