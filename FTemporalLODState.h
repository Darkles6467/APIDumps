#pragma once

#include "BaseDeclarations.h"
struct FTemporalLODState
{
	char __padding[0x2cL];
	FieldArray<FVector, 2> TemporalLODViewOriginField() { return {this, "FTemporalLODState.TemporalLODViewOrigin"}; }
	FieldArray<float, 2> TemporalDistanceFactorField() { return {this, "FTemporalLODState.TemporalDistanceFactor"}; }
	FieldArray<float, 2> TemporalLODTimeField() { return {this, "FTemporalLODState.TemporalLODTime"}; }
	float& TemporalLODLagField() { return *GetNativePointerField<float*>(this, "FTemporalLODState.TemporalLODLag"); }

	// Functions

	void UpdateTemporalLODTransition(const FViewInfo * View, long double LastRenderTime) { NativeCall<void, const FViewInfo *, long double>(this, "FTemporalLODState.UpdateTemporalLODTransition", View, LastRenderTime); }
};

