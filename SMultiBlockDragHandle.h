#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "SMultiBoxWidget.h"

struct SMultiBlockDragHandle : SCompoundWidget
{
	char __padding[0x28L];
	TWeakPtr<SMultiBoxWidget,0>& BaseWidgetField() { return *GetNativePointerField<TWeakPtr<SMultiBoxWidget,0>*>(this, "SMultiBlockDragHandle.BaseWidget"); }
	FName& MultiBoxCustomizationNameField() { return *GetNativePointerField<FName*>(this, "SMultiBlockDragHandle.MultiBoxCustomizationName"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SMultiBlockDragHandle.FArguments"); }
	void Construct(const SMultiBlockDragHandle::FArguments * InArgs, TSharedRef<SMultiBoxWidget,0> InBaseWidget, TSharedRef<FMultiBlock const ,0> InBlock, FName CustomizationName) { NativeCall<void, const SMultiBlockDragHandle::FArguments *, TSharedRef<SMultiBoxWidget,0>, TSharedRef<FMultiBlock const ,0>, FName>(this, "SMultiBlockDragHandle.Construct", InArgs, InBaseWidget, InBlock, CustomizationName); }
	FReply * OnDragDetected(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SMultiBlockDragHandle.OnDragDetected", result, MyGeometry, MouseEvent); }
	void OnDragEnter(const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { NativeCall<void, const FGeometry *, const FDragDropEvent *>(this, "SMultiBlockDragHandle.OnDragEnter", MyGeometry, DragDropEvent); }
	FReply * OnDragOver(FReply * result, const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FDragDropEvent *>(this, "SMultiBlockDragHandle.OnDragOver", result, MyGeometry, DragDropEvent); }
	FReply * OnDrop(FReply * result, const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FDragDropEvent *>(this, "SMultiBlockDragHandle.OnDrop", result, MyGeometry, DragDropEvent); }
	FReply * OnMouseButtonDown(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SMultiBlockDragHandle.OnMouseButtonDown", result, MyGeometry, MouseEvent); }
};

