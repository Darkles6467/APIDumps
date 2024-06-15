#pragma once

#include "BaseDeclarations.h"
struct FBTLoopDecoratorMemory
{
	char __padding[0x8L];
	int& SearchIdField() { return *GetNativePointerField<int*>(this, "FBTLoopDecoratorMemory.SearchId"); }
	char& RemainingExecutionsField() { return *GetNativePointerField<char*>(this, "FBTLoopDecoratorMemory.RemainingExecutions"); }
};

