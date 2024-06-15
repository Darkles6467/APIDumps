#pragma once

#include "BaseDeclarations.h"
struct EditableText_eventOnEditableTextCommittedEvent_Parms
{
	char __padding[0x30L];
	FText& TextField() { return *GetNativePointerField<FText*>(this, "EditableText_eventOnEditableTextCommittedEvent_Parms.Text"); }
	TEnumAsByte<enum ETextCommit::Type>& CommitMethodField() { return *GetNativePointerField<TEnumAsByte<enum ETextCommit::Type>*>(this, "EditableText_eventOnEditableTextCommittedEvent_Parms.CommitMethod"); }
};

