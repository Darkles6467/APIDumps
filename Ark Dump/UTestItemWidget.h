#pragma once

#include "BaseDeclarations.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UTestItemWidget : UUserWidget
{
	char __padding[0x10L];
	FString& ItemLabelNameField() { return *GetNativePointerField<FString*>(this, "UTestItemWidget.ItemLabelName"); }

	// Functions

};

