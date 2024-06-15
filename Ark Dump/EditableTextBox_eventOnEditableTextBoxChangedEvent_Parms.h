#pragma once

#include "BaseDeclarations.h"
struct EditableTextBox_eventOnEditableTextBoxChangedEvent_Parms
{
	char __padding[0x28L];
	FText& TextField() { return *GetNativePointerField<FText*>(this, "EditableTextBox_eventOnEditableTextBoxChangedEvent_Parms.Text"); }
};

