#pragma once

#include "BaseDeclarations.h"
struct FSlateThrottleManager
{
	char __padding[0x18L];
	FAutoConsoleVariableRef& CVarAllowThrottleField() { return *GetNativePointerField<FAutoConsoleVariableRef*>(this, "FSlateThrottleManager.CVarAllowThrottle"); }
	int& bShouldThrottleField() { return *GetNativePointerField<int*>(this, "FSlateThrottleManager.bShouldThrottle"); }
	unsigned int& ThrottleCountField() { return *GetNativePointerField<unsigned int*>(this, "FSlateThrottleManager.ThrottleCount"); }

	// Functions

	FThrottleRequest * EnterResponsiveMode(FThrottleRequest * result) { return NativeCall<FThrottleRequest *, FThrottleRequest *>(this, "FSlateThrottleManager.EnterResponsiveMode", result); }
	static FSlateThrottleManager * Get() { return NativeCall<FSlateThrottleManager *>(nullptr, "FSlateThrottleManager.Get"); }
	bool IsAllowingExpensiveTasks() { return NativeCall<bool>(this, "FSlateThrottleManager.IsAllowingExpensiveTasks"); }
	void LeaveResponsiveMode(FThrottleRequest * InHandle) { NativeCall<void, FThrottleRequest *>(this, "FSlateThrottleManager.LeaveResponsiveMode", InHandle); }
};

