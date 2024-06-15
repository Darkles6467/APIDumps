#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_PinEntry : UPrimalUI
{
	char __padding[0xc0L];
	FName& CloseButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_PinEntry.CloseButtonName"); }
	FName& UseLastPinButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_PinEntry.UseLastPinButtonName"); }
	FName& UseLastPinButtonLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_PinEntry.UseLastPinButtonLabelName"); }
	FName& ToggleShowLastPinButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_PinEntry.ToggleShowLastPinButtonName"); }
	FName& ToggleShowLastPinButtonLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_PinEntry.ToggleShowLastPinButtonLabelName"); }
	FName& PinLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_PinEntry.PinLabelName"); }
	FName& TitleLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_PinEntry.TitleLabelName"); }
	TArray<FName>& PinButtonsNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "UUI_PinEntry.PinButtonsNames"); }
	int& TheCustomIndexField() { return *GetNativePointerField<int*>(this, "UUI_PinEntry.TheCustomIndex"); }
	UTextBlock * PinLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_PinEntry.PinLabel"); }
	UTextBlock * TitleLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_PinEntry.TitleLabel"); }
	bool& bShowLastPinField() { return *GetNativePointerField<bool*>(this, "UUI_PinEntry.bShowLastPin"); }
	int& LastPinCodeValueField() { return *GetNativePointerField<int*>(this, "UUI_PinEntry.LastPinCodeValue"); }
	UTextBlock * UseLastPinButtonLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_PinEntry.UseLastPinButtonLabel"); }
	UTextBlock * ToggleShowLastPinButtonLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_PinEntry.ToggleShowLastPinButtonLabel"); }
	bool& bIsSettingPinField() { return *GetNativePointerField<bool*>(this, "UUI_PinEntry.bIsSettingPin"); }
	FString& PinStringField() { return *GetNativePointerField<FString*>(this, "UUI_PinEntry.PinString"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_PinEntry.AddToViewport"); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_PinEntry.ClickedButton", clickedWidget); }
	void InitPinUI(ITargetableInterface * ForTarget, bool bIsSetting, int CustomIndex) { NativeCall<void, ITargetableInterface *, bool, int>(this, "UUI_PinEntry.InitPinUI", ForTarget, bIsSetting, CustomIndex); }
	void InputPinDigit(int digitval) { NativeCall<void, int>(this, "UUI_PinEntry.InputPinDigit", digitval); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_PinEntry.Tick_Implementation", MyGeometry, InDeltaTime); }
	void UpdateLastPinButton(bool bForceUpdate) { NativeCall<void, bool>(this, "UUI_PinEntry.UpdateLastPinButton", bForceUpdate); }
	void UseLastPinUsed() { NativeCall<void>(this, "UUI_PinEntry.UseLastPinUsed"); }
};

