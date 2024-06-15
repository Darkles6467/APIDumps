#pragma once

#include "BaseDeclarations.h"
#include "FMalloc.h"
#include "FExec.h"

struct FMallocTBB : FMalloc
{
	char __padding[0x8L];
	long double& MemTimeField() { return *GetNativePointerField<long double*>(this, "FMallocTBB.MemTime"); }
};

