#pragma once

#include "BaseDeclarations.h"
struct FMissionDinoPath
{
	char __padding[0x40L];
	FVector& CurrentTargetField() { return *GetNativePointerField<FVector*>(this, "FMissionDinoPath.CurrentTarget"); }
	FVector& LastTargetField() { return *GetNativePointerField<FVector*>(this, "FMissionDinoPath.LastTarget"); }
	float& CurrentSplineKeyTargetField() { return *GetNativePointerField<float*>(this, "FMissionDinoPath.CurrentSplineKeyTarget"); }
	float& LastSplineKeyTargetField() { return *GetNativePointerField<float*>(this, "FMissionDinoPath.LastSplineKeyTarget"); }
	long double& LastUpdateTimeField() { return *GetNativePointerField<long double*>(this, "FMissionDinoPath.LastUpdateTime"); }
	float& UpdateIntervalField() { return *GetNativePointerField<float*>(this, "FMissionDinoPath.UpdateInterval"); }
	TWeakObjectPtr<USplineComponent>& ForcePathSplineField() { return *GetNativePointerField<TWeakObjectPtr<USplineComponent>*>(this, "FMissionDinoPath.ForcePathSpline"); }

	// Functions

};

