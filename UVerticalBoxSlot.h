#pragma once

#include "BaseDeclarations.h"
#include "UPanelSlot.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "SVerticalBox.h"
#include "FMargin.h"
#include "FSlateChildSize.h"

struct UVerticalBoxSlot : UPanelSlot
{
	char __padding[0x28L];
	FMargin& PaddingField() { return *GetNativePointerField<FMargin*>(this, "UVerticalBoxSlot.Padding"); }
	FSlateChildSize& SizeField() { return *GetNativePointerField<FSlateChildSize*>(this, "UVerticalBoxSlot.Size"); }
	TEnumAsByte<enum EHorizontalAlignment>& HorizontalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EHorizontalAlignment>*>(this, "UVerticalBoxSlot.HorizontalAlignment"); }
	TEnumAsByte<enum EVerticalAlignment>& VerticalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EVerticalAlignment>*>(this, "UVerticalBoxSlot.VerticalAlignment"); }
	SVerticalBox::FSlot * SlotField() { return GetNativePointerField<SVerticalBox::FSlot *>(this, "UVerticalBoxSlot.Slot"); }

	// Functions

	void BuildSlot(TSharedRef<SVerticalBox,0> VerticalBox) { NativeCall<void, TSharedRef<SVerticalBox,0>>(this, "UVerticalBoxSlot.BuildSlot", VerticalBox); }
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment) { NativeCall<void, EHorizontalAlignment>(this, "UVerticalBoxSlot.SetHorizontalAlignment", InHorizontalAlignment); }
	void SetPadding(FMargin InPadding) { NativeCall<void, FMargin>(this, "UVerticalBoxSlot.SetPadding", InPadding); }
	void SetSize(FSlateChildSize InSize) { NativeCall<void, FSlateChildSize>(this, "UVerticalBoxSlot.SetSize", InSize); }
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment) { NativeCall<void, EVerticalAlignment>(this, "UVerticalBoxSlot.SetVerticalAlignment", InVerticalAlignment); }
	void SynchronizeProperties() { NativeCall<void>(this, "UVerticalBoxSlot.SynchronizeProperties"); }
};

