#pragma once

#include "BaseDeclarations.h"
#include "UPanelSlot.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FAnchors.h"
#include "FMargin.h"

struct UCanvasPanelSlot : UPanelSlot
{
	char __padding[0x38L];
	FAnchorData& LayoutDataField() { return *GetNativePointerField<FAnchorData*>(this, "UCanvasPanelSlot.LayoutData"); }
	bool& bAutoSizeField() { return *GetNativePointerField<bool*>(this, "UCanvasPanelSlot.bAutoSize"); }
	int& ZOrderField() { return *GetNativePointerField<int*>(this, "UCanvasPanelSlot.ZOrder"); }
	SConstraintCanvas::FSlot * SlotField() { return GetNativePointerField<SConstraintCanvas::FSlot *>(this, "UCanvasPanelSlot.Slot"); }

	// Functions

	void BuildSlot(TSharedRef<SConstraintCanvas,0> Canvas) { NativeCall<void, TSharedRef<SConstraintCanvas,0>>(this, "UCanvasPanelSlot.BuildSlot", Canvas); }
	FAnchors * GetAnchors(FAnchors * result) { return NativeCall<FAnchors *, FAnchors *>(this, "UCanvasPanelSlot.GetAnchors", result); }
	FVector2D * GetPosition(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "UCanvasPanelSlot.GetPosition", result); }
	FVector2D * GetSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "UCanvasPanelSlot.GetSize", result); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UCanvasPanelSlot.ReleaseSlateResources", bReleaseChildren); }
	void Resize(const FVector2D * Direction, const FVector2D * Amount) { NativeCall<void, const FVector2D *, const FVector2D *>(this, "UCanvasPanelSlot.Resize", Direction, Amount); }
	void SetAlignment(FVector2D InAlignment) { NativeCall<void, FVector2D>(this, "UCanvasPanelSlot.SetAlignment", InAlignment); }
	void SetAnchors(FAnchors InAnchors) { NativeCall<void, FAnchors>(this, "UCanvasPanelSlot.SetAnchors", InAnchors); }
	void SetAutoSize(bool InbAutoSize) { NativeCall<void, bool>(this, "UCanvasPanelSlot.SetAutoSize", InbAutoSize); }
	void SetDesiredPosition(FVector2D InPosition) { NativeCall<void, FVector2D>(this, "UCanvasPanelSlot.SetDesiredPosition", InPosition); }
	void SetDesiredSize(FVector2D InSize) { NativeCall<void, FVector2D>(this, "UCanvasPanelSlot.SetDesiredSize", InSize); }
	void SetMaximum(FVector2D InMaximumAnchors) { NativeCall<void, FVector2D>(this, "UCanvasPanelSlot.SetMaximum", InMaximumAnchors); }
	void SetMinimum(FVector2D InMinimumAnchors) { NativeCall<void, FVector2D>(this, "UCanvasPanelSlot.SetMinimum", InMinimumAnchors); }
	void SetOffsets(FMargin InOffset) { NativeCall<void, FMargin>(this, "UCanvasPanelSlot.SetOffsets", InOffset); }
	void SetPosition(FVector2D InPosition) { NativeCall<void, FVector2D>(this, "UCanvasPanelSlot.SetPosition", InPosition); }
	void SetSize(FVector2D InSize) { NativeCall<void, FVector2D>(this, "UCanvasPanelSlot.SetSize", InSize); }
	void SetZOrder(int InZOrder) { NativeCall<void, int>(this, "UCanvasPanelSlot.SetZOrder", InZOrder); }
	void SynchronizeProperties() { NativeCall<void>(this, "UCanvasPanelSlot.SynchronizeProperties"); }
};

