#pragma once

#include "BaseDeclarations.h"
struct MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxChangedEvent_Parms
{
	char __padding[0x28L];
	FText& TextField() { return *GetNativePointerField<FText*>(this, "MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxChangedEvent_Parms.Text"); }
};

