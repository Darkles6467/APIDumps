#pragma once

#include "BaseDeclarations.h"
struct MultiLineEditableText_eventOnMultiLineEditableTextCommittedEvent_Parms
{
	char __padding[0x30L];
	FText& TextField() { return *GetNativePointerField<FText*>(this, "MultiLineEditableText_eventOnMultiLineEditableTextCommittedEvent_Parms.Text"); }
	TEnumAsByte<enum ETextCommit::Type>& CommitMethodField() { return *GetNativePointerField<TEnumAsByte<enum ETextCommit::Type>*>(this, "MultiLineEditableText_eventOnMultiLineEditableTextCommittedEvent_Parms.CommitMethod"); }
};

