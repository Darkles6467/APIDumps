#pragma once

#include "BaseDeclarations.h"
struct FCurveEdInterface
{
	char __padding[0x8L];

	// Functions

	FColor * GetKeyColor(FColor * result, int SubIndex, int KeyIndex, const FColor * CurveColor) { return NativeCall<FColor *, FColor *, int, int, const FColor *>(this, "FCurveEdInterface.GetKeyColor", result, SubIndex, KeyIndex, CurveColor); }
	FColor * GetSubCurveButtonColor(FColor * result, int SubCurveIndex, bool bIsSubCurveHidden) { return NativeCall<FColor *, FColor *, int, bool>(this, "FCurveEdInterface.GetSubCurveButtonColor", result, SubCurveIndex, bIsSubCurveHidden); }
	void GetTangents(int SubIndex, int KeyIndex, float * ArriveTangent, float * LeaveTangent) { NativeCall<void, int, int, float *, float *>(this, "FCurveEdInterface.GetTangents", SubIndex, KeyIndex, ArriveTangent, LeaveTangent); }
};

