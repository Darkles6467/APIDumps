#pragma once

#include "BaseDeclarations.h"
#include "SBorder.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "SDockingNode.h"

struct SDockingTarget : SBorder
{
	char __padding[0x28L];
	bool& bIsDragHoveredField() { return *GetNativePointerField<bool*>(this, "SDockingTarget.bIsDragHovered"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SDockingTarget.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SDockingTarget.FArguments"); }
	void Construct(const SDockingTarget::FArguments * InArgs) { NativeCall<void, const SDockingTarget::FArguments *>(this, "SDockingTarget.Construct", InArgs); }
	void OnDragEnter(const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { NativeCall<void, const FGeometry *, const FDragDropEvent *>(this, "SDockingTarget.OnDragEnter", MyGeometry, DragDropEvent); }
	void OnDragLeave(const FDragDropEvent * DragDropEvent) { NativeCall<void, const FDragDropEvent *>(this, "SDockingTarget.OnDragLeave", DragDropEvent); }
	FReply * OnDrop(FReply * result, const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FDragDropEvent *>(this, "SDockingTarget.OnDrop", result, MyGeometry, DragDropEvent); }
	SDockingTarget::FArguments * FArguments(TSharedPtr<SDockingNode,0> InArg) { return NativeCall<SDockingTarget::FArguments *, TSharedPtr<SDockingNode,0>>(this, "SDockingTarget.FArguments", InArg); }
};

