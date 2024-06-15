#pragma once

#include "BaseDeclarations.h"
#include "USlateWidgetStyleContainerBase.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USpinBoxWidgetStyle : USlateWidgetStyleContainerBase
{
	char __padding[0x298L];
	FSpinBoxStyle& SpinBoxStyleField() { return *GetNativePointerField<FSpinBoxStyle*>(this, "USpinBoxWidgetStyle.SpinBoxStyle"); }

	// Functions

};

