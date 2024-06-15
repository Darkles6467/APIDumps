#pragma once

#include "BaseDeclarations.h"
struct FScriptStackTracker
{
	char __padding[0x78L];
	TArray<FScriptStackTracker::FCallStack>& CallStacksField() { return *GetNativePointerField<TArray<FScriptStackTracker::FCallStack>*>(this, "FScriptStackTracker.CallStacks"); }
	bool& bAvoidCapturingField() { return *GetNativePointerField<bool*>(this, "FScriptStackTracker.bAvoidCapturing"); }
	bool& bIsEnabledField() { return *GetNativePointerField<bool*>(this, "FScriptStackTracker.bIsEnabled"); }
	unsigned __int64& StartFrameCounterField() { return *GetNativePointerField<unsigned __int64*>(this, "FScriptStackTracker.StartFrameCounter"); }
	unsigned __int64& StopFrameCounterField() { return *GetNativePointerField<unsigned __int64*>(this, "FScriptStackTracker.StopFrameCounter"); }
};

