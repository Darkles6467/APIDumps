#pragma once

#include "BaseDeclarations.h"
struct FInterpLookupTrack
{
	char __padding[0x10L];
	TArray<FInterpLookupPoint>& PointsField() { return *GetNativePointerField<TArray<FInterpLookupPoint>*>(this, "FInterpLookupTrack.Points"); }

	// Functions

	int AddPoint(const float InTime, FName * InGroupName) { return NativeCall<int, const float, FName *>(this, "FInterpLookupTrack.AddPoint", InTime, InGroupName); }
	int MovePoint(int PointIndex, float NewTime) { return NativeCall<int, int, float>(this, "FInterpLookupTrack.MovePoint", PointIndex, NewTime); }
};

