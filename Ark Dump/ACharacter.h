#pragma once

#include "BaseDeclarations.h"
#include "APawn.h"
#include "FLifetimeProperty.h"

struct ACharacter : APawn
{
	char __padding[0x1c8L];
	TSubobjectPtr<UCapsuleComponent>& CapsuleComponentField() { return *GetNativePointerField<TSubobjectPtr<UCapsuleComponent>*>(this, "ACharacter.CapsuleComponent"); }
	FBasedMovementInfo& BasedMovementField() { return *GetNativePointerField<FBasedMovementInfo*>(this, "ACharacter.BasedMovement"); }
	FBasedMovementInfo& ReplicatedBasedMovementField() { return *GetNativePointerField<FBasedMovementInfo*>(this, "ACharacter.ReplicatedBasedMovement"); }
	FVector& BaseTranslationOffsetField() { return *GetNativePointerField<FVector*>(this, "ACharacter.BaseTranslationOffset"); }
	char& ReplicatedMovementModeField() { return *GetNativePointerField<char*>(this, "ACharacter.ReplicatedMovementMode"); }
	float& LeftDynamicActorBaseTimeField() { return *GetNativePointerField<float*>(this, "ACharacter.LeftDynamicActorBaseTime"); }
	float& CrouchedEyeHeightField() { return *GetNativePointerField<float*>(this, "ACharacter.CrouchedEyeHeight"); }
	float& ProneEyeHeightField() { return *GetNativePointerField<float*>(this, "ACharacter.ProneEyeHeight"); }
	float& HarvestingDestructionMeshRangeMultiplerField() { return *GetNativePointerField<float*>(this, "ACharacter.HarvestingDestructionMeshRangeMultipler"); }
	TArray<UParticleSystem *>& CharacterOverrideParticleFromField() { return *GetNativePointerField<TArray<UParticleSystem *>*>(this, "ACharacter.CharacterOverrideParticleFrom"); }
	TArray<UParticleSystem *>& CharacterOverrideParticleToField() { return *GetNativePointerField<TArray<UParticleSystem *>*>(this, "ACharacter.CharacterOverrideParticleTo"); }
	bool& bInBaseReplicationField() { return *GetNativePointerField<bool*>(this, "ACharacter.bInBaseReplication"); }
	float& JumpKeyHoldTimeField() { return *GetNativePointerField<float*>(this, "ACharacter.JumpKeyHoldTime"); }
	float& JumpMaxHoldTimeField() { return *GetNativePointerField<float*>(this, "ACharacter.JumpMaxHoldTime"); }
	FRotator_NetQuantizeSmartPitch& LastMovementDesiredRotationField() { return *GetNativePointerField<FRotator_NetQuantizeSmartPitch*>(this, "ACharacter.LastMovementDesiredRotation"); }
	FRootMotionMovementParams& ClientRootMotionParamsField() { return *GetNativePointerField<FRootMotionMovementParams*>(this, "ACharacter.ClientRootMotionParams"); }
	TArray<FSimulatedRootMotionReplicatedMove>& RootMotionRepMovesField() { return *GetNativePointerField<TArray<FSimulatedRootMotionReplicatedMove>*>(this, "ACharacter.RootMotionRepMoves"); }
	FRepRootMotionMontage& RepRootMotionField() { return *GetNativePointerField<FRepRootMotionMontage*>(this, "ACharacter.RepRootMotion"); }
	float& ExtraMaxAccelerationModifierField() { return *GetNativePointerField<float*>(this, "ACharacter.ExtraMaxAccelerationModifier"); }
	float& ExtraFrictionModifierField() { return *GetNativePointerField<float*>(this, "ACharacter.ExtraFrictionModifier"); }
	int& LastTeleportedFrameField() { return *GetNativePointerField<int*>(this, "ACharacter.LastTeleportedFrame"); }
	long double& ForceUnfreezeSkeletalDynamicsUntilTimeField() { return *GetNativePointerField<long double*>(this, "ACharacter.ForceUnfreezeSkeletalDynamicsUntilTime"); }

	// Functions

	bool AllowOverrideSwimmingAcceleration() { return NativeCall<bool>(this, "ACharacter.AllowOverrideSwimmingAcceleration"); }
	bool IsJumping() { return NativeCall<bool>(this, "ACharacter.IsJumping"); }
	bool NotifyLanded(const FHitResult * Hit) { return NativeCall<bool, const FHitResult *>(this, "ACharacter.NotifyLanded", Hit); }
	bool AllowOverrideFlyingVelocity() { return NativeCall<bool>(this, "ACharacter.AllowOverrideFlyingVelocity"); }
	bool AllowOverrideNewFallVelocity() { return NativeCall<bool>(this, "ACharacter.AllowOverrideNewFallVelocity"); }
	bool AllowOverrideSwimmingVelocity() { return NativeCall<bool>(this, "ACharacter.AllowOverrideSwimmingVelocity"); }
	bool AllowOverrideWalkingVelocity() { return NativeCall<bool>(this, "ACharacter.AllowOverrideWalkingVelocity"); }
	void SetLastMovementDesiredRotation(const FRotator * InRotation) { NativeCall<void, const FRotator *>(this, "ACharacter.SetLastMovementDesiredRotation", InRotation); }
	FVector * BPModifyRootMotionDeltaRotation_Implementation(FVector * result, const char * RawData) { return NativeCall<FVector *, FVector *, const char *>(this, "ACharacter.BPModifyRootMotionDeltaRotation_Implementation", result, RawData); }
	float ModifyAirControl(float AirControlIn) { return NativeCall<float, float>(this, "ACharacter.ModifyAirControl", AirControlIn); }
	void ApplyDamageMomentum(float DamageTaken, const FDamageEvent * DamageEvent, APawn * PawnInstigator, AActor * DamageCauser) { NativeCall<void, float, const FDamageEvent *, APawn *, AActor *>(this, "ACharacter.ApplyDamageMomentum", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void ApplyWorldOffset(const FVector * InOffset, bool bWorldShift) { NativeCall<void, const FVector *, bool>(this, "ACharacter.ApplyWorldOffset", InOffset, bWorldShift); }
	UParticleSystem * BPOverrideCharacterParticle_Implementation(UParticleSystem * ParticleIn) { return NativeCall<UParticleSystem *, UParticleSystem *>(this, "ACharacter.BPOverrideCharacterParticle_Implementation", ParticleIn); }
	FRotator * BPValidateStoredClientRotationInput_Implementation(FRotator * result, float TimeSinceLastMove, FRotator ClientRotation) { return NativeCall<FRotator *, FRotator *, float, FRotator>(this, "ACharacter.BPValidateStoredClientRotationInput_Implementation", result, TimeSinceLastMove, ClientRotation); }
	void BaseChange() { NativeCall<void>(this, "ACharacter.BaseChange"); }
	bool CanCrouch() { return NativeCall<bool>(this, "ACharacter.CanCrouch"); }
	bool CanJump() { return NativeCall<bool>(this, "ACharacter.CanJump"); }
	bool CanJumpInternal_Implementation() { return NativeCall<bool>(this, "ACharacter.CanJumpInternal_Implementation"); }
	bool CanProne() { return NativeCall<bool>(this, "ACharacter.CanProne"); }
	void CheckJumpInput(float DeltaTime) { NativeCall<void, float>(this, "ACharacter.CheckJumpInput", DeltaTime); }
	void ClearCrossLevelReferences() { NativeCall<void>(this, "ACharacter.ClearCrossLevelReferences"); }
	void ClearJumpInput() { NativeCall<void>(this, "ACharacter.ClearJumpInput"); }
	void ClientCheatFly_Implementation() { NativeCall<void>(this, "ACharacter.ClientCheatFly_Implementation"); }
	void ClientCheatGhost_Implementation() { NativeCall<void>(this, "ACharacter.ClientCheatGhost_Implementation"); }
	void ClientCheatWalk_Implementation() { NativeCall<void>(this, "ACharacter.ClientCheatWalk_Implementation"); }
	void Crouch(bool bClientSimulation) { NativeCall<void, bool>(this, "ACharacter.Crouch", bClientSimulation); }
	void DisplayDebug(UCanvas * Canvas, const FDebugDisplayInfo * DebugDisplay, float * YL, float * YPos) { NativeCall<void, UCanvas *, const FDebugDisplayInfo *, float *, float *>(this, "ACharacter.DisplayDebug", Canvas, DebugDisplay, YL, YPos); }
	bool DoJump(bool bReplayingMoves) { return NativeCall<bool, bool>(this, "ACharacter.DoJump", bReplayingMoves); }
	UAnimMontage * GetCurrentMontage() { return NativeCall<UAnimMontage *>(this, "ACharacter.GetCurrentMontage"); }
	float GetDefaultHalfHeight() { return NativeCall<float>(this, "ACharacter.GetDefaultHalfHeight"); }
	float GetJumpMaxHoldTime() { return NativeCall<float>(this, "ACharacter.GetJumpMaxHoldTime"); }
	FRotator * GetLastMovementDesiredRotation(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "ACharacter.GetLastMovementDesiredRotation", result); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "ACharacter.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void GetSimpleCollisionCylinder(float * CollisionRadius, float * CollisionHalfHeight) { NativeCall<void, float *, float *>(this, "ACharacter.GetSimpleCollisionCylinder", CollisionRadius, CollisionHalfHeight); }
	bool IsBasedOnDynamicActor() { return NativeCall<bool>(this, "ACharacter.IsBasedOnDynamicActor"); }
	bool IsPlayingRootMotion() { return NativeCall<bool>(this, "ACharacter.IsPlayingRootMotion"); }
	void Jump() { NativeCall<void>(this, "ACharacter.Jump"); }
	void Landed(const FHitResult * Hit) { NativeCall<void, const FHitResult *>(this, "ACharacter.Landed", Hit); }
	void LaunchCharacter(FVector LaunchVelocity, bool bXYOverride, bool bZOverride) { NativeCall<void, FVector, bool, bool>(this, "ACharacter.LaunchCharacter", LaunchVelocity, bXYOverride, bZOverride); }
	void NetTeleportSucceeded_Implementation(FVector ToLoc, FRotator ToRot) { NativeCall<void, FVector, FRotator>(this, "ACharacter.NetTeleportSucceeded_Implementation", ToLoc, ToRot); }
	void OnEndCrouch(float HeightAdjust, float ScaledHeightAdjust) { NativeCall<void, float, float>(this, "ACharacter.OnEndCrouch", HeightAdjust, ScaledHeightAdjust); }
	void OnMovementModeChanged(EMovementMode PrevMovementMode, char PrevCustomMode) { NativeCall<void, EMovementMode, char>(this, "ACharacter.OnMovementModeChanged", PrevMovementMode, PrevCustomMode); }
	void OnRep_IsCrouched() { NativeCall<void>(this, "ACharacter.OnRep_IsCrouched"); }
	void OnRep_IsProne() { NativeCall<void>(this, "ACharacter.OnRep_IsProne"); }
	void OnRep_ReplicatedBasedMovement() { NativeCall<void>(this, "ACharacter.OnRep_ReplicatedBasedMovement"); }
	void OnRep_ReplicatedMovement() { NativeCall<void>(this, "ACharacter.OnRep_ReplicatedMovement"); }
	void OnRep_RootMotion() { NativeCall<void>(this, "ACharacter.OnRep_RootMotion"); }
	void OnStartCrouch(float HeightAdjust, float ScaledHeightAdjust) { NativeCall<void, float, float>(this, "ACharacter.OnStartCrouch", HeightAdjust, ScaledHeightAdjust); }
	void PawnClientRestart() { NativeCall<void>(this, "ACharacter.PawnClientRestart"); }
	float PlayAnimMontage(UAnimMontage * AnimMontage, float InPlayRate, FName StartSectionName, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer, float BlendInTime, float BlendOutTime) { return NativeCall<float, UAnimMontage *, float, FName, bool, bool, float, float>(this, "ACharacter.PlayAnimMontage", AnimMontage, InPlayRate, StartSectionName, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer, BlendInTime, BlendOutTime); }
	void PossessedBy(AController * NewController) { NativeCall<void, AController *>(this, "ACharacter.PossessedBy", NewController); }
	void PostInitializeComponents() { NativeCall<void>(this, "ACharacter.PostInitializeComponents"); }
	void PostNetReceive() { NativeCall<void>(this, "ACharacter.PostNetReceive"); }
	void PostNetReceiveLocationAndRotation() { NativeCall<void>(this, "ACharacter.PostNetReceiveLocationAndRotation"); }
	void PreNetReceive() { NativeCall<void>(this, "ACharacter.PreNetReceive"); }
	void PreReplication(IRepChangedPropertyTracker * ChangedPropertyTracker) { NativeCall<void, IRepChangedPropertyTracker *>(this, "ACharacter.PreReplication", ChangedPropertyTracker); }
	void Prone(bool bClientSimulation) { NativeCall<void, bool>(this, "ACharacter.Prone", bClientSimulation); }
	void RecalculateBaseEyeHeight() { NativeCall<void>(this, "ACharacter.RecalculateBaseEyeHeight"); }
	void Restart() { NativeCall<void>(this, "ACharacter.Restart"); }
	void SetBase(UPrimitiveComponent * NewBaseComponent, const FName BoneName, bool bNotifyPawn) { NativeCall<void, UPrimitiveComponent *, const FName, bool>(this, "ACharacter.SetBase", NewBaseComponent, BoneName, bNotifyPawn); }
	bool ShouldNotifyLanded(const FHitResult * Hit) { return NativeCall<bool, const FHitResult *>(this, "ACharacter.ShouldNotifyLanded", Hit); }
	bool ShouldReplicateRotPitch() { return NativeCall<bool>(this, "ACharacter.ShouldReplicateRotPitch"); }
	bool SimpleTeleportTo(const FVector * DestLocation, const FRotator * DestRotation) { return NativeCall<bool, const FVector *, const FRotator *>(this, "ACharacter.SimpleTeleportTo", DestLocation, DestRotation); }
	void StopAnimMontage(UAnimMontage * AnimMontage) { NativeCall<void, UAnimMontage *>(this, "ACharacter.StopAnimMontage", AnimMontage); }
	void StopJumping() { NativeCall<void>(this, "ACharacter.StopJumping"); }
	void TeleportSucceeded(bool bIsATest, bool bSimpleTeleport) { NativeCall<void, bool, bool>(this, "ACharacter.TeleportSucceeded", bIsATest, bSimpleTeleport); }
	bool TeleportTo(const FVector * DestLocation, const FRotator * DestRotation, bool bIsATest, bool bNoCheck) { return NativeCall<bool, const FVector *, const FRotator *, bool, bool>(this, "ACharacter.TeleportTo", DestLocation, DestRotation, bIsATest, bNoCheck); }
	void TornOff() { NativeCall<void>(this, "ACharacter.TornOff"); }
	void TurnOff() { NativeCall<void>(this, "ACharacter.TurnOff"); }
	void UnCrouch(bool bClientSimulation) { NativeCall<void, bool>(this, "ACharacter.UnCrouch", bClientSimulation); }
	void UnPossessed() { NativeCall<void>(this, "ACharacter.UnPossessed"); }
	void UnProne(bool bClientSimulation) { NativeCall<void, bool>(this, "ACharacter.UnProne", bClientSimulation); }
	void UpdateSimulatedPosition(const FVector * NewLocation, const FRotator * NewRotation) { NativeCall<void, const FVector *, const FRotator *>(this, "ACharacter.UpdateSimulatedPosition", NewLocation, NewRotation); }
	float OverrideTerminalVelocity() { return NativeCall<float>(this, "ACharacter.OverrideTerminalVelocity"); }
	bool BPAcknowledgeServerCorrection(float TimeStamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent * NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode) { return NativeCall<bool, float, FVector, FVector, UPrimitiveComponent *, FName, bool, bool, char>(this, "ACharacter.BPAcknowledgeServerCorrection", TimeStamp, NewLoc, NewVel, NewBase, NewBaseBoneName, bHasBase, bBaseRelativePosition, ServerMovementMode); }
	FRotator * BPModifyRootMotionDeltaRotation(FRotator * result, const FRotator * Delta) { return NativeCall<FRotator *, FRotator *, const FRotator *>(this, "ACharacter.BPModifyRootMotionDeltaRotation", result, Delta); }
	FRotator * BPValidateStoredClientRotationInput(FRotator * result, float TimeSinceLastMove, FRotator ClientRotation) { return NativeCall<FRotator *, FRotator *, float, FRotator>(this, "ACharacter.BPValidateStoredClientRotationInput", result, TimeSinceLastMove, ClientRotation); }
	bool BP_PreventMovementMode(EMovementMode newMovementMode, char newCustomMode) { return NativeCall<bool, EMovementMode, char>(this, "ACharacter.BP_PreventMovementMode", newMovementMode, newCustomMode); }
	bool CanJumpInternal() { return NativeCall<bool>(this, "ACharacter.CanJumpInternal"); }
	void ClientCheatFly() { NativeCall<void>(this, "ACharacter.ClientCheatFly"); }
	void ClientCheatGhost() { NativeCall<void>(this, "ACharacter.ClientCheatGhost"); }
	void ClientCheatWalk() { NativeCall<void>(this, "ACharacter.ClientCheatWalk"); }
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) { NativeCall<void, float, float>(this, "ACharacter.K2_OnEndCrouch", HalfHeightAdjust, ScaledHalfHeightAdjust); }
	void K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode) { NativeCall<void, EMovementMode, EMovementMode, char, char>(this, "ACharacter.K2_OnMovementModeChanged", PrevMovementMode, NewMovementMode, PrevCustomMode, NewCustomMode); }
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) { NativeCall<void, float, float>(this, "ACharacter.K2_OnStartCrouch", HalfHeightAdjust, ScaledHalfHeightAdjust); }
	void K2_UpdateCustomMovement(float DeltaTime) { NativeCall<void, float>(this, "ACharacter.K2_UpdateCustomMovement", DeltaTime); }
	void NetTeleportSucceeded(FVector ToLoc, FRotator ToRot) { NativeCall<void, FVector, FRotator>(this, "ACharacter.NetTeleportSucceeded", ToLoc, ToRot); }
	void OnJumped() { NativeCall<void>(this, "ACharacter.OnJumped"); }
	void OnLanded(const FHitResult * Hit) { NativeCall<void, const FHitResult *>(this, "ACharacter.OnLanded", Hit); }
	void OnLaunched(FVector LaunchVelocity, bool bXYOverride, bool bZOverride) { NativeCall<void, FVector, bool, bool>(this, "ACharacter.OnLaunched", LaunchVelocity, bXYOverride, bZOverride); }
	void OnWalkingOffLedge() { NativeCall<void>(this, "ACharacter.OnWalkingOffLedge"); }
	bool ReplicateMovementToSimulatedClients() { return NativeCall<bool>(this, "ACharacter.ReplicateMovementToSimulatedClients"); }
};

