#pragma once

#include "BaseDeclarations.h"
#include "FComponentInstanceDataBase.h"

struct FSplineInstanceData : FComponentInstanceDataBase
{
	char __padding[0x20L];
	FInterpCurve<FVector>& SplineInfoField() { return *GetNativePointerField<FInterpCurve<FVector>*>(this, "FSplineInstanceData.SplineInfo"); }
	int& ReparamStepsPerSegmentField() { return *GetNativePointerField<int*>(this, "FSplineInstanceData.ReparamStepsPerSegment"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "FSplineInstanceData.Duration"); }
	bool& bStationaryEndpointsField() { return *GetNativePointerField<bool*>(this, "FSplineInstanceData.bStationaryEndpoints"); }

	// Functions

};

