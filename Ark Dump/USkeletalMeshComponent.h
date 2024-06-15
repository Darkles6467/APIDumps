#pragma once

#include "BaseDeclarations.h"
#include "USkinnedMeshComponent.h"
#include "UMeshComponent.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FBoneModifierNamed.h"
#include "FOverlapResult.h"
#include "FActiveVertexAnim.h"

struct USkeletalMeshComponent : USkinnedMeshComponent
{
	char __padding[0x470L];
	TEnumAsByte<enum EAnimationMode::Type>& AnimationModeField() { return *GetNativePointerField<TEnumAsByte<enum EAnimationMode::Type>*>(this, "USkeletalMeshComponent.AnimationMode"); }
	FVector& InterpolatedRootLocationField() { return *GetNativePointerField<FVector*>(this, "USkeletalMeshComponent.InterpolatedRootLocation"); }
	FRotator& InterpolatedRootRotationField() { return *GetNativePointerField<FRotator*>(this, "USkeletalMeshComponent.InterpolatedRootRotation"); }
	FVector& CurrentSkeletonUpDirField() { return *GetNativePointerField<FVector*>(this, "USkeletalMeshComponent.CurrentSkeletonUpDir"); }
	TArray<float>& OriginalBonesOffsetsField() { return *GetNativePointerField<TArray<float>*>(this, "USkeletalMeshComponent.OriginalBonesOffsets"); }
	TArray<FIKLegInfo>& IkLegsField() { return *GetNativePointerField<TArray<FIKLegInfo>*>(this, "USkeletalMeshComponent.IkLegs"); }
	TArray<FIKGroundPlaneOverrideInfo>& IkGroundPlaneOverridesField() { return *GetNativePointerField<TArray<FIKGroundPlaneOverrideInfo>*>(this, "USkeletalMeshComponent.IkGroundPlaneOverrides"); }
	TArray<FIKRootAdjustmentInfo>& IkRootAdjustmentPointsField() { return *GetNativePointerField<TArray<FIKRootAdjustmentInfo>*>(this, "USkeletalMeshComponent.IkRootAdjustmentPoints"); }
	float& IkRootAdjustmentHeightCSField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.IkRootAdjustmentHeightCS"); }
	float& IkRootOffsetInterpSpeedField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.IkRootOffsetInterpSpeed"); }
	float& IkRootOffsetInterpSpeedUpField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.IkRootOffsetInterpSpeedUp"); }
	float& IkRootWorldOffsetInterpSpeedField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.IkRootWorldOffsetInterpSpeed"); }
	float& IkRootWorldOffsetInterpSpeedUpField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.IkRootWorldOffsetInterpSpeedUp"); }
	float& IkInterpSpeedField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.IkInterpSpeed"); }
	float& IkInterpSpeedUpField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.IkInterpSpeedUp"); }
	float& IkFabrikInterpSpeedField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.IkFabrikInterpSpeed"); }
	float& IkFeetAlignmentInterpSpeedField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.IkFeetAlignmentInterpSpeed"); }
	float& IkGroundPlaneInterpSpeedField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.IkGroundPlaneInterpSpeed"); }
	float& MinHitNormalZForFeetAlignmentField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.MinHitNormalZForFeetAlignment"); }
	float& FeetAlignmentLimitField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.FeetAlignmentLimit"); }
	float& LegLimitRatioFromCylinderHeightField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.LegLimitRatioFromCylinderHeight"); }
	FRotator& IkRootRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "USkeletalMeshComponent.IkRootRotationOffset"); }
	FVector& IkRootLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "USkeletalMeshComponent.IkRootLocationOffset"); }
	float& DinoIKDelayedTraceFreezeDurationMultiplierField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.DinoIKDelayedTraceFreezeDurationMultiplier"); }
	float& DinoIKSlopeMatchingRootHeightOffsetField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.DinoIKSlopeMatchingRootHeightOffset"); }
	float& DinoIKAnimationLegZOffsetingMultiplierField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.DinoIKAnimationLegZOffsetingMultiplier"); }
	FVector& TwoLegVirtualHitLocationWSField() { return *GetNativePointerField<FVector*>(this, "USkeletalMeshComponent.TwoLegVirtualHitLocationWS"); }
	FVector& TwoLegVirtualHitLocationWSTargetField() { return *GetNativePointerField<FVector*>(this, "USkeletalMeshComponent.TwoLegVirtualHitLocationWSTarget"); }
	FVector& TwoLegVirtualHitLocationCSField() { return *GetNativePointerField<FVector*>(this, "USkeletalMeshComponent.TwoLegVirtualHitLocationCS"); }
	float& DistanceFromGroundToStartIKField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.DistanceFromGroundToStartIK"); }
	float& DistanceFromGroundToStartIKBiasField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.DistanceFromGroundToStartIKBias"); }
	int& MaxIterationsField() { return *GetNativePointerField<int*>(this, "USkeletalMeshComponent.MaxIterations"); }
	float& MatchSlopeRotationSpeedField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.MatchSlopeRotationSpeed"); }
	float& RootPitchRotationLimitField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.RootPitchRotationLimit"); }
	float& RootRollRotationLimitField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.RootRollRotationLimit"); }
	float& ForceUpdateValuesTimeLimitField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.ForceUpdateValuesTimeLimit"); }
	float& RootOffsetField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.RootOffset"); }
	FRotator& RootRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "USkeletalMeshComponent.RootRotationOffset"); }
	long double& LastIkUpdateTimeField() { return *GetNativePointerField<long double*>(this, "USkeletalMeshComponent.LastIkUpdateTime"); }
	int& LastIKCalculationFrameField() { return *GetNativePointerField<int*>(this, "USkeletalMeshComponent.LastIKCalculationFrame"); }
	long double& ForceIkUpdateTimeField() { return *GetNativePointerField<long double*>(this, "USkeletalMeshComponent.ForceIkUpdateTime"); }
	long double& IKFirstFrozenUpdatedTimeField() { return *GetNativePointerField<long double*>(this, "USkeletalMeshComponent.IKFirstFrozenUpdatedTime"); }
	long double& LastIKFrozenStartTimeField() { return *GetNativePointerField<long double*>(this, "USkeletalMeshComponent.LastIKFrozenStartTime"); }
	float& LastRootZField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.LastRootZ"); }
	FQuat& CurrentGroundSlopeField() { return *GetNativePointerField<FQuat*>(this, "USkeletalMeshComponent.CurrentGroundSlope"); }
	bool& bMovedLastFrameField() { return *GetNativePointerField<bool*>(this, "USkeletalMeshComponent.bMovedLastFrame"); }
	bool& bNeedsUpdateToCachedLegInfosField() { return *GetNativePointerField<bool*>(this, "USkeletalMeshComponent.bNeedsUpdateToCachedLegInfos"); }
	bool& bUsingFrozenIKField() { return *GetNativePointerField<bool*>(this, "USkeletalMeshComponent.bUsingFrozenIK"); }
	long double& TimeToStopUpdatingLegCachesField() { return *GetNativePointerField<long double*>(this, "USkeletalMeshComponent.TimeToStopUpdatingLegCaches"); }
	TArray<FIKLegInfo>& LastCachedIKLegInfosField() { return *GetNativePointerField<TArray<FIKLegInfo>*>(this, "USkeletalMeshComponent.LastCachedIKLegInfos"); }
	FVector& CachedTwoLegVirtualHitLocationWSField() { return *GetNativePointerField<FVector*>(this, "USkeletalMeshComponent.CachedTwoLegVirtualHitLocationWS"); }
	FVector& CachedTwoLegVirtualHitLocationCSField() { return *GetNativePointerField<FVector*>(this, "USkeletalMeshComponent.CachedTwoLegVirtualHitLocationCS"); }
	FVector& LastIKPositionField() { return *GetNativePointerField<FVector*>(this, "USkeletalMeshComponent.LastIKPosition"); }
	float& BoneModifiersLegLengthPercentageField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.BoneModifiersLegLengthPercentage"); }
	TArray<FBoneModifier>& CurrentBoneModifiersField() { return *GetNativePointerField<TArray<FBoneModifier>*>(this, "USkeletalMeshComponent.CurrentBoneModifiers"); }
	UAnimBlueprintGeneratedClass * AnimBlueprintGeneratedClassField() { return GetNativePointerField<UAnimBlueprintGeneratedClass *>(this, "USkeletalMeshComponent.AnimBlueprintGeneratedClass"); }
	FSingleAnimationPlayData& AnimationDataField() { return *GetNativePointerField<FSingleAnimationPlayData*>(this, "USkeletalMeshComponent.AnimationData"); }
	TArray<FTransform>& LocalAtomsField() { return *GetNativePointerField<TArray<FTransform>*>(this, "USkeletalMeshComponent.LocalAtoms"); }
	long double& LastMeshGameplayRelevantTimeField() { return *GetNativePointerField<long double*>(this, "USkeletalMeshComponent.LastMeshGameplayRelevantTime"); }
	TArray<FTransform>& CachedLocalAtomsField() { return *GetNativePointerField<TArray<FTransform>*>(this, "USkeletalMeshComponent.CachedLocalAtoms"); }
	TArray<FTransform>& CachedSpaceBasesField() { return *GetNativePointerField<TArray<FTransform>*>(this, "USkeletalMeshComponent.CachedSpaceBases"); }
	float& GlobalAnimRateScaleField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.GlobalAnimRateScale"); }
	TEnumAsByte<enum EKinematicBonesUpdateToPhysics::Type>& KinematicBonesUpdateTypeField() { return *GetNativePointerField<TEnumAsByte<enum EKinematicBonesUpdateToPhysics::Type>*>(this, "USkeletalMeshComponent.KinematicBonesUpdateType"); }
	float& ComponentMassScaleField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.ComponentMassScale"); }
	float& MinLinearDampingField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.MinLinearDamping"); }
	float& MinAngularDampingField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.MinAngularDamping"); }
	float& TeleportDistanceThresholdField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.TeleportDistanceThreshold"); }
	float& TeleportRotationThresholdField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.TeleportRotationThreshold"); }
	float& ClothBlendWeightField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.ClothBlendWeight"); }
	FVector& RootBoneTranslationField() { return *GetNativePointerField<FVector*>(this, "USkeletalMeshComponent.RootBoneTranslation"); }
	int& NumNonZeroLODsField() { return *GetNativePointerField<int*>(this, "USkeletalMeshComponent.NumNonZeroLODs"); }
	TEnumAsByte<enum ECollisionEnabled::Type>& PreSleepingKinematicsCollisionTypeField() { return *GetNativePointerField<TEnumAsByte<enum ECollisionEnabled::Type>*>(this, "USkeletalMeshComponent.PreSleepingKinematicsCollisionType"); }
	FVector& LineCheckBoundsScaleField() { return *GetNativePointerField<FVector*>(this, "USkeletalMeshComponent.LineCheckBoundsScale"); }
	TArray<unsigned short>& RequiredBonesField() { return *GetNativePointerField<TArray<unsigned short>*>(this, "USkeletalMeshComponent.RequiredBones"); }
	int& RootBodyIndexField() { return *GetNativePointerField<int*>(this, "USkeletalMeshComponent.RootBodyIndex"); }
	TArray<FBodyInstance *>& BodiesField() { return *GetNativePointerField<TArray<FBodyInstance *>*>(this, "USkeletalMeshComponent.Bodies"); }
	TArray<FConstraintInstance *>& ConstraintsField() { return *GetNativePointerField<TArray<FConstraintInstance *>*>(this, "USkeletalMeshComponent.Constraints"); }
	physx::PxAggregate * AggregateField() { return GetNativePointerField<physx::PxAggregate *>(this, "USkeletalMeshComponent.Aggregate"); }
	FAnimationEvaluationContext& AnimEvaluationContextField() { return *GetNativePointerField<FAnimationEvaluationContext*>(this, "USkeletalMeshComponent.AnimEvaluationContext"); }
	TRefCountPtr<FGraphEvent>& ParallelAnimationEvaluationTaskField() { return *GetNativePointerField<TRefCountPtr<FGraphEvent>*>(this, "USkeletalMeshComponent.ParallelAnimationEvaluationTask"); }
	TRefCountPtr<FGraphEvent>& ParallelBlendPhysicsCompletionTaskField() { return *GetNativePointerField<TRefCountPtr<FGraphEvent>*>(this, "USkeletalMeshComponent.ParallelBlendPhysicsCompletionTask"); }
	float& ForcedBlueprintBlendCurrentWeightField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.ForcedBlueprintBlendCurrentWeight"); }
	float& ForcedBlueprintBlendDurationField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.ForcedBlueprintBlendDuration"); }
	TArray<FTransform>& ForcedBlueprintBlendCachedBonesField() { return *GetNativePointerField<TArray<FTransform>*>(this, "USkeletalMeshComponent.ForcedBlueprintBlendCachedBones"); }
	UAnimSequence * SequenceToPlay_DEPRECATEDField() { return GetNativePointerField<UAnimSequence *>(this, "USkeletalMeshComponent.SequenceToPlay_DEPRECATED"); }
	float& DefaultPosition_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.DefaultPosition_DEPRECATED"); }
	float& DefaultPlayRate_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponent.DefaultPlayRate_DEPRECATED"); }
	int& TickingModulusField() { return *GetNativePointerField<int*>(this, "USkeletalMeshComponent.TickingModulus"); }
	int& LowQualityTickingModulusField() { return *GetNativePointerField<int*>(this, "USkeletalMeshComponent.LowQualityTickingModulus"); }
	int& LastKinematicWorldUpdateFrameField() { return *GetNativePointerField<int*>(this, "USkeletalMeshComponent.LastKinematicWorldUpdateFrame"); }
	long double& LastTickTimeField() { return *GetNativePointerField<long double*>(this, "USkeletalMeshComponent.LastTickTime"); }
	long double& PreventSoundCuesTimeField() { return *GetNativePointerField<long double*>(this, "USkeletalMeshComponent.PreventSoundCuesTime"); }
	long double& DisableParallelAnimationsTimeField() { return *GetNativePointerField<long double*>(this, "USkeletalMeshComponent.DisableParallelAnimationsTime"); }
	bool& IgnoreStaggeredUpdatesThisTickField() { return *GetNativePointerField<bool*>(this, "USkeletalMeshComponent.IgnoreStaggeredUpdatesThisTick"); }
	int& StaggeredUIDField() { return *GetNativePointerField<int*>(this, "USkeletalMeshComponent.StaggeredUID"); }

	// Functions

	void AccumulateAllBodiesBelowPhysicsBlendWeight(const FName * InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType) { NativeCall<void, const FName *, float, bool>(this, "USkeletalMeshComponent.AccumulateAllBodiesBelowPhysicsBlendWeight", InBoneName, PhysicsBlendWeight, bSkipCustomPhysicsType); }
	void AddRadialForce(FVector Origin, float Radius, float Strength, ERadialImpulseFalloff Falloff) { NativeCall<void, FVector, float, float, ERadialImpulseFalloff>(this, "USkeletalMeshComponent.AddRadialForce", Origin, Radius, Strength, Falloff); }
	void AddRadialImpulse(FVector Origin, float Radius, float Strength, ERadialImpulseFalloff Falloff, bool bVelChange) { NativeCall<void, FVector, float, float, ERadialImpulseFalloff, bool>(this, "USkeletalMeshComponent.AddRadialImpulse", Origin, Radius, Strength, Falloff, bVelChange); }
	bool AllocateTransformData() { return NativeCall<bool>(this, "USkeletalMeshComponent.AllocateTransformData"); }
	void ApplyDeltaToAllPhysicsTransforms(const FVector * DeltaLocation, const FQuat * DeltaRotation) { NativeCall<void, const FVector *, const FQuat *>(this, "USkeletalMeshComponent.ApplyDeltaToAllPhysicsTransforms", DeltaLocation, DeltaRotation); }
	void BPRefreshBoneTransforms() { NativeCall<void>(this, "USkeletalMeshComponent.BPRefreshBoneTransforms"); }
	void BPSetBoneModifiers(const TArray<FBoneModifierNamed> * NamedBoneModifiers) { NativeCall<void, const TArray<FBoneModifierNamed> *>(this, "USkeletalMeshComponent.BPSetBoneModifiers", NamedBoneModifiers); }
	void BPTickPose(float DeltaTime) { NativeCall<void, float>(this, "USkeletalMeshComponent.BPTickPose", DeltaTime); }
	bool BPValidBoneToUnhide(int BoneIndex) { return NativeCall<bool, int>(this, "USkeletalMeshComponent.BPValidBoneToUnhide", BoneIndex); }
	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "USkeletalMeshComponent.CalcBounds", result, LocalToWorld); }
	FTransform * CalcNewComponentToWorld(FTransform * result, const FTransform * NewRelativeTransform, const USceneComponent * Parent) { return NativeCall<FTransform *, FTransform *, const FTransform *, const USceneComponent *>(this, "USkeletalMeshComponent.CalcNewComponentToWorld", result, NewRelativeTransform, Parent); }
	float CalculateMass(FName BoneName) { return NativeCall<float, FName>(this, "USkeletalMeshComponent.CalculateMass", BoneName); }
	bool CanEditSimulatePhysics() { return NativeCall<bool>(this, "USkeletalMeshComponent.CanEditSimulatePhysics"); }
	void ClearMorphTargets() { NativeCall<void>(this, "USkeletalMeshComponent.ClearMorphTargets"); }
	void CompleteParallelAnimationEvaluation(bool bDoPostAnimEvaluation) { NativeCall<void, bool>(this, "USkeletalMeshComponent.CompleteParallelAnimationEvaluation", bDoPostAnimEvaluation); }
	bool ComponentOverlapComponentImpl(UPrimitiveComponent * PrimComp, const FVector Pos, const FQuat * Quat, const FCollisionQueryParams * Params) { return NativeCall<bool, UPrimitiveComponent *, const FVector, const FQuat *, const FCollisionQueryParams *>(this, "USkeletalMeshComponent.ComponentOverlapComponentImpl", PrimComp, Pos, Quat, Params); }
	bool ComponentOverlapMultiImpl(TArray<FOverlapResult> * OutOverlaps, const UWorld * World, const FVector * Pos, const FQuat * Quat, ECollisionChannel TestChannel, const FComponentQueryParams * Params, const FCollisionObjectQueryParams * ObjectQueryParams) { return NativeCall<bool, TArray<FOverlapResult> *, const UWorld *, const FVector *, const FQuat *, ECollisionChannel, const FComponentQueryParams *, const FCollisionObjectQueryParams *>(this, "USkeletalMeshComponent.ComponentOverlapMultiImpl", OutOverlaps, World, Pos, Quat, TestChannel, Params, ObjectQueryParams); }
	bool ContainsPhysicsTriMeshData(bool InUseAllTriData) { return NativeCall<bool, bool>(this, "USkeletalMeshComponent.ContainsPhysicsTriMeshData", InUseAllTriData); }
	FTransform * ConvertLocalRootMotionToWorld(FTransform * result, const FTransform * InTransform) { return NativeCall<FTransform *, FTransform *, const FTransform *>(this, "USkeletalMeshComponent.ConvertLocalRootMotionToWorld", result, InTransform); }
	void CreateBodySetup() { NativeCall<void>(this, "USkeletalMeshComponent.CreateBodySetup"); }
	void CreatePhysicsState() { NativeCall<void>(this, "USkeletalMeshComponent.CreatePhysicsState"); }
	void CreateRenderState_Concurrent() { NativeCall<void>(this, "USkeletalMeshComponent.CreateRenderState_Concurrent"); }
	void DeallocateTransformData() { NativeCall<void>(this, "USkeletalMeshComponent.DeallocateTransformData"); }
	void DebugDrawBones(UCanvas * Canvas, bool bSimpleBones) { NativeCall<void, UCanvas *, bool>(this, "USkeletalMeshComponent.DebugDrawBones", Canvas, bSimpleBones); }
	void DecrementIKLegMute(int LegIndex) { NativeCall<void, int>(this, "USkeletalMeshComponent.DecrementIKLegMute", LegIndex); }
	void DestroyPhysicsState() { NativeCall<void>(this, "USkeletalMeshComponent.DestroyPhysicsState"); }
	void EvaluateAnimation(const USkeletalMesh * InSkeletalMesh, UAnimInstance * InAnimInstance, TArray<FTransform> * OutLocalAtoms, TArray<FActiveVertexAnim> * OutVertexAnims, FVector * OutRootBoneTranslation) { NativeCall<void, const USkeletalMesh *, UAnimInstance *, TArray<FTransform> *, TArray<FActiveVertexAnim> *, FVector *>(this, "USkeletalMeshComponent.EvaluateAnimation", InSkeletalMesh, InAnimInstance, OutLocalAtoms, OutVertexAnims, OutRootBoneTranslation); }
	void FillSpaceBases(const USkeletalMesh * InSkeletalMesh, const TArray<FTransform> * SourceAtoms, TArray<FTransform> * DestSpaceBases) { NativeCall<void, const USkeletalMesh *, const TArray<FTransform> *, TArray<FTransform> *>(this, "USkeletalMeshComponent.FillSpaceBases", InSkeletalMesh, SourceAtoms, DestSpaceBases); }
	void FlushMorphTargets() { NativeCall<void>(this, "USkeletalMeshComponent.FlushMorphTargets"); }
	EAnimationMode::Type GetAnimationMode() { return NativeCall<EAnimationMode::Type>(this, "USkeletalMeshComponent.GetAnimationMode"); }
	FBodyInstance * GetBodyInstance(FName BoneName, bool __formal) { return NativeCall<FBodyInstance *, FName, bool>(this, "USkeletalMeshComponent.GetBodyInstance", BoneName, __formal); }
	FName * GetFirstBoneWithChildren(FName * result) { return NativeCall<FName *, FName *>(this, "USkeletalMeshComponent.GetFirstBoneWithChildren", result); }
	float GetMass() { return NativeCall<float>(this, "USkeletalMeshComponent.GetMass"); }
	FVector * GetMeshScaleMultiplier(FVector * result) { return NativeCall<FVector *, FVector *>(this, "USkeletalMeshComponent.GetMeshScaleMultiplier", result); }
	float GetMorphTarget(FName MorphTargetName) { return NativeCall<float, FName>(this, "USkeletalMeshComponent.GetMorphTarget", MorphTargetName); }
	float GetOverrideWalkableZ(AActor * ForActor) { return NativeCall<float, AActor *>(this, "USkeletalMeshComponent.GetOverrideWalkableZ", ForActor); }
	float GetPlayRate() { return NativeCall<float>(this, "USkeletalMeshComponent.GetPlayRate"); }
	float GetPosition() { return NativeCall<float>(this, "USkeletalMeshComponent.GetPosition"); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "USkeletalMeshComponent.GetResourceSize", Mode); }
	FVector * GetSkinnedVertexPosition(FVector * result, int VertexIndex) { return NativeCall<FVector *, FVector *, int>(this, "USkeletalMeshComponent.GetSkinnedVertexPosition", result, VertexIndex); }
	FMatrix * GetTransformMatrix(FMatrix * result) { return NativeCall<FMatrix *, FMatrix *>(this, "USkeletalMeshComponent.GetTransformMatrix", result); }
	void GetWeldedBodies(TArray<FBodyInstance *> * OutWeldedBodies, TArray<FName> * OutLabels) { NativeCall<void, TArray<FBodyInstance *> *, TArray<FName> *>(this, "USkeletalMeshComponent.GetWeldedBodies", OutWeldedBodies, OutLabels); }
	bool HandleExistingParallelEvaluationTask(bool bBlockOnTask, bool bPerformPostAnimEvaluation) { return NativeCall<bool, bool, bool>(this, "USkeletalMeshComponent.HandleExistingParallelEvaluationTask", bBlockOnTask, bPerformPostAnimEvaluation); }
	bool HasIKFinishedInterpolation() { return NativeCall<bool>(this, "USkeletalMeshComponent.HasIKFinishedInterpolation"); }
	void HideBone(int BoneIndex, EPhysBodyOp PhysBodyOption) { NativeCall<void, int, EPhysBodyOp>(this, "USkeletalMeshComponent.HideBone", BoneIndex, PhysBodyOption); }
	void IncrementIKLegMute(int LegIndex) { NativeCall<void, int>(this, "USkeletalMeshComponent.IncrementIKLegMute", LegIndex); }
	void InitAnim(bool bForceReinit) { NativeCall<void, bool>(this, "USkeletalMeshComponent.InitAnim", bForceReinit); }
	void InitArticulated(FPhysScene * PhysScene, bool bForceOnDedicatedServer) { NativeCall<void, FPhysScene *, bool>(this, "USkeletalMeshComponent.InitArticulated", PhysScene, bForceOnDedicatedServer); }
	void InitializeAnimScriptInstance(bool bForceReinit) { NativeCall<void, bool>(this, "USkeletalMeshComponent.InitializeAnimScriptInstance", bForceReinit); }
	void InitializeComponent() { NativeCall<void>(this, "USkeletalMeshComponent.InitializeComponent"); }
	bool IsAnyRigidBodyAwake() { return NativeCall<bool>(this, "USkeletalMeshComponent.IsAnyRigidBodyAwake"); }
	bool IsAnySimulatingPhysics() { return NativeCall<bool>(this, "USkeletalMeshComponent.IsAnySimulatingPhysics"); }
	bool IsPlaying() { return NativeCall<bool>(this, "USkeletalMeshComponent.IsPlaying"); }
	bool IsPlayingAnimationMontagesOnSlotName(FName SlotName) { return NativeCall<bool, FName>(this, "USkeletalMeshComponent.IsPlayingAnimationMontagesOnSlotName", SlotName); }
	bool IsPlayingMontage(UAnimMontage * Montage, float TimeFromEndToConsiderFinished) { return NativeCall<bool, UAnimMontage *, float>(this, "USkeletalMeshComponent.IsPlayingMontage", Montage, TimeFromEndToConsiderFinished); }
	bool IsPlayingRootMotion() { return NativeCall<bool>(this, "USkeletalMeshComponent.IsPlayingRootMotion"); }
	bool LineTraceComponent(FHitResult * OutHit, const FVector Start, const FVector End, const FCollisionQueryParams * Params) { return NativeCall<bool, FHitResult *, const FVector, const FVector, const FCollisionQueryParams *>(this, "USkeletalMeshComponent.LineTraceComponent", OutHit, Start, End, Params); }
	void OnComponentCollisionSettingsChanged() { NativeCall<void>(this, "USkeletalMeshComponent.OnComponentCollisionSettingsChanged"); }
	void OnRegister() { NativeCall<void>(this, "USkeletalMeshComponent.OnRegister"); }
	void OnUnregister() { NativeCall<void>(this, "USkeletalMeshComponent.OnUnregister"); }
	void OnUpdateTransform(bool bSkipPhysicsMove) { NativeCall<void, bool>(this, "USkeletalMeshComponent.OnUpdateTransform", bSkipPhysicsMove); }
	bool OverlapComponent(const FVector * Pos, const FQuat * Rot, const FCollisionShape * CollisionShape) { return NativeCall<bool, const FVector *, const FQuat *, const FCollisionShape *>(this, "USkeletalMeshComponent.OverlapComponent", Pos, Rot, CollisionShape); }
	void ParallelAnimationEvaluation() { NativeCall<void>(this, "USkeletalMeshComponent.ParallelAnimationEvaluation"); }
	void PerformAnimationEvaluation(const USkeletalMesh * InSkeletalMesh, UAnimInstance * InAnimInstance, TArray<FTransform> * OutSpaceBases, TArray<FTransform> * OutLocalAtoms, TArray<FActiveVertexAnim> * OutVertexAnims, FVector * OutRootBoneTranslation) { NativeCall<void, const USkeletalMesh *, UAnimInstance *, TArray<FTransform> *, TArray<FTransform> *, TArray<FActiveVertexAnim> *, FVector *>(this, "USkeletalMeshComponent.PerformAnimationEvaluation", InSkeletalMesh, InAnimInstance, OutSpaceBases, OutLocalAtoms, OutVertexAnims, OutRootBoneTranslation); }
	void Play(bool bLooping) { NativeCall<void, bool>(this, "USkeletalMeshComponent.Play", bLooping); }
	void PlayAnimation(UAnimationAsset * NewAnimToPlay, bool bLooping) { NativeCall<void, UAnimationAsset *, bool>(this, "USkeletalMeshComponent.PlayAnimation", NewAnimToPlay, bLooping); }
	void PostAnimEvaluation(FAnimationEvaluationContext * EvaluationContext) { NativeCall<void, FAnimationEvaluationContext *>(this, "USkeletalMeshComponent.PostAnimEvaluation", EvaluationContext); }
	void PreClothTick(float DeltaTime) { NativeCall<void, float>(this, "USkeletalMeshComponent.PreClothTick", DeltaTime); }
	void PutAllRigidBodiesToSleep() { NativeCall<void>(this, "USkeletalMeshComponent.PutAllRigidBodiesToSleep"); }
	void RecalcRequiredBones(int LODIndex) { NativeCall<void, int>(this, "USkeletalMeshComponent.RecalcRequiredBones", LODIndex); }
	void RecreatePhysicsState(bool bRestoreBoneTransforms) { NativeCall<void, bool>(this, "USkeletalMeshComponent.RecreatePhysicsState", bRestoreBoneTransforms); }
	void RemoveBasedPawns(USceneComponent * BasedOnComponent) { NativeCall<void, USceneComponent *>(this, "USkeletalMeshComponent.RemoveBasedPawns", BasedOnComponent); }
	void RenderAxisGizmo(const FTransform * Transform, UCanvas * Canvas) { NativeCall<void, const FTransform *, UCanvas *>(this, "USkeletalMeshComponent.RenderAxisGizmo", Transform, Canvas); }
	void ResetAllBodiesSimulatePhysics() { NativeCall<void>(this, "USkeletalMeshComponent.ResetAllBodiesSimulatePhysics"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "USkeletalMeshComponent.Serialize", Ar); }
	void SetAllBodiesBelowPhysicsBlendWeight(const FName * InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType) { NativeCall<void, const FName *, float, bool>(this, "USkeletalMeshComponent.SetAllBodiesBelowPhysicsBlendWeight", InBoneName, PhysicsBlendWeight, bSkipCustomPhysicsType); }
	void SetAllBodiesBelowSimulatePhysics(const FName * InBoneName, bool bNewSimulate) { NativeCall<void, const FName *, bool>(this, "USkeletalMeshComponent.SetAllBodiesBelowSimulatePhysics", InBoneName, bNewSimulate); }
	void SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType) { NativeCall<void, float, bool>(this, "USkeletalMeshComponent.SetAllBodiesPhysicsBlendWeight", PhysicsBlendWeight, bSkipCustomPhysicsType); }
	void SetAllBodiesSimulatePhysics(bool bNewSimulate) { NativeCall<void, bool>(this, "USkeletalMeshComponent.SetAllBodiesSimulatePhysics", bNewSimulate); }
	void SetAllBodiesSleepThreshold(float SleepThresh) { NativeCall<void, float>(this, "USkeletalMeshComponent.SetAllBodiesSleepThreshold", SleepThresh); }
	void SetAllPhysicsAngularVelocity(const FVector * NewAngVel, bool bAddToCurrent) { NativeCall<void, const FVector *, bool>(this, "USkeletalMeshComponent.SetAllPhysicsAngularVelocity", NewAngVel, bAddToCurrent); }
	void SetAllPhysicsLinearVelocity(FVector NewVel, bool bAddToCurrent) { NativeCall<void, FVector, bool>(this, "USkeletalMeshComponent.SetAllPhysicsLinearVelocity", NewVel, bAddToCurrent); }
	void SetAllPhysicsPosition(FVector NewPos) { NativeCall<void, FVector>(this, "USkeletalMeshComponent.SetAllPhysicsPosition", NewPos); }
	void SetAllPhysicsRotation(FRotator NewRot) { NativeCall<void, FRotator>(this, "USkeletalMeshComponent.SetAllPhysicsRotation", NewRot); }
	void SetAnimInstanceClass(UClass * NewClass) { NativeCall<void, UClass *>(this, "USkeletalMeshComponent.SetAnimInstanceClass", NewClass); }
	void SetAnimation(UAnimationAsset * NewAnimToPlay) { NativeCall<void, UAnimationAsset *>(this, "USkeletalMeshComponent.SetAnimation", NewAnimToPlay); }
	void SetAnimationMode(EAnimationMode::Type InAnimationMode) { NativeCall<void, EAnimationMode::Type>(this, "USkeletalMeshComponent.SetAnimationMode", InAnimationMode); }
	void SetCollisionEnabled(ECollisionEnabled::Type NewType) { NativeCall<void, ECollisionEnabled::Type>(this, "USkeletalMeshComponent.SetCollisionEnabled", NewType); }
	void SetCollisionObjectType(ECollisionChannel Channel) { NativeCall<void, ECollisionChannel>(this, "USkeletalMeshComponent.SetCollisionObjectType", Channel); }
	void SetEnablePhysicsBlending(bool bNewBlendPhysics) { NativeCall<void, bool>(this, "USkeletalMeshComponent.SetEnablePhysicsBlending", bNewBlendPhysics); }
	void SetMorphTarget(FName MorphTargetName, float Value) { NativeCall<void, FName, float>(this, "USkeletalMeshComponent.SetMorphTarget", MorphTargetName, Value); }
	void SetPhysMaterialOverride(UPhysicalMaterial * NewPhysMaterial) { NativeCall<void, UPhysicalMaterial *>(this, "USkeletalMeshComponent.SetPhysMaterialOverride", NewPhysMaterial); }
	void SetPhysicsAsset(UPhysicsAsset * InPhysicsAsset, bool bForceReInit) { NativeCall<void, UPhysicsAsset *, bool>(this, "USkeletalMeshComponent.SetPhysicsAsset", InPhysicsAsset, bForceReInit); }
	void SetPhysicsBlendWeight(float PhysicsBlendWeight) { NativeCall<void, float>(this, "USkeletalMeshComponent.SetPhysicsBlendWeight", PhysicsBlendWeight); }
	void SetPlayRate(float Rate) { NativeCall<void, float>(this, "USkeletalMeshComponent.SetPlayRate", Rate); }
	void SetPosition(float InPos, bool bFireNotifies) { NativeCall<void, float, bool>(this, "USkeletalMeshComponent.SetPosition", InPos, bFireNotifies); }
	void SetSimulatePhysics(bool bSimulate) { NativeCall<void, bool>(this, "USkeletalMeshComponent.SetSimulatePhysics", bSimulate); }
	void SetSkeletalMesh(USkeletalMesh * InSkelMesh) { NativeCall<void, USkeletalMesh *>(this, "USkeletalMeshComponent.SetSkeletalMesh", InSkelMesh); }
	void SetupBetweenAnimationBlueprintBlending() { NativeCall<void>(this, "USkeletalMeshComponent.SetupBetweenAnimationBlueprintBlending"); }
	bool ShouldTickPose() { return NativeCall<bool>(this, "USkeletalMeshComponent.ShouldTickPose"); }
	bool ShouldUpdateTransform(bool bLODHasChanged) { return NativeCall<bool, bool>(this, "USkeletalMeshComponent.ShouldUpdateTransform", bLODHasChanged); }
	void SkelMeshCompOnParticleSystemFinished(UParticleSystemComponent * PSC) { NativeCall<void, UParticleSystemComponent *>(this, "USkeletalMeshComponent.SkelMeshCompOnParticleSystemFinished", PSC); }
	void SkippedTickPose() { NativeCall<void>(this, "USkeletalMeshComponent.SkippedTickPose"); }
	void Stop() { NativeCall<void>(this, "USkeletalMeshComponent.Stop"); }
	bool SweepComponent(FHitResult * OutHit, const FVector Start, const FVector End, const FCollisionShape * CollisionShape, bool bTraceComplex) { return NativeCall<bool, FHitResult *, const FVector, const FVector, const FCollisionShape *, bool>(this, "USkeletalMeshComponent.SweepComponent", OutHit, Start, End, CollisionShape, bTraceComplex); }
	void TermArticulated() { NativeCall<void>(this, "USkeletalMeshComponent.TermArticulated"); }
	void TermBodiesBelow(FName ParentBoneName) { NativeCall<void, FName>(this, "USkeletalMeshComponent.TermBodiesBelow", ParentBoneName); }
	void TickAnimation(float DeltaTime) { NativeCall<void, float>(this, "USkeletalMeshComponent.TickAnimation", DeltaTime); }
	void TickPose(float DeltaTime) { NativeCall<void, float>(this, "USkeletalMeshComponent.TickPose", DeltaTime); }
	void UnHideBone(int BoneIndex) { NativeCall<void, int>(this, "USkeletalMeshComponent.UnHideBone", BoneIndex); }
	void UpdateBounds() { NativeCall<void>(this, "USkeletalMeshComponent.UpdateBounds"); }
	void UpdateComponentToWorld(bool bSkipPhysicsMove) { NativeCall<void, bool>(this, "USkeletalMeshComponent.UpdateComponentToWorld", bSkipPhysicsMove); }
	void UpdateHasValidBodies() { NativeCall<void>(this, "USkeletalMeshComponent.UpdateHasValidBodies"); }
	bool UpdateLODStatus() { return NativeCall<bool>(this, "USkeletalMeshComponent.UpdateLODStatus"); }
	void UpdatePhysicsToRBChannels() { NativeCall<void>(this, "USkeletalMeshComponent.UpdatePhysicsToRBChannels"); }
	void UpdateSlaveComponent() { NativeCall<void>(this, "USkeletalMeshComponent.UpdateSlaveComponent"); }
	void WakeAllRigidBodies() { NativeCall<void>(this, "USkeletalMeshComponent.WakeAllRigidBodies"); }
	void BlendInPhysics() { NativeCall<void>(this, "USkeletalMeshComponent.BlendInPhysics"); }
	void BlendPhysicsBones(TArray<unsigned short> * InRequiredBones) { NativeCall<void, TArray<unsigned short> *>(this, "USkeletalMeshComponent.BlendPhysicsBones", InRequiredBones); }
	void UpdateKinematicBonesToPhysics(bool bTeleport, bool bNeedsSkinning, bool bForceUpdate, bool bAbsoluteForceUpdate, bool bOnlyDisableKinematicCollisions) { NativeCall<void, bool, bool, bool, bool, bool>(this, "USkeletalMeshComponent.UpdateKinematicBonesToPhysics", bTeleport, bNeedsSkinning, bForceUpdate, bAbsoluteForceUpdate, bOnlyDisableKinematicCollisions); }
	void UpdateRBJointMotors() { NativeCall<void>(this, "USkeletalMeshComponent.UpdateRBJointMotors"); }
};

