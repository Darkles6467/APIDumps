#pragma once

#include "BaseDeclarations.h"
struct FTmAccumulator
{
	char __padding[0x8L];
	int& lowField() { return *GetNativePointerField<int*>(this, "FTmAccumulator.low"); }
	int& highField() { return *GetNativePointerField<int*>(this, "FTmAccumulator.high"); }

	// Functions

};

