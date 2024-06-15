#pragma once

#include "BaseDeclarations.h"
#include "UPanelSlot.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "SButton.h"
#include "FMargin.h"

struct UButtonSlot : UPanelSlot
{
	char __padding[0x28L];
	FMargin& PaddingField() { return *GetNativePointerField<FMargin*>(this, "UButtonSlot.Padding"); }
	TEnumAsByte<enum EHorizontalAlignment>& HorizontalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EHorizontalAlignment>*>(this, "UButtonSlot.HorizontalAlignment"); }
	TEnumAsByte<enum EVerticalAlignment>& VerticalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EVerticalAlignment>*>(this, "UButtonSlot.VerticalAlignment"); }

	// Functions

	void BuildSlot(TSharedRef<SButton,0> InButton) { NativeCall<void, TSharedRef<SButton,0>>(this, "UButtonSlot.BuildSlot", InButton); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UButtonSlot.ReleaseSlateResources", bReleaseChildren); }
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment) { NativeCall<void, EHorizontalAlignment>(this, "UButtonSlot.SetHorizontalAlignment", InHorizontalAlignment); }
	void SetPadding(FMargin InPadding) { NativeCall<void, FMargin>(this, "UButtonSlot.SetPadding", InPadding); }
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment) { NativeCall<void, EVerticalAlignment>(this, "UButtonSlot.SetVerticalAlignment", InVerticalAlignment); }
	void SynchronizeProperties() { NativeCall<void>(this, "UButtonSlot.SynchronizeProperties"); }
};

