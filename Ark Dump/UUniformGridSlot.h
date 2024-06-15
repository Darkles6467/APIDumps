#pragma once

#include "BaseDeclarations.h"
#include "UPanelSlot.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "SUniformGridPanel.h"

struct UUniformGridSlot : UPanelSlot
{
	char __padding[0x18L];
	TEnumAsByte<enum EHorizontalAlignment>& HorizontalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EHorizontalAlignment>*>(this, "UUniformGridSlot.HorizontalAlignment"); }
	TEnumAsByte<enum EVerticalAlignment>& VerticalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EVerticalAlignment>*>(this, "UUniformGridSlot.VerticalAlignment"); }
	int& RowField() { return *GetNativePointerField<int*>(this, "UUniformGridSlot.Row"); }
	int& ColumnField() { return *GetNativePointerField<int*>(this, "UUniformGridSlot.Column"); }
	SUniformGridPanel::FSlot * SlotField() { return GetNativePointerField<SUniformGridPanel::FSlot *>(this, "UUniformGridSlot.Slot"); }

	// Functions

	void BuildSlot(TSharedRef<SUniformGridPanel,0> GridPanel) { NativeCall<void, TSharedRef<SUniformGridPanel,0>>(this, "UUniformGridSlot.BuildSlot", GridPanel); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UUniformGridSlot.ReleaseSlateResources", bReleaseChildren); }
	void SetColumn(int InColumn) { NativeCall<void, int>(this, "UUniformGridSlot.SetColumn", InColumn); }
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment) { NativeCall<void, EHorizontalAlignment>(this, "UUniformGridSlot.SetHorizontalAlignment", InHorizontalAlignment); }
	void SetRow(int InRow) { NativeCall<void, int>(this, "UUniformGridSlot.SetRow", InRow); }
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment) { NativeCall<void, EVerticalAlignment>(this, "UUniformGridSlot.SetVerticalAlignment", InVerticalAlignment); }
	void SynchronizeProperties() { NativeCall<void>(this, "UUniformGridSlot.SynchronizeProperties"); }
};

