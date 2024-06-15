#pragma once

#include "BaseDeclarations.h"
#include "USlateWidgetStyleContainerBase.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UScrollBarWidgetStyle : USlateWidgetStyleContainerBase
{
	char __padding[0x260L];
	FScrollBarStyle& ScrollBarStyleField() { return *GetNativePointerField<FScrollBarStyle*>(this, "UScrollBarWidgetStyle.ScrollBarStyle"); }

	// Functions

};

