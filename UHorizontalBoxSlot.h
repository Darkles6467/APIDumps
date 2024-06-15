#pragma once

#include "BaseDeclarations.h"
#include "UPanelSlot.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "SHorizontalBox.h"
#include "FMargin.h"
#include "FSlateChildSize.h"

struct UHorizontalBoxSlot : UPanelSlot
{
	char __padding[0x28L];
	FMargin& PaddingField() { return *GetNativePointerField<FMargin*>(this, "UHorizontalBoxSlot.Padding"); }
	FSlateChildSize& SizeField() { return *GetNativePointerField<FSlateChildSize*>(this, "UHorizontalBoxSlot.Size"); }
	TEnumAsByte<enum EHorizontalAlignment>& HorizontalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EHorizontalAlignment>*>(this, "UHorizontalBoxSlot.HorizontalAlignment"); }
	TEnumAsByte<enum EVerticalAlignment>& VerticalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EVerticalAlignment>*>(this, "UHorizontalBoxSlot.VerticalAlignment"); }

	// Functions

	void BuildSlot(TSharedRef<SHorizontalBox,0> HorizontalBox) { NativeCall<void, TSharedRef<SHorizontalBox,0>>(this, "UHorizontalBoxSlot.BuildSlot", HorizontalBox); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UHorizontalBoxSlot.ReleaseSlateResources", bReleaseChildren); }
	void SetPadding(FMargin InPadding) { NativeCall<void, FMargin>(this, "UHorizontalBoxSlot.SetPadding", InPadding); }
	void SetSize(FSlateChildSize InSize) { NativeCall<void, FSlateChildSize>(this, "UHorizontalBoxSlot.SetSize", InSize); }
	void SynchronizeProperties() { NativeCall<void>(this, "UHorizontalBoxSlot.SynchronizeProperties"); }
};

