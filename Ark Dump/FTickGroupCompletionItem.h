#pragma once

#include "BaseDeclarations.h"
struct FTickGroupCompletionItem
{
	char __padding[0x10L];
	ETickingGroup& ActualTickGroupField() { return *GetNativePointerField<ETickingGroup*>(this, "FTickGroupCompletionItem.ActualTickGroup"); }
	TRefCountPtr<FGraphEvent>& CompletionEventField() { return *GetNativePointerField<TRefCountPtr<FGraphEvent>*>(this, "FTickGroupCompletionItem.CompletionEvent"); }
};

