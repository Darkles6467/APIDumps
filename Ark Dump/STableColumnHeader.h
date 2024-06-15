#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct STableColumnHeader : SCompoundWidget
{
	char __padding[0x80L];
	TAttribute<enum EColumnSortMode::Type>& SortModeField() { return *GetNativePointerField<TAttribute<enum EColumnSortMode::Type>*>(this, "STableColumnHeader.SortMode"); }
	TAttribute<enum EColumnSortPriority::Type>& SortPriorityField() { return *GetNativePointerField<TAttribute<enum EColumnSortPriority::Type>*>(this, "STableColumnHeader.SortPriority"); }
	EHeaderComboVisibility& ComboVisibilityField() { return *GetNativePointerField<EHeaderComboVisibility*>(this, "STableColumnHeader.ComboVisibility"); }
	TSharedPtr<SOverlay,0>& MenuOverlayField() { return *GetNativePointerField<TSharedPtr<SOverlay,0>*>(this, "STableColumnHeader.MenuOverlay"); }
	FName& ColumnIdField() { return *GetNativePointerField<FName*>(this, "STableColumnHeader.ColumnId"); }
	const FTableColumnHeaderStyle * StyleField() { return GetNativePointerField<const FTableColumnHeaderStyle *>(this, "STableColumnHeader.Style"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "STableColumnHeader.FArguments"); }
	void FArguments() { NativeCall<void>(this, "STableColumnHeader.FArguments"); }
	void Construct(const STableColumnHeader::FArguments * InArgs, const SHeaderRow::FColumn * Column, const FMargin DefaultHeaderContentPadding) { NativeCall<void, const STableColumnHeader::FArguments *, const SHeaderRow::FColumn *, const FMargin>(this, "STableColumnHeader.Construct", InArgs, Column, DefaultHeaderContentPadding); }
	FSlateColor * GetComboButtonTint(FSlateColor * result) { return NativeCall<FSlateColor *, FSlateColor *>(this, "STableColumnHeader.GetComboButtonTint", result); }
	EVisibility * GetMenuOverlayVisibility(EVisibility * result) { return NativeCall<EVisibility *, EVisibility *>(this, "STableColumnHeader.GetMenuOverlayVisibility", result); }
	EVisibility * GetSortModeVisibility(EVisibility * result) { return NativeCall<EVisibility *, EVisibility *>(this, "STableColumnHeader.GetSortModeVisibility", result); }
	FReply * OnMouseButtonUp(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "STableColumnHeader.OnMouseButtonUp", result, MyGeometry, MouseEvent); }
	FReply * OnTitleClicked(FReply * result) { return NativeCall<FReply *, FReply *>(this, "STableColumnHeader.OnTitleClicked", result); }
	void OpenContextMenu(const FVector2D * SummonLocation) { NativeCall<void, const FVector2D *>(this, "STableColumnHeader.OpenContextMenu", SummonLocation); }
};

