#pragma once

#include "BaseDeclarations.h"
#include "UPanelSlot.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "SWidgetSwitcher.h"
#include "FMargin.h"

struct UWidgetSwitcherSlot : UPanelSlot
{
	char __padding[0x20L];
	FMargin& PaddingField() { return *GetNativePointerField<FMargin*>(this, "UWidgetSwitcherSlot.Padding"); }
	TEnumAsByte<enum EHorizontalAlignment>& HorizontalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EHorizontalAlignment>*>(this, "UWidgetSwitcherSlot.HorizontalAlignment"); }
	TEnumAsByte<enum EVerticalAlignment>& VerticalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EVerticalAlignment>*>(this, "UWidgetSwitcherSlot.VerticalAlignment"); }

	// Functions

	void BuildSlot(TSharedRef<SWidgetSwitcher,0> WidgetSwitcher) { NativeCall<void, TSharedRef<SWidgetSwitcher,0>>(this, "UWidgetSwitcherSlot.BuildSlot", WidgetSwitcher); }
	void SetPadding(FMargin InPadding) { NativeCall<void, FMargin>(this, "UWidgetSwitcherSlot.SetPadding", InPadding); }
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment) { NativeCall<void, EVerticalAlignment>(this, "UWidgetSwitcherSlot.SetVerticalAlignment", InVerticalAlignment); }
	void SynchronizeProperties() { NativeCall<void>(this, "UWidgetSwitcherSlot.SynchronizeProperties"); }
};

