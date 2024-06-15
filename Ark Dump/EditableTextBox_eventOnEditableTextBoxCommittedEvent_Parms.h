#pragma once

#include "BaseDeclarations.h"
struct EditableTextBox_eventOnEditableTextBoxCommittedEvent_Parms
{
	char __padding[0x30L];
	FText& TextField() { return *GetNativePointerField<FText*>(this, "EditableTextBox_eventOnEditableTextBoxCommittedEvent_Parms.Text"); }
	TEnumAsByte<enum ETextCommit::Type>& CommitMethodField() { return *GetNativePointerField<TEnumAsByte<enum ETextCommit::Type>*>(this, "EditableTextBox_eventOnEditableTextBoxCommittedEvent_Parms.CommitMethod"); }
};

