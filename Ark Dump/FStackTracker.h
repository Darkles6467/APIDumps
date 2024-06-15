#pragma once

#include "BaseDeclarations.h"
struct FStackTracker
{
	char __padding[0x88L];
	TArray<FStackTracker::FCallStack>& CallStacksField() { return *GetNativePointerField<TArray<FStackTracker::FCallStack>*>(this, "FStackTracker.CallStacks"); }
	bool& bAvoidCapturingField() { return *GetNativePointerField<bool*>(this, "FStackTracker.bAvoidCapturing"); }
	bool& bIsEnabledField() { return *GetNativePointerField<bool*>(this, "FStackTracker.bIsEnabled"); }
	unsigned __int64& StartFrameCounterField() { return *GetNativePointerField<unsigned __int64*>(this, "FStackTracker.StartFrameCounter"); }
	unsigned __int64& StopFrameCounterField() { return *GetNativePointerField<unsigned __int64*>(this, "FStackTracker.StopFrameCounter"); }
};

