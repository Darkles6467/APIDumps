#pragma once

#include "BaseDeclarations.h"
struct MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms
{
	char __padding[0x30L];
	FText& TextField() { return *GetNativePointerField<FText*>(this, "MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms.Text"); }
	TEnumAsByte<enum ETextCommit::Type>& CommitMethodField() { return *GetNativePointerField<TEnumAsByte<enum ETextCommit::Type>*>(this, "MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms.CommitMethod"); }
};

