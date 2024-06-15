#pragma once

#include "BaseDeclarations.h"
struct FReflectionEnvironmentSceneData
{
	char __padding[0x138L];
	float& CubemapBlendWeightField() { return *GetNativePointerField<float*>(this, "FReflectionEnvironmentSceneData.CubemapBlendWeight"); }
	bool& bRegisteredReflectionCapturesHasChangedField() { return *GetNativePointerField<bool*>(this, "FReflectionEnvironmentSceneData.bRegisteredReflectionCapturesHasChanged"); }
	TArray<TSharedPtr<FReflectionCaptureProxy,1>>& RegisteredReflectionCapturesField() { return *GetNativePointerField<TArray<TSharedPtr<FReflectionCaptureProxy,1>>*>(this, "FReflectionEnvironmentSceneData.RegisteredReflectionCaptures"); }
	TArray<FVector>& RegisteredReflectionCapturePositionsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FReflectionEnvironmentSceneData.RegisteredReflectionCapturePositions"); }
	FieldArray<FReflectionEnvironmentCubemapArray, 2> CubemapArraysField() { return {this, "FReflectionEnvironmentSceneData.CubemapArrays"}; }
	int& MaxAllocatedReflectionCubemapsGameThreadField() { return *GetNativePointerField<int*>(this, "FReflectionEnvironmentSceneData.MaxAllocatedReflectionCubemapsGameThread"); }

	// Functions

};

