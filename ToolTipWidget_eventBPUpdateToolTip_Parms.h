#pragma once

#include "BaseDeclarations.h"
struct ToolTipWidget_eventBPUpdateToolTip_Parms
{
	char __padding[0x4L];
	float& DeltaSecondsField() { return *GetNativePointerField<float*>(this, "ToolTipWidget_eventBPUpdateToolTip_Parms.DeltaSeconds"); }
};

