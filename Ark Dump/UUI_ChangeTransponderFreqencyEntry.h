#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_ChangeTransponderFreqencyEntry : UPrimalUI
{
	char __padding[0x30L];
	FName& CloseButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_ChangeTransponderFreqencyEntry.CloseButtonName"); }
	FName& FrequencyNameTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ChangeTransponderFreqencyEntry.FrequencyNameTextBoxName"); }
	FString& LastFrequencyStringField() { return *GetNativePointerField<FString*>(this, "UUI_ChangeTransponderFreqencyEntry.LastFrequencyString"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_ChangeTransponderFreqencyEntry.AddToViewport"); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_ChangeTransponderFreqencyEntry.ClickedButton", clickedWidget); }
	void HandleFilterStringTextChanged(const FText * NewText) { NativeCall<void, const FText *>(this, "UUI_ChangeTransponderFreqencyEntry.HandleFilterStringTextChanged", NewText); }
};

