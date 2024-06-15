#pragma once

#include "BaseDeclarations.h"
struct FDynamicUndermeshVolumes_Data
{
	char __padding[0x10L];
	int& xField() { return *GetNativePointerField<int*>(this, "FDynamicUndermeshVolumes_Data.x"); }
	int& yField() { return *GetNativePointerField<int*>(this, "FDynamicUndermeshVolumes_Data.y"); }
	int& zField() { return *GetNativePointerField<int*>(this, "FDynamicUndermeshVolumes_Data.z"); }
	int& rField() { return *GetNativePointerField<int*>(this, "FDynamicUndermeshVolumes_Data.r"); }

	// Functions

};

