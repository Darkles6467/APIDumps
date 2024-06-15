#pragma once

#include "BaseDeclarations.h"
#include "UBlendSpaceBase.h"
#include "UAnimationAsset.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FGridBlendSample.h"

struct UBlendSpace1D : UBlendSpaceBase
{
	char __padding[0x8L];
	bool& bScaleAnimationField() { return *GetNativePointerField<bool*>(this, "UBlendSpace1D.bScaleAnimation"); }

	// Functions

	EBlendSpaceAxis GetAxisToScale() { return NativeCall<EBlendSpaceAxis>(this, "UBlendSpace1D.GetAxisToScale"); }
	void GetRawSamplesFromBlendInput(const FVector * BlendInput, TArray<FGridBlendSample> * OutBlendSamples) { NativeCall<void, const FVector *, TArray<FGridBlendSample> *>(this, "UBlendSpace1D.GetRawSamplesFromBlendInput", BlendInput, OutBlendSamples); }
	bool IsSameSamplePoint(const FVector * SamplePointA, const FVector * SamplePointB) { return NativeCall<bool, const FVector *, const FVector *>(this, "UBlendSpace1D.IsSameSamplePoint", SamplePointA, SamplePointB); }
	void SnapToBorder(FBlendSample * Sample) { NativeCall<void, FBlendSample *>(this, "UBlendSpace1D.SnapToBorder", Sample); }
};

struct UAimOffsetBlendSpace1D : UBlendSpace1D
{

	// Functions

	bool ValidateSampleInput(FBlendSample * BlendSample, int OriginalIndex) { return NativeCall<bool, FBlendSample *, int>(this, "UAimOffsetBlendSpace1D.ValidateSampleInput", BlendSample, OriginalIndex); }
};

