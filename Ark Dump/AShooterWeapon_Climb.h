#pragma once

#include "BaseDeclarations.h"
#include "AShooterWeapon_Melee.h"
#include "AShooterWeapon.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"

struct AShooterWeapon_Climb : AShooterWeapon_Melee
{
	char __padding[0x6d8L];
	float& MinStaminaToClimbField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Climb.MinStaminaToClimb"); }
	char& ClimbingModeField() { return *GetNativePointerField<char*>(this, "AShooterWeapon_Climb.ClimbingMode"); }
	char& PreviousClimbingModeField() { return *GetNativePointerField<char*>(this, "AShooterWeapon_Climb.PreviousClimbingMode"); }
	char& ClimbingTypeField() { return *GetNativePointerField<char*>(this, "AShooterWeapon_Climb.ClimbingType"); }
	char& CurrentClimbingMovementTypeField() { return *GetNativePointerField<char*>(this, "AShooterWeapon_Climb.CurrentClimbingMovementType"); }
	FVector_NetQuantize100& ClimbingAnchorPositionField() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "AShooterWeapon_Climb.ClimbingAnchorPosition"); }
	FVector_NetQuantizeNormal& ClimbingAnchorNormalField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "AShooterWeapon_Climb.ClimbingAnchorNormal"); }
	FVector& PreviousClimbingAnchorPositionField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon_Climb.PreviousClimbingAnchorPosition"); }
	FVector& PreviousClimbingAnchorNormalField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon_Climb.PreviousClimbingAnchorNormal"); }
	FVector& ClimbingDirectionField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon_Climb.ClimbingDirection"); }
	FVector& ClimbingAnchorDirectionField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon_Climb.ClimbingAnchorDirection"); }
	float& ClimbingOvershootTimeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Climb.ClimbingOvershootTime"); }
	float& ClimbingLookingToSideField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Climb.ClimbingLookingToSide"); }
	USoundCue * ClimbLowStaminaLoopSCField() { return GetNativePointerField<USoundCue *>(this, "AShooterWeapon_Climb.ClimbLowStaminaLoopSC"); }
	UAudioComponent * ClimbLowStaminaLoopACField() { return GetNativePointerField<UAudioComponent *>(this, "AShooterWeapon_Climb.ClimbLowStaminaLoopAC"); }
	float& ClimbLowStaminaPercentagePlaySoundField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Climb.ClimbLowStaminaPercentagePlaySound"); }
	FClimbingAnims& ClimbAnimsField() { return *GetNativePointerField<FClimbingAnims*>(this, "AShooterWeapon_Climb.ClimbAnims"); }
	FWeaponAnim& TurnLeftAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Climb.TurnLeftAnim"); }
	FWeaponAnim& TurnRightAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Climb.TurnRightAnim"); }
	FWeaponAnim& TurnLeftAnimHangingField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Climb.TurnLeftAnimHanging"); }
	FWeaponAnim& TurnRightAnimHangingField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Climb.TurnRightAnimHanging"); }
	UAnimSequence * RightClimbingAnimationField() { return GetNativePointerField<UAnimSequence *>(this, "AShooterWeapon_Climb.RightClimbingAnimation"); }
	UAnimSequence * LeftClimbingAnimationField() { return GetNativePointerField<UAnimSequence *>(this, "AShooterWeapon_Climb.LeftClimbingAnimation"); }
	UAnimSequence * RightClimbingHangAnimationField() { return GetNativePointerField<UAnimSequence *>(this, "AShooterWeapon_Climb.RightClimbingHangAnimation"); }
	UAnimSequence * LeftClimbingHangAnimationField() { return GetNativePointerField<UAnimSequence *>(this, "AShooterWeapon_Climb.LeftClimbingHangAnimation"); }
	UAnimSequence * InventoryRightClimbAnimationField() { return GetNativePointerField<UAnimSequence *>(this, "AShooterWeapon_Climb.InventoryRightClimbAnimation"); }
	UAnimSequence * InventoryLeftClimbAnimationField() { return GetNativePointerField<UAnimSequence *>(this, "AShooterWeapon_Climb.InventoryLeftClimbAnimation"); }
	UAnimSequence * InventoryRightClimbHangAnimationField() { return GetNativePointerField<UAnimSequence *>(this, "AShooterWeapon_Climb.InventoryRightClimbHangAnimation"); }
	UAnimSequence * InventoryLeftClimbHangAnimationField() { return GetNativePointerField<UAnimSequence *>(this, "AShooterWeapon_Climb.InventoryLeftClimbHangAnimation"); }
	FWeaponAnim& SlideDownLeftAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Climb.SlideDownLeftAnim"); }
	FWeaponAnim& SlideDownRightAnimField() { return *GetNativePointerField<FWeaponAnim*>(this, "AShooterWeapon_Climb.SlideDownRightAnim"); }
	FName& LeftMesh1PComponentNameField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Climb.LeftMesh1PComponentName"); }
	FName& RightMesh1PComponentNameField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Climb.RightMesh1PComponentName"); }
	FName& LeftMesh3PComponentNameField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Climb.LeftMesh3PComponentName"); }
	FName& RightMesh3PComponentNameField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Climb.RightMesh3PComponentName"); }
	FName& LeftPickAttachPoint3PField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Climb.LeftPickAttachPoint3P"); }
	TSubclassOf<UCameraShake>& ClimbPickHitCameraShakeField() { return *GetNativePointerField<TSubclassOf<UCameraShake>*>(this, "AShooterWeapon_Climb.ClimbPickHitCameraShake"); }
	FBiomeZoneImpactEffect& LeftClimbImpactEffectsField() { return *GetNativePointerField<FBiomeZoneImpactEffect*>(this, "AShooterWeapon_Climb.LeftClimbImpactEffects"); }
	FBiomeZoneImpactEffect& RightClimbImpactEffectsField() { return *GetNativePointerField<FBiomeZoneImpactEffect*>(this, "AShooterWeapon_Climb.RightClimbImpactEffects"); }
	FName& ImpactSocketNameField() { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Climb.ImpactSocketName"); }
	int& MaxSpawnedImpactEffectsField() { return *GetNativePointerField<int*>(this, "AShooterWeapon_Climb.MaxSpawnedImpactEffects"); }
	char& ServerCurrentClimbingTypeField() { return *GetNativePointerField<char*>(this, "AShooterWeapon_Climb.ServerCurrentClimbingType"); }
	FVector& ServerCurrentClimbingDirectionField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon_Climb.ServerCurrentClimbingDirection"); }
	float& UpdatingDirectionTimeField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Climb.UpdatingDirectionTime"); }
	TSubclassOf<UPrimalClimbingSettings>& ClimbingSettingsClassField() { return *GetNativePointerField<TSubclassOf<UPrimalClimbingSettings>*>(this, "AShooterWeapon_Climb.ClimbingSettingsClass"); }
	float& ClimbingMinAttachedDurationBeforeAllowingDetachField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Climb.ClimbingMinAttachedDurationBeforeAllowingDetach"); }
	long double& ClimbingLastAttachedStartedTimeField() { return *GetNativePointerField<long double*>(this, "AShooterWeapon_Climb.ClimbingLastAttachedStartedTime"); }
	float& LastDistanceField() { return *GetNativePointerField<float*>(this, "AShooterWeapon_Climb.LastDistance"); }
	bool& bHasAValidClimbingTargetField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Climb.bHasAValidClimbingTarget"); }
	FVector& LastClimbInputVectorField() { return *GetNativePointerField<FVector*>(this, "AShooterWeapon_Climb.LastClimbInputVector"); }
	bool& bForcedTPVField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Climb.bForcedTPV"); }
	bool& bLastThirdPersonPlayerField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Climb.bLastThirdPersonPlayer"); }
	bool& bFellFromQuakeField() { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Climb.bFellFromQuake"); }

	// Functions

	const UPrimalClimbingSettings * GetClimbingSettingsFast() { return NativeCall<const UPrimalClimbingSettings *>(this, "AShooterWeapon_Climb.GetClimbingSettingsFast"); }
	FVector * AdjustClimbAnchorDir(FVector * result, FVector ClimbingAnchorDirection) { return NativeCall<FVector *, FVector *, FVector>(this, "AShooterWeapon_Climb.AdjustClimbAnchorDir", result, ClimbingAnchorDirection); }
	bool AllowStatusRecovery() { return NativeCall<bool>(this, "AShooterWeapon_Climb.AllowStatusRecovery"); }
	bool AllowUnequip_Implementation() { return NativeCall<bool>(this, "AShooterWeapon_Climb.AllowUnequip_Implementation"); }
	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, const UAnimNotify * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, const UAnimNotify *>(this, "AShooterWeapon_Climb.AnimNotifyCustomEvent", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void ApplyPrimalItemSettingsToWeapon(bool bShallowUpdate) { NativeCall<void, bool>(this, "AShooterWeapon_Climb.ApplyPrimalItemSettingsToWeapon", bShallowUpdate); }
	void AttachOtherMeshes() { NativeCall<void>(this, "AShooterWeapon_Climb.AttachOtherMeshes"); }
	void AttemptForceTPV() { NativeCall<void>(this, "AShooterWeapon_Climb.AttemptForceTPV"); }
	void CalculateClimbDirections(FVector ClimbingDirection, FVector AdjustedAnchorDir, FVector * OutTraceMove, FVector * OutTraceDir) { NativeCall<void, FVector, FVector, FVector *, FVector *>(this, "AShooterWeapon_Climb.CalculateClimbDirections", ClimbingDirection, AdjustedAnchorDir, OutTraceMove, OutTraceDir); }
	float CalculateDurabilityConsumption() { return NativeCall<float>(this, "AShooterWeapon_Climb.CalculateDurabilityConsumption"); }
	bool CanClimbOnSurface(const FHitResult * HitResult) { return NativeCall<bool, const FHitResult *>(this, "AShooterWeapon_Climb.CanClimbOnSurface", HitResult); }
	bool CanLandOnSurface(const FHitResult * HitResult) { return NativeCall<bool, const FHitResult *>(this, "AShooterWeapon_Climb.CanLandOnSurface", HitResult); }
	bool CanMeleeAttack() { return NativeCall<bool>(this, "AShooterWeapon_Climb.CanMeleeAttack"); }
	void ClearImpactEffects() { NativeCall<void>(this, "AShooterWeapon_Climb.ClearImpactEffects"); }
	void ClientNotifyNoClimbSurface_Implementation() { NativeCall<void>(this, "AShooterWeapon_Climb.ClientNotifyNoClimbSurface_Implementation"); }
	bool ClimbTrace(FHitResult * HitResult, char Type, FVector Direction, ECollisionChannel Channel) { return NativeCall<bool, FHitResult *, char, FVector, ECollisionChannel>(this, "AShooterWeapon_Climb.ClimbTrace", HitResult, Type, Direction, Channel); }
	bool ClimbingPositionTrace(const FVector * TraceStart, const FVector * TraceNormal, FVector * OutDirection, float * OutDistance) { return NativeCall<bool, const FVector *, const FVector *, FVector *, float *>(this, "AShooterWeapon_Climb.ClimbingPositionTrace", TraceStart, TraceNormal, OutDirection, OutDistance); }
	void ConsumeStamina(float StaminaConsumption) { NativeCall<void, float>(this, "AShooterWeapon_Climb.ConsumeStamina", StaminaConsumption); }
	void Destroyed() { NativeCall<void>(this, "AShooterWeapon_Climb.Destroyed"); }
	void DetachOtherMeshes() { NativeCall<void>(this, "AShooterWeapon_Climb.DetachOtherMeshes"); }
	void DrawDebugCapsuleTrace(const UWorld * InWorld, const FVector * LineStart, const FVector * LineEnd, float Radius, const FColor * Color, bool bPersistentLines, float LifeTime, char DepthPriority) { NativeCall<void, const UWorld *, const FVector *, const FVector *, float, const FColor *, bool, float, char>(this, "AShooterWeapon_Climb.DrawDebugCapsuleTrace", InWorld, LineStart, LineEnd, Radius, Color, bPersistentLines, LifeTime, DepthPriority); }
	bool GetAimOffsets(float DeltaTime, FRotator * RootRotOffset, float * RootYawSpeed, float MaxYawAimClamp, FVector * RootLocOffset, FRotator * CurrentAimRot, FVector * CurrentRootLoc, FVector * TargetRootLoc, FRotator * TargetAimRot) { return NativeCall<bool, float, FRotator *, float *, float, FVector *, FRotator *, FVector *, FVector *, FRotator *>(this, "AShooterWeapon_Climb.GetAimOffsets", DeltaTime, RootRotOffset, RootYawSpeed, MaxYawAimClamp, RootLocOffset, CurrentAimRot, CurrentRootLoc, TargetRootLoc, TargetAimRot); }
	EClimbingAnimationType::Type GetClimbingMovementType() { return NativeCall<EClimbingAnimationType::Type>(this, "AShooterWeapon_Climb.GetClimbingMovementType"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "AShooterWeapon_Climb.GetLifetimeReplicatedProps", OutLifetimeProps); }
	const FWeaponAnim * GetOpenInventoryAnim() { return NativeCall<const FWeaponAnim *>(this, "AShooterWeapon_Climb.GetOpenInventoryAnim"); }
	void GetPitchMinMax(float * outMin, float * outMax) { NativeCall<void, float *, float *>(this, "AShooterWeapon_Climb.GetPitchMinMax", outMin, outMax); }
	UAnimSequence * GetStandingAnimation_Implementation(float * OutBlendInTime, float * OutBlendOutTime) { return NativeCall<UAnimSequence *, float *, float *>(this, "AShooterWeapon_Climb.GetStandingAnimation_Implementation", OutBlendInTime, OutBlendOutTime); }
	FVector * GetViewDirection(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AShooterWeapon_Climb.GetViewDirection", result); }
	FVector * GetViewLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AShooterWeapon_Climb.GetViewLocation", result); }
	bool IsClimbing() { return NativeCall<bool>(this, "AShooterWeapon_Climb.IsClimbing"); }
	bool IsClimbingHanging() { return NativeCall<bool>(this, "AShooterWeapon_Climb.IsClimbingHanging"); }
	bool IsClimbingUp() { return NativeCall<bool>(this, "AShooterWeapon_Climb.IsClimbingUp"); }
	bool IsHitInvisibleWall(const FHitResult * HitResult) { return NativeCall<bool, const FHitResult *>(this, "AShooterWeapon_Climb.IsHitInvisibleWall", HitResult); }
	bool MustForceFPV() { return NativeCall<bool>(this, "AShooterWeapon_Climb.MustForceFPV"); }
	void PlayClimbAnim(char Type, char AnimationType) { NativeCall<void, char, char>(this, "AShooterWeapon_Climb.PlayClimbAnim", Type, AnimationType); }
	void PlayJumpAnim(char JumpType) { NativeCall<void, char>(this, "AShooterWeapon_Climb.PlayJumpAnim", JumpType); }
	void PlayQuakeFallAnim() { NativeCall<void>(this, "AShooterWeapon_Climb.PlayQuakeFallAnim"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AShooterWeapon_Climb.PostInitializeComponents"); }
	void PreApplyAccumulatedForces(float DeltaSeconds, FVector * PendingImpulseToApply, FVector * PendingForceToApply) { NativeCall<void, float, FVector *, FVector *>(this, "AShooterWeapon_Climb.PreApplyAccumulatedForces", DeltaSeconds, PendingImpulseToApply, PendingForceToApply); }
	void ReleaseClimbingAnchor(bool bWithJump, FVector InputDir, bool bForceMinTimeCheckBeforeReleasing) { NativeCall<void, bool, FVector, bool>(this, "AShooterWeapon_Climb.ReleaseClimbingAnchor", bWithJump, InputDir, bForceMinTimeCheckBeforeReleasing); }
	FWeaponAnim * SelectClimbAnim(FWeaponAnim * result, char MovementType) { return NativeCall<FWeaponAnim *, FWeaponAnim *, char>(this, "AShooterWeapon_Climb.SelectClimbAnim", result, MovementType); }
	FWeaponAnim * SelectMeleeAttackAnim(FWeaponAnim * result) { return NativeCall<FWeaponAnim *, FWeaponAnim *>(this, "AShooterWeapon_Climb.SelectMeleeAttackAnim", result); }
	void ServerPerformTurn_Implementation(bool ClimbingLeftArm) { NativeCall<void, bool>(this, "AShooterWeapon_Climb.ServerPerformTurn_Implementation", ClimbingLeftArm); }
	void ServerReleaseClimbingAnchor_Implementation(bool bWithJump, FVector_NetQuantizeNormal InputDir, bool bForceMinTimeCheckBeforeReleasing) { NativeCall<void, bool, FVector_NetQuantizeNormal, bool>(this, "AShooterWeapon_Climb.ServerReleaseClimbingAnchor_Implementation", bWithJump, InputDir, bForceMinTimeCheckBeforeReleasing); }
	void ServerRequestClimbMove_Implementation(char Type, FVector Direction, bool ClimbingLeftArm) { NativeCall<void, char, FVector, bool>(this, "AShooterWeapon_Climb.ServerRequestClimbMove_Implementation", Type, Direction, ClimbingLeftArm); }
	void ServerSetClimbingLeftArm_Implementation(bool ClimbingLeftArm) { NativeCall<void, bool>(this, "AShooterWeapon_Climb.ServerSetClimbingLeftArm_Implementation", ClimbingLeftArm); }
	void SetClimbingAnchorPoint_Implementation(char Type, char Mode, FVector_NetQuantize100 Direction, FVector_NetQuantize100 Position, FVector_NetQuantizeNormal Normal) { NativeCall<void, char, char, FVector_NetQuantize100, FVector_NetQuantize100, FVector_NetQuantizeNormal>(this, "AShooterWeapon_Climb.SetClimbingAnchorPoint_Implementation", Type, Mode, Direction, Position, Normal); }
	bool ShouldOverrideOpenInventory() { return NativeCall<bool>(this, "AShooterWeapon_Climb.ShouldOverrideOpenInventory"); }
	bool ShouldShowTargetingArray() { return NativeCall<bool>(this, "AShooterWeapon_Climb.ShouldShowTargetingArray"); }
	void StartAltFire() { NativeCall<void>(this, "AShooterWeapon_Climb.StartAltFire"); }
	void StartFire(bool bFromGamepad) { NativeCall<void, bool>(this, "AShooterWeapon_Climb.StartFire", bFromGamepad); }
	void StopAltFire() { NativeCall<void>(this, "AShooterWeapon_Climb.StopAltFire"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterWeapon_Climb.Tick", DeltaSeconds); }
	void TryClimbMove(EClimbingType::Type ClimbingType, const FVector * MoveDirection) { NativeCall<void, EClimbingType::Type, const FVector *>(this, "AShooterWeapon_Climb.TryClimbMove", ClimbingType, MoveDirection); }
	void UpdateClimbDirection(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterWeapon_Climb.UpdateClimbDirection", DeltaSeconds); }
	void UpdateClimbing(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterWeapon_Climb.UpdateClimbing", DeltaSeconds); }
	void UpdateFirstPersonMeshes(bool bIsFirstPerson) { NativeCall<void, bool>(this, "AShooterWeapon_Climb.UpdateFirstPersonMeshes", bIsFirstPerson); }
	void BPUpdateClimbTarget(float DeltaSeconds, bool bClimbing, const FVector * AnchorPosition, const FVector * AnchorNormal, bool bCanClimb, bool bCanLand, const FVector * ClimbLocation, const FVector * ClimbNormal, bool bHudVisible) { NativeCall<void, float, bool, const FVector *, const FVector *, bool, bool, const FVector *, const FVector *, bool>(this, "AShooterWeapon_Climb.BPUpdateClimbTarget", DeltaSeconds, bClimbing, AnchorPosition, AnchorNormal, bCanClimb, bCanLand, ClimbLocation, ClimbNormal, bHudVisible); }
	void ClientNotifyNoClimbSurface() { NativeCall<void>(this, "AShooterWeapon_Climb.ClientNotifyNoClimbSurface"); }
	void ServerPerformTurn(bool ClimbingLeftArm) { NativeCall<void, bool>(this, "AShooterWeapon_Climb.ServerPerformTurn", ClimbingLeftArm); }
	void ServerReleaseClimbingAnchor(bool bWithJump, FVector_NetQuantizeNormal InputDir, bool bForceMinTimeCheckBeforeReleasing) { NativeCall<void, bool, FVector_NetQuantizeNormal, bool>(this, "AShooterWeapon_Climb.ServerReleaseClimbingAnchor", bWithJump, InputDir, bForceMinTimeCheckBeforeReleasing); }
	void ServerRequestClimbMove(char Type, FVector Direction, bool ClimbingLeftArm) { NativeCall<void, char, FVector, bool>(this, "AShooterWeapon_Climb.ServerRequestClimbMove", Type, Direction, ClimbingLeftArm); }
	void ServerSetClimbingLeftArm(bool ClimbingLeftArm) { NativeCall<void, bool>(this, "AShooterWeapon_Climb.ServerSetClimbingLeftArm", ClimbingLeftArm); }
	void SetClimbingAnchorPoint(char Type, char Mode, FVector_NetQuantize100 Direction, FVector_NetQuantize100 Position, FVector_NetQuantizeNormal Normal) { NativeCall<void, char, char, FVector_NetQuantize100, FVector_NetQuantize100, FVector_NetQuantizeNormal>(this, "AShooterWeapon_Climb.SetClimbingAnchorPoint", Type, Mode, Direction, Position, Normal); }
};

