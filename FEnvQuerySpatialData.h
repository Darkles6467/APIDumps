#pragma once

#include "BaseDeclarations.h"
struct FEnvQuerySpatialData
{
	char __padding[0x18L];
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "FEnvQuerySpatialData.Location"); }
	FRotator& RotationField() { return *GetNativePointerField<FRotator*>(this, "FEnvQuerySpatialData.Rotation"); }
};

