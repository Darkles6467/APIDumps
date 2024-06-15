#pragma once

#include "BaseDeclarations.h"
struct FReferenceChainSearch
{
	char __padding[0x70L];
	TArray<FReferenceChainSearch::FReferenceChain>& ReferencersField() { return *GetNativePointerField<TArray<FReferenceChainSearch::FReferenceChain>*>(this, "FReferenceChainSearch.Referencers"); }
	unsigned int& SearchModeField() { return *GetNativePointerField<unsigned int*>(this, "FReferenceChainSearch.SearchMode"); }
};

