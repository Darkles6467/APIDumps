#pragma once

#include "BaseDeclarations.h"
struct FFoliageOcclusionResults
{
	char __padding[0x20L];
	TArray<bool>& ResultsField() { return *GetNativePointerField<TArray<bool>*>(this, "FFoliageOcclusionResults.Results"); }
	int& ResultsStartField() { return *GetNativePointerField<int*>(this, "FFoliageOcclusionResults.ResultsStart"); }
	int& NumResultsField() { return *GetNativePointerField<int*>(this, "FFoliageOcclusionResults.NumResults"); }
	unsigned int& FrameNumberRenderThreadField() { return *GetNativePointerField<unsigned int*>(this, "FFoliageOcclusionResults.FrameNumberRenderThread"); }

	// Functions

};

