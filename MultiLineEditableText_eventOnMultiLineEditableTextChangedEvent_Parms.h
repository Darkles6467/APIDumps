#pragma once

#include "BaseDeclarations.h"
struct MultiLineEditableText_eventOnMultiLineEditableTextChangedEvent_Parms
{
	char __padding[0x28L];
	FText& TextField() { return *GetNativePointerField<FText*>(this, "MultiLineEditableText_eventOnMultiLineEditableTextChangedEvent_Parms.Text"); }
};

