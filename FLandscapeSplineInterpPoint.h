#pragma once

#include "BaseDeclarations.h"
struct FLandscapeSplineInterpPoint
{
	char __padding[0x40L];
	FVector& CenterField() { return *GetNativePointerField<FVector*>(this, "FLandscapeSplineInterpPoint.Center"); }
	FVector& LeftField() { return *GetNativePointerField<FVector*>(this, "FLandscapeSplineInterpPoint.Left"); }
	FVector& RightField() { return *GetNativePointerField<FVector*>(this, "FLandscapeSplineInterpPoint.Right"); }
	FVector& FalloffLeftField() { return *GetNativePointerField<FVector*>(this, "FLandscapeSplineInterpPoint.FalloffLeft"); }
	FVector& FalloffRightField() { return *GetNativePointerField<FVector*>(this, "FLandscapeSplineInterpPoint.FalloffRight"); }
	float& StartEndFalloffField() { return *GetNativePointerField<float*>(this, "FLandscapeSplineInterpPoint.StartEndFalloff"); }

	// Functions

};

