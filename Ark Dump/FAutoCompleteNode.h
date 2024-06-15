#pragma once

#include "BaseDeclarations.h"
struct FAutoCompleteNode
{
	char __padding[0x28L];
	int& IndexCharField() { return *GetNativePointerField<int*>(this, "FAutoCompleteNode.IndexChar"); }
	TArray<int>& AutoCompleteListIndicesField() { return *GetNativePointerField<TArray<int>*>(this, "FAutoCompleteNode.AutoCompleteListIndices"); }
	TArray<FAutoCompleteNode *>& ChildNodesField() { return *GetNativePointerField<TArray<FAutoCompleteNode *>*>(this, "FAutoCompleteNode.ChildNodes"); }

	// Functions

};

