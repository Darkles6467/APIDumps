#pragma once

#include "BaseDeclarations.h"
#include "USlateWidgetStyleContainerBase.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UEditableTextWidgetStyle : USlateWidgetStyleContainerBase
{
	char __padding[0x230L];
	FEditableTextStyle& EditableTextStyleField() { return *GetNativePointerField<FEditableTextStyle*>(this, "UEditableTextWidgetStyle.EditableTextStyle"); }

	// Functions

};

