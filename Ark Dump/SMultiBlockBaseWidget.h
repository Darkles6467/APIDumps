#pragma once

#include "BaseDeclarations.h"
#include "IMultiBlockBaseWidget.h"
#include "SMultiBoxWidget.h"

struct SMultiBlockBaseWidget : IMultiBlockBaseWidget
{
	char __padding[0x2b8L];
	TWeakPtr<SMultiBoxWidget,0>& OwnerMultiBoxWidgetField() { return *GetNativePointerField<TWeakPtr<SMultiBoxWidget,0>*>(this, "SMultiBlockBaseWidget.OwnerMultiBoxWidget"); }
	EMultiBlockLocation::Type& LocationField() { return *GetNativePointerField<EMultiBlockLocation::Type*>(this, "SMultiBlockBaseWidget.Location"); }

	// Functions

	EMultiBlockLocation::Type GetMultiBlockLocation() { return NativeCall<EMultiBlockLocation::Type>(this, "SMultiBlockBaseWidget.GetMultiBlockLocation"); }
	void OnDragEnter(const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { NativeCall<void, const FGeometry *, const FDragDropEvent *>(this, "SMultiBlockBaseWidget.OnDragEnter", MyGeometry, DragDropEvent); }
	FReply * OnDragOver(FReply * result, const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FDragDropEvent *>(this, "SMultiBlockBaseWidget.OnDragOver", result, MyGeometry, DragDropEvent); }
	FReply * OnDrop(FReply * result, const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FDragDropEvent *>(this, "SMultiBlockBaseWidget.OnDrop", result, MyGeometry, DragDropEvent); }
	void SetMultiBlock(TSharedRef<FMultiBlock const ,0> InMultiBlock) { NativeCall<void, TSharedRef<FMultiBlock const ,0>>(this, "SMultiBlockBaseWidget.SetMultiBlock", InMultiBlock); }
	void SetMultiBlockLocation(EMultiBlockLocation::Type InLocation) { NativeCall<void, EMultiBlockLocation::Type>(this, "SMultiBlockBaseWidget.SetMultiBlockLocation", InLocation); }
	void SetOwnerMultiBoxWidget(TSharedRef<SMultiBoxWidget,0> InOwnerMultiBoxWidget) { NativeCall<void, TSharedRef<SMultiBoxWidget,0>>(this, "SMultiBlockBaseWidget.SetOwnerMultiBoxWidget", InOwnerMultiBoxWidget); }
};

