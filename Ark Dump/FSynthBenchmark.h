#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct ISynthBenchmark : IModuleInterface
{
};

struct FSynthBenchmark : ISynthBenchmark
{

	// Functions

	void Run(FSynthBenchmarkResults * InOut, bool bGPUBenchmark, float WorkScale) { NativeCall<void, FSynthBenchmarkResults *, bool, float>(this, "FSynthBenchmark.Run", InOut, bGPUBenchmark, WorkScale); }
};

