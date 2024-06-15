#pragma once

#include "BaseDeclarations.h"
struct FDependsNode
{
	char __padding[0xa8L];
	FName& PackageNameField() { return *GetNativePointerField<FName*>(this, "FDependsNode.PackageName"); }

	// Functions

	void GetDependencies(TArray<FDependsNode *> * OutDependencies) { NativeCall<void, TArray<FDependsNode *> *>(this, "FDependsNode.GetDependencies", OutDependencies); }
	void GetReferencers(TArray<FDependsNode *> * OutReferencers) { NativeCall<void, TArray<FDependsNode *> *>(this, "FDependsNode.GetReferencers", OutReferencers); }
};

