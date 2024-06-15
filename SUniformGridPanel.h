#pragma once

#include "BaseDeclarations.h"
#include "SPanel.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "FMargin.h"

struct SUniformGridPanel : SPanel
{
	char __padding[0x70L];
	TPanelChildren<SUniformGridPanel::FSlot>& ChildrenField() { return *GetNativePointerField<TPanelChildren<SUniformGridPanel::FSlot>*>(this, "SUniformGridPanel.Children"); }
	TAttribute<FMargin>& SlotPaddingField() { return *GetNativePointerField<TAttribute<FMargin>*>(this, "SUniformGridPanel.SlotPadding"); }
	int& NumColumnsField() { return *GetNativePointerField<int*>(this, "SUniformGridPanel.NumColumns"); }
	int& NumRowsField() { return *GetNativePointerField<int*>(this, "SUniformGridPanel.NumRows"); }
	TAttribute<float>& MinDesiredSlotWidthField() { return *GetNativePointerField<TAttribute<float>*>(this, "SUniformGridPanel.MinDesiredSlotWidth"); }
	TAttribute<float>& MinDesiredSlotHeightField() { return *GetNativePointerField<TAttribute<float>*>(this, "SUniformGridPanel.MinDesiredSlotHeight"); }

	// Functions

	SUniformGridPanel::FSlot * AddSlot(int Column, int Row) { return NativeCall<SUniformGridPanel::FSlot *, int, int>(this, "SUniformGridPanel.AddSlot", Column, Row); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SUniformGridPanel.ComputeDesiredSize", result); }
	void Construct(const SUniformGridPanel::FArguments * InArgs) { NativeCall<void, const SUniformGridPanel::FArguments *>(this, "SUniformGridPanel.Construct", InArgs); }
	void OnArrangeChildren(const FGeometry * AllottedGeometry, FArrangedChildren * ArrangedChildren) { NativeCall<void, const FGeometry *, FArrangedChildren *>(this, "SUniformGridPanel.OnArrangeChildren", AllottedGeometry, ArrangedChildren); }
	bool RemoveSlot(const TSharedRef<SWidget,0> * SlotWidget) { return NativeCall<bool, const TSharedRef<SWidget,0> *>(this, "SUniformGridPanel.RemoveSlot", SlotWidget); }
	void SetSlotPadding(TAttribute<FMargin> InSlotPadding) { NativeCall<void, TAttribute<FMargin>>(this, "SUniformGridPanel.SetSlotPadding", InSlotPadding); }
	void FArguments() { NativeCall<void>(this, "SUniformGridPanel.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SUniformGridPanel.FArguments"); }
};

