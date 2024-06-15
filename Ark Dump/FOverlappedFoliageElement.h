#pragma once

#include "BaseDeclarations.h"
struct FOverlappedFoliageElement
{
	char __padding[0x38L];
	UPrimalHarvestingComponent * HarvestingComponentField() { return GetNativePointerField<UPrimalHarvestingComponent *>(this, "FOverlappedFoliageElement.HarvestingComponent"); }
	FVector& HarvestLocationField() { return *GetNativePointerField<FVector*>(this, "FOverlappedFoliageElement.HarvestLocation"); }
	int& HitBodyIndexField() { return *GetNativePointerField<int*>(this, "FOverlappedFoliageElement.HitBodyIndex"); }
	float& MaxHarvestHealthField() { return *GetNativePointerField<float*>(this, "FOverlappedFoliageElement.MaxHarvestHealth"); }
	float& CurrentHarvestHealthField() { return *GetNativePointerField<float*>(this, "FOverlappedFoliageElement.CurrentHarvestHealth"); }

	// Functions

};

