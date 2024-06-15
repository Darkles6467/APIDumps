#pragma once

#include "BaseDeclarations.h"
#include "ABrush.h"

struct AVolume : ABrush
{

	// Functions

	bool BPEncompassesPoint(FVector Point, float * OutDistanceToPoint, float SphereRadius) { return NativeCall<bool, FVector, float *, float>(this, "AVolume.BPEncompassesPoint", Point, OutDistanceToPoint, SphereRadius); }
	bool EncompassesPoint(FVector Point, float SphereRadius, float * OutDistanceToPoint, float * MaxDistanceLimit) { return NativeCall<bool, FVector, float, float *, float *>(this, "AVolume.EncompassesPoint", Point, SphereRadius, OutDistanceToPoint, MaxDistanceLimit); }
};

