#pragma once

#include "BaseDeclarations.h"
#include "USlateWidgetStyleContainerBase.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UProgressWidgetStyle : USlateWidgetStyleContainerBase
{
	char __padding[0x170L];
	FProgressBarStyle& ProgressBarStyleField() { return *GetNativePointerField<FProgressBarStyle*>(this, "UProgressWidgetStyle.ProgressBarStyle"); }

	// Functions

};

