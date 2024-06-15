#pragma once

#include "BaseDeclarations.h"
#include "SPanel.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SScrollBarTrack : SPanel
{
	char __padding[0x28L];
	TPanelChildren<SScrollBarTrack::FSlot>& ChildrenField() { return *GetNativePointerField<TPanelChildren<SScrollBarTrack::FSlot>*>(this, "SScrollBarTrack.Children"); }
	float& OffsetFractionField() { return *GetNativePointerField<float*>(this, "SScrollBarTrack.OffsetFraction"); }
	float& ThumbSizeFractionField() { return *GetNativePointerField<float*>(this, "SScrollBarTrack.ThumbSizeFraction"); }
	float& MinThumbSizeField() { return *GetNativePointerField<float*>(this, "SScrollBarTrack.MinThumbSize"); }
	EOrientation& OrientationField() { return *GetNativePointerField<EOrientation*>(this, "SScrollBarTrack.Orientation"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SScrollBarTrack.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SScrollBarTrack.FArguments"); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SScrollBarTrack.ComputeDesiredSize", result); }
	void Construct(const SScrollBarTrack::FArguments * InArgs) { NativeCall<void, const SScrollBarTrack::FArguments *>(this, "SScrollBarTrack.Construct", InArgs); }
	bool IsNeeded() { return NativeCall<bool>(this, "SScrollBarTrack.IsNeeded"); }
	void OnArrangeChildren(const FGeometry * AllottedGeometry, FArrangedChildren * ArrangedChildren) { NativeCall<void, const FGeometry *, FArrangedChildren *>(this, "SScrollBarTrack.OnArrangeChildren", AllottedGeometry, ArrangedChildren); }
	void SetSizes(float InThumbOffsetFraction, float InThumbSizeFraction) { NativeCall<void, float, float>(this, "SScrollBarTrack.SetSizes", InThumbOffsetFraction, InThumbSizeFraction); }
};

