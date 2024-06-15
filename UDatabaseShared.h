#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UDatabaseShared : UObject
{
	char __padding[0x40L];
	FWindowsCriticalSection& PendingCallbacks_CriticalSectionField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "UDatabaseShared.PendingCallbacks_CriticalSection"); }

	// Functions

	void TickDispatcher() { NativeCall<void>(this, "UDatabaseShared.TickDispatcher"); }
};

