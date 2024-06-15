#pragma once

#include "BaseDeclarations.h"
struct FScriptName
{
	char __padding[0xcL];
	int& ComparisonIndexField() { return *GetNativePointerField<int*>(this, "FScriptName.ComparisonIndex"); }
	int& DisplayIndexField() { return *GetNativePointerField<int*>(this, "FScriptName.DisplayIndex"); }
	unsigned int& NumberField() { return *GetNativePointerField<unsigned int*>(this, "FScriptName.Number"); }
};

