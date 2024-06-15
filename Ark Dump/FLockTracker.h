#pragma once

#include "BaseDeclarations.h"
struct FLockTracker
{
	char __padding[0x218L];
	TArray<FLockTracker::FLockParams,TInlineAllocator<16> >& OutstandingLocksField() { return *GetNativePointerField<TArray<FLockTracker::FLockParams,TInlineAllocator<16> >*>(this, "FLockTracker.OutstandingLocks"); }
	unsigned int& TotalMemoryOutstandingField() { return *GetNativePointerField<unsigned int*>(this, "FLockTracker.TotalMemoryOutstanding"); }
};

