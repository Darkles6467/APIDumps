#pragma once

#include "BaseDeclarations.h"
#include "UAnimInstance.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FBlendSampleData.h"

struct UAnimSingleNodeInstance : UAnimInstance
{
	char __padding[0xe0L];
	UVertexAnimation * CurrentVertexAnimField() { return GetNativePointerField<UVertexAnimation *>(this, "UAnimSingleNodeInstance.CurrentVertexAnim"); }
	FVector& BlendSpaceInputField() { return *GetNativePointerField<FVector*>(this, "UAnimSingleNodeInstance.BlendSpaceInput"); }
	TArray<FBlendSampleData>& BlendSampleDataField() { return *GetNativePointerField<TArray<FBlendSampleData>*>(this, "UAnimSingleNodeInstance.BlendSampleData"); }
	FBlendFilter& BlendFilterField() { return *GetNativePointerField<FBlendFilter*>(this, "UAnimSingleNodeInstance.BlendFilter"); }
	float& CurrentTimeField() { return *GetNativePointerField<float*>(this, "UAnimSingleNodeInstance.CurrentTime"); }
	float& PlayRateField() { return *GetNativePointerField<float*>(this, "UAnimSingleNodeInstance.PlayRate"); }

	// Functions

	float GetLength() { return NativeCall<float>(this, "UAnimSingleNodeInstance.GetLength"); }
	void InternalBlendSpaceEvaluatePose(UBlendSpaceBase * BlendSpace, TArray<FBlendSampleData> * BlendSampleDataCache, FA2Pose * Pose) { NativeCall<void, UBlendSpaceBase *, TArray<FBlendSampleData> *, FA2Pose *>(this, "UAnimSingleNodeInstance.InternalBlendSpaceEvaluatePose", BlendSpace, BlendSampleDataCache, Pose); }
	void Montage_Advance(float DeltaTime) { NativeCall<void, float>(this, "UAnimSingleNodeInstance.Montage_Advance", DeltaTime); }
	bool NativeEvaluateAnimation(FPoseContext * Output) { return NativeCall<bool, FPoseContext *>(this, "UAnimSingleNodeInstance.NativeEvaluateAnimation", Output); }
	void NativeInitializeAnimation() { NativeCall<void>(this, "UAnimSingleNodeInstance.NativeInitializeAnimation"); }
	void NativeUpdateAnimation(float DeltaTimeX) { NativeCall<void, float>(this, "UAnimSingleNodeInstance.NativeUpdateAnimation", DeltaTimeX); }
	void PlayAnim(bool bIsLooping, float InPlayRate, float InStartPosition) { NativeCall<void, bool, float, float>(this, "UAnimSingleNodeInstance.PlayAnim", bIsLooping, InPlayRate, InStartPosition); }
	void RestartMontage(UAnimMontage * Montage, FName FromSection) { NativeCall<void, UAnimMontage *, FName>(this, "UAnimSingleNodeInstance.RestartMontage", Montage, FromSection); }
	void SetAnimationAsset(UAnimationAsset * NewAsset, bool bIsLooping, float InPlayRate) { NativeCall<void, UAnimationAsset *, bool, float>(this, "UAnimSingleNodeInstance.SetAnimationAsset", NewAsset, bIsLooping, InPlayRate); }
	void SetBlendSpaceInput(const FVector * InBlendInput) { NativeCall<void, const FVector *>(this, "UAnimSingleNodeInstance.SetBlendSpaceInput", InBlendInput); }
	void SetLooping(bool bIsLooping) { NativeCall<void, bool>(this, "UAnimSingleNodeInstance.SetLooping", bIsLooping); }
	void SetMontageLoop(UAnimMontage * Montage, bool bIsLooping, FName StartingSection) { NativeCall<void, UAnimMontage *, bool, FName>(this, "UAnimSingleNodeInstance.SetMontageLoop", Montage, bIsLooping, StartingSection); }
	void SetPlayRate(float InPlayRate) { NativeCall<void, float>(this, "UAnimSingleNodeInstance.SetPlayRate", InPlayRate); }
	void SetPlaying(bool bIsPlaying) { NativeCall<void, bool>(this, "UAnimSingleNodeInstance.SetPlaying", bIsPlaying); }
	void SetPosition(float InPosition, bool bFireNotifies, bool bReallyFireNotifies) { NativeCall<void, float, bool, bool>(this, "UAnimSingleNodeInstance.SetPosition", InPosition, bFireNotifies, bReallyFireNotifies); }
	void SetReverse(bool bInReverse) { NativeCall<void, bool>(this, "UAnimSingleNodeInstance.SetReverse", bInReverse); }
	void SetVertexAnimation(UVertexAnimation * NewVertexAnim, bool bIsLooping, float InPlayRate) { NativeCall<void, UVertexAnimation *, bool, float>(this, "UAnimSingleNodeInstance.SetVertexAnimation", NewVertexAnim, bIsLooping, InPlayRate); }
	void StopAnim() { NativeCall<void>(this, "UAnimSingleNodeInstance.StopAnim"); }
};

