#pragma once

#include "BaseDeclarations.h"
#include "SPanel.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SWidgetSwitcher : SPanel
{
	char __padding[0x48L];
	TAttribute<int>& WidgetIndexField() { return *GetNativePointerField<TAttribute<int>*>(this, "SWidgetSwitcher.WidgetIndex"); }

	// Functions

	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SWidgetSwitcher.ComputeDesiredSize", result); }
	void Construct(const SWidgetSwitcher::FArguments * InArgs) { NativeCall<void, const SWidgetSwitcher::FArguments *>(this, "SWidgetSwitcher.Construct", InArgs); }
	int FOneDynamicChild() { return NativeCall<int>(this, "SWidgetSwitcher.FOneDynamicChild"); }
	void OnArrangeChildren(const FGeometry * AllottedGeometry, FArrangedChildren * ArrangedChildren) { NativeCall<void, const FGeometry *, FArrangedChildren *>(this, "SWidgetSwitcher.OnArrangeChildren", AllottedGeometry, ArrangedChildren); }
	int RemoveSlot(TSharedRef<SWidget,0> WidgetToRemove) { return NativeCall<int, TSharedRef<SWidget,0>>(this, "SWidgetSwitcher.RemoveSlot", WidgetToRemove); }
	void SetActiveWidgetIndex(int Index) { NativeCall<void, int>(this, "SWidgetSwitcher.SetActiveWidgetIndex", Index); }
	void FArguments() { NativeCall<void>(this, "SWidgetSwitcher.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SWidgetSwitcher.FArguments"); }
};

