#pragma once

#include "BaseDeclarations.h"
struct FProxyCounter
{
	char __padding[0x8L];
	int& CreationsField() { return *GetNativePointerField<int*>(this, "FProxyCounter.Creations"); }
	int& DeletionsField() { return *GetNativePointerField<int*>(this, "FProxyCounter.Deletions"); }
};

