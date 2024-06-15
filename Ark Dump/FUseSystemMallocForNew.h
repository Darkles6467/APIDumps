#pragma once

#include "BaseDeclarations.h"
struct FUseSystemMallocForNew
{

	// Functions

	static void __cdecl(void *Memory) operator delete(void * Memory) { return NativeCall<void __cdecl(void *Memory), void *>(nullptr, "FUseSystemMallocForNew.operator delete", Memory); }
};

