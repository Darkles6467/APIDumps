#pragma once

#include "BaseDeclarations.h"
struct FDistributionHelpers
{

	// Functions

	static bool RestoreDefaultConstant(UDistribution * Distribution, const wchar_t * Name, float Value) { return NativeCall<bool, UDistribution *, const wchar_t *, float>(nullptr, "FDistributionHelpers.RestoreDefaultConstant", Distribution, Name, Value); }
};

