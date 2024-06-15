#pragma once

#include "BaseDeclarations.h"
#include "APrimalBuff.h"
#include "APrimalEmitterSpawnable.h"
#include "AEmitter.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"
#include "FHitResult.h"

struct APrimalBuff_Grappled : APrimalBuff
{
	char __padding[0x208L];
	TArray<FGrappleTether>& CurrentGrappleTethersField() { return *GetNativePointerField<TArray<FGrappleTether>*>(this, "APrimalBuff_Grappled.CurrentGrappleTethers"); }
	TArray<FGrappleTether>& LastSyncedGrappleTethersField() { return *GetNativePointerField<TArray<FGrappleTether>*>(this, "APrimalBuff_Grappled.LastSyncedGrappleTethers"); }
	TArray<FReplicatedGrappleTetherData>& ReplicatedGrappleTethersField() { return *GetNativePointerField<TArray<FReplicatedGrappleTetherData>*>(this, "APrimalBuff_Grappled.ReplicatedGrappleTethers"); }
	TEnumAsByte<enum EGrappleState::Type>& GrappleState_CurrentField() { return *GetNativePointerField<TEnumAsByte<enum EGrappleState::Type>*>(this, "APrimalBuff_Grappled.GrappleState_Current"); }
	TEnumAsByte<enum EGrappleState::Type>& GrappleState_PreviousField() { return *GetNativePointerField<TEnumAsByte<enum EGrappleState::Type>*>(this, "APrimalBuff_Grappled.GrappleState_Previous"); }
	TEnumAsByte<enum EGrappleState::Type>& WantsGrappleStateField() { return *GetNativePointerField<TEnumAsByte<enum EGrappleState::Type>*>(this, "APrimalBuff_Grappled.WantsGrappleState"); }
	USoundCue * PullingSoundCueField() { return GetNativePointerField<USoundCue *>(this, "APrimalBuff_Grappled.PullingSoundCue"); }
	USoundCue * ReleasingSoundCueField() { return GetNativePointerField<USoundCue *>(this, "APrimalBuff_Grappled.ReleasingSoundCue"); }
	UStaticMesh * GrappleTetherMeshField() { return GetNativePointerField<UStaticMesh *>(this, "APrimalBuff_Grappled.GrappleTetherMesh"); }
	int& MaxAllowedGrappleTethersField() { return *GetNativePointerField<int*>(this, "APrimalBuff_Grappled.MaxAllowedGrappleTethers"); }
	float& ForceFallingWhenDirToTetherAboveUpDotField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.ForceFallingWhenDirToTetherAboveUpDot"); }
	float& ForceFallingWhenAboveVelocityAwayFromAnchorField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.ForceFallingWhenAboveVelocityAwayFromAnchor"); }
	float& ForceFallingBelowTetherToOwnerDeltaZField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.ForceFallingBelowTetherToOwnerDeltaZ"); }
	float& ReduceFallDamageUnderAngleToAnchorField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.ReduceFallDamageUnderAngleToAnchor"); }
	float& GrappledFallDamageMult_MINField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.GrappledFallDamageMult_MIN"); }
	float& OwnerInput_SwingSpeedField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.OwnerInput_SwingSpeed"); }
	float& SwingingVelocityDampingRate_IdleField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingVelocityDampingRate_Idle"); }
	float& SwingingVelocityDampingRate_PullingField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingVelocityDampingRate_Pulling"); }
	FVector2D& SwingingVelocityDampingRateAxisMults_PullingField() { return *GetNativePointerField<FVector2D*>(this, "APrimalBuff_Grappled.SwingingVelocityDampingRateAxisMults_Pulling"); }
	float& SwingingVelocityDampingRate_ReleasingField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingVelocityDampingRate_Releasing"); }
	float& SwingingVelocityDampingRate_OwnerInputField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingVelocityDampingRate_OwnerInput"); }
	float& TetherTensionVelocityDampingRateField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherTensionVelocityDampingRate"); }
	float& GrappleVelocityMAXField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.GrappleVelocityMAX"); }
	float& SwingingClientPositionErrorOverride_PlayerField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingClientPositionErrorOverride_Player"); }
	float& SwingingClientPositionErrorOverride_Dino_MovingFlyingField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingClientPositionErrorOverride_Dino_MovingFlying"); }
	float& SwingingClientPositionErrorOverride_Dino_StoppedField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingClientPositionErrorOverride_Dino_Stopped"); }
	float& SwingingClientLocationInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingClientLocationInterpSpeed"); }
	float& SwingingClientRotationInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingClientRotationInterpSpeed"); }
	float& SyncGrappleTetherLengthIntervalField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SyncGrappleTetherLengthInterval"); }
	float& PullableWeightLimitField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.PullableWeightLimit"); }
	float& TetherMaxLengthField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherMaxLength"); }
	float& TetherMinLengthField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherMinLength"); }
	float& TetherAutoDetachUnderLengthField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherAutoDetachUnderLength"); }
	float& TetherBreakLimit_OwnerPastCurrentLengthDeltaField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherBreakLimit_OwnerPastCurrentLengthDelta"); }
	float& TetherBreakLimit_OwnerPastCurrentLengthForTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherBreakLimit_OwnerPastCurrentLengthForTime"); }
	float& TetherBreakLimit_GrappledActorAboveVelocityField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherBreakLimit_GrappledActorAboveVelocity"); }
	float& TetherWidthField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherWidth"); }
	long double& LastGrappleTetherLengthSyncTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff_Grappled.LastGrappleTetherLengthSyncTime"); }
	FVector& OwnerInput_CurrentSwingingVelocityField() { return *GetNativePointerField<FVector*>(this, "APrimalBuff_Grappled.OwnerInput_CurrentSwingingVelocity"); }
	FVector2D& OwnerInput_CurrentSyncedField() { return *GetNativePointerField<FVector2D*>(this, "APrimalBuff_Grappled.OwnerInput_CurrentSynced"); }
	FVector2D& OwnerInput_LastSyncedField() { return *GetNativePointerField<FVector2D*>(this, "APrimalBuff_Grappled.OwnerInput_LastSynced"); }
	long double& OwnerInput_LastSyncTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff_Grappled.OwnerInput_LastSyncTime"); }
	float& OwnerInput_SyncInvervalField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.OwnerInput_SyncInverval"); }
	FVector& DirToAgainstSurfaceField() { return *GetNativePointerField<FVector*>(this, "APrimalBuff_Grappled.DirToAgainstSurface"); }
	FVector& LastDirToAgainstSurfaceField() { return *GetNativePointerField<FVector*>(this, "APrimalBuff_Grappled.LastDirToAgainstSurface"); }
	float& RequiredDirToSurfaceDotDeltaToUpdateField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.RequiredDirToSurfaceDotDeltaToUpdate"); }
	FVector& AgainstSurfaceNormalField() { return *GetNativePointerField<FVector*>(this, "APrimalBuff_Grappled.AgainstSurfaceNormal"); }
	float& TetherPullMaxVelocityField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherPullMaxVelocity"); }
	float& TetherPullAccelerationField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherPullAcceleration"); }
	float& TetherPullMaxVelocity_GrappledCharField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherPullMaxVelocity_GrappledChar"); }
	float& TetherPullAcceleration_GrappledCharField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherPullAcceleration_GrappledChar"); }
	float& TetherReleaseMaxVelocityField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherReleaseMaxVelocity"); }
	float& TetherReleaseMaxVelocity_GrappledCharField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherReleaseMaxVelocity_GrappledChar"); }
	FVector& CurrentTetherMoveVelocityField() { return *GetNativePointerField<FVector*>(this, "APrimalBuff_Grappled.CurrentTetherMoveVelocity"); }
	FVector& AvgParentCharVelocityField() { return *GetNativePointerField<FVector*>(this, "APrimalBuff_Grappled.AvgParentCharVelocity"); }
	float& ClientSuggestTetherLength_AllowedDeltaField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.ClientSuggestTetherLength_AllowedDelta"); }
	float& ClientSuggestTetherLength_AllowedIntervalField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.ClientSuggestTetherLength_AllowedInterval"); }
	long double& ClientSuggestTetherLength_LastReceivedTimeField() { return *GetNativePointerField<long double*>(this, "APrimalBuff_Grappled.ClientSuggestTetherLength_LastReceivedTime"); }
	float& ValidHitSurface_DistanceFromCapsuleEdgeField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.ValidHitSurface_DistanceFromCapsuleEdge"); }
	FVector2D& ValidHitSurface_UpVectorAngleRangeField() { return *GetNativePointerField<FVector2D*>(this, "APrimalBuff_Grappled.ValidHitSurface_UpVectorAngleRange"); }
	FVector2D& LastProjectedOwnerInputsField() { return *GetNativePointerField<FVector2D*>(this, "APrimalBuff_Grappled.LastProjectedOwnerInputs"); }
	float& OwnerCapsuleRadiusField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.OwnerCapsuleRadius"); }
	float& OwnerCapsuleHalfHeightField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.OwnerCapsuleHalfHeight"); }
	FVector& PreviousOwnerVelocityField() { return *GetNativePointerField<FVector*>(this, "APrimalBuff_Grappled.PreviousOwnerVelocity"); }
	float& TetherTensionStrengthField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherTensionStrength"); }
	float& TetherTensionExponentField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherTensionExponent"); }
	float& ForceFallingStateImpulseField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.ForceFallingStateImpulse"); }
	TArray<FString>& ReservedTetherTagsField() { return *GetNativePointerField<TArray<FString>*>(this, "APrimalBuff_Grappled.ReservedTetherTags"); }
	FString& TetherTagOwnerConnectorStringField() { return *GetNativePointerField<FString*>(this, "APrimalBuff_Grappled.TetherTagOwnerConnectorString"); }
	FVector2D& GrappledGravityScaleRangeField() { return *GetNativePointerField<FVector2D*>(this, "APrimalBuff_Grappled.GrappledGravityScaleRange"); }
	float& GrappledGravityScaleMult_IdleField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.GrappledGravityScaleMult_Idle"); }
	float& GrappledGravityScaleMult_PullingField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.GrappledGravityScaleMult_Pulling"); }
	float& GrappledGravityScaleMult_ReleasingField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.GrappledGravityScaleMult_Releasing"); }
	float& AtTetherLimitBelowDistFromEndField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.AtTetherLimitBelowDistFromEnd"); }
	FVector& LastGravityField() { return *GetNativePointerField<FVector*>(this, "APrimalBuff_Grappled.LastGravity"); }
	float& LookingAtAgainstSurfaceAngleField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.LookingAtAgainstSurfaceAngle"); }
	float& VelocityOverrideMaxDeltaTimeField() { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.VelocityOverrideMaxDeltaTime"); }

	// Functions

	int AddGrappleTether(const FCreateGrappleTetherData * FromData, const bool bPreventNetSync, const int AddAtIndex) { return NativeCall<int, const FCreateGrappleTetherData *, const bool, const int>(this, "APrimalBuff_Grappled.AddGrappleTether", FromData, bPreventNetSync, AddAtIndex); }
	void AdjustMovementVectorIfAgainstSurface_Implementation(FVector * AdjustVector) { NativeCall<void, FVector *>(this, "APrimalBuff_Grappled.AdjustMovementVectorIfAgainstSurface_Implementation", AdjustVector); }
	bool AllowGrappleLogic_Implementation() { return NativeCall<bool>(this, "APrimalBuff_Grappled.AllowGrappleLogic_Implementation"); }
	void ApplyOwnerSwingingVelocity_Implementation(FVector * CurrentVelocity, float DeltaTime) { NativeCall<void, FVector *, float>(this, "APrimalBuff_Grappled.ApplyOwnerSwingingVelocity_Implementation", CurrentVelocity, DeltaTime); }
	void ApplyTetherMoveVelocity_Implementation(FVector * CurrentVelocity, float DeltaTime) { NativeCall<void, FVector *, float>(this, "APrimalBuff_Grappled.ApplyTetherMoveVelocity_Implementation", CurrentVelocity, DeltaTime); }
	bool AreGrappleTetherTagsEqual(const FString TagA, const FString TagB, const bool bOnlyCompareRootTag) { return NativeCall<bool, const FString, const FString, const bool>(this, "APrimalBuff_Grappled.AreGrappleTetherTagsEqual", TagA, TagB, bOnlyCompareRootTag); }
	void BeginPlay() { NativeCall<void>(this, "APrimalBuff_Grappled.BeginPlay"); }
	void BreakAllTethers() { NativeCall<void>(this, "APrimalBuff_Grappled.BreakAllTethers"); }
	bool BreakChildTetherOnGrappledChar(const FGrappleTether * WithTether) { return NativeCall<bool, const FGrappleTether *>(this, "APrimalBuff_Grappled.BreakChildTetherOnGrappledChar", WithTether); }
	bool BreakGrappleTether(const int AtIndex, const FString WithTag, const APrimalBuff_Grappled * WithMasterBuff, const bool bBreakAllTethersWithTag) { return NativeCall<bool, const int, const FString, const APrimalBuff_Grappled *, const bool>(this, "APrimalBuff_Grappled.BreakGrappleTether", AtIndex, WithTag, WithMasterBuff, bBreakAllTethersWithTag); }
	bool CanBeGrappledAgainstSurface_Implementation() { return NativeCall<bool>(this, "APrimalBuff_Grappled.CanBeGrappledAgainstSurface_Implementation"); }
	bool CanChangeGrappleState_Implementation(const char DesiredGrappleState) { return NativeCall<bool, const char>(this, "APrimalBuff_Grappled.CanChangeGrappleState_Implementation", DesiredGrappleState); }
	static bool CanCharControlGrappleTether(APrimalCharacter * ForChar, const FGrappleTether * ForTether, const bool bAllowSlaveGrappleToControl) { return NativeCall<bool, APrimalCharacter *, const FGrappleTether *, const bool>(nullptr, "APrimalBuff_Grappled.CanCharControlGrappleTether", ForChar, ForTether, bAllowSlaveGrappleToControl); }
	static bool CanGrappleTetherAffectOwnerMovement(const FGrappleTether * ForTether) { return NativeCall<bool, const FGrappleTether *>(nullptr, "APrimalBuff_Grappled.CanGrappleTetherAffectOwnerMovement", ForTether); }
	bool CanManipulateOwnerVelocity() { return NativeCall<bool>(this, "APrimalBuff_Grappled.CanManipulateOwnerVelocity"); }
	bool CanOwnerGrappleSwing_Implementation() { return NativeCall<bool>(this, "APrimalBuff_Grappled.CanOwnerGrappleSwing_Implementation"); }
	bool CanPullChar_Implementation(APrimalCharacter * ForChar, bool bForStart) { return NativeCall<bool, APrimalCharacter *, bool>(this, "APrimalBuff_Grappled.CanPullChar_Implementation", ForChar, bForStart); }
	bool CanReceiveNewGrappleTether(const FString WithTag) { return NativeCall<bool, const FString>(this, "APrimalBuff_Grappled.CanReceiveNewGrappleTether", WithTag); }
	bool CanSyncGrappleTetherLengths_Implementation() { return NativeCall<bool>(this, "APrimalBuff_Grappled.CanSyncGrappleTetherLengths_Implementation"); }
	static bool CanTetherOwnerPullGrappledChar(const FGrappleTether * ForTether) { return NativeCall<bool, const FGrappleTether *>(nullptr, "APrimalBuff_Grappled.CanTetherOwnerPullGrappledChar", ForTether); }
	bool CanUpdateTetherLength_Implementation(const FGrappleTether * ForTether, const float WithLength) { return NativeCall<bool, const FGrappleTether *, const float>(this, "APrimalBuff_Grappled.CanUpdateTetherLength_Implementation", ForTether, WithLength); }
	bool CheckForAutoBreakTether_Implementation(const FGrappleTether * CheckTether) { return NativeCall<bool, const FGrappleTether *>(this, "APrimalBuff_Grappled.CheckForAutoBreakTether_Implementation", CheckTether); }
	void CheckForTetherBreak(FGrappleTether * CheckTether, const int WithIndex, const float OverrideBreakPastDist) { NativeCall<void, FGrappleTether *, const int, const float>(this, "APrimalBuff_Grappled.CheckForTetherBreak", CheckTether, WithIndex, OverrideBreakPastDist); }
	void ClampGrappleVelocity_Implementation(FVector * ClampVelocity) { NativeCall<void, FVector *>(this, "APrimalBuff_Grappled.ClampGrappleVelocity_Implementation", ClampVelocity); }
	void ClampOwnerReleasingVelocity_Implementation(FVector * WithReleasingVelocity) { NativeCall<void, FVector *>(this, "APrimalBuff_Grappled.ClampOwnerReleasingVelocity_Implementation", WithReleasingVelocity); }
	void Destroyed() { NativeCall<void>(this, "APrimalBuff_Grappled.Destroyed"); }
	bool DisplayGrappleSystemHudNotification_Implementation(AShooterPlayerController * ForPC, AActor * FromActor, const char NotificationType, const int NotificationID, const FString * ReasonString) { return NativeCall<bool, AShooterPlayerController *, AActor *, const char, const int, const FString *>(this, "APrimalBuff_Grappled.DisplayGrappleSystemHudNotification_Implementation", ForPC, FromActor, NotificationType, NotificationID, ReasonString); }
	void EndGrapple_Implementation() { NativeCall<void>(this, "APrimalBuff_Grappled.EndGrapple_Implementation"); }
	FVector * GetAverageTetherEndLocation(FVector * result, const bool bReservedTethersOnly) { return NativeCall<FVector *, FVector *, const bool>(this, "APrimalBuff_Grappled.GetAverageTetherEndLocation", result, bReservedTethersOnly); }
	static float GetCharAngleToGrappleTetherEnd(const FGrappleTether * ForTether, const APrimalCharacter * ForChar) { return NativeCall<float, const FGrappleTether *, const APrimalCharacter *>(nullptr, "APrimalBuff_Grappled.GetCharAngleToGrappleTetherEnd", ForTether, ForChar); }
	float GetCharDistanceFromTetherEndRatio(const FGrappleTether * ForTether, const APrimalCharacter * ForChar) { return NativeCall<float, const FGrappleTether *, const APrimalCharacter *>(this, "APrimalBuff_Grappled.GetCharDistanceFromTetherEndRatio", ForTether, ForChar); }
	EGrappleState::Type GetCurrentGrappleState_Implementation(const FGrappleTether * ForTether) { return NativeCall<EGrappleState::Type, const FGrappleTether *>(this, "APrimalBuff_Grappled.GetCurrentGrappleState_Implementation", ForTether); }
	FVector2D * GetCurrentSwingingAxisValues(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "APrimalBuff_Grappled.GetCurrentSwingingAxisValues", result); }
	FVector * GetCurrentTetherMoveDir_Implementation(FVector * result, const FGrappleTether * ForTether) { return NativeCall<FVector *, FVector *, const FGrappleTether *>(this, "APrimalBuff_Grappled.GetCurrentTetherMoveDir_Implementation", result, ForTether); }
	static FVector * GetGrappleAnchorWorldLocation(FVector * result, const FGrappleAnchor * ForAnchorData, AActor * WithAnchorOwner) { return NativeCall<FVector *, FVector *, const FGrappleAnchor *, AActor *>(nullptr, "APrimalBuff_Grappled.GetGrappleAnchorWorldLocation", result, ForAnchorData, WithAnchorOwner); }
	float GetGrappleTetherPullAcceleration_Implementation(const APrimalCharacter * ForPullingChar, const FGrappleTether * ForTether) { return NativeCall<float, const APrimalCharacter *, const FGrappleTether *>(this, "APrimalBuff_Grappled.GetGrappleTetherPullAcceleration_Implementation", ForPullingChar, ForTether); }
	float GetGrappleTetherPullMaxVelocity_Implementation(const APrimalCharacter * ForPullingChar, const FGrappleTether * ForTether) { return NativeCall<float, const APrimalCharacter *, const FGrappleTether *>(this, "APrimalBuff_Grappled.GetGrappleTetherPullMaxVelocity_Implementation", ForPullingChar, ForTether); }
	float GetGrappleTetherReleaseMaxVelocity_Implementation(const APrimalCharacter * ForReleasingChar, const FGrappleTether * ForTether) { return NativeCall<float, const APrimalCharacter *, const FGrappleTether *>(this, "APrimalBuff_Grappled.GetGrappleTetherReleaseMaxVelocity_Implementation", ForReleasingChar, ForTether); }
	FString * GetGrappleTetherRootTag(FString * result, const FString ForTag) { return NativeCall<FString *, FString *, const FString>(this, "APrimalBuff_Grappled.GetGrappleTetherRootTag", result, ForTag); }
	float GetGrappleVelocityDampingRate_Implementation(const APrimalCharacter * ForChar, const FGrappleTether * ForTether) { return NativeCall<float, const APrimalCharacter *, const FGrappleTether *>(this, "APrimalBuff_Grappled.GetGrappleVelocityDampingRate_Implementation", ForChar, ForTether); }
	float GetGravityZScale(float CurrentScale) { return NativeCall<float, float>(this, "APrimalBuff_Grappled.GetGravityZScale", CurrentScale); }
	static FVector * GetInitGrappleAnchorRelativeOffset(FVector * result, const FGrappleAnchor * ForAnchorData, AActor * WithAnchorOwner) { return NativeCall<FVector *, FVector *, const FGrappleAnchor *, AActor *>(nullptr, "APrimalBuff_Grappled.GetInitGrappleAnchorRelativeOffset", result, ForAnchorData, WithAnchorOwner); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalBuff_Grappled.GetLifetimeReplicatedProps", OutLifetimeProps); }
	float GetMaxTetherLength_Implementation(const FGrappleTether * ForTether) { return NativeCall<float, const FGrappleTether *>(this, "APrimalBuff_Grappled.GetMaxTetherLength_Implementation", ForTether); }
	float GetMinTetherLength_Implementation(const FGrappleTether * ForTether) { return NativeCall<float, const FGrappleTether *>(this, "APrimalBuff_Grappled.GetMinTetherLength_Implementation", ForTether); }
	int GetNumReservedTethers() { return NativeCall<int>(this, "APrimalBuff_Grappled.GetNumReservedTethers"); }
	int GetNumValidTethers(const bool bOnlyReservedTethers) { return NativeCall<int, const bool>(this, "APrimalBuff_Grappled.GetNumValidTethers", bOnlyReservedTethers); }
	static FString * GetOwnerAppendedTetherTag(FString * result, const FString WithRootTag, const APrimalBuff_Grappled * OwnerGrappleBuff) { return NativeCall<FString *, FString *, const FString, const APrimalBuff_Grappled *>(nullptr, "APrimalBuff_Grappled.GetOwnerAppendedTetherTag", result, WithRootTag, OwnerGrappleBuff); }
	FVector2D * GetReplicatedOwnerInputs(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "APrimalBuff_Grappled.GetReplicatedOwnerInputs", result); }
	static float GetRequiredTetherLengthForChar(const FGrappleTether * ForTether, const APrimalCharacter * ForChar) { return NativeCall<float, const FGrappleTether *, const APrimalCharacter *>(nullptr, "APrimalBuff_Grappled.GetRequiredTetherLengthForChar", ForTether, ForChar); }
	float GetTetherBreakLimit_GrappledActorAboveVelocity_Implementation(const FGrappleTether * ForTether) { return NativeCall<float, const FGrappleTether *>(this, "APrimalBuff_Grappled.GetTetherBreakLimit_GrappledActorAboveVelocity_Implementation", ForTether); }
	float GetTetherBreakLimit_OwnerPastCurrentLengthDelta_Implementation(const FGrappleTether * ForTether) { return NativeCall<float, const FGrappleTether *>(this, "APrimalBuff_Grappled.GetTetherBreakLimit_OwnerPastCurrentLengthDelta_Implementation", ForTether); }
	float GetTetherBreakLimit_OwnerPastCurrentLengthForTime_Implementation(const FGrappleTether * ForTether) { return NativeCall<float, const FGrappleTether *>(this, "APrimalBuff_Grappled.GetTetherBreakLimit_OwnerPastCurrentLengthForTime_Implementation", ForTether); }
	static bool GetTetherMasterRef(FGrappleTether * ForTether, FGrappleTether * MasterRef) { return NativeCall<bool, FGrappleTether *, FGrappleTether *>(nullptr, "APrimalBuff_Grappled.GetTetherMasterRef", ForTether, MasterRef); }
	void GrappleTick(const float DeltaTime) { NativeCall<void, const float>(this, "APrimalBuff_Grappled.GrappleTick", DeltaTime); }
	void InitGrappleBuff_Implementation() { NativeCall<void>(this, "APrimalBuff_Grappled.InitGrappleBuff_Implementation"); }
	static bool InitializeGrappleTether(FGrappleTether * InitTether, APrimalBuff_Grappled * ByGrappleBuff) { return NativeCall<bool, FGrappleTether *, APrimalBuff_Grappled *>(nullptr, "APrimalBuff_Grappled.InitializeGrappleTether", InitTether, ByGrappleBuff); }
	bool IsCharPastMaxTetherLength(const FGrappleTether * ForTether, const APrimalCharacter * ForChar) { return NativeCall<bool, const FGrappleTether *, const APrimalCharacter *>(this, "APrimalBuff_Grappled.IsCharPastMaxTetherLength", ForTether, ForChar); }
	static bool IsGrappleTetherValid(const FGrappleTether * CheckTether) { return NativeCall<bool, const FGrappleTether *>(nullptr, "APrimalBuff_Grappled.IsGrappleTetherValid", CheckTether); }
	bool IsGrappledCharHardAttached_Implementation(APrimalCharacter * ForChar) { return NativeCall<bool, APrimalCharacter *>(this, "APrimalBuff_Grappled.IsGrappledCharHardAttached_Implementation", ForChar); }
	bool IsHitWithinGrappleRange_Implementation(const FHitResult * ForHit) { return NativeCall<bool, const FHitResult *>(this, "APrimalBuff_Grappled.IsHitWithinGrappleRange_Implementation", ForHit); }
	bool IsOwnerAboveGround(FVector * FoundGroundLocation, const float CheckDistance) { return NativeCall<bool, FVector *, const float>(this, "APrimalBuff_Grappled.IsOwnerAboveGround", FoundGroundLocation, CheckDistance); }
	bool IsOwnerAgainstValidSurface() { return NativeCall<bool>(this, "APrimalBuff_Grappled.IsOwnerAgainstValidSurface"); }
	bool IsOwnerLookingAtAgainstSurface_Implementation() { return NativeCall<bool>(this, "APrimalBuff_Grappled.IsOwnerLookingAtAgainstSurface_Implementation"); }
	bool IsSwingingTowardsAxisCenter(const FGrappleTether * ForTether) { return NativeCall<bool, const FGrappleTether *>(this, "APrimalBuff_Grappled.IsSwingingTowardsAxisCenter", ForTether); }
	bool IsTetherAtMaxLength(const FGrappleTether * ForTether) { return NativeCall<bool, const FGrappleTether *>(this, "APrimalBuff_Grappled.IsTetherAtMaxLength", ForTether); }
	bool IsTethersMasterGrappleBuff(const FGrappleTether * CheckTether) { return NativeCall<bool, const FGrappleTether *>(this, "APrimalBuff_Grappled.IsTethersMasterGrappleBuff", CheckTether); }
	bool IsValidGrappleHit(const FHitResult * ForHit) { return NativeCall<bool, const FHitResult *>(this, "APrimalBuff_Grappled.IsValidGrappleHit", ForHit); }
	bool IsValidSurfaceHit(const FHitResult * ForHit) { return NativeCall<bool, const FHitResult *>(this, "APrimalBuff_Grappled.IsValidSurfaceHit", ForHit); }
	static FGrappleTether * MakeGrappleTether(FGrappleTether * result, FCreateGrappleTetherData * FromData, APrimalBuff_Grappled * ForMasterBuff) { return NativeCall<FGrappleTether *, FGrappleTether *, FCreateGrappleTetherData *, APrimalBuff_Grappled *>(nullptr, "APrimalBuff_Grappled.MakeGrappleTether", result, FromData, ForMasterBuff); }
	void ModifyGrappledCharVelocity_Implementation(FVector * CurrentCharVelocity, const FGrappleTether * ForTether, const float DeltaTime) { NativeCall<void, FVector *, const FGrappleTether *, const float>(this, "APrimalBuff_Grappled.ModifyGrappledCharVelocity_Implementation", CurrentCharVelocity, ForTether, DeltaTime); }
	void ModifyTetherMoveVelocity_Implementation(FVector * CurrentMoveVelocity, const FGrappleTether * ForTether) { NativeCall<void, FVector *, const FGrappleTether *>(this, "APrimalBuff_Grappled.ModifyTetherMoveVelocity_Implementation", CurrentMoveVelocity, ForTether); }
	float ModifyTetherTensionLerpValue_Implementation(const float CurrentLerpValue) { return NativeCall<float, const float>(this, "APrimalBuff_Grappled.ModifyTetherTensionLerpValue_Implementation", CurrentLerpValue); }
	void Multi_SyncGrappleTetherLength_Implementation(const float SyncedTetherLength) { NativeCall<void, const float>(this, "APrimalBuff_Grappled.Multi_SyncGrappleTetherLength_Implementation", SyncedTetherLength); }
	void Multi_SyncGrappleTetherLengths_Implementation(const TArray<float> * SyncedTetherLengths) { NativeCall<void, const TArray<float> *>(this, "APrimalBuff_Grappled.Multi_SyncGrappleTetherLengths_Implementation", SyncedTetherLengths); }
	void NetSyncGrappleTethers() { NativeCall<void>(this, "APrimalBuff_Grappled.NetSyncGrappleTethers"); }
	void OnAgainstValidSurfaceStateChanged_Implementation() { NativeCall<void>(this, "APrimalBuff_Grappled.OnAgainstValidSurfaceStateChanged_Implementation"); }
	void OnGrappleStateChangedNotify_Implementation(const char * NewGrappleState, bool bIsEarlyNotify) { NativeCall<void, const char *, bool>(this, "APrimalBuff_Grappled.OnGrappleStateChangedNotify_Implementation", NewGrappleState, bIsEarlyNotify); }
	void OnGrappleStateChanged_Implementation() { NativeCall<void>(this, "APrimalBuff_Grappled.OnGrappleStateChanged_Implementation"); }
	void OnGrappleTethersChanged_Implementation() { NativeCall<void>(this, "APrimalBuff_Grappled.OnGrappleTethersChanged_Implementation"); }
	void OnGrappledCharDeath_Implementation(APrimalCharacter * DyingChar) { NativeCall<void, APrimalCharacter *>(this, "APrimalBuff_Grappled.OnGrappledCharDeath_Implementation", DyingChar); }
	void OnGrappledCharSleepStateChange_Implementation(APrimalCharacter * ForChar, bool bIsSleeping) { NativeCall<void, APrimalCharacter *, bool>(this, "APrimalBuff_Grappled.OnGrappledCharSleepStateChange_Implementation", ForChar, bIsSleeping); }
	void OnGrappledPrimalChar_Implementation(APrimalCharacter * GrappledChar, const FGrappleTether * WithMasterTether) { NativeCall<void, APrimalCharacter *, const FGrappleTether *>(this, "APrimalBuff_Grappled.OnGrappledPrimalChar_Implementation", GrappledChar, WithMasterTether); }
	void OnOwnerCapsuleHit(AActor * OtherActor, UPrimitiveComponent * OtherComp, FVector NormalImpulse, const FHitResult * Hit) { NativeCall<void, AActor *, UPrimitiveComponent *, FVector, const FHitResult *>(this, "APrimalBuff_Grappled.OnOwnerCapsuleHit", OtherActor, OtherComp, NormalImpulse, Hit); }
	void OnOwnerDeath_Implementation(APrimalCharacter * DyingChar) { NativeCall<void, APrimalCharacter *>(this, "APrimalBuff_Grappled.OnOwnerDeath_Implementation", DyingChar); }
	void OnOwnerSleepStateChanged_Implementation(APrimalCharacter * ForChar, bool bIsSleeping) { NativeCall<void, APrimalCharacter *, bool>(this, "APrimalBuff_Grappled.OnOwnerSleepStateChanged_Implementation", ForChar, bIsSleeping); }
	void OnOwnerTeleported() { NativeCall<void>(this, "APrimalBuff_Grappled.OnOwnerTeleported"); }
	void OnReleasedPrimalChar_Implementation(APrimalCharacter * ReleasedChar) { NativeCall<void, APrimalCharacter *>(this, "APrimalBuff_Grappled.OnReleasedPrimalChar_Implementation", ReleasedChar); }
	void OnRep_GrappleState() { NativeCall<void>(this, "APrimalBuff_Grappled.OnRep_GrappleState"); }
	void OnRep_ReplicatedGrappleTethers() { NativeCall<void>(this, "APrimalBuff_Grappled.OnRep_ReplicatedGrappleTethers"); }
	void OverrideCharacterFlyingVelocity(FVector * InitialVelocity, const FVector * Gravity, float DeltaTime) { NativeCall<void, FVector *, const FVector *, float>(this, "APrimalBuff_Grappled.OverrideCharacterFlyingVelocity", InitialVelocity, Gravity, DeltaTime); }
	void OverrideCharacterNewFallVelocity(FVector * InitialVelocity, const FVector * Gravity, float DeltaTime) { NativeCall<void, FVector *, const FVector *, float>(this, "APrimalBuff_Grappled.OverrideCharacterNewFallVelocity", InitialVelocity, Gravity, DeltaTime); }
	void OverrideCharacterSwimmingVelocity(FVector * InitialVelocity, const FVector * Gravity, const float * FluidFriction, const float * NetBuoyancy, float DeltaTime) { NativeCall<void, FVector *, const FVector *, const float *, const float *, float>(this, "APrimalBuff_Grappled.OverrideCharacterSwimmingVelocity", InitialVelocity, Gravity, FluidFriction, NetBuoyancy, DeltaTime); }
	void OverrideCharacterWalkingVelocity(FVector * InitialVelocity, const float * Friction, float DeltaTime) { NativeCall<void, FVector *, const float *, float>(this, "APrimalBuff_Grappled.OverrideCharacterWalkingVelocity", InitialVelocity, Friction, DeltaTime); }
	bool PreventInstigatorMovementMode(EMovementMode NewMovementMode, char NewCustomMode) { return NativeCall<bool, EMovementMode, char>(this, "APrimalBuff_Grappled.PreventInstigatorMovementMode", NewMovementMode, NewCustomMode); }
	void ReceiveRepGrappleTether(const FReplicatedGrappleTetherData * FromRepData, const int ReceivedTetherIndex) { NativeCall<void, const FReplicatedGrappleTetherData *, const int>(this, "APrimalBuff_Grappled.ReceiveRepGrappleTether", FromRepData, ReceivedTetherIndex); }
	void ReceiveTetherLengthSuggestion(const int * ForTetherIndex, const float * NewTetherLength) { NativeCall<void, const int *, const float *>(this, "APrimalBuff_Grappled.ReceiveTetherLengthSuggestion", ForTetherIndex, NewTetherLength); }
	void ReceiveTetherLengthsSuggestion(const TArray<float> * NewTetherLengths) { NativeCall<void, const TArray<float> *>(this, "APrimalBuff_Grappled.ReceiveTetherLengthsSuggestion", NewTetherLengths); }
	void RefreshAllTetherMasterRefs() { NativeCall<void>(this, "APrimalBuff_Grappled.RefreshAllTetherMasterRefs"); }
	bool RemoveGrappleTether(const int AtIndex, const FString WithTag, const APrimalBuff_Grappled * WithMasterBuff, const bool bForceNetSync, const bool bRemoveAllTethersWithTag) { return NativeCall<bool, const int, const FString, const APrimalBuff_Grappled *, const bool, const bool>(this, "APrimalBuff_Grappled.RemoveGrappleTether", AtIndex, WithTag, WithMasterBuff, bForceNetSync, bRemoveAllTethersWithTag); }
	void ResetOwnerClientPositionErrorTolerance_Implementation() { NativeCall<void>(this, "APrimalBuff_Grappled.ResetOwnerClientPositionErrorTolerance_Implementation"); }
	void ResetOwnerVars_Implementation() { NativeCall<void>(this, "APrimalBuff_Grappled.ResetOwnerVars_Implementation"); }
	void Server_SetGrappleState_Implementation(const char NewGrappleState, bool bForceUpdate) { NativeCall<void, const char, bool>(this, "APrimalBuff_Grappled.Server_SetGrappleState_Implementation", NewGrappleState, bForceUpdate); }
	void Server_SuggestTetherLength_Implementation(const float NewTetherLength) { NativeCall<void, const float>(this, "APrimalBuff_Grappled.Server_SuggestTetherLength_Implementation", NewTetherLength); }
	void Server_SuggestTetherLengths_Implementation(const TArray<float> * NewTetherLengths) { NativeCall<void, const TArray<float> *>(this, "APrimalBuff_Grappled.Server_SuggestTetherLengths_Implementation", NewTetherLengths); }
	void Server_SyncOwnerInputs_Implementation(FVector2D NewInputs) { NativeCall<void, FVector2D>(this, "APrimalBuff_Grappled.Server_SyncOwnerInputs_Implementation", NewInputs); }
	bool SetGrappleState(const TEnumAsByte<enum EGrappleState::Type> NewGrappleState, const bool bForceUpdate) { return NativeCall<bool, const TEnumAsByte<enum EGrappleState::Type>, const bool>(this, "APrimalBuff_Grappled.SetGrappleState", NewGrappleState, bForceUpdate); }
	bool SetGrappleTetherAtIndexLength(const int AtIndex, const float SetNewLength) { return NativeCall<bool, const int, const float>(this, "APrimalBuff_Grappled.SetGrappleTetherAtIndexLength", AtIndex, SetNewLength); }
	static bool SetGrappleTetherLength(FGrappleTether * ForTether, float SetNewLength, const int ForTetherIndex) { return NativeCall<bool, FGrappleTether *, float, const int>(nullptr, "APrimalBuff_Grappled.SetGrappleTetherLength", ForTether, SetNewLength, ForTetherIndex); }
	bool ShouldForceOwnerDedicatedMovementTickPerFrame() { return NativeCall<bool>(this, "APrimalBuff_Grappled.ShouldForceOwnerDedicatedMovementTickPerFrame"); }
	bool ShouldForceOwnerIntoFallingState_Implementation(const FGrappleTether * ForGrappleTether, const FVector * WithOwnerVelocity, const EMovementMode CheckMovementModeOverride) { return NativeCall<bool, const FGrappleTether *, const FVector *, const EMovementMode>(this, "APrimalBuff_Grappled.ShouldForceOwnerIntoFallingState_Implementation", ForGrappleTether, WithOwnerVelocity, CheckMovementModeOverride); }
	static bool ShouldOwnerBeAffectedByTether(const FGrappleTether * ForTether, const TEnumAsByte<enum EGrappleState::Type> ForGrappeState) { return NativeCall<bool, const FGrappleTether *, const TEnumAsByte<enum EGrappleState::Type>>(nullptr, "APrimalBuff_Grappled.ShouldOwnerBeAffectedByTether", ForTether, ForGrappeState); }
	bool ShouldReplicateOwnerInputs_Implementation() { return NativeCall<bool>(this, "APrimalBuff_Grappled.ShouldReplicateOwnerInputs_Implementation"); }
	bool ShouldReturnToIdleGrappleState_Implementation() { return NativeCall<bool>(this, "APrimalBuff_Grappled.ShouldReturnToIdleGrappleState_Implementation"); }
	bool ShouldTetherBreak_Implementation(FGrappleTether * ForTether, const APrimalCharacter * ForChar, const float OverrideBreakPastDist) { return NativeCall<bool, FGrappleTether *, const APrimalCharacter *, const float>(this, "APrimalBuff_Grappled.ShouldTetherBreak_Implementation", ForTether, ForChar, OverrideBreakPastDist); }
	bool ShouldUseDynamicTetherTension_Implementation(const FGrappleTether * ForTether) { return NativeCall<bool, const FGrappleTether *>(this, "APrimalBuff_Grappled.ShouldUseDynamicTetherTension_Implementation", ForTether); }
	void SimulateTautTetherForces_Implementation(FVector * WithCharVelocity, float DeltaTime, float LastGravityZ) { NativeCall<void, FVector *, float, float>(this, "APrimalBuff_Grappled.SimulateTautTetherForces_Implementation", WithCharVelocity, DeltaTime, LastGravityZ); }
	void SimulateTetherFriction_Implementation(FVector * WithCharVelocity, float DeltaTime) { NativeCall<void, FVector *, float>(this, "APrimalBuff_Grappled.SimulateTetherFriction_Implementation", WithCharVelocity, DeltaTime); }
	void Stasis() { NativeCall<void>(this, "APrimalBuff_Grappled.Stasis"); }
	void SyncGrappleTetherLengths() { NativeCall<void>(this, "APrimalBuff_Grappled.SyncGrappleTetherLengths"); }
	void SyncOwnerInputs(FVector2D NewInputs) { NativeCall<void, FVector2D>(this, "APrimalBuff_Grappled.SyncOwnerInputs", NewInputs); }
	static bool TetherHasValidMasterRef(FGrappleTether * ForTether) { return NativeCall<bool, FGrappleTether *>(nullptr, "APrimalBuff_Grappled.TetherHasValidMasterRef", ForTether); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalBuff_Grappled.Tick", DeltaSeconds); }
	void Tick_UpdateAgainstSurface(const float DeltaTime) { NativeCall<void, const float>(this, "APrimalBuff_Grappled.Tick_UpdateAgainstSurface", DeltaTime); }
	void Tick_UpdateGrappleTethers(const float DeltaTime) { NativeCall<void, const float>(this, "APrimalBuff_Grappled.Tick_UpdateGrappleTethers", DeltaTime); }
	void Unstasis() { NativeCall<void>(this, "APrimalBuff_Grappled.Unstasis"); }
	void UpdateAgainstSurfaceFromHits(const TArray<FHitResult> Hits) { NativeCall<void, const TArray<FHitResult>>(this, "APrimalBuff_Grappled.UpdateAgainstSurfaceFromHits", Hits); }
	void UpdateBrokenTethers() { NativeCall<void>(this, "APrimalBuff_Grappled.UpdateBrokenTethers"); }
	static void UpdateGrappleTetherVars(FGrappleTether * ForTether) { NativeCall<void, FGrappleTether *>(nullptr, "APrimalBuff_Grappled.UpdateGrappleTetherVars", ForTether); }
	void UpdateOwnerMovementSpeed_Implementation(FVector * WithCharVelocity) { NativeCall<void, FVector *>(this, "APrimalBuff_Grappled.UpdateOwnerMovementSpeed_Implementation", WithCharVelocity); }
	void UpdateOwnerSwingingVelocity() { NativeCall<void>(this, "APrimalBuff_Grappled.UpdateOwnerSwingingVelocity"); }
	bool UpdateTetherMasterRef(FGrappleTether * ForTether, const bool bInit) { return NativeCall<bool, FGrappleTether *, const bool>(this, "APrimalBuff_Grappled.UpdateTetherMasterRef", ForTether, bInit); }
	void UpdateTethersByState(const float * DeltaTime) { NativeCall<void, const float *>(this, "APrimalBuff_Grappled.UpdateTethersByState", DeltaTime); }
	void AdjustMovementVectorIfAgainstSurface(FVector * AdjustVector) { NativeCall<void, FVector *>(this, "APrimalBuff_Grappled.AdjustMovementVectorIfAgainstSurface", AdjustVector); }
	bool AllowGrappleLogic() { return NativeCall<bool>(this, "APrimalBuff_Grappled.AllowGrappleLogic"); }
	void ApplyOwnerSwingingVelocity(FVector * CurrentVelocity, float DeltaTime) { NativeCall<void, FVector *, float>(this, "APrimalBuff_Grappled.ApplyOwnerSwingingVelocity", CurrentVelocity, DeltaTime); }
	void ApplyTetherMoveVelocity(FVector * CurrentVelocity, float DeltaTime) { NativeCall<void, FVector *, float>(this, "APrimalBuff_Grappled.ApplyTetherMoveVelocity", CurrentVelocity, DeltaTime); }
	bool BP_InterceptGrappleLogic(FVector * CharVelocity) { return NativeCall<bool, FVector *>(this, "APrimalBuff_Grappled.BP_InterceptGrappleLogic", CharVelocity); }
	bool CanBeGrappledAgainstSurface() { return NativeCall<bool>(this, "APrimalBuff_Grappled.CanBeGrappledAgainstSurface"); }
	bool CanChangeGrappleState(const char DesiredGrappleState) { return NativeCall<bool, const char>(this, "APrimalBuff_Grappled.CanChangeGrappleState", DesiredGrappleState); }
	bool CanOwnerGrappleSwing() { return NativeCall<bool>(this, "APrimalBuff_Grappled.CanOwnerGrappleSwing"); }
	bool CanPullChar(APrimalCharacter * PullChar, const bool bForStart) { return NativeCall<bool, APrimalCharacter *, const bool>(this, "APrimalBuff_Grappled.CanPullChar", PullChar, bForStart); }
	bool CanSyncGrappleTetherLengths() { return NativeCall<bool>(this, "APrimalBuff_Grappled.CanSyncGrappleTetherLengths"); }
	bool CanUpdateTetherLength(const FGrappleTether * ForTether, const float WithLength) { return NativeCall<bool, const FGrappleTether *, const float>(this, "APrimalBuff_Grappled.CanUpdateTetherLength", ForTether, WithLength); }
	bool CheckForAutoBreakTether(const FGrappleTether * CheckTether) { return NativeCall<bool, const FGrappleTether *>(this, "APrimalBuff_Grappled.CheckForAutoBreakTether", CheckTether); }
	void ClampGrappleVelocity(FVector * ClampVelocity) { NativeCall<void, FVector *>(this, "APrimalBuff_Grappled.ClampGrappleVelocity", ClampVelocity); }
	void ClampOwnerReleasingVelocity(FVector * WithReleasingVelocity) { NativeCall<void, FVector *>(this, "APrimalBuff_Grappled.ClampOwnerReleasingVelocity", WithReleasingVelocity); }
	void CustomGrappleTick(const float DeltaTime) { NativeCall<void, const float>(this, "APrimalBuff_Grappled.CustomGrappleTick", DeltaTime); }
	bool DisplayGrappleSystemHudNotification(AShooterPlayerController * ForPC, AActor * FromActor, const char NotificationType, const int NotificationID, const FString * ReasonString) { return NativeCall<bool, AShooterPlayerController *, AActor *, const char, const int, const FString *>(this, "APrimalBuff_Grappled.DisplayGrappleSystemHudNotification", ForPC, FromActor, NotificationType, NotificationID, ReasonString); }
	void EndGrapple() { NativeCall<void>(this, "APrimalBuff_Grappled.EndGrapple"); }
	EGrappleState::Type GetCurrentGrappleState(const FGrappleTether * ForTether) { return NativeCall<EGrappleState::Type, const FGrappleTether *>(this, "APrimalBuff_Grappled.GetCurrentGrappleState", ForTether); }
	FVector * GetCurrentTetherMoveDir(FVector * result, const FGrappleTether * ForTether) { return NativeCall<FVector *, FVector *, const FGrappleTether *>(this, "APrimalBuff_Grappled.GetCurrentTetherMoveDir", result, ForTether); }
	float GetGrappleTetherPullAcceleration(const APrimalCharacter * ForPullingChar, const FGrappleTether * ForTether) { return NativeCall<float, const APrimalCharacter *, const FGrappleTether *>(this, "APrimalBuff_Grappled.GetGrappleTetherPullAcceleration", ForPullingChar, ForTether); }
	float GetGrappleTetherPullMaxVelocity(const APrimalCharacter * ForPullingChar, const FGrappleTether * ForTether) { return NativeCall<float, const APrimalCharacter *, const FGrappleTether *>(this, "APrimalBuff_Grappled.GetGrappleTetherPullMaxVelocity", ForPullingChar, ForTether); }
	float GetGrappleTetherReleaseMaxVelocity(const APrimalCharacter * ForReleasingChar, const FGrappleTether * ForTether) { return NativeCall<float, const APrimalCharacter *, const FGrappleTether *>(this, "APrimalBuff_Grappled.GetGrappleTetherReleaseMaxVelocity", ForReleasingChar, ForTether); }
	float GetGrappleVelocityDampingRate(const APrimalCharacter * ForChar, const FGrappleTether * ForTether) { return NativeCall<float, const APrimalCharacter *, const FGrappleTether *>(this, "APrimalBuff_Grappled.GetGrappleVelocityDampingRate", ForChar, ForTether); }
	float GetMaxTetherLength(const FGrappleTether * ForTether) { return NativeCall<float, const FGrappleTether *>(this, "APrimalBuff_Grappled.GetMaxTetherLength", ForTether); }
	float GetMinTetherLength(const FGrappleTether * ForTether) { return NativeCall<float, const FGrappleTether *>(this, "APrimalBuff_Grappled.GetMinTetherLength", ForTether); }
	float GetTetherBreakLimit_GrappledActorAboveVelocity(const FGrappleTether * ForTether) { return NativeCall<float, const FGrappleTether *>(this, "APrimalBuff_Grappled.GetTetherBreakLimit_GrappledActorAboveVelocity", ForTether); }
	float GetTetherBreakLimit_OwnerPastCurrentLengthDelta(const FGrappleTether * ForTether) { return NativeCall<float, const FGrappleTether *>(this, "APrimalBuff_Grappled.GetTetherBreakLimit_OwnerPastCurrentLengthDelta", ForTether); }
	float GetTetherBreakLimit_OwnerPastCurrentLengthForTime(const FGrappleTether * ForTether) { return NativeCall<float, const FGrappleTether *>(this, "APrimalBuff_Grappled.GetTetherBreakLimit_OwnerPastCurrentLengthForTime", ForTether); }
	void InitGrappleBuff() { NativeCall<void>(this, "APrimalBuff_Grappled.InitGrappleBuff"); }
	bool IsGrappledCharHardAttached(APrimalCharacter * ForChar) { return NativeCall<bool, APrimalCharacter *>(this, "APrimalBuff_Grappled.IsGrappledCharHardAttached", ForChar); }
	bool IsHitWithinGrappleRange(const FHitResult * ForHit) { return NativeCall<bool, const FHitResult *>(this, "APrimalBuff_Grappled.IsHitWithinGrappleRange", ForHit); }
	void ModifyGrappledCharVelocity(FVector * CurrentCharVelocity, const FGrappleTether * ForTether, const float DeltaTime) { NativeCall<void, FVector *, const FGrappleTether *, const float>(this, "APrimalBuff_Grappled.ModifyGrappledCharVelocity", CurrentCharVelocity, ForTether, DeltaTime); }
	void ModifyOverriddenCharVelocity(FVector * CurrentCharVelocity, const float DeltaTime) { NativeCall<void, FVector *, const float>(this, "APrimalBuff_Grappled.ModifyOverriddenCharVelocity", CurrentCharVelocity, DeltaTime); }
	void ModifyTetherMoveVelocity(FVector * CurrentMoveVelocity, const FGrappleTether * ForTether) { NativeCall<void, FVector *, const FGrappleTether *>(this, "APrimalBuff_Grappled.ModifyTetherMoveVelocity", CurrentMoveVelocity, ForTether); }
	float ModifyTetherTensionLerpValue(const float CurrentLerpValue) { return NativeCall<float, const float>(this, "APrimalBuff_Grappled.ModifyTetherTensionLerpValue", CurrentLerpValue); }
	void Multi_SyncGrappleTetherLength(const float SyncedTetherLength) { NativeCall<void, const float>(this, "APrimalBuff_Grappled.Multi_SyncGrappleTetherLength", SyncedTetherLength); }
	void Multi_SyncGrappleTetherLengths(const TArray<float> * SyncedTetherLengths) { NativeCall<void, const TArray<float> *>(this, "APrimalBuff_Grappled.Multi_SyncGrappleTetherLengths", SyncedTetherLengths); }
	void OnAgainstValidSurfaceStateChanged() { NativeCall<void>(this, "APrimalBuff_Grappled.OnAgainstValidSurfaceStateChanged"); }
	void OnAgainstValidSurfaceUpdated() { NativeCall<void>(this, "APrimalBuff_Grappled.OnAgainstValidSurfaceUpdated"); }
	void OnGrappleStateChanged() { NativeCall<void>(this, "APrimalBuff_Grappled.OnGrappleStateChanged"); }
	void OnGrappleStateChangedNotify(const char * NewGrappleState, const bool bIsEarlyNotify) { NativeCall<void, const char *, const bool>(this, "APrimalBuff_Grappled.OnGrappleStateChangedNotify", NewGrappleState, bIsEarlyNotify); }
	void OnGrappleTetherAdded(const FGrappleTether * AddedTether) { NativeCall<void, const FGrappleTether *>(this, "APrimalBuff_Grappled.OnGrappleTetherAdded", AddedTether); }
	void OnGrappleTetherBroken(const int * BrokenIndex) { NativeCall<void, const int *>(this, "APrimalBuff_Grappled.OnGrappleTetherBroken", BrokenIndex); }
	void OnGrappleTetherRemoved(const FGrappleTether * RemovedTether) { NativeCall<void, const FGrappleTether *>(this, "APrimalBuff_Grappled.OnGrappleTetherRemoved", RemovedTether); }
	void OnGrappleTethersChanged() { NativeCall<void>(this, "APrimalBuff_Grappled.OnGrappleTethersChanged"); }
	void OnGrappledCharDeath(APrimalCharacter * DyingChar) { NativeCall<void, APrimalCharacter *>(this, "APrimalBuff_Grappled.OnGrappledCharDeath", DyingChar); }
	void OnGrappledCharSleepStateChange(APrimalCharacter * ForChar, bool bIsSleeping) { NativeCall<void, APrimalCharacter *, bool>(this, "APrimalBuff_Grappled.OnGrappledCharSleepStateChange", ForChar, bIsSleeping); }
	void OnGrappledPrimalChar(APrimalCharacter * GrappledChar, const FGrappleTether * WithMasterTether) { NativeCall<void, APrimalCharacter *, const FGrappleTether *>(this, "APrimalBuff_Grappled.OnGrappledPrimalChar", GrappledChar, WithMasterTether); }
	void OnOwnerDeath(APrimalCharacter * DyingChar) { NativeCall<void, APrimalCharacter *>(this, "APrimalBuff_Grappled.OnOwnerDeath", DyingChar); }
	void OnOwnerSleepStateChanged(APrimalCharacter * ForChar, bool bIsSleeping) { NativeCall<void, APrimalCharacter *, bool>(this, "APrimalBuff_Grappled.OnOwnerSleepStateChanged", ForChar, bIsSleeping); }
	void OnReleasedPrimalChar(APrimalCharacter * ReleasedChar) { NativeCall<void, APrimalCharacter *>(this, "APrimalBuff_Grappled.OnReleasedPrimalChar", ReleasedChar); }
	void ResetOwnerClientPositionErrorTolerance() { NativeCall<void>(this, "APrimalBuff_Grappled.ResetOwnerClientPositionErrorTolerance"); }
	void ResetOwnerVars() { NativeCall<void>(this, "APrimalBuff_Grappled.ResetOwnerVars"); }
	void Server_SetGrappleState(const char NewGrappleState, const bool bForceUpdate) { NativeCall<void, const char, const bool>(this, "APrimalBuff_Grappled.Server_SetGrappleState", NewGrappleState, bForceUpdate); }
	void Server_SuggestTetherLength(const float NewTetherLength) { NativeCall<void, const float>(this, "APrimalBuff_Grappled.Server_SuggestTetherLength", NewTetherLength); }
	void Server_SuggestTetherLengths(const TArray<float> * NewTetherLengths) { NativeCall<void, const TArray<float> *>(this, "APrimalBuff_Grappled.Server_SuggestTetherLengths", NewTetherLengths); }
	void Server_SyncOwnerInputs(FVector2D NewInputs) { NativeCall<void, FVector2D>(this, "APrimalBuff_Grappled.Server_SyncOwnerInputs", NewInputs); }
	bool ShouldForceOwnerIntoFallingState(const FGrappleTether * ForTether, const FVector * WithOwnerVelocity, const EMovementMode CheckMovementModeOverride) { return NativeCall<bool, const FGrappleTether *, const FVector *, const EMovementMode>(this, "APrimalBuff_Grappled.ShouldForceOwnerIntoFallingState", ForTether, WithOwnerVelocity, CheckMovementModeOverride); }
	bool ShouldReplicateOwnerInputs() { return NativeCall<bool>(this, "APrimalBuff_Grappled.ShouldReplicateOwnerInputs"); }
	bool ShouldReturnToIdleGrappleState() { return NativeCall<bool>(this, "APrimalBuff_Grappled.ShouldReturnToIdleGrappleState"); }
	bool ShouldTetherBreak(FGrappleTether * ForTether, const APrimalCharacter * ForChar, const float OverrideBreakPastDist) { return NativeCall<bool, FGrappleTether *, const APrimalCharacter *, const float>(this, "APrimalBuff_Grappled.ShouldTetherBreak", ForTether, ForChar, OverrideBreakPastDist); }
	bool ShouldUseDynamicTetherTension(const FGrappleTether * ForTether) { return NativeCall<bool, const FGrappleTether *>(this, "APrimalBuff_Grappled.ShouldUseDynamicTetherTension", ForTether); }
	void SimulateTautTetherForces(FVector * WithCharVelocity, float DeltaTime, float LastGravityZ) { NativeCall<void, FVector *, float, float>(this, "APrimalBuff_Grappled.SimulateTautTetherForces", WithCharVelocity, DeltaTime, LastGravityZ); }
	void SimulateTetherFriction(FVector * WithCharVelocity, float DeltaTime) { NativeCall<void, FVector *, float>(this, "APrimalBuff_Grappled.SimulateTetherFriction", WithCharVelocity, DeltaTime); }
	void UpdateOwnerMovementSpeed(FVector * WithCharVelocity) { NativeCall<void, FVector *>(this, "APrimalBuff_Grappled.UpdateOwnerMovementSpeed", WithCharVelocity); }
};

