#pragma once

#include "BaseDeclarations.h"
#include "SMultiBlockBaseWidget.h"
#include "IMultiBlockBaseWidget.h"

struct SButtonRowBlock : SMultiBlockBaseWidget
{
	char __padding[0x10L];
	TSharedPtr<SCheckBox,0>& ToggleButtonField() { return *GetNativePointerField<TSharedPtr<SCheckBox,0>*>(this, "SButtonRowBlock.ToggleButton"); }
};

