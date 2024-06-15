#pragma once

#include "BaseDeclarations.h"
#include "UDistribution.h"

struct UDistributionFloat : UDistribution
{
	char __padding[0x8L];

	// Functions

	float GetFloatValue(float F) { return NativeCall<float, float>(this, "UDistributionFloat.GetFloatValue", F); }
	unsigned int InitializeRawEntry(float Time, float * Values) { return NativeCall<unsigned int, float, float *>(this, "UDistributionFloat.InitializeRawEntry", Time, Values); }
};

