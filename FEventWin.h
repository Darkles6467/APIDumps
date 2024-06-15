#pragma once

#include "BaseDeclarations.h"
#include "FEvent.h"

struct FEventWin : FEvent
{
	char __padding[0x10L];
	void * EventField() { return GetNativePointerField<void *>(this, "FEventWin.Event"); }
	bool& ManualResetField() { return *GetNativePointerField<bool*>(this, "FEventWin.ManualReset"); }

	// Functions

	bool Create(bool bIsManualReset) { return NativeCall<bool, bool>(this, "FEventWin.Create", bIsManualReset); }
	void Reset() { NativeCall<void>(this, "FEventWin.Reset"); }
	void Trigger() { NativeCall<void>(this, "FEventWin.Trigger"); }
	bool Wait(unsigned int WaitTime, const bool bIgnoreThreadIdleStats) { return NativeCall<bool, unsigned int, const bool>(this, "FEventWin.Wait", WaitTime, bIgnoreThreadIdleStats); }
};

