#pragma once

#include "BaseDeclarations.h"
struct FObjectMemoryAnalyzer
{
	char __padding[0x38L];
	unsigned int& AnalyzeFlagsField() { return *GetNativePointerField<unsigned int*>(this, "FObjectMemoryAnalyzer.AnalyzeFlags"); }
};

