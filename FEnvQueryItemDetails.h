#pragma once

#include "BaseDeclarations.h"
struct FEnvQueryItemDetails
{
	char __padding[0x10L];
	TArray<float>& TestResultsField() { return *GetNativePointerField<TArray<float>*>(this, "FEnvQueryItemDetails.TestResults"); }
};

