#pragma once

#include "BaseDeclarations.h"
#include "FEvent.h"

struct FSafeRecyclableEvent : FEvent
{
	char __padding[0x8L];

	// Functions

	bool Create(bool bIsManualReset) { return NativeCall<bool, bool>(this, "FSafeRecyclableEvent.Create", bIsManualReset); }
	bool IsManualReset() { return NativeCall<bool>(this, "FSafeRecyclableEvent.IsManualReset"); }
	void Reset() { NativeCall<void>(this, "FSafeRecyclableEvent.Reset"); }
	void Trigger() { NativeCall<void>(this, "FSafeRecyclableEvent.Trigger"); }
	bool Wait(unsigned int WaitTime, const bool bIgnoreThreadIdleStats) { return NativeCall<bool, unsigned int, const bool>(this, "FSafeRecyclableEvent.Wait", WaitTime, bIgnoreThreadIdleStats); }
};

