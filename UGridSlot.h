#pragma once

#include "BaseDeclarations.h"
#include "UPanelSlot.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "SGridPanel.h"

struct UGridSlot : UPanelSlot
{
	char __padding[0x28L];
	TEnumAsByte<enum EHorizontalAlignment>& HorizontalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EHorizontalAlignment>*>(this, "UGridSlot.HorizontalAlignment"); }
	TEnumAsByte<enum EVerticalAlignment>& VerticalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EVerticalAlignment>*>(this, "UGridSlot.VerticalAlignment"); }
	int& RowField() { return *GetNativePointerField<int*>(this, "UGridSlot.Row"); }
	int& RowSpanField() { return *GetNativePointerField<int*>(this, "UGridSlot.RowSpan"); }
	int& ColumnField() { return *GetNativePointerField<int*>(this, "UGridSlot.Column"); }
	int& ColumnSpanField() { return *GetNativePointerField<int*>(this, "UGridSlot.ColumnSpan"); }
	int& LayerField() { return *GetNativePointerField<int*>(this, "UGridSlot.Layer"); }
	FVector2D& NudgeField() { return *GetNativePointerField<FVector2D*>(this, "UGridSlot.Nudge"); }
	SGridPanel::FSlot * SlotField() { return GetNativePointerField<SGridPanel::FSlot *>(this, "UGridSlot.Slot"); }

	// Functions

	void BuildSlot(TSharedRef<SGridPanel,0> GridPanel) { NativeCall<void, TSharedRef<SGridPanel,0>>(this, "UGridSlot.BuildSlot", GridPanel); }
	void SetColumn(int InColumn) { NativeCall<void, int>(this, "UGridSlot.SetColumn", InColumn); }
	void SetColumnSpan(int InColumnSpan) { NativeCall<void, int>(this, "UGridSlot.SetColumnSpan", InColumnSpan); }
	void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment) { NativeCall<void, EHorizontalAlignment>(this, "UGridSlot.SetHorizontalAlignment", InHorizontalAlignment); }
	void SetRow(int InRow) { NativeCall<void, int>(this, "UGridSlot.SetRow", InRow); }
	void SetRowSpan(int InRowSpan) { NativeCall<void, int>(this, "UGridSlot.SetRowSpan", InRowSpan); }
	void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment) { NativeCall<void, EVerticalAlignment>(this, "UGridSlot.SetVerticalAlignment", InVerticalAlignment); }
	void SynchronizeProperties() { NativeCall<void>(this, "UGridSlot.SynchronizeProperties"); }
};

