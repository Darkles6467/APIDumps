#pragma once

#include "BaseDeclarations.h"
#include "SPanel.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "FLayoutGeometry.h"

struct SSplitter : SPanel
{
	enum ESizeRule
	{
		SizeToContent = 0x0,
		FractionOfParent = 0x1,
	};

	char __padding[0x40L];
	TPanelChildren<SSplitter::FSlot>& ChildrenField() { return *GetNativePointerField<TPanelChildren<SSplitter::FSlot>*>(this, "SSplitter.Children"); }
	int& HoveredHandleIndexField() { return *GetNativePointerField<int*>(this, "SSplitter.HoveredHandleIndex"); }
	bool& bIsResizingField() { return *GetNativePointerField<bool*>(this, "SSplitter.bIsResizing"); }
	EOrientation& OrientationField() { return *GetNativePointerField<EOrientation*>(this, "SSplitter.Orientation"); }
	ESplitterResizeMode::Type& ResizeModeField() { return *GetNativePointerField<ESplitterResizeMode::Type*>(this, "SSplitter.ResizeMode"); }
	float& PhysicalSplitterHandleSizeField() { return *GetNativePointerField<float*>(this, "SSplitter.PhysicalSplitterHandleSize"); }
	float& HitDetectionSplitterHandleSizeField() { return *GetNativePointerField<float*>(this, "SSplitter.HitDetectionSplitterHandleSize"); }
	const FSplitterStyle * StyleField() { return GetNativePointerField<const FSplitterStyle *>(this, "SSplitter.Style"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SSplitter.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SSplitter.FArguments"); }
	void SetOrientation(EHorizontalAlignment HAlign) { NativeCall<void, EHorizontalAlignment>(this, "SSplitter.SetOrientation", HAlign); }
	void FSlot() { NativeCall<void>(this, "SSplitter.FSlot"); }
	SSplitter::FSlot * AddSlot(int AtIndex) { return NativeCall<SSplitter::FSlot *, int>(this, "SSplitter.AddSlot", AtIndex); }
	TArray<FLayoutGeometry> * ArrangeChildrenForLayout(TArray<FLayoutGeometry> * result, const FGeometry * AllottedGeometry) { return NativeCall<TArray<FLayoutGeometry> *, TArray<FLayoutGeometry> *, const FGeometry *>(this, "SSplitter.ArrangeChildrenForLayout", result, AllottedGeometry); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SSplitter.ComputeDesiredSize", result); }
	void Construct(const SSplitter::FArguments * InArgs) { NativeCall<void, const SSplitter::FArguments *>(this, "SSplitter.Construct", InArgs); }
	static void FindAllResizeableSlotsAfterHandle(int DraggedHandle, const TPanelChildren<SSplitter::FSlot> * Children, TArray<int> * OutSlotIndicies) { NativeCall<void, int, const TPanelChildren<SSplitter::FSlot> *, TArray<int> *>(nullptr, "SSplitter.FindAllResizeableSlotsAfterHandle", DraggedHandle, Children, OutSlotIndicies); }
	static int FindResizeableSlotAfterHandle(int DraggedHandle, const TPanelChildren<SSplitter::FSlot> * Children) { return NativeCall<int, int, const TPanelChildren<SSplitter::FSlot> *>(nullptr, "SSplitter.FindResizeableSlotAfterHandle", DraggedHandle, Children); }
	static int FindResizeableSlotBeforeHandle(int DraggedHandle, const TPanelChildren<SSplitter::FSlot> * Children) { return NativeCall<int, int, const TPanelChildren<SSplitter::FSlot> *>(nullptr, "SSplitter.FindResizeableSlotBeforeHandle", DraggedHandle, Children); }
	EOrientation GetOrientation() { return NativeCall<EOrientation>(this, "SSplitter.GetOrientation"); }
	void OnArrangeChildren(const FGeometry * AllottedGeometry, FArrangedChildren * ArrangedChildren) { NativeCall<void, const FGeometry *, FArrangedChildren *>(this, "SSplitter.OnArrangeChildren", AllottedGeometry, ArrangedChildren); }
	FCursorReply * OnCursorQuery(FCursorReply * result, const FGeometry * MyGeometry, const FPointerEvent * CursorEvent) { return NativeCall<FCursorReply *, FCursorReply *, const FGeometry *, const FPointerEvent *>(this, "SSplitter.OnCursorQuery", result, MyGeometry, CursorEvent); }
	FReply * OnMouseButtonDown(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SSplitter.OnMouseButtonDown", result, MyGeometry, MouseEvent); }
	FReply * OnMouseButtonUp(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SSplitter.OnMouseButtonUp", result, MyGeometry, MouseEvent); }
	void OnMouseLeave(const FPointerEvent * MouseEvent) { NativeCall<void, const FPointerEvent *>(this, "SSplitter.OnMouseLeave", MouseEvent); }
	FReply * OnMouseMove(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SSplitter.OnMouseMove", result, MyGeometry, MouseEvent); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SSplitter.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	void RemoveAt(int IndexToRemove) { NativeCall<void, int>(this, "SSplitter.RemoveAt", IndexToRemove); }
	SSplitter::FSlot * SlotAt(int SlotIndex) { return NativeCall<SSplitter::FSlot *, int>(this, "SSplitter.SlotAt", SlotIndex); }
};

