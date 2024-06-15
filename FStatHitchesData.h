#pragma once

#include "BaseDeclarations.h"
struct FStatHitchesData
{
	char __padding[0x30L];
	long double& LastTimeField() { return *GetNativePointerField<long double*>(this, "FStatHitchesData.LastTime"); }
	TArray<float>& HitchesField() { return *GetNativePointerField<TArray<float>*>(this, "FStatHitchesData.Hitches"); }
	TArray<double>& WhenField() { return *GetNativePointerField<TArray<double>*>(this, "FStatHitchesData.When"); }
	int& OverwriteIndexField() { return *GetNativePointerField<int*>(this, "FStatHitchesData.OverwriteIndex"); }
	int& CountField() { return *GetNativePointerField<int*>(this, "FStatHitchesData.Count"); }

	// Functions

	int DrawStat(FViewport * InViewport, FCanvas * InCanvas, int InX, int InY) { return NativeCall<int, FViewport *, FCanvas *, int, int>(this, "FStatHitchesData.DrawStat", InViewport, InCanvas, InX, InY); }
};

