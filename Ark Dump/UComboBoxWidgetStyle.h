#pragma once

#include "BaseDeclarations.h"
#include "USlateWidgetStyleContainerBase.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UComboBoxWidgetStyle : USlateWidgetStyleContainerBase
{
	char __padding[0x398L];
	FComboBoxStyle& ComboBoxStyleField() { return *GetNativePointerField<FComboBoxStyle*>(this, "UComboBoxWidgetStyle.ComboBoxStyle"); }

	// Functions

};

