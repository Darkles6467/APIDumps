#pragma once

#include "BaseDeclarations.h"
#include "IModularFeature.h"

struct FExternalProfiler : IModularFeature
{
	char __padding[0x10L];
	int& TimerCountField() { return *GetNativePointerField<int*>(this, "FExternalProfiler.TimerCount"); }
	bool& bIsPausedField() { return *GetNativePointerField<bool*>(this, "FExternalProfiler.bIsPaused"); }

	// Functions

	static FName * GetFeatureName(FName * result) { return NativeCall<FName *, FName *>(nullptr, "FExternalProfiler.GetFeatureName", result); }
};

