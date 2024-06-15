#pragma once

#include "BaseDeclarations.h"
#include "UContentWidget.h"
#include "UPanelWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UCheckBox : UContentWidget
{
	char __padding[0x5c8L];
	FCheckBoxStyle& WidgetStyleField() { return *GetNativePointerField<FCheckBoxStyle*>(this, "UCheckBox.WidgetStyle"); }
	USlateWidgetStyleAsset * Style_DEPRECATEDField() { return GetNativePointerField<USlateWidgetStyleAsset *>(this, "UCheckBox.Style_DEPRECATED"); }
	USlateBrushAsset * UncheckedImage_DEPRECATEDField() { return GetNativePointerField<USlateBrushAsset *>(this, "UCheckBox.UncheckedImage_DEPRECATED"); }
	USlateBrushAsset * UncheckedHoveredImage_DEPRECATEDField() { return GetNativePointerField<USlateBrushAsset *>(this, "UCheckBox.UncheckedHoveredImage_DEPRECATED"); }
	USlateBrushAsset * UncheckedPressedImage_DEPRECATEDField() { return GetNativePointerField<USlateBrushAsset *>(this, "UCheckBox.UncheckedPressedImage_DEPRECATED"); }
	USlateBrushAsset * CheckedImage_DEPRECATEDField() { return GetNativePointerField<USlateBrushAsset *>(this, "UCheckBox.CheckedImage_DEPRECATED"); }
	USlateBrushAsset * CheckedHoveredImage_DEPRECATEDField() { return GetNativePointerField<USlateBrushAsset *>(this, "UCheckBox.CheckedHoveredImage_DEPRECATED"); }
	USlateBrushAsset * CheckedPressedImage_DEPRECATEDField() { return GetNativePointerField<USlateBrushAsset *>(this, "UCheckBox.CheckedPressedImage_DEPRECATED"); }
	USlateBrushAsset * UndeterminedImage_DEPRECATEDField() { return GetNativePointerField<USlateBrushAsset *>(this, "UCheckBox.UndeterminedImage_DEPRECATED"); }
	USlateBrushAsset * UndeterminedHoveredImage_DEPRECATEDField() { return GetNativePointerField<USlateBrushAsset *>(this, "UCheckBox.UndeterminedHoveredImage_DEPRECATED"); }
	USlateBrushAsset * UndeterminedPressedImage_DEPRECATEDField() { return GetNativePointerField<USlateBrushAsset *>(this, "UCheckBox.UndeterminedPressedImage_DEPRECATED"); }
	TEnumAsByte<enum ESlateCheckBoxState::Type>& CheckedStateField() { return *GetNativePointerField<TEnumAsByte<enum ESlateCheckBoxState::Type>*>(this, "UCheckBox.CheckedState"); }
	TEnumAsByte<enum EHorizontalAlignment>& HorizontalAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EHorizontalAlignment>*>(this, "UCheckBox.HorizontalAlignment"); }
	FMargin& PaddingField() { return *GetNativePointerField<FMargin*>(this, "UCheckBox.Padding"); }
	FSlateColor& BorderBackgroundColorField() { return *GetNativePointerField<FSlateColor*>(this, "UCheckBox.BorderBackgroundColor"); }
	TSharedPtr<SCheckBox,0>& MyCheckboxField() { return *GetNativePointerField<TSharedPtr<SCheckBox,0>*>(this, "UCheckBox.MyCheckbox"); }

	// Functions

	ESlateCheckBoxState::Type GetCheckedState() { return NativeCall<ESlateCheckBoxState::Type>(this, "UCheckBox.GetCheckedState"); }
	bool IsChecked() { return NativeCall<bool>(this, "UCheckBox.IsChecked"); }
	bool IsPressed() { return NativeCall<bool>(this, "UCheckBox.IsPressed"); }
	void OnSlotAdded(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UCheckBox.OnSlotAdded", Slot); }
	void OnSlotRemoved(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UCheckBox.OnSlotRemoved", Slot); }
	void PostLoad() { NativeCall<void>(this, "UCheckBox.PostLoad"); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UCheckBox.ReleaseSlateResources", bReleaseChildren); }
	void SetCheckedState(ESlateCheckBoxState::Type InCheckedState) { NativeCall<void, ESlateCheckBoxState::Type>(this, "UCheckBox.SetCheckedState", InCheckedState); }
	void SetIsChecked(bool InIsChecked) { NativeCall<void, bool>(this, "UCheckBox.SetIsChecked", InIsChecked); }
	void SlateOnCheckStateChangedCallback(ESlateCheckBoxState::Type NewState) { NativeCall<void, ESlateCheckBoxState::Type>(this, "UCheckBox.SlateOnCheckStateChangedCallback", NewState); }
	void SynchronizeProperties() { NativeCall<void>(this, "UCheckBox.SynchronizeProperties"); }
};

