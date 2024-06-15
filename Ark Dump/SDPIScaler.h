#pragma once

#include "BaseDeclarations.h"
#include "SPanel.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SDPIScaler : SPanel
{
	char __padding[0x60L];
	TAttribute<float>& DPIScaleField() { return *GetNativePointerField<TAttribute<float>*>(this, "SDPIScaler.DPIScale"); }

	// Functions

	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SDPIScaler.ComputeDesiredSize", result); }
	void Construct(const SDPIScaler::FArguments * InArgs) { NativeCall<void, const SDPIScaler::FArguments *>(this, "SDPIScaler.Construct", InArgs); }
	void OnArrangeChildren(const FGeometry * AllottedGeometry, FArrangedChildren * ArrangedChildren) { NativeCall<void, const FGeometry *, FArrangedChildren *>(this, "SDPIScaler.OnArrangeChildren", AllottedGeometry, ArrangedChildren); }
	void FArguments() { NativeCall<void>(this, "SDPIScaler.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SDPIScaler.FArguments"); }
	SDPIScaler::FArguments * FArguments(const TSharedRef<SWidget,0> InChild) { return NativeCall<SDPIScaler::FArguments *, const TSharedRef<SWidget,0>>(this, "SDPIScaler.FArguments", InChild); }
};

