#pragma once

#include "BaseDeclarations.h"
#include "USlateWidgetStyleContainerBase.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UEditableTextBoxWidgetStyle : USlateWidgetStyleContainerBase
{
	char __padding[0x510L];
	FEditableTextBoxStyle& EditableTextBoxStyleField() { return *GetNativePointerField<FEditableTextBoxStyle*>(this, "UEditableTextBoxWidgetStyle.EditableTextBoxStyle"); }

	// Functions

};

