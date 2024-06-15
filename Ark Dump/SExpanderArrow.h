#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "ITableRow.h"

struct SExpanderArrow : SCompoundWidget
{
	char __padding[0x38L];
	TWeakPtr<ITableRow,0>& OwnerRowPtrField() { return *GetNativePointerField<TWeakPtr<ITableRow,0>*>(this, "SExpanderArrow.OwnerRowPtr"); }
	TAttribute<float>& IndentAmountField() { return *GetNativePointerField<TAttribute<float>*>(this, "SExpanderArrow.IndentAmount"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SExpanderArrow.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SExpanderArrow.FArguments"); }
	void Construct(const SExpanderArrow::FArguments * InArgs, const TSharedPtr<ITableRow,0> * TableRow) { NativeCall<void, const SExpanderArrow::FArguments *, const TSharedPtr<ITableRow,0> *>(this, "SExpanderArrow.Construct", InArgs, TableRow); }
	FMargin * GetExpanderPadding(FMargin * result) { return NativeCall<FMargin *, FMargin *>(this, "SExpanderArrow.GetExpanderPadding", result); }
	EVisibility * GetExpanderVisibility(EVisibility * result) { return NativeCall<EVisibility *, EVisibility *>(this, "SExpanderArrow.GetExpanderVisibility", result); }
	FReply * OnArrowClicked(FReply * result) { return NativeCall<FReply *, FReply *>(this, "SExpanderArrow.OnArrowClicked", result); }
};

