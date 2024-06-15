#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "SHorizontalBox.h"
#include "SVerticalBox.h"
#include "ITableRow.h"
#include "STableViewBase.h"
#include "SPopupErrorText.h"

struct SMultiBoxWidget : SCompoundWidget
{
	char __padding[0x68L];
	TSharedPtr<SClippingHorizontalBox,0>& ClippedHorizontalBoxField() { return *GetNativePointerField<TSharedPtr<SClippingHorizontalBox,0>*>(this, "SMultiBoxWidget.ClippedHorizontalBox"); }
	SMultiBoxWidget::FDraggedMultiBlockPreview& DragPreviewField() { return *GetNativePointerField<SMultiBoxWidget::FDraggedMultiBlockPreview*>(this, "SMultiBoxWidget.DragPreview"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SMultiBoxWidget.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SMultiBoxWidget.FArguments"); }
	void FDraggedMultiBlockPreview() { NativeCall<void>(this, "SMultiBoxWidget.FDraggedMultiBlockPreview"); }
	void AddBlockWidget(const FMultiBlock * Block, TSharedPtr<SHorizontalBox,0> HorizontalBox, TSharedPtr<SVerticalBox,0> VerticalBox, EMultiBlockLocation::Type InLocation) { NativeCall<void, const FMultiBlock *, TSharedPtr<SHorizontalBox,0>, TSharedPtr<SVerticalBox,0>, EMultiBlockLocation::Type>(this, "SMultiBoxWidget.AddBlockWidget", Block, HorizontalBox, VerticalBox, InLocation); }
	void BuildMultiBoxWidget() { NativeCall<void>(this, "SMultiBoxWidget.BuildMultiBoxWidget"); }
	void CloseSummonedMenus() { NativeCall<void>(this, "SMultiBoxWidget.CloseSummonedMenus"); }
	static FReply * FocusNextWidget(FReply * result, EFocusMoveDirection::Type MoveDirection) { return NativeCall<FReply *, FReply *, EFocusMoveDirection::Type>(nullptr, "SMultiBoxWidget.FocusNextWidget", result, MoveDirection); }
	TSharedRef<ITableRow,0> * GenerateTiles(TSharedRef<ITableRow,0> * result, TSharedPtr<SWidget,0> Item, const TSharedRef<STableViewBase,0> * OwnerTable) { return NativeCall<TSharedRef<ITableRow,0> *, TSharedRef<ITableRow,0> *, TSharedPtr<SWidget,0>, const TSharedRef<STableViewBase,0> *>(this, "SMultiBoxWidget.GenerateTiles", result, Item, OwnerTable); }
	EVisibility * GetCustomizationVisibility(EVisibility * result, TWeakPtr<FMultiBlock const ,0> BlockWeakPtr, TWeakPtr<SWidget,0> BlockWidgetWeakPtr) { return NativeCall<EVisibility *, EVisibility *, TWeakPtr<FMultiBlock const ,0>, TWeakPtr<SWidget,0>>(this, "SMultiBoxWidget.GetCustomizationVisibility", result, BlockWeakPtr, BlockWidgetWeakPtr); }
	float GetItemHeight() { return NativeCall<float>(this, "SMultiBoxWidget.GetItemHeight"); }
	float GetItemWidth() { return NativeCall<float>(this, "SMultiBoxWidget.GetItemWidth"); }
	bool IsBlockBeingDragged(TSharedPtr<FMultiBlock const ,0> Block) { return NativeCall<bool, TSharedPtr<FMultiBlock const ,0>>(this, "SMultiBoxWidget.IsBlockBeingDragged", Block); }
	void OnCustomCommandDragEnter(TSharedRef<FMultiBlock const ,0> MultiBlock, const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { NativeCall<void, TSharedRef<FMultiBlock const ,0>, const FGeometry *, const FDragDropEvent *>(this, "SMultiBoxWidget.OnCustomCommandDragEnter", MultiBlock, MyGeometry, DragDropEvent); }
	void OnCustomCommandDragged(TSharedRef<FMultiBlock const ,0> MultiBlock, const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { NativeCall<void, TSharedRef<FMultiBlock const ,0>, const FGeometry *, const FDragDropEvent *>(this, "SMultiBoxWidget.OnCustomCommandDragged", MultiBlock, MyGeometry, DragDropEvent); }
	void OnCustomCommandDropped() { NativeCall<void>(this, "SMultiBoxWidget.OnCustomCommandDropped"); }
	FReply * OnDeleteBlockClicked(FReply * result, TWeakPtr<FMultiBlock const ,0> BlockWeakPtr) { return NativeCall<FReply *, FReply *, TWeakPtr<FMultiBlock const ,0>>(this, "SMultiBoxWidget.OnDeleteBlockClicked", result, BlockWeakPtr); }
	FReply * OnDragOver(FReply * result, const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FDragDropEvent *>(this, "SMultiBoxWidget.OnDragOver", result, MyGeometry, DragDropEvent); }
	FReply * OnDrop(FReply * result, const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FDragDropEvent *>(this, "SMultiBoxWidget.OnDrop", result, MyGeometry, DragDropEvent); }
	void OnDropExternal() { NativeCall<void>(this, "SMultiBoxWidget.OnDropExternal"); }
	FReply * OnKeyDown(FReply * result, const FGeometry * MyGeometry, const FKeyboardEvent * KeyboardEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FKeyboardEvent *>(this, "SMultiBoxWidget.OnKeyDown", result, MyGeometry, KeyboardEvent); }
	FReply * OnKeyboardFocusReceived(FReply * result, const FGeometry * MyGeometry, const FKeyboardFocusEvent * InKeyboardFocusEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FKeyboardFocusEvent *>(this, "SMultiBoxWidget.OnKeyboardFocusReceived", result, MyGeometry, InKeyboardFocusEvent); }
	void FDraggedMultiBlockPreview() { NativeCall<void>(this, "SMultiBoxWidget.FDraggedMultiBlockPreview"); }
	void SetMultiBox(TSharedRef<FMultiBox,0> InMultiBox) { NativeCall<void, TSharedRef<FMultiBox,0>>(this, "SMultiBoxWidget.SetMultiBox", InMultiBox); }
	void SetSummonedMenu(TSharedRef<SMenuAnchor,0> InMenuAnchor) { NativeCall<void, TSharedRef<SMenuAnchor,0>>(this, "SMultiBoxWidget.SetSummonedMenu", InMenuAnchor); }
	void UpdateDropAreaPreviewBlock(TSharedRef<FMultiBlock const ,0> MultiBlock, TSharedPtr<FUICommandDragDropOp,0> DragDropContent, const FGeometry * DragAreaGeometry, const FVector2D * DragPos) { NativeCall<void, TSharedRef<FMultiBlock const ,0>, TSharedPtr<FUICommandDragDropOp,0>, const FGeometry *, const FVector2D *>(this, "SMultiBoxWidget.UpdateDropAreaPreviewBlock", MultiBlock, DragDropContent, DragAreaGeometry, DragPos); }
};

