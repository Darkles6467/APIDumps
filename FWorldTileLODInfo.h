#pragma once

#include "BaseDeclarations.h"
struct FWorldTileLODInfo
{
	char __padding[0x14L];
	int& RelativeStreamingDistanceField() { return *GetNativePointerField<int*>(this, "FWorldTileLODInfo.RelativeStreamingDistance"); }
	float& GenDetailsPercentageField() { return *GetNativePointerField<float*>(this, "FWorldTileLODInfo.GenDetailsPercentage"); }
	float& GenMaxDeviationField() { return *GetNativePointerField<float*>(this, "FWorldTileLODInfo.GenMaxDeviation"); }
	int& Reserved0Field() { return *GetNativePointerField<int*>(this, "FWorldTileLODInfo.Reserved0"); }
	int& Reserved1Field() { return *GetNativePointerField<int*>(this, "FWorldTileLODInfo.Reserved1"); }
};

