#pragma once

#include "BaseDeclarations.h"
#include "UPanelSlot.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "SScaleBox.h"
#include "FMargin.h"

struct UScaleBoxSlot : UPanelSlot
{
	char __padding[0x28L];
	FMargin& PaddingField() { return *GetNativePointerField<FMargin*>(this, "UScaleBoxSlot.Padding"); }
	TEnumAsByte<enum EHorizontalAlignment>& HorizontalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EHorizontalAlignment>*>(this, "UScaleBoxSlot.HorizontalAlignment"); }
	TEnumAsByte<enum EVerticalAlignment>& VerticalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EVerticalAlignment>*>(this, "UScaleBoxSlot.VerticalAlignment"); }
	TSharedPtr<SScaleBox,0>& ScaleBoxField() { return *GetNativePointerField<TSharedPtr<SScaleBox,0>*>(this, "UScaleBoxSlot.ScaleBox"); }

	// Functions

	void BuildSlot(TSharedRef<SScaleBox,0> InScaleBox) { NativeCall<void, TSharedRef<SScaleBox,0>>(this, "UScaleBoxSlot.BuildSlot", InScaleBox); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UScaleBoxSlot.ReleaseSlateResources", bReleaseChildren); }
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment) { NativeCall<void, EHorizontalAlignment>(this, "UScaleBoxSlot.SetHorizontalAlignment", InHorizontalAlignment); }
	void SetPadding(FMargin InPadding) { NativeCall<void, FMargin>(this, "UScaleBoxSlot.SetPadding", InPadding); }
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment) { NativeCall<void, EVerticalAlignment>(this, "UScaleBoxSlot.SetVerticalAlignment", InVerticalAlignment); }
	void SynchronizeProperties() { NativeCall<void>(this, "UScaleBoxSlot.SynchronizeProperties"); }
};

