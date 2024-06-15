#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "FBlendSampleData.h"

struct UAnimInstance : UObject
{
	char __padding[0x318L];
	float& DeltaTime_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UAnimInstance.DeltaTime_DEPRECATED"); }
	USkeleton * CurrentSkeletonField() { return GetNativePointerField<USkeleton *>(this, "UAnimInstance.CurrentSkeleton"); }
	TArray<FAnimTickRecord>& UngroupedActivePlayersField() { return *GetNativePointerField<TArray<FAnimTickRecord>*>(this, "UAnimInstance.UngroupedActivePlayers"); }
	TArray<FAnimGroupInstance>& SyncGroupsField() { return *GetNativePointerField<TArray<FAnimGroupInstance>*>(this, "UAnimInstance.SyncGroups"); }
	TArray<FActiveVertexAnim>& VertexAnimsField() { return *GetNativePointerField<TArray<FActiveVertexAnim>*>(this, "UAnimInstance.VertexAnims"); }
	TArray<FAnimMontageInstance *>& MontageInstancesField() { return *GetNativePointerField<TArray<FAnimMontageInstance *>*>(this, "UAnimInstance.MontageInstances"); }
	TArray<FMontageEvaluationState>& MontageEvaluationDataField() { return *GetNativePointerField<TArray<FMontageEvaluationState>*>(this, "UAnimInstance.MontageEvaluationData"); }
	FBoneContainer& RequiredBonesField() { return *GetNativePointerField<FBoneContainer*>(this, "UAnimInstance.RequiredBones"); }
	TArray<FAnimNotifyEvent const *>& AnimNotifiesField() { return *GetNativePointerField<TArray<FAnimNotifyEvent const *>*>(this, "UAnimInstance.AnimNotifies"); }
	TArray<FAnimNotifyEvent>& ActiveAnimNotifyStateField() { return *GetNativePointerField<TArray<FAnimNotifyEvent>*>(this, "UAnimInstance.ActiveAnimNotifyState"); }
	TArray<FName>& MaterialParamatersToClearField() { return *GetNativePointerField<TArray<FName>*>(this, "UAnimInstance.MaterialParamatersToClear"); }
	bool& bBoneCachesInvalidatedField() { return *GetNativePointerField<bool*>(this, "UAnimInstance.bBoneCachesInvalidated"); }
	FAnimMontageInstance * RootMotionMontageInstanceField() { return GetNativePointerField<FAnimMontageInstance *>(this, "UAnimInstance.RootMotionMontageInstance"); }
	FRootMotionMovementParams& ExtractedRootMotionField() { return *GetNativePointerField<FRootMotionMovementParams*>(this, "UAnimInstance.ExtractedRootMotion"); }

	// Functions

	void AddAnimNotifies(const TArray<FAnimNotifyEvent const *> * NewNotifies, const float InstanceWeight) { NativeCall<void, const TArray<FAnimNotifyEvent const *> *, const float>(this, "UAnimInstance.AddAnimNotifies", NewNotifies, InstanceWeight); }
	void AddAnimNotifyFromGeneratedClass(int NotifyIndex) { NativeCall<void, int>(this, "UAnimInstance.AddAnimNotifyFromGeneratedClass", NotifyIndex); }
	void AddCurveValue(const FName * CurveName, float Value, int CurveTypeFlags) { NativeCall<void, const FName *, float, int>(this, "UAnimInstance.AddCurveValue", CurveName, Value, CurveTypeFlags); }
	void AddCurveValue(const unsigned __int16 Uid, float Value, int CurveTypeFlags) { NativeCall<void, const unsigned __int16, float, int>(this, "UAnimInstance.AddCurveValue", Uid, Value, CurveTypeFlags); }
	static void AddReferencedObjects(UObject * InThis, FReferenceCollector * Collector) { NativeCall<void, UObject *, FReferenceCollector *>(nullptr, "UAnimInstance.AddReferencedObjects", InThis, Collector); }
	void AnimNotify_Sound(UAnimNotify * AnimNotify) { NativeCall<void, UAnimNotify *>(this, "UAnimInstance.AnimNotify_Sound", AnimNotify); }
	void ApplyAdditiveSequence(const FA2Pose * BasePose, const FA2Pose * AdditivePose, float Alpha, FA2Pose * Blended) { NativeCall<void, const FA2Pose *, const FA2Pose *, float, FA2Pose *>(this, "UAnimInstance.ApplyAdditiveSequence", BasePose, AdditivePose, Alpha, Blended); }
	void BlendRotationOffset(const FA2Pose * BasePose, const FA2Pose * RotationOffsetPose, float Alpha, FA2Pose * Pose) { NativeCall<void, const FA2Pose *, const FA2Pose *, float, FA2Pose *>(this, "UAnimInstance.BlendRotationOffset", BasePose, RotationOffsetPose, Alpha, Pose); }
	void BlendSequences(const FA2Pose * Pose1, const FA2Pose * Pose2, float Alpha, FA2Pose * Result) { NativeCall<void, const FA2Pose *, const FA2Pose *, float, FA2Pose *>(this, "UAnimInstance.BlendSequences", Pose1, Pose2, Alpha, Result); }
	float CalculateDirection(const FVector * Velocity, const FRotator * BaseRotation) { return NativeCall<float, const FVector *, const FRotator *>(this, "UAnimInstance.CalculateDirection", Velocity, BaseRotation); }
	void ClearMorphTargets() { NativeCall<void>(this, "UAnimInstance.ClearMorphTargets"); }
	void ClearSlotNodeWeights() { NativeCall<void>(this, "UAnimInstance.ClearSlotNodeWeights"); }
	FRootMotionMovementParams * ConsumeExtractedRootMotion(FRootMotionMovementParams * result) { return NativeCall<FRootMotionMovementParams *, FRootMotionMovementParams *>(this, "UAnimInstance.ConsumeExtractedRootMotion", result); }
	static void CopyPose(const FA2Pose * Source, FA2Pose * Destination) { NativeCall<void, const FA2Pose *, FA2Pose *>(nullptr, "UAnimInstance.CopyPose", Source, Destination); }
	FAnimTickRecord * CreateUninitializedTickRecord(int GroupIndex, FAnimGroupInstance ** OutSyncGroupPtr) { return NativeCall<FAnimTickRecord *, int, FAnimGroupInstance **>(this, "UAnimInstance.CreateUninitializedTickRecord", GroupIndex, OutSyncGroupPtr); }
	void DisplayDebug(UCanvas * Canvas, const FDebugDisplayInfo * DebugDisplay, float * YL, float * YPos) { NativeCall<void, UCanvas *, const FDebugDisplayInfo *, float *, float *>(this, "UAnimInstance.DisplayDebug", Canvas, DebugDisplay, YL, YPos); }
	void EvaluateAnimation(FPoseContext * Output, const TArray<FTransform> * OptionalBlendPose, float OptionalBlendPoseWeight) { NativeCall<void, FPoseContext *, const TArray<FTransform> *, float>(this, "UAnimInstance.EvaluateAnimation", Output, OptionalBlendPose, OptionalBlendPoseWeight); }
	FAnimMontageInstance * GetActiveMontageInstance() { return NativeCall<FAnimMontageInstance *>(this, "UAnimInstance.GetActiveMontageInstance"); }
	static float GetAnimAssetPlayerLength(UAnimationAsset * AnimAsset) { return NativeCall<float, UAnimationAsset *>(nullptr, "UAnimInstance.GetAnimAssetPlayerLength", AnimAsset); }
	static float GetAnimAssetPlayerTimeFraction(UAnimationAsset * AnimAsset, float CurrentTime) { return NativeCall<float, UAnimationAsset *, float>(nullptr, "UAnimInstance.GetAnimAssetPlayerTimeFraction", AnimAsset, CurrentTime); }
	static float GetAnimAssetPlayerTimeFromEnd(UAnimationAsset * AnimAsset, float CurrentTime) { return NativeCall<float, UAnimationAsset *, float>(nullptr, "UAnimInstance.GetAnimAssetPlayerTimeFromEnd", AnimAsset, CurrentTime); }
	static float GetAnimAssetPlayerTimeFromEndFraction(UAnimationAsset * AnimAsset, float CurrentTime) { return NativeCall<float, UAnimationAsset *, float>(nullptr, "UAnimInstance.GetAnimAssetPlayerTimeFromEndFraction", AnimAsset, CurrentTime); }
	void GetAnimationNames(FString * Output) { NativeCall<void, FString *>(this, "UAnimInstance.GetAnimationNames", Output); }
	__int16 GetContextCounter() { return NativeCall<__int16>(this, "UAnimInstance.GetContextCounter"); }
	UAnimMontage * GetCurrentActiveMontage() { return NativeCall<UAnimMontage *>(this, "UAnimInstance.GetCurrentActiveMontage"); }
	float GetCurrentStateElapsedTime(int MachineIndex) { return NativeCall<float, int>(this, "UAnimInstance.GetCurrentStateElapsedTime", MachineIndex); }
	float GetCurveValue(FName CurveName) { return NativeCall<float, FName>(this, "UAnimInstance.GetCurveValue", CurveName); }
	FAnimMontageInstance * GetRootMotionMontageInstance() { return NativeCall<FAnimMontageInstance *>(this, "UAnimInstance.GetRootMotionMontageInstance"); }
	void GetSlotWeight(const FName * SlotNodeName, float * out_SlotNodeWeight, float * out_SourceWeight) { NativeCall<void, const FName *, float *, float *>(this, "UAnimInstance.GetSlotWeight", SlotNodeName, out_SlotNodeWeight, out_SourceWeight); }
	float GetStateWeight(int MachineIndex, int StateIndex) { return NativeCall<float, int, int>(this, "UAnimInstance.GetStateWeight", MachineIndex, StateIndex); }
	UWorld * GetWorld() { return NativeCall<UWorld *>(this, "UAnimInstance.GetWorld"); }
	void InitializeAnimation() { NativeCall<void>(this, "UAnimInstance.InitializeAnimation"); }
	bool IsActiveSlotNode(FName SlotNodeName) { return NativeCall<bool, FName>(this, "UAnimInstance.IsActiveSlotNode", SlotNodeName); }
	bool IsPlayingSlotAnimation(UAnimSequenceBase * Asset, FName SlotNodeName) { return NativeCall<bool, UAnimSequenceBase *, FName>(this, "UAnimInstance.IsPlayingSlotAnimation", Asset, SlotNodeName); }
	void MakeBlendSpaceTickRecord(FAnimTickRecord * TickRecord, UBlendSpaceBase * BlendSpace, const FVector * BlendInput, TArray<FBlendSampleData> * BlendSampleDataCache, FBlendFilter * BlendFilter, bool bLooping, float PlayRate, float FinalBlendWeight, float * CurrentTime) { NativeCall<void, FAnimTickRecord *, UBlendSpaceBase *, const FVector *, TArray<FBlendSampleData> *, FBlendFilter *, bool, float, float, float *>(this, "UAnimInstance.MakeBlendSpaceTickRecord", TickRecord, BlendSpace, BlendInput, BlendSampleDataCache, BlendFilter, bLooping, PlayRate, FinalBlendWeight, CurrentTime); }
	void MakeSequenceTickRecord(FAnimTickRecord * TickRecord, UAnimSequenceBase * Sequence, bool bLooping, float PlayRate, float FinalBlendWeight, float * CurrentTime) { NativeCall<void, FAnimTickRecord *, UAnimSequenceBase *, bool, float, float, float *>(this, "UAnimInstance.MakeSequenceTickRecord", TickRecord, Sequence, bLooping, PlayRate, FinalBlendWeight, CurrentTime); }
	void Montage_Advance(float DeltaSeconds) { NativeCall<void, float>(this, "UAnimInstance.Montage_Advance", DeltaSeconds); }
	FName * Montage_GetCurrentSection(FName * result, UAnimMontage * Montage) { return NativeCall<FName *, FName *, UAnimMontage *>(this, "UAnimInstance.Montage_GetCurrentSection", result, Montage); }
	bool Montage_GetCurrentTime(UAnimMontage * Montage, float * OutMontageTimeRemaining, float * OutTotalMontageDuration) { return NativeCall<bool, UAnimMontage *, float *, float *>(this, "UAnimInstance.Montage_GetCurrentTime", Montage, OutMontageTimeRemaining, OutTotalMontageDuration); }
	bool Montage_GetIsStopped(UAnimMontage * Montage) { return NativeCall<bool, UAnimMontage *>(this, "UAnimInstance.Montage_GetIsStopped", Montage); }
	float Montage_GetPlayRate(UAnimMontage * Montage) { return NativeCall<float, UAnimMontage *>(this, "UAnimInstance.Montage_GetPlayRate", Montage); }
	float Montage_GetPosition(UAnimMontage * Montage) { return NativeCall<float, UAnimMontage *>(this, "UAnimInstance.Montage_GetPosition", Montage); }
	bool Montage_IsActive(UAnimMontage * Montage) { return NativeCall<bool, UAnimMontage *>(this, "UAnimInstance.Montage_IsActive", Montage); }
	bool Montage_IsPlaying(UAnimMontage * Montage, float TimeFromEndToConsiderFinished) { return NativeCall<bool, UAnimMontage *, float>(this, "UAnimInstance.Montage_IsPlaying", Montage, TimeFromEndToConsiderFinished); }
	void Montage_JumpToSection(FName SectionName, UAnimMontage * Montage) { NativeCall<void, FName, UAnimMontage *>(this, "UAnimInstance.Montage_JumpToSection", SectionName, Montage); }
	void Montage_JumpToSectionsEnd(FName SectionName, UAnimMontage * Montage) { NativeCall<void, FName, UAnimMontage *>(this, "UAnimInstance.Montage_JumpToSectionsEnd", SectionName, Montage); }
	float Montage_Play(UAnimMontage * MontageToPlay, float InPlayRate, bool bPauseOnFinish) { return NativeCall<float, UAnimMontage *, float, bool>(this, "UAnimInstance.Montage_Play", MontageToPlay, InPlayRate, bPauseOnFinish); }
	float Montage_Play_WithBlending(UAnimMontage * MontageToPlay, float BlendInTime, float BlendOutTime, float InPlayRate, bool bPauseOnFinish) { return NativeCall<float, UAnimMontage *, float, float, float, bool>(this, "UAnimInstance.Montage_Play_WithBlending", MontageToPlay, BlendInTime, BlendOutTime, InPlayRate, bPauseOnFinish); }
	void Montage_SetNextSection(FName SectionNameToChange, FName NextSection, UAnimMontage * Montage) { NativeCall<void, FName, FName, UAnimMontage *>(this, "UAnimInstance.Montage_SetNextSection", SectionNameToChange, NextSection, Montage); }
	void Montage_SetPlayRate(UAnimMontage * Montage, float NewPlayRate) { NativeCall<void, UAnimMontage *, float>(this, "UAnimInstance.Montage_SetPlayRate", Montage, NewPlayRate); }
	void Montage_SetPosition(UAnimMontage * Montage, float NewPosition) { NativeCall<void, UAnimMontage *, float>(this, "UAnimInstance.Montage_SetPosition", Montage, NewPosition); }
	void Montage_Stop(float InBlendOutTime, UAnimMontage * Montage) { NativeCall<void, float, UAnimMontage *>(this, "UAnimInstance.Montage_Stop", InBlendOutTime, Montage); }
	void Montage_UpdateWeight(float DeltaSeconds) { NativeCall<void, float>(this, "UAnimInstance.Montage_UpdateWeight", DeltaSeconds); }
	void OnMontageInstanceStopped(FAnimMontageInstance * StoppedMontageInstance) { NativeCall<void, FAnimMontageInstance *>(this, "UAnimInstance.OnMontageInstanceStopped", StoppedMontageInstance); }
	float PlaySlotAnimation(UAnimSequenceBase * Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate) { return NativeCall<float, UAnimSequenceBase *, FName, float, float, float>(this, "UAnimInstance.PlaySlotAnimation", Asset, SlotNodeName, BlendInTime, BlendOutTime, InPlayRate); }
	void RecalcRequiredBones() { NativeCall<void>(this, "UAnimInstance.RecalcRequiredBones"); }
	void RegisterSlotNode(FName SlotNodeName) { NativeCall<void, FName>(this, "UAnimInstance.RegisterSlotNode", SlotNodeName); }
	void SequenceEvaluatePose(UAnimSequenceBase * Sequence, FA2Pose * Pose, const FAnimExtractContext * ExtractionContext) { NativeCall<void, UAnimSequenceBase *, FA2Pose *, const FAnimExtractContext *>(this, "UAnimInstance.SequenceEvaluatePose", Sequence, Pose, ExtractionContext); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UAnimInstance.Serialize", Ar); }
	void SetMorphTarget(FName MorphTargetName, float Value) { NativeCall<void, FName, float>(this, "UAnimInstance.SetMorphTarget", MorphTargetName, Value); }
	void SlotEvaluatePose(FName SlotNodeName, const FA2Pose * SourcePose, FA2Pose * BlendedPose, float SlotNodeWeight) { NativeCall<void, FName, const FA2Pose *, FA2Pose *, float>(this, "UAnimInstance.SlotEvaluatePose", SlotNodeName, SourcePose, BlendedPose, SlotNodeWeight); }
	void StopAllMontages(float BlendOut) { NativeCall<void, float>(this, "UAnimInstance.StopAllMontages", BlendOut); }
	void StopAllMontagesByGroupName(FName InGroupName, float BlendOutTime) { NativeCall<void, FName, float>(this, "UAnimInstance.StopAllMontagesByGroupName", InGroupName, BlendOutTime); }
	void StopSlotAnimation(float InBlendOutTime) { NativeCall<void, float>(this, "UAnimInstance.StopSlotAnimation", InBlendOutTime); }
	void TriggerAnimNotifies(float DeltaSeconds, bool bForceFireNotifies) { NativeCall<void, float, bool>(this, "UAnimInstance.TriggerAnimNotifies", DeltaSeconds, bForceFireNotifies); }
	void UpdateAnimation(float DeltaSeconds) { NativeCall<void, float>(this, "UAnimInstance.UpdateAnimation", DeltaSeconds); }
	void UpdateMontageEvaluationData() { NativeCall<void>(this, "UAnimInstance.UpdateMontageEvaluationData"); }
	void UpdateSlotNodeWeight(FName SlotNodeName, float Weight) { NativeCall<void, FName, float>(this, "UAnimInstance.UpdateSlotNodeWeight", SlotNodeName, Weight); }
	void BlueprintInitializeAnimation() { NativeCall<void>(this, "UAnimInstance.BlueprintInitializeAnimation"); }
	void BlueprintPlayAnimationEvent(UAnimMontage * AnimationMontage, float PlayRate, float * playedAnimLength) { NativeCall<void, UAnimMontage *, float, float *>(this, "UAnimInstance.BlueprintPlayAnimationEvent", AnimationMontage, PlayRate, playedAnimLength); }
	void BlueprintTriggerAnimationEvent(FName AnimationEventName, float * playedAnimLength) { NativeCall<void, FName, float *>(this, "UAnimInstance.BlueprintTriggerAnimationEvent", AnimationEventName, playedAnimLength); }
	void BlueprintUpdateAnimation(float DeltaTimeX) { NativeCall<void, float>(this, "UAnimInstance.BlueprintUpdateAnimation", DeltaTimeX); }
};

