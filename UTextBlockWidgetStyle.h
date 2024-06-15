#pragma once

#include "BaseDeclarations.h"
#include "USlateWidgetStyleContainerBase.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UTextBlockWidgetStyle : USlateWidgetStyleContainerBase
{
	char __padding[0x118L];
	FTextBlockStyle& TextBlockStyleField() { return *GetNativePointerField<FTextBlockStyle*>(this, "UTextBlockWidgetStyle.TextBlockStyle"); }

	// Functions

};

