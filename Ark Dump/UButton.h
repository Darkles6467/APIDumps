#pragma once

#include "BaseDeclarations.h"
#include "UContentWidget.h"

struct UButton : UContentWidget
{
	char __padding[0x2f0L];
	USlateWidgetStyleAsset * Style_DEPRECATEDField() { return GetNativePointerField<USlateWidgetStyleAsset *>(this, "UButton.Style_DEPRECATED"); }
	FButtonStyle& WidgetStyleField() { return *GetNativePointerField<FButtonStyle*>(this, "UButton.WidgetStyle"); }
	bool& bUseDisabledStyleField() { return *GetNativePointerField<bool*>(this, "UButton.bUseDisabledStyle"); }
	FLinearColor& ColorAndOpacityField() { return *GetNativePointerField<FLinearColor*>(this, "UButton.ColorAndOpacity"); }
	FLinearColor& BackgroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "UButton.BackgroundColor"); }
	TEnumAsByte<enum EButtonClickMethod::Type>& ClickMethodField() { return *GetNativePointerField<TEnumAsByte<enum EButtonClickMethod::Type>*>(this, "UButton.ClickMethod"); }
	TEnumAsByte<enum EButtonTouchMethod::Type>& TouchMethodField() { return *GetNativePointerField<TEnumAsByte<enum EButtonTouchMethod::Type>*>(this, "UButton.TouchMethod"); }

	// Functions

	FString * GetButtonString(FString * result) { return NativeCall<FString *, FString *>(this, "UButton.GetButtonString", result); }
	bool IsPressed() { return NativeCall<bool>(this, "UButton.IsPressed"); }
	void MimickClicked(bool bFromGamepad) { NativeCall<void, bool>(this, "UButton.MimickClicked", bFromGamepad); }
	void OnSlotAdded(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UButton.OnSlotAdded", Slot); }
	void OnSlotRemoved(UPanelSlot * Slot) { NativeCall<void, UPanelSlot *>(this, "UButton.OnSlotRemoved", Slot); }
	void PostLoad() { NativeCall<void>(this, "UButton.PostLoad"); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UButton.ReleaseSlateResources", bReleaseChildren); }
	void SetBackgroundColor(FLinearColor Color) { NativeCall<void, FLinearColor>(this, "UButton.SetBackgroundColor", Color); }
	void SetButtonString(const FString * newString) { NativeCall<void, const FString *>(this, "UButton.SetButtonString", newString); }
	void SetColorAndOpacity(FLinearColor Color) { NativeCall<void, FLinearColor>(this, "UButton.SetColorAndOpacity", Color); }
	FReply * SlateHandleClicked(FReply * result) { return NativeCall<FReply *, FReply *>(this, "UButton.SlateHandleClicked", result); }
	FReply * SlateHandleSecondaryClicked(FReply * result) { return NativeCall<FReply *, FReply *>(this, "UButton.SlateHandleSecondaryClicked", result); }
	void SynchronizeProperties() { NativeCall<void>(this, "UButton.SynchronizeProperties"); }
};

