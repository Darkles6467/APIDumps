#pragma once

#include "BaseDeclarations.h"
struct FMeshRotationPayloadData
{
	char __padding[0x48L];
	FVector& InitialOrientationField() { return *GetNativePointerField<FVector*>(this, "FMeshRotationPayloadData.InitialOrientation"); }
	FVector& InitRotationField() { return *GetNativePointerField<FVector*>(this, "FMeshRotationPayloadData.InitRotation"); }
	FVector& RotationField() { return *GetNativePointerField<FVector*>(this, "FMeshRotationPayloadData.Rotation"); }
	FVector& CurContinuousRotationField() { return *GetNativePointerField<FVector*>(this, "FMeshRotationPayloadData.CurContinuousRotation"); }
	FVector& RotationRateField() { return *GetNativePointerField<FVector*>(this, "FMeshRotationPayloadData.RotationRate"); }
	FVector& RotationRateBaseField() { return *GetNativePointerField<FVector*>(this, "FMeshRotationPayloadData.RotationRateBase"); }
};

