#pragma once

#include "BaseDeclarations.h"
struct FGPUProfileStatSummary
{
	char __padding[0x100L];
	int& TotalNumNodesField() { return *GetNativePointerField<int*>(this, "FGPUProfileStatSummary.TotalNumNodes"); }
	int& TotalNumDrawsField() { return *GetNativePointerField<int*>(this, "FGPUProfileStatSummary.TotalNumDraws"); }
	bool& bGatherSummaryStatsField() { return *GetNativePointerField<bool*>(this, "FGPUProfileStatSummary.bGatherSummaryStats"); }
	bool& bDumpEventLeafNodesField() { return *GetNativePointerField<bool*>(this, "FGPUProfileStatSummary.bDumpEventLeafNodes"); }

	// Functions

	void PrintSummary() { NativeCall<void>(this, "FGPUProfileStatSummary.PrintSummary"); }
	void ProcessMatch(FGPUProfilerEventNode * Node) { NativeCall<void, FGPUProfilerEventNode *>(this, "FGPUProfileStatSummary.ProcessMatch", Node); }
};

