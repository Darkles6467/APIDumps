#pragma once

#include "BaseDeclarations.h"
struct FRefGraphItem
{
	char __padding[0x48L];
	FReferenceChainSearch::FReferenceChainLink& LinkField() { return *GetNativePointerField<FReferenceChainSearch::FReferenceChainLink*>(this, "FRefGraphItem.Link"); }
	TArray<FRefGraphItem *>& ParentsField() { return *GetNativePointerField<TArray<FRefGraphItem *>*>(this, "FRefGraphItem.Parents"); }
	TArray<FRefGraphItem *>& ChildrenField() { return *GetNativePointerField<TArray<FRefGraphItem *>*>(this, "FRefGraphItem.Children"); }
};

