#pragma once

#include "BaseDeclarations.h"
struct FWaveRequest
{
	char __padding[0x18L];
	TArray<unsigned int>& RequiredIndicesField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FWaveRequest.RequiredIndices"); }
	bool& bPrioritiseRequestField() { return *GetNativePointerField<bool*>(this, "FWaveRequest.bPrioritiseRequest"); }
};

