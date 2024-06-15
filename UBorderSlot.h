#pragma once

#include "BaseDeclarations.h"
#include "UPanelSlot.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "SBorder.h"
#include "FMargin.h"

struct UBorderSlot : UPanelSlot
{
	char __padding[0x28L];
	FMargin& PaddingField() { return *GetNativePointerField<FMargin*>(this, "UBorderSlot.Padding"); }
	TEnumAsByte<enum EHorizontalAlignment>& HorizontalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EHorizontalAlignment>*>(this, "UBorderSlot.HorizontalAlignment"); }
	TEnumAsByte<enum EVerticalAlignment>& VerticalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EVerticalAlignment>*>(this, "UBorderSlot.VerticalAlignment"); }

	// Functions

	void BuildSlot(TSharedRef<SBorder,0> InBorder) { NativeCall<void, TSharedRef<SBorder,0>>(this, "UBorderSlot.BuildSlot", InBorder); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UBorderSlot.ReleaseSlateResources", bReleaseChildren); }
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment) { NativeCall<void, EHorizontalAlignment>(this, "UBorderSlot.SetHorizontalAlignment", InHorizontalAlignment); }
	void SetPadding(FMargin InPadding) { NativeCall<void, FMargin>(this, "UBorderSlot.SetPadding", InPadding); }
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment) { NativeCall<void, EVerticalAlignment>(this, "UBorderSlot.SetVerticalAlignment", InVerticalAlignment); }
	void SynchronizeProperties() { NativeCall<void>(this, "UBorderSlot.SynchronizeProperties"); }
};

