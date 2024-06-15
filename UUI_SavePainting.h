#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_SavePainting : UPrimalUI
{
	char __padding[0x58L];
	FName& CloseButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_SavePainting.CloseButtonName"); }
	FName& SaveButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_SavePainting.SaveButtonName"); }
	FName& FileNameTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_SavePainting.FileNameTextBoxName"); }
	FName& ErrorTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_SavePainting.ErrorTextBoxName"); }
	FString& LastNameStringField() { return *GetNativePointerField<FString*>(this, "UUI_SavePainting.LastNameString"); }
	UTextBlock * ErrorTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_SavePainting.ErrorTextBlock"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_SavePainting.AddToViewport"); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_SavePainting.ClickedButton", clickedWidget); }
	void HandleFilterStringTextChanged(const FText * NewText) { NativeCall<void, const FText *>(this, "UUI_SavePainting.HandleFilterStringTextChanged", NewText); }
	void HandleFilterStringTextCommitted(const FText * NewText, ETextCommit::Type CommitMethod) { NativeCall<void, const FText *, ETextCommit::Type>(this, "UUI_SavePainting.HandleFilterStringTextCommitted", NewText, CommitMethod); }
};

