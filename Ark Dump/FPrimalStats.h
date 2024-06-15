#pragma once

#include "BaseDeclarations.h"
struct FPrimalStats
{
	char __padding[0x30L];
	bool& bUsedField() { return *GetNativePointerField<bool*>(this, "FPrimalStats.bUsed"); }
	long double& StartStatsTimeField() { return *GetNativePointerField<long double*>(this, "FPrimalStats.StartStatsTime"); }
	FieldArray<int, 7> PrimalStatsValuesField() { return {this, "FPrimalStats.PrimalStatsValues"}; }

	// Functions

};

