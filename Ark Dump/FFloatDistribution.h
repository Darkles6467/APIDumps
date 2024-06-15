#pragma once

#include "BaseDeclarations.h"
struct FFloatDistribution
{
	char __padding[0x28L];
	FDistributionLookupTable& LookupTableField() { return *GetNativePointerField<FDistributionLookupTable*>(this, "FFloatDistribution.LookupTable"); }

	// Functions

};

