#pragma once

#include "BaseDeclarations.h"
struct FShaderMapCompileResults
{
	char __padding[0x18L];
	int& NumJobsQueuedField() { return *GetNativePointerField<int*>(this, "FShaderMapCompileResults.NumJobsQueued"); }
	bool& bAllJobsSucceededField() { return *GetNativePointerField<bool*>(this, "FShaderMapCompileResults.bAllJobsSucceeded"); }
	bool& bApplyCompletedShaderMapForRenderingField() { return *GetNativePointerField<bool*>(this, "FShaderMapCompileResults.bApplyCompletedShaderMapForRendering"); }
};

struct FShaderMapFinalizeResults : FShaderMapCompileResults
{
	char __padding[0x8L];
	int& FinalizeJobIndexField() { return *GetNativePointerField<int*>(this, "FShaderMapFinalizeResults.FinalizeJobIndex"); }
};

