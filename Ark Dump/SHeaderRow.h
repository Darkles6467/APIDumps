#pragma once

#include "BaseDeclarations.h"
#include "SBorder.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "SScrollBar.h"

struct SHeaderRow : SBorder
{
	char __padding[0x58L];
	TIndirectArray<SHeaderRow::FColumn>& ColumnsField() { return *GetNativePointerField<TIndirectArray<SHeaderRow::FColumn>*>(this, "SHeaderRow.Columns"); }
	FVector2D& ScrollBarThicknessField() { return *GetNativePointerField<FVector2D*>(this, "SHeaderRow.ScrollBarThickness"); }
	TAttribute<EVisibility>& ScrollBarVisibilityField() { return *GetNativePointerField<TAttribute<EVisibility>*>(this, "SHeaderRow.ScrollBarVisibility"); }
	const FHeaderRowStyle * StyleField() { return GetNativePointerField<const FHeaderRowStyle *>(this, "SHeaderRow.Style"); }
	SHeaderRow::FColumnsChanged& ColumnsChangedField() { return *GetNativePointerField<SHeaderRow::FColumnsChanged*>(this, "SHeaderRow.ColumnsChanged"); }

	// Functions

	void FColumn(const SHeaderRow::FColumn::FArguments * InArgs) { NativeCall<void, const SHeaderRow::FColumn::FArguments *>(this, "SHeaderRow.FColumn", InArgs); }
	void Construct(const SHeaderRow::FArguments * InArgs) { NativeCall<void, const SHeaderRow::FArguments *>(this, "SHeaderRow.Construct", InArgs); }
	const TIndirectArray<SHeaderRow::FColumn> * GetColumns() { return NativeCall<const TIndirectArray<SHeaderRow::FColumn> *>(this, "SHeaderRow.GetColumns"); }
	float FColumn() { return NativeCall<float>(this, "SHeaderRow.FColumn"); }
	void RegenerateWidgets() { NativeCall<void>(this, "SHeaderRow.RegenerateWidgets"); }
	void SetAssociatedVerticalScrollBar(const TSharedRef<SScrollBar,0> * ScrollBar, const float ScrollBarSize) { NativeCall<void, const TSharedRef<SScrollBar,0> *, const float>(this, "SHeaderRow.SetAssociatedVerticalScrollBar", ScrollBar, ScrollBarSize); }
	void FColumn(float NewWidth) { NativeCall<void, float>(this, "SHeaderRow.FColumn", NewWidth); }
	void FColumn() { NativeCall<void>(this, "SHeaderRow.FColumn"); }
	void FArguments() { NativeCall<void>(this, "SHeaderRow.FArguments"); }
	void FColumn() { NativeCall<void>(this, "SHeaderRow.FColumn"); }
	void FArguments() { NativeCall<void>(this, "SHeaderRow.FArguments"); }
	SHeaderRow::FArguments * FArguments(const SHeaderRow::FColumn::FArguments * ArgumentsForNewSlot) { return NativeCall<SHeaderRow::FArguments *, const SHeaderRow::FColumn::FArguments *>(this, "SHeaderRow.FArguments", ArgumentsForNewSlot); }
	static SHeaderRow::FColumn::FArguments * Column(SHeaderRow::FColumn::FArguments * result, const FName * InColumnId) { return NativeCall<SHeaderRow::FColumn::FArguments *, SHeaderRow::FColumn::FArguments *, const FName *>(nullptr, "SHeaderRow.Column", result, InColumnId); }
	SHeaderRow::FColumn::FArguments * FColumn(const FString * String) { return NativeCall<SHeaderRow::FColumn::FArguments *, const FString *>(this, "SHeaderRow.FColumn", String); }
};

