#pragma once

#include "BaseDeclarations.h"
struct FWindowedGPUTimer
{
	char __padding[0x30L];
	int& QueriesFailedField() { return *GetNativePointerField<int*>(this, "FWindowedGPUTimer.QueriesFailed"); }
	unsigned int& WindowSizeField() { return *GetNativePointerField<unsigned int*>(this, "FWindowedGPUTimer.WindowSize"); }
	int& QueriesFinishedField() { return *GetNativePointerField<int*>(this, "FWindowedGPUTimer.QueriesFinished"); }
};

