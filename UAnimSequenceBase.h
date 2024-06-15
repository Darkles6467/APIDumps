#pragma once

#include "BaseDeclarations.h"
#include "UAnimationAsset.h"

struct UAnimSequenceBase : UAnimationAsset
{
	char __padding[0x28L];
	TArray<FAnimNotifyEvent>& NotifiesField() { return *GetNativePointerField<TArray<FAnimNotifyEvent>*>(this, "UAnimSequenceBase.Notifies"); }
	float& SequenceLengthField() { return *GetNativePointerField<float*>(this, "UAnimSequenceBase.SequenceLength"); }
	float& RateScaleField() { return *GetNativePointerField<float*>(this, "UAnimSequenceBase.RateScale"); }
	FRawCurveTracks& RawCurveDataField() { return *GetNativePointerField<FRawCurveTracks*>(this, "UAnimSequenceBase.RawCurveData"); }

	// Functions

	void EvaluateCurveData(UAnimInstance * Instance, float CurrentTime, float BlendWeight) { NativeCall<void, UAnimInstance *, float, float>(this, "UAnimSequenceBase.EvaluateCurveData", Instance, CurrentTime, BlendWeight); }
	void ExtractRootTrack(float Pos, FTransform * RootTransform, const FBoneContainer * RequiredBones) { NativeCall<void, float, FTransform *, const FBoneContainer *>(this, "UAnimSequenceBase.ExtractRootTrack", Pos, RootTransform, RequiredBones); }
	void GetAnimNotifies(const float * StartTime, const float * DeltaTime, const bool bAllowLooping, TArray<FAnimNotifyEvent const *> * OutActiveNotifies) { NativeCall<void, const float *, const float *, const bool, TArray<FAnimNotifyEvent const *> *>(this, "UAnimSequenceBase.GetAnimNotifies", StartTime, DeltaTime, bAllowLooping, OutActiveNotifies); }
	void GetAnimNotifiesFromDeltaPositions(const float * PreviousPosition, const float * CurrentPosition, TArray<FAnimNotifyEvent const *> * OutActiveNotifies) { NativeCall<void, const float *, const float *, TArray<FAnimNotifyEvent const *> *>(this, "UAnimSequenceBase.GetAnimNotifiesFromDeltaPositions", PreviousPosition, CurrentPosition, OutActiveNotifies); }
	void PostLoad() { NativeCall<void>(this, "UAnimSequenceBase.PostLoad"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UAnimSequenceBase.Serialize", Ar); }
	void TickAssetPlayerInstance(const FAnimTickRecord * Instance, UAnimInstance * InstanceOwner, FAnimAssetTickContext * Context) { NativeCall<void, const FAnimTickRecord *, UAnimInstance *, FAnimAssetTickContext *>(this, "UAnimSequenceBase.TickAssetPlayerInstance", Instance, InstanceOwner, Context); }
	void UpgradeMorphTargetCurves() { NativeCall<void>(this, "UAnimSequenceBase.UpgradeMorphTargetCurves"); }
};

