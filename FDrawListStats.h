#pragma once

#include "BaseDeclarations.h"
struct FDrawListStats
{
	char __padding[0x14L];
	int& NumMeshesField() { return *GetNativePointerField<int*>(this, "FDrawListStats.NumMeshes"); }
	int& NumDrawingPoliciesField() { return *GetNativePointerField<int*>(this, "FDrawListStats.NumDrawingPolicies"); }
	int& MedianMeshesPerDrawingPolicyField() { return *GetNativePointerField<int*>(this, "FDrawListStats.MedianMeshesPerDrawingPolicy"); }
	int& MaxMeshesPerDrawingPolicyField() { return *GetNativePointerField<int*>(this, "FDrawListStats.MaxMeshesPerDrawingPolicy"); }
	int& NumSingleMeshDrawingPoliciesField() { return *GetNativePointerField<int*>(this, "FDrawListStats.NumSingleMeshDrawingPolicies"); }
};

