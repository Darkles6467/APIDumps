#pragma once

#include "BaseDeclarations.h"
#include "FRefCountedObject.h"

struct FShaderCompileJob : FRefCountedObject
{
	char __padding[0x2d8L];
	unsigned int& IdField() { return *GetNativePointerField<unsigned int*>(this, "FShaderCompileJob.Id"); }
	bool& bFinalizedField() { return *GetNativePointerField<bool*>(this, "FShaderCompileJob.bFinalized"); }
	bool& bSucceededField() { return *GetNativePointerField<bool*>(this, "FShaderCompileJob.bSucceeded"); }
	bool& bOptimizeForLowLatencyField() { return *GetNativePointerField<bool*>(this, "FShaderCompileJob.bOptimizeForLowLatency"); }
};

