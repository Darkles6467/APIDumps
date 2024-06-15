#pragma once

#include "BaseDeclarations.h"
#include "USlateWidgetStyleContainerBase.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UButtonWidgetStyle : USlateWidgetStyleContainerBase
{
	char __padding[0x248L];
	FButtonStyle& ButtonStyleField() { return *GetNativePointerField<FButtonStyle*>(this, "UButtonWidgetStyle.ButtonStyle"); }

	// Functions

};

