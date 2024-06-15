#pragma once

#include "BaseDeclarations.h"
struct FRealtimeInstanceData
{
	char __padding[0x10L];
	unsigned int& RunCountField() { return *GetNativePointerField<unsigned int*>(this, "FRealtimeInstanceData.RunCount"); }
	unsigned int * InstanceRunsField() { return GetNativePointerField<unsigned int *>(this, "FRealtimeInstanceData.InstanceRuns"); }
};

