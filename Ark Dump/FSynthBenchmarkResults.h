#pragma once

#include "BaseDeclarations.h"
struct FSynthBenchmarkResults
{
	char __padding[0x118L];
	FieldArray<FSynthBenchmarkStat, 2> CPUStatsField() { return {this, "FSynthBenchmarkResults.CPUStats"}; }
	FieldArray<FSynthBenchmarkStat, 5> GPUStatsField() { return {this, "FSynthBenchmarkResults.GPUStats"}; }

	// Functions

};

