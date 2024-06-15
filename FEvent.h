#pragma once

#include "BaseDeclarations.h"
struct FEvent
{
	char __padding[0x10L];
	unsigned int& EventIdField() { return *GetNativePointerField<unsigned int*>(this, "FEvent.EventId"); }
	unsigned int& EventStartCyclesField() { return *GetNativePointerField<unsigned int*>(this, "FEvent.EventStartCycles"); }

	// Functions

	bool Wait() { return NativeCall<bool>(this, "FEvent.Wait"); }
};

