#pragma once

#include "BaseDeclarations.h"
#include "USlateWidgetStyleContainerBase.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UCheckBoxWidgetStyle : USlateWidgetStyleContainerBase
{
	char __padding[0x508L];
	FCheckBoxStyle& CheckBoxStyleField() { return *GetNativePointerField<FCheckBoxStyle*>(this, "UCheckBoxWidgetStyle.CheckBoxStyle"); }

	// Functions

};

