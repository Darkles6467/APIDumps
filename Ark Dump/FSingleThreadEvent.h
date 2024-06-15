#pragma once

#include "BaseDeclarations.h"
#include "FEvent.h"

struct FSingleThreadEvent : FEvent
{
	char __padding[0x8L];
	bool& bTriggeredField() { return *GetNativePointerField<bool*>(this, "FSingleThreadEvent.bTriggered"); }
	bool& bManualResetField() { return *GetNativePointerField<bool*>(this, "FSingleThreadEvent.bManualReset"); }

	// Functions

	bool Create(bool bIsManualReset) { return NativeCall<bool, bool>(this, "FSingleThreadEvent.Create", bIsManualReset); }
	void Reset() { NativeCall<void>(this, "FSingleThreadEvent.Reset"); }
	void Trigger() { NativeCall<void>(this, "FSingleThreadEvent.Trigger"); }
	bool Wait(unsigned int WaitTime, const bool bIgnoreThreadIdleStats) { return NativeCall<bool, unsigned int, const bool>(this, "FSingleThreadEvent.Wait", WaitTime, bIgnoreThreadIdleStats); }
};

