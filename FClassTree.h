#pragma once

#include "BaseDeclarations.h"
struct FClassTree
{
	char __padding[0x40L];
	FClassTree * ParentField() { return GetNativePointerField<FClassTree *>(this, "FClassTree.Parent"); }
	TArray<FClassTree *>& ChildrenField() { return *GetNativePointerField<TArray<FClassTree *>*>(this, "FClassTree.Children"); }
};

