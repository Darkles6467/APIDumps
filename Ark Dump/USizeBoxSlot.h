#pragma once

#include "BaseDeclarations.h"
#include "UPanelSlot.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "SSafeZone.h"
#include "FMargin.h"

struct USizeBoxSlot : UPanelSlot
{
	char __padding[0x28L];
	FMargin& PaddingField() { return *GetNativePointerField<FMargin*>(this, "USizeBoxSlot.Padding"); }
	TEnumAsByte<enum EHorizontalAlignment>& HorizontalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EHorizontalAlignment>*>(this, "USizeBoxSlot.HorizontalAlignment"); }
	TEnumAsByte<enum EVerticalAlignment>& VerticalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EVerticalAlignment>*>(this, "USizeBoxSlot.VerticalAlignment"); }

	// Functions

	void BuildSlot(TSharedRef<SBox,0> InSizeBox) { NativeCall<void, TSharedRef<SBox,0>>(this, "USizeBoxSlot.BuildSlot", InSizeBox); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "USizeBoxSlot.ReleaseSlateResources", bReleaseChildren); }
	void SetPadding(FMargin InPadding) { NativeCall<void, FMargin>(this, "USizeBoxSlot.SetPadding", InPadding); }
	void SynchronizeProperties() { NativeCall<void>(this, "USizeBoxSlot.SynchronizeProperties"); }
};

