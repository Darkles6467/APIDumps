#pragma once

#include "BaseDeclarations.h"
#include "USlateWidgetStyleContainerBase.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UScrollBoxWidgetStyle : USlateWidgetStyleContainerBase
{
	char __padding[0x1e8L];
	FScrollBoxStyle& ScrollBoxStyleField() { return *GetNativePointerField<FScrollBoxStyle*>(this, "UScrollBoxWidgetStyle.ScrollBoxStyle"); }

	// Functions

};

