#pragma once

#include "BaseDeclarations.h"
struct FHitchChartEntry
{
	char __padding[0x10L];
	int& HitchCountField() { return *GetNativePointerField<int*>(this, "FHitchChartEntry.HitchCount"); }
	int& GameThreadBoundHitchCountField() { return *GetNativePointerField<int*>(this, "FHitchChartEntry.GameThreadBoundHitchCount"); }
	int& RenderThreadBoundHitchCountField() { return *GetNativePointerField<int*>(this, "FHitchChartEntry.RenderThreadBoundHitchCount"); }
	int& GPUBoundHitchCountField() { return *GetNativePointerField<int*>(this, "FHitchChartEntry.GPUBoundHitchCount"); }
};

