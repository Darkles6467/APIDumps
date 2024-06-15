#pragma once

#include "BaseDeclarations.h"
struct FGroundBonesChainData
{
	char __padding[0x78L];
	TArray<FVector>& LastTargetLocationsRSField() { return *GetNativePointerField<TArray<FVector>*>(this, "FGroundBonesChainData.LastTargetLocationsRS"); }
	TArray<FVector>& LastTargetNormalsRSField() { return *GetNativePointerField<TArray<FVector>*>(this, "FGroundBonesChainData.LastTargetNormalsRS"); }
	long double& LastCachedGroundBonesAtField() { return *GetNativePointerField<long double*>(this, "FGroundBonesChainData.LastCachedGroundBonesAt"); }

	// Functions

};

