#pragma once

#include "BaseDeclarations.h"
#include "UBlendSpaceBase.h"
#include "UAnimationAsset.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FGridBlendSample.h"

struct UBlendSpace : UBlendSpaceBase
{
	char __padding[0x8L];
	TEnumAsByte<enum EBlendSpaceAxis>& AxisToScaleAnimationField() { return *GetNativePointerField<TEnumAsByte<enum EBlendSpaceAxis>*>(this, "UBlendSpace.AxisToScaleAnimation"); }

	// Functions

	EBlendSpaceAxis GetAxisToScale() { return NativeCall<EBlendSpaceAxis>(this, "UBlendSpace.GetAxisToScale"); }
	void GetGridSamplesFromBlendInput(const FVector * BlendInput, FGridBlendSample * LeftBottom, FGridBlendSample * RightBottom, FGridBlendSample * LeftTop, FGridBlendSample * RightTop) { NativeCall<void, const FVector *, FGridBlendSample *, FGridBlendSample *, FGridBlendSample *, FGridBlendSample *>(this, "UBlendSpace.GetGridSamplesFromBlendInput", BlendInput, LeftBottom, RightBottom, LeftTop, RightTop); }
	void GetRawSamplesFromBlendInput(const FVector * BlendInput, TArray<FGridBlendSample> * OutBlendSamples) { NativeCall<void, const FVector *, TArray<FGridBlendSample> *>(this, "UBlendSpace.GetRawSamplesFromBlendInput", BlendInput, OutBlendSamples); }
	bool IsSameSamplePoint(const FVector * SamplePointA, const FVector * SamplePointB) { return NativeCall<bool, const FVector *, const FVector *>(this, "UBlendSpace.IsSameSamplePoint", SamplePointA, SamplePointB); }
	bool IsValidAdditive() { return NativeCall<bool>(this, "UBlendSpace.IsValidAdditive"); }
	void SnapToBorder(FBlendSample * Sample) { NativeCall<void, FBlendSample *>(this, "UBlendSpace.SnapToBorder", Sample); }
};

struct UAimOffsetBlendSpace : UBlendSpace
{

	// Functions

	bool IsValidAdditive() { return NativeCall<bool>(this, "UAimOffsetBlendSpace.IsValidAdditive"); }
};

