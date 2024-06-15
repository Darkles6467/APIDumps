#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_SavingOverlay : UPrimalUI
{
	char __padding[0x8L];
	UTextBlock * FPSValueField() { return GetNativePointerField<UTextBlock *>(this, "UUI_SavingOverlay.FPSValue"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_SavingOverlay.AddToViewport"); }
};

