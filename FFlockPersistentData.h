#pragma once

#include "BaseDeclarations.h"
struct FFlockPersistentData
{
	char __padding[0x38L];
	float& AvoidanceAreaDecayRateField() { return *GetNativePointerField<float*>(this, "FFlockPersistentData.AvoidanceAreaDecayRate"); }
	float& AvoidanceTraceIntervalField() { return *GetNativePointerField<float*>(this, "FFlockPersistentData.AvoidanceTraceInterval"); }
	float& AvoidanceTraceInferredBoxSizeField() { return *GetNativePointerField<float*>(this, "FFlockPersistentData.AvoidanceTraceInferredBoxSize"); }
	float& AvoidanceTraceInferredSphereRadiusField() { return *GetNativePointerField<float*>(this, "FFlockPersistentData.AvoidanceTraceInferredSphereRadius"); }
	float& AvoidanceTraceForwardDistanceField() { return *GetNativePointerField<float*>(this, "FFlockPersistentData.AvoidanceTraceForwardDistance"); }
	float& AvoidanceTraceDownDistanceField() { return *GetNativePointerField<float*>(this, "FFlockPersistentData.AvoidanceTraceDownDistance"); }
	long double& LastAvoidanceTraceTimeField() { return *GetNativePointerField<long double*>(this, "FFlockPersistentData.LastAvoidanceTraceTime"); }
	int& MaxNumAvoidanceAreasField() { return *GetNativePointerField<int*>(this, "FFlockPersistentData.MaxNumAvoidanceAreas"); }
	TArray<FAvoidanceArea>& DynamicAvoidanceAreasField() { return *GetNativePointerField<TArray<FAvoidanceArea>*>(this, "FFlockPersistentData.DynamicAvoidanceAreas"); }

	// Functions

	FFlockPersistentData * operator=(const FFlockPersistentData * __that) { return NativeCall<FFlockPersistentData *, const FFlockPersistentData *>(this, "FFlockPersistentData.operator=", __that); }
};

