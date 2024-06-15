#pragma once

#include "BaseDeclarations.h"
#include "USlateWidgetStyleContainerBase.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UComboButtonWidgetStyle : USlateWidgetStyleContainerBase
{
	char __padding[0x350L];
	FComboButtonStyle& ComboButtonStyleField() { return *GetNativePointerField<FComboButtonStyle*>(this, "UComboButtonWidgetStyle.ComboButtonStyle"); }

	// Functions

};

