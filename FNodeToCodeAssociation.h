#pragma once

#include "BaseDeclarations.h"
struct FNodeToCodeAssociation
{
	char __padding[0x14L];
	TWeakObjectPtr<UFunction>& ScopeField() { return *GetNativePointerField<TWeakObjectPtr<UFunction>*>(this, "FNodeToCodeAssociation.Scope"); }
	int& OffsetField() { return *GetNativePointerField<int*>(this, "FNodeToCodeAssociation.Offset"); }

	// Functions

};

