#pragma once

#include "BaseDeclarations.h"
struct FExposureSettings
{
	char __padding[0x8L];
	int& LogOffsetField() { return *GetNativePointerField<int*>(this, "FExposureSettings.LogOffset"); }
	bool& bFixedField() { return *GetNativePointerField<bool*>(this, "FExposureSettings.bFixed"); }

	// Functions

};

