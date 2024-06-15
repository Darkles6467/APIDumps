#pragma once

#include "BaseDeclarations.h"
struct FDinoBaseLevelWeightEntry
{
	char __padding[0xcL];
	float& EntryWeightField() { return *GetNativePointerField<float*>(this, "FDinoBaseLevelWeightEntry.EntryWeight"); }
	float& BaseLevelMinRangeField() { return *GetNativePointerField<float*>(this, "FDinoBaseLevelWeightEntry.BaseLevelMinRange"); }
	float& BaseLevelMaxRangeField() { return *GetNativePointerField<float*>(this, "FDinoBaseLevelWeightEntry.BaseLevelMaxRange"); }

	// Functions

};

