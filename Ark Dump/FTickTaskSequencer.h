#pragma once

#include "BaseDeclarations.h"
struct FTickTaskSequencer
{
	char __padding[0x238L];
	FieldArray<TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4> >[10], 410> TickCompletionEventsField() { return {this, "FTickTaskSequencer.TickCompletionEvents"}; }
	FieldArray<TRefCountPtr<FGraphEvent>, 10> TickGroupStartEventsField() { return {this, "FTickTaskSequencer.TickGroupStartEvents"}; }
	bool& bAllowConcurrentTicksField() { return *GetNativePointerField<bool*>(this, "FTickTaskSequencer.bAllowConcurrentTicks"); }
	bool& bLogTicksField() { return *GetNativePointerField<bool*>(this, "FTickTaskSequencer.bLogTicks"); }

	// Functions

	static FTickTaskSequencer * Get() { return NativeCall<FTickTaskSequencer *>(nullptr, "FTickTaskSequencer.Get"); }
	void ReleaseTickGroup(ETickingGroup WorldTickGroup, bool bBlockTillComplete) { NativeCall<void, ETickingGroup, bool>(this, "FTickTaskSequencer.ReleaseTickGroup", WorldTickGroup, bBlockTillComplete); }
	void StartFrame() { NativeCall<void>(this, "FTickTaskSequencer.StartFrame"); }
};

