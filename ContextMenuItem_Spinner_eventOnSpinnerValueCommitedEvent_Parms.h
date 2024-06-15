#pragma once

#include "BaseDeclarations.h"
struct ContextMenuItem_Spinner_eventOnSpinnerValueCommitedEvent_Parms
{
	char __padding[0x10L];
	int& InValueField() { return *GetNativePointerField<int*>(this, "ContextMenuItem_Spinner_eventOnSpinnerValueCommitedEvent_Parms.InValue"); }
	TEnumAsByte<enum ETextCommit::Type>& CommitMethodField() { return *GetNativePointerField<TEnumAsByte<enum ETextCommit::Type>*>(this, "ContextMenuItem_Spinner_eventOnSpinnerValueCommitedEvent_Parms.CommitMethod"); }
};

