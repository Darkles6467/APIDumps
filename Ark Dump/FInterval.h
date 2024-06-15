#pragma once

#include "BaseDeclarations.h"
struct FInterval
{
	char __padding[0xcL];
	float& MinField() { return *GetNativePointerField<float*>(this, "FInterval.Min"); }
	float& MaxField() { return *GetNativePointerField<float*>(this, "FInterval.Max"); }
	bool& bIsEmptyField() { return *GetNativePointerField<bool*>(this, "FInterval.bIsEmpty"); }
};

