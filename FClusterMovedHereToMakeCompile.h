#pragma once

#include "BaseDeclarations.h"
struct FClusterMovedHereToMakeCompile
{
	char __padding[0x10L];
	FVector& ClusterPosAccumField() { return *GetNativePointerField<FVector*>(this, "FClusterMovedHereToMakeCompile.ClusterPosAccum"); }
	int& ClusterSizeField() { return *GetNativePointerField<int*>(this, "FClusterMovedHereToMakeCompile.ClusterSize"); }
};

