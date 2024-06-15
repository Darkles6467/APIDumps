#pragma once

#include "BaseDeclarations.h"
#include "UAnimCompositeBase.h"
#include "UAnimSequenceBase.h"
#include "UAnimationAsset.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAnimMontage : UAnimCompositeBase
{
	char __padding[0x48L];
	float& BlendInTimeField() { return *GetNativePointerField<float*>(this, "UAnimMontage.BlendInTime"); }
	float& BlendOutTimeField() { return *GetNativePointerField<float*>(this, "UAnimMontage.BlendOutTime"); }
	bool& bClientPlayWhenNotRenderedField() { return *GetNativePointerField<bool*>(this, "UAnimMontage.bClientPlayWhenNotRendered"); }
	bool& bForceTickPoseAndServerUpdateMeshField() { return *GetNativePointerField<bool*>(this, "UAnimMontage.bForceTickPoseAndServerUpdateMesh"); }
	bool& bAnimPauseOnFinishField() { return *GetNativePointerField<bool*>(this, "UAnimMontage.bAnimPauseOnFinish"); }
	TArray<FCompositeSection>& CompositeSectionsField() { return *GetNativePointerField<TArray<FCompositeSection>*>(this, "UAnimMontage.CompositeSections"); }
	TArray<FSlotAnimationTrack>& SlotAnimTracksField() { return *GetNativePointerField<TArray<FSlotAnimationTrack>*>(this, "UAnimMontage.SlotAnimTracks"); }
	TArray<FBranchingPoint>& BranchingPointsField() { return *GetNativePointerField<TArray<FBranchingPoint>*>(this, "UAnimMontage.BranchingPoints"); }
	bool& bEnableRootMotionTranslationField() { return *GetNativePointerField<bool*>(this, "UAnimMontage.bEnableRootMotionTranslation"); }
	bool& bEnableRootMotionRotationField() { return *GetNativePointerField<bool*>(this, "UAnimMontage.bEnableRootMotionRotation"); }
	TEnumAsByte<enum ERootMotionRootLock::Type>& RootMotionRootLockField() { return *GetNativePointerField<TEnumAsByte<enum ERootMotionRootLock::Type>*>(this, "UAnimMontage.RootMotionRootLock"); }
	bool& bAnimBranchingPointNeedsSortField() { return *GetNativePointerField<bool*>(this, "UAnimMontage.bAnimBranchingPointNeedsSort"); }

	// Functions

	void EvaluateCurveData(UAnimInstance * Instance, float CurrentTime, float BlendWeight) { NativeCall<void, UAnimInstance *, float, float>(this, "UAnimMontage.EvaluateCurveData", Instance, CurrentTime, BlendWeight); }
	FTransform * ExtractRootMotionFromTrackRange(FTransform * result, float StartTrackPosition, float EndTrackPosition) { return NativeCall<FTransform *, FTransform *, float, float>(this, "UAnimMontage.ExtractRootMotionFromTrackRange", result, StartTrackPosition, EndTrackPosition); }
	const FBranchingPoint * FindFirstBranchingPoint(float StartTrackPos, float EndTrackPos) { return NativeCall<const FBranchingPoint *, float, float>(this, "UAnimMontage.FindFirstBranchingPoint", StartTrackPos, EndTrackPos); }
	const FAnimTrack * GetAnimationData(FName InSlotName) { return NativeCall<const FAnimTrack *, FName>(this, "UAnimMontage.GetAnimationData", InSlotName); }
	int GetSectionIndex(FName InSectionName) { return NativeCall<int, FName>(this, "UAnimMontage.GetSectionIndex", InSectionName); }
	float GetSectionLength(int SectionIndex) { return NativeCall<float, int>(this, "UAnimMontage.GetSectionLength", SectionIndex); }
	bool HasValidSlotSetup() { return NativeCall<bool>(this, "UAnimMontage.HasValidSlotSetup"); }
	bool IsValidAdditive() { return NativeCall<bool>(this, "UAnimMontage.IsValidAdditive"); }
	bool IsValidSectionIndex(int SectionIndex) { return NativeCall<bool, int>(this, "UAnimMontage.IsValidSectionIndex", SectionIndex); }
	bool IsValidSlot(FName InSlotName) { return NativeCall<bool, FName>(this, "UAnimMontage.IsValidSlot", InSlotName); }
	void PostLoad() { NativeCall<void>(this, "UAnimMontage.PostLoad"); }
};

