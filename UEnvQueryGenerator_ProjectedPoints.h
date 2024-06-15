#pragma once

#include "BaseDeclarations.h"
#include "UEnvQueryGenerator.h"

struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator
{
	char __padding[0x28L];
	FEnvTraceData& ProjectionDataField() { return *GetNativePointerField<FEnvTraceData*>(this, "UEnvQueryGenerator_ProjectedPoints.ProjectionData"); }

	// Functions

	void ProjectAndFilterNavPoints(TArray<FVector> * Points, ANavigationData * NavData) { NativeCall<void, TArray<FVector> *, ANavigationData *>(this, "UEnvQueryGenerator_ProjectedPoints.ProjectAndFilterNavPoints", Points, NavData); }
};

