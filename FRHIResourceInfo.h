#pragma once

#include "BaseDeclarations.h"
struct FRHIResourceInfo
{
	char __padding[0x10L];
	FVRamAllocation& VRamAllocationField() { return *GetNativePointerField<FVRamAllocation*>(this, "FRHIResourceInfo.VRamAllocation"); }
};

