#pragma once

#include "BaseDeclarations.h"
struct FScopeLock
{
	char __padding[0x8L];
	FWindowsCriticalSection * SynchObjectField() { return GetNativePointerField<FWindowsCriticalSection *>(this, "FScopeLock.SynchObject"); }

	// Functions

};

