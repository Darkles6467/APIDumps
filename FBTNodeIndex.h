#pragma once

#include "BaseDeclarations.h"
struct FBTNodeIndex
{
	char __padding[0x4L];
	unsigned __int16& InstanceIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "FBTNodeIndex.InstanceIndex"); }
	unsigned __int16& ExecutionIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "FBTNodeIndex.ExecutionIndex"); }
};

