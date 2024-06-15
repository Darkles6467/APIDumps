#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_PrimalTest : UPrimalUI
{
	char __padding[0x20L];
	FString& VerticalBoxNameField() { return *GetNativePointerField<FString*>(this, "UUI_PrimalTest.VerticalBoxName"); }
	UVerticalBox * VBoxField() { return GetNativePointerField<UVerticalBox *>(this, "UUI_PrimalTest.VBox"); }

	// Functions

};

