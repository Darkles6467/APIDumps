#pragma once

#include "BaseDeclarations.h"
#include "UBaseSelectableButtonWidget.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UTribeManagerListButton : UBaseSelectableButtonWidget
{
	char __padding[0x18L];
	UCustomButtonWidget * ButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UTribeManagerListButton.Button"); }
	UTextBlock * GroupNameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UTribeManagerListButton.GroupNameLabel"); }

	// Functions

	void ClickedSecondaryButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UTribeManagerListButton.ClickedSecondaryButton", clickedWidget); }
	FString * GetNameString(FString * result) { return NativeCall<FString *, FString *>(this, "UTribeManagerListButton.GetNameString", result); }
	void InitializeMe() { NativeCall<void>(this, "UTribeManagerListButton.InitializeMe"); }
	void SetNameString(FString TooltipText) { NativeCall<void, FString>(this, "UTribeManagerListButton.SetNameString", TooltipText); }
	bool IsSelected() { return NativeCall<bool>(this, "UTribeManagerListButton.IsSelected"); }
};

