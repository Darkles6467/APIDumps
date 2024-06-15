#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_SessionSortArrow : UPrimalUI
{
	char __padding[0x38L];
	FName& ImageNameField() { return *GetNativePointerField<FName*>(this, "UUI_SessionSortArrow.ImageName"); }
	UImage * ArrowImageField() { return GetNativePointerField<UImage *>(this, "UUI_SessionSortArrow.ArrowImage"); }
	ESortState& CurrentStateField() { return *GetNativePointerField<ESortState*>(this, "UUI_SessionSortArrow.CurrentState"); }
	bool& bEnableInputField() { return *GetNativePointerField<bool*>(this, "UUI_SessionSortArrow.bEnableInput"); }

	// Functions

	void OnSessionArrowClicked() { NativeCall<void>(this, "UUI_SessionSortArrow.OnSessionArrowClicked"); }
	void SetDownImage() { NativeCall<void>(this, "UUI_SessionSortArrow.SetDownImage"); }
	void SetUpImage() { NativeCall<void>(this, "UUI_SessionSortArrow.SetUpImage"); }
};

