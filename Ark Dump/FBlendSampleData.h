#pragma once

#include "BaseDeclarations.h"
struct FBlendSampleData
{
	char __padding[0x20L];
	int& SampleDataIndexField() { return *GetNativePointerField<int*>(this, "FBlendSampleData.SampleDataIndex"); }
	float& TotalWeightField() { return *GetNativePointerField<float*>(this, "FBlendSampleData.TotalWeight"); }
	float& TimeField() { return *GetNativePointerField<float*>(this, "FBlendSampleData.Time"); }
	TArray<float>& PerBoneBlendDataField() { return *GetNativePointerField<TArray<float>*>(this, "FBlendSampleData.PerBoneBlendData"); }

	// Functions

};

