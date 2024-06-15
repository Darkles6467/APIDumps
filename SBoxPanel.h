#pragma once

#include "BaseDeclarations.h"
#include "SPanel.h"
#include "SWidget.h"

struct SBoxPanel : SPanel
{
	char __padding[0x20L];
	const EOrientation& OrientationField() { return *GetNativePointerField<const EOrientation*>(this, "SBoxPanel.Orientation"); }

	// Functions

	void FSlot() { NativeCall<void>(this, "SBoxPanel.FSlot"); }
	void FSlot() { NativeCall<void>(this, "SBoxPanel.FSlot"); }
	void ClearChildren() { NativeCall<void>(this, "SBoxPanel.ClearChildren"); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SBoxPanel.ComputeDesiredSize", result); }
	void OnArrangeChildren(const FGeometry * AllottedGeometry, FArrangedChildren * ArrangedChildren) { NativeCall<void, const FGeometry *, FArrangedChildren *>(this, "SBoxPanel.OnArrangeChildren", AllottedGeometry, ArrangedChildren); }
	int RemoveSlot(const TSharedRef<SWidget,0> * SlotWidget) { return NativeCall<int, const TSharedRef<SWidget,0> *>(this, "SBoxPanel.RemoveSlot", SlotWidget); }
};

