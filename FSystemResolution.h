#pragma once

#include "BaseDeclarations.h"
struct FSystemResolution
{
	char __padding[0x10L];
	int& ResXField() { return *GetNativePointerField<int*>(this, "FSystemResolution.ResX"); }
	int& ResYField() { return *GetNativePointerField<int*>(this, "FSystemResolution.ResY"); }
	EWindowMode::Type& WindowModeField() { return *GetNativePointerField<EWindowMode::Type*>(this, "FSystemResolution.WindowMode"); }
	bool& bForceRefreshField() { return *GetNativePointerField<bool*>(this, "FSystemResolution.bForceRefresh"); }

	// Functions

	static void RequestResolutionChange(int InResX, int InResY, EWindowMode::Type InWindowMode) { NativeCall<void, int, int, EWindowMode::Type>(nullptr, "FSystemResolution.RequestResolutionChange", InResX, InResY, InWindowMode); }
};

