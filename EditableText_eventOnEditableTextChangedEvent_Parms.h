#pragma once

#include "BaseDeclarations.h"
struct EditableText_eventOnEditableTextChangedEvent_Parms
{
	char __padding[0x28L];
	FText& TextField() { return *GetNativePointerField<FText*>(this, "EditableText_eventOnEditableTextChangedEvent_Parms.Text"); }
};

