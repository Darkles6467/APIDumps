#pragma once

#include "BaseDeclarations.h"
#include "UAnimationAsset.h"
#include "FBlendSampleData.h"

struct UBlendSpaceBase : UAnimationAsset
{
	char __padding[0xb8L];
	FieldArray<FBlendParameter, 3> BlendParametersField() { return {this, "UBlendSpaceBase.BlendParameters"}; }
	FieldArray<FInterpolationParameter, 3> InterpolationParamField() { return {this, "UBlendSpaceBase.InterpolationParam"}; }
	float& TargetWeightInterpolationSpeedPerSecField() { return *GetNativePointerField<float*>(this, "UBlendSpaceBase.TargetWeightInterpolationSpeedPerSec"); }
	TEnumAsByte<enum ENotifyTriggerMode::Type>& NotifyTriggerModeField() { return *GetNativePointerField<TEnumAsByte<enum ENotifyTriggerMode::Type>*>(this, "UBlendSpaceBase.NotifyTriggerMode"); }
	bool& bRotationBlendInMeshSpaceField() { return *GetNativePointerField<bool*>(this, "UBlendSpaceBase.bRotationBlendInMeshSpace"); }
	int& NumOfDimensionField() { return *GetNativePointerField<int*>(this, "UBlendSpaceBase.NumOfDimension"); }
	float& AnimLengthField() { return *GetNativePointerField<float*>(this, "UBlendSpaceBase.AnimLength"); }
	TArray<FPerBoneInterpolation>& PerBoneBlendField() { return *GetNativePointerField<TArray<FPerBoneInterpolation>*>(this, "UBlendSpaceBase.PerBoneBlend"); }
	TArray<FBlendSample>& SampleDataField() { return *GetNativePointerField<TArray<FBlendSample>*>(this, "UBlendSpaceBase.SampleData"); }
	TArray<FEditorElement>& GridSamplesField() { return *GetNativePointerField<TArray<FEditorElement>*>(this, "UBlendSpaceBase.GridSamples"); }

	// Functions

	float GetAnimationLengthFromSampleData(const TArray<FBlendSampleData> * SampleDataList) { return NativeCall<float, const TArray<FBlendSampleData> *>(this, "UBlendSpaceBase.GetAnimationLengthFromSampleData", SampleDataList); }
	EBlendSpaceAxis GetAxisToScale() { return NativeCall<EBlendSpaceAxis>(this, "UBlendSpaceBase.GetAxisToScale"); }
	FVector * GetNormalizedBlendInput(FVector * result, const FVector * BlendInput) { return NativeCall<FVector *, FVector *, const FVector *>(this, "UBlendSpaceBase.GetNormalizedBlendInput", result, BlendInput); }
	int GetPerBoneInterpolationIndex(int BoneIndex, const FBoneContainer * RequiredBones) { return NativeCall<int, int, const FBoneContainer *>(this, "UBlendSpaceBase.GetPerBoneInterpolationIndex", BoneIndex, RequiredBones); }
	bool GetSamplesFromBlendInput(const FVector * BlendInput, TArray<FBlendSampleData> * OutSampleDataList) { return NativeCall<bool, const FVector *, TArray<FBlendSampleData> *>(this, "UBlendSpaceBase.GetSamplesFromBlendInput", BlendInput, OutSampleDataList); }
	void InitializeFilter(FBlendFilter * Filter) { NativeCall<void, FBlendFilter *>(this, "UBlendSpaceBase.InitializeFilter", Filter); }
	bool InterpolateWeightOfSampleData(float DeltaTime, const TArray<FBlendSampleData> * OldSampleDataList, const TArray<FBlendSampleData> * NewSampleDataList, TArray<FBlendSampleData> * FinalSampleDataList) { return NativeCall<bool, float, const TArray<FBlendSampleData> *, const TArray<FBlendSampleData> *, TArray<FBlendSampleData> *>(this, "UBlendSpaceBase.InterpolateWeightOfSampleData", DeltaTime, OldSampleDataList, NewSampleDataList, FinalSampleDataList); }
	bool IsSameSamplePoint(const FVector * SamplePointA, const FVector * SamplePointB) { return NativeCall<bool, const FVector *, const FVector *>(this, "UBlendSpaceBase.IsSameSamplePoint", SamplePointA, SamplePointB); }
	bool IsTooCloseToExistingSamplePoint(const FVector * SampleValue, int OriginalIndex) { return NativeCall<bool, const FVector *, int>(this, "UBlendSpaceBase.IsTooCloseToExistingSamplePoint", SampleValue, OriginalIndex); }
	bool IsValidAdditiveInternal(EAdditiveAnimationType AdditiveType) { return NativeCall<bool, EAdditiveAnimationType>(this, "UBlendSpaceBase.IsValidAdditiveInternal", AdditiveType); }
	void NormalizeSampleDataWeight(TArray<FBlendSampleData> * SampleDataList) { NativeCall<void, TArray<FBlendSampleData> *>(this, "UBlendSpaceBase.NormalizeSampleDataWeight", SampleDataList); }
	void PostLoad() { NativeCall<void>(this, "UBlendSpaceBase.PostLoad"); }
	void SnapToBorder(FBlendSample * Sample) { NativeCall<void, FBlendSample *>(this, "UBlendSpaceBase.SnapToBorder", Sample); }
	void TickAssetPlayerInstance(const FAnimTickRecord * Instance, UAnimInstance * InstanceOwner, FAnimAssetTickContext * Context) { NativeCall<void, const FAnimTickRecord *, UAnimInstance *, FAnimAssetTickContext *>(this, "UBlendSpaceBase.TickAssetPlayerInstance", Instance, InstanceOwner, Context); }
	void ValidateSampleData() { NativeCall<void>(this, "UBlendSpaceBase.ValidateSampleData"); }
	bool ValidateSampleInput(FBlendSample * BlendSample, int OriginalIndex) { return NativeCall<bool, FBlendSample *, int>(this, "UBlendSpaceBase.ValidateSampleInput", BlendSample, OriginalIndex); }
};

