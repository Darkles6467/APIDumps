#pragma once

#include "BaseDeclarations.h"
struct FFocusKnowledge
{
	char __padding[0x10L];
	TArray<FFocusKnowledge::FFocusItem>& PrioritiesField() { return *GetNativePointerField<TArray<FFocusKnowledge::FFocusItem>*>(this, "FFocusKnowledge.Priorities"); }

	// Functions

	FVector * FFocusItem(FVector * result) { return NativeCall<FVector *, FVector *>(this, "FFocusKnowledge.FFocusItem", result); }
};

