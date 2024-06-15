#pragma once

#include "BaseDeclarations.h"
#include "ACharacter.h"
#include "APawn.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FTransponderInfo.h"
#include "FLifetimeProperty.h"
#include "FMultiUseEntry.h"
#include "FHitResult.h"
#include "APrimalStructure.h"
#include "APrimalBuff.h"
#include "UCameraShake.h"
#include "FHUDElement.h"
#include "FRadialDamageEvent.h"
#include "FDamageEvent.h"
#include "UDamageType.h"

struct APrimalCharacter : ACharacter
{
	char __padding[0xa90L];
	FVector& OldLocationField() { return *GetNativePointerField<FVector*>(this, "APrimalCharacter.OldLocation"); }
	FRotator& OldRotationField() { return *GetNativePointerField<FRotator*>(this, "APrimalCharacter.OldRotation"); }
	float& EffectorInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.EffectorInterpSpeed"); }
	float& HalfLegLengthField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.HalfLegLength"); }
	float& TwoLeggedVirtualPointDistFactorField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.TwoLeggedVirtualPointDistFactor"); }
	float& FullIKDistanceField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.FullIKDistance"); }
	float& IKAfterFallingTimeField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.IKAfterFallingTime"); }
	float& SimpleIkRateField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.SimpleIkRate"); }
	FVector& GroundCheckExtentField() { return *GetNativePointerField<FVector*>(this, "APrimalCharacter.GroundCheckExtent"); }
	long double& LastForceAimedCharactersTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastForceAimedCharactersTime"); }
	UAnimMontage * JumpAnimField() { return GetNativePointerField<UAnimMontage *>(this, "APrimalCharacter.JumpAnim"); }
	UAnimMontage * LandedAnimField() { return GetNativePointerField<UAnimMontage *>(this, "APrimalCharacter.LandedAnim"); }
	UAnimMontage * HurtAnimField() { return GetNativePointerField<UAnimMontage *>(this, "APrimalCharacter.HurtAnim"); }
	UAnimMontage * HurtAnim_FlyingField() { return GetNativePointerField<UAnimMontage *>(this, "APrimalCharacter.HurtAnim_Flying"); }
	UAnimMontage * PinnedAnimField() { return GetNativePointerField<UAnimMontage *>(this, "APrimalCharacter.PinnedAnim"); }
	UParticleSystem * HurtFXField() { return GetNativePointerField<UParticleSystem *>(this, "APrimalCharacter.HurtFX"); }
	USoundCue * HurtSoundField() { return GetNativePointerField<USoundCue *>(this, "APrimalCharacter.HurtSound"); }
	FName& RootBodyBoneNameField() { return *GetNativePointerField<FName*>(this, "APrimalCharacter.RootBodyBoneName"); }
	FDecalData& HurtDecalDataField() { return *GetNativePointerField<FDecalData*>(this, "APrimalCharacter.HurtDecalData"); }
	long double& LastStartedTalkingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastStartedTalkingTime"); }
	FString& TribeNameField() { return *GetNativePointerField<FString*>(this, "APrimalCharacter.TribeName"); }
	float& WaterSubmergedDepthThresholdField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.WaterSubmergedDepthThreshold"); }
	float& ProneWaterSubmergedDepthThresholdField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ProneWaterSubmergedDepthThreshold"); }
	TEnumAsByte<enum EMovementMode>& SubmergedWaterMovementModeField() { return *GetNativePointerField<TEnumAsByte<enum EMovementMode>*>(this, "APrimalCharacter.SubmergedWaterMovementMode"); }
	TEnumAsByte<enum EMovementMode>& UnSubmergedWaterMovementModeField() { return *GetNativePointerField<TEnumAsByte<enum EMovementMode>*>(this, "APrimalCharacter.UnSubmergedWaterMovementMode"); }
	TArray<FDamageTypeAdjuster>& DamageTypeAdjustersField() { return *GetNativePointerField<TArray<FDamageTypeAdjuster>*>(this, "APrimalCharacter.DamageTypeAdjusters"); }
	float& SnapshotScaleField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.SnapshotScale"); }
	TArray<FPrimalSnapshotPose>& SnapshotPosesField() { return *GetNativePointerField<TArray<FPrimalSnapshotPose>*>(this, "APrimalCharacter.SnapshotPoses"); }
	FName& DragBoneNameField() { return *GetNativePointerField<FName*>(this, "APrimalCharacter.DragBoneName"); }
	FName& DragSocketNameField() { return *GetNativePointerField<FName*>(this, "APrimalCharacter.DragSocketName"); }
	float& MaxDragDistanceField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.MaxDragDistance"); }
	float& MaxDragDistanceTimeoutField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.MaxDragDistanceTimeout"); }
	TArray<FName>& BonesToIngoreWhileDraggedField() { return *GetNativePointerField<TArray<FName>*>(this, "APrimalCharacter.BonesToIngoreWhileDragged"); }
	float& PreviewCameraMaxZoomMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.PreviewCameraMaxZoomMultiplier"); }
	float& PreviewCameraDefaultZoomMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.PreviewCameraDefaultZoomMultiplier"); }
	float& PreviewCameraDistanceScaleFactorField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.PreviewCameraDistanceScaleFactor"); }
	FTransform& LocalDraggedCharacterTransformField() { return *GetNativePointerField<FTransform*>(this, "APrimalCharacter.LocalDraggedCharacterTransform"); }
	long double& StartDraggingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.StartDraggingTime"); }
	long double& LastDragUpdateTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastDragUpdateTime"); }
	float& StasisConsumerRangeMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.StasisConsumerRangeMultiplier"); }
	int& CurrentFrameAnimPreventInputField() { return *GetNativePointerField<int*>(this, "APrimalCharacter.CurrentFrameAnimPreventInput"); }
	float& BPTimerServerMinField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.BPTimerServerMin"); }
	float& BPTimerServerMaxField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.BPTimerServerMax"); }
	float& BPTimerNonDedicatedMinField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.BPTimerNonDedicatedMin"); }
	float& BPTimerNonDedicatedMaxField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.BPTimerNonDedicatedMax"); }
	long double& NextBPTimerServerField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.NextBPTimerServer"); }
	long double& NextBPTimerNonDedicatedField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.NextBPTimerNonDedicated"); }
	long double& LastCausedDamageTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastCausedDamageTime"); }
	TWeakObjectPtr<APrimalDinoCharacter>& CarryingDinoField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter>*>(this, "APrimalCharacter.CarryingDino"); }
	FName& DediOverrideCapsuleCollisionProfileNameField() { return *GetNativePointerField<FName*>(this, "APrimalCharacter.DediOverrideCapsuleCollisionProfileName"); }
	FName& DediOverrideMeshCollisionProfileNameField() { return *GetNativePointerField<FName*>(this, "APrimalCharacter.DediOverrideMeshCollisionProfileName"); }
	FName& SnaredFromSocketField() { return *GetNativePointerField<FName*>(this, "APrimalCharacter.SnaredFromSocket"); }
	float& DamageNotifyTeamAggroMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.DamageNotifyTeamAggroMultiplier"); }
	float& DamageNotifyTeamAggroRangeField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.DamageNotifyTeamAggroRange"); }
	float& DamageNotifyTeamAggroRangeFalloffField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.DamageNotifyTeamAggroRangeFalloff"); }
	float& ReplicatedCurrentHealthField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ReplicatedCurrentHealth"); }
	float& ReplicatedMaxHealthField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ReplicatedMaxHealth"); }
	float& ReplicatedCurrentTorporField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ReplicatedCurrentTorpor"); }
	float& ReplicatedMaxTorporField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ReplicatedMaxTorpor"); }
	APrimalProjectileGrapplingHook * LastGrapHookPullingMeField() { return GetNativePointerField<APrimalProjectileGrapplingHook *>(this, "APrimalCharacter.LastGrapHookPullingMe"); }
	AShooterCharacter * LastGrapHookPullingOwnerField() { return GetNativePointerField<AShooterCharacter *>(this, "APrimalCharacter.LastGrapHookPullingOwner"); }
	FVector& DragOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalCharacter.DragOffset"); }
	long double& LastIkUpdateTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastIkUpdateTime"); }
	long double& LastUpdatedAimOffsetsTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastUpdatedAimOffsetsTime"); }
	FVector& MeshPreRagdollRelativeLocationField() { return *GetNativePointerField<FVector*>(this, "APrimalCharacter.MeshPreRagdollRelativeLocation"); }
	FRotator& MeshPreRagdollRelativeRotationField() { return *GetNativePointerField<FRotator*>(this, "APrimalCharacter.MeshPreRagdollRelativeRotation"); }
	int& DraggingBodyIndexField() { return *GetNativePointerField<int*>(this, "APrimalCharacter.DraggingBodyIndex"); }
	int& DraggedBoneIndexField() { return *GetNativePointerField<int*>(this, "APrimalCharacter.DraggedBoneIndex"); }
	int& customBitFlagsField() { return *GetNativePointerField<int*>(this, "APrimalCharacter.customBitFlags"); }
	float& RunningSpeedModifierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.RunningSpeedModifier"); }
	float& LowHealthPercentageField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.LowHealthPercentage"); }
	float& BaseTurnRateField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.BaseTurnRate"); }
	float& BaseLookUpRateField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.BaseLookUpRate"); }
	UAnimMontage * DeathAnimField() { return GetNativePointerField<UAnimMontage *>(this, "APrimalCharacter.DeathAnim"); }
	USoundCue * DeathSoundField() { return GetNativePointerField<USoundCue *>(this, "APrimalCharacter.DeathSound"); }
	USoundCue * RunLoopSoundField() { return GetNativePointerField<USoundCue *>(this, "APrimalCharacter.RunLoopSound"); }
	USoundCue * RunStopSoundField() { return GetNativePointerField<USoundCue *>(this, "APrimalCharacter.RunStopSound"); }
	TArray<USoundCue *>& FootStepSoundsPhysMatField() { return *GetNativePointerField<TArray<USoundCue *>*>(this, "APrimalCharacter.FootStepSoundsPhysMat"); }
	TArray<USoundCue *>& LandedSoundsPhysMatField() { return *GetNativePointerField<TArray<USoundCue *>*>(this, "APrimalCharacter.LandedSoundsPhysMat"); }
	FName& MeshRootSocketNameField() { return *GetNativePointerField<FName*>(this, "APrimalCharacter.MeshRootSocketName"); }
	TWeakObjectPtr<UAudioComponent>& LastVoiceAudioComponentField() { return *GetNativePointerField<TWeakObjectPtr<UAudioComponent>*>(this, "APrimalCharacter.LastVoiceAudioComponent"); }
	float& MaxFallSpeedField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.MaxFallSpeed"); }
	float& FallDamageMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.FallDamageMultiplier"); }
	UAudioComponent * RunLoopACField() { return GetNativePointerField<UAudioComponent *>(this, "APrimalCharacter.RunLoopAC"); }
	FConstraintInstance& DraggingConstraintField() { return *GetNativePointerField<FConstraintInstance*>(this, "APrimalCharacter.DraggingConstraint"); }
	float& CurrentCarriedYawField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.CurrentCarriedYaw"); }
	float& TargetCarriedYawField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.TargetCarriedYaw"); }
	float& ServerTargetCarriedYawField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ServerTargetCarriedYaw"); }
	TWeakObjectPtr<APrimalDinoCharacter>& MountedDinoField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter>*>(this, "APrimalCharacter.MountedDino"); }
	float& MountedDinoTimeField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.MountedDinoTime"); }
	TWeakObjectPtr<APrimalDinoCharacter>& PreviousMountedDinoField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter>*>(this, "APrimalCharacter.PreviousMountedDino"); }
	FVector& LastForceFallCheckBaseLocationField() { return *GetNativePointerField<FVector*>(this, "APrimalCharacter.LastForceFallCheckBaseLocation"); }
	FVector& LastHitWallSweepCheckLocationField() { return *GetNativePointerField<FVector*>(this, "APrimalCharacter.LastHitWallSweepCheckLocation"); }
	long double& LastTimeBasedMovementHadCurrentActorField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastTimeBasedMovementHadCurrentActor"); }
	float& GrabWeightThresholdField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.GrabWeightThreshold"); }
	float& DragWeightField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.DragWeight"); }
	FString& DescriptiveNameField() { return *GetNativePointerField<FString*>(this, "APrimalCharacter.DescriptiveName"); }
	TArray<FVector_NetQuantize>& ReplicatedRagdollPositionsField() { return *GetNativePointerField<TArray<FVector_NetQuantize>*>(this, "APrimalCharacter.ReplicatedRagdollPositions"); }
	TArray<FRotator_NetQuantize>& ReplicatedRagdollRotationsField() { return *GetNativePointerField<TArray<FRotator_NetQuantize>*>(this, "APrimalCharacter.ReplicatedRagdollRotations"); }
	TArray<FVector_NetQuantize>& LastReplicatedRagdollPositionsField() { return *GetNativePointerField<TArray<FVector_NetQuantize>*>(this, "APrimalCharacter.LastReplicatedRagdollPositions"); }
	TArray<FRotator_NetQuantize>& LastReplicatedRagdollRotationsField() { return *GetNativePointerField<TArray<FRotator_NetQuantize>*>(this, "APrimalCharacter.LastReplicatedRagdollRotations"); }
	FRotator& ReplicatedRootRotationField() { return *GetNativePointerField<FRotator*>(this, "APrimalCharacter.ReplicatedRootRotation"); }
	TArray<FConstraintInstance>& ReplicatedBonesConstraintsField() { return *GetNativePointerField<TArray<FConstraintInstance>*>(this, "APrimalCharacter.ReplicatedBonesConstraints"); }
	TArray<int>& ReplicatedBonesIndiciesField() { return *GetNativePointerField<TArray<int>*>(this, "APrimalCharacter.ReplicatedBonesIndicies"); }
	float& KillXPBaseField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.KillXPBase"); }
	TArray<FName>& ReplicatedBonesField() { return *GetNativePointerField<TArray<FName>*>(this, "APrimalCharacter.ReplicatedBones"); }
	float& RagdollReplicationIntervalField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.RagdollReplicationInterval"); }
	TArray<FBoneDamageAdjuster>& BoneDamageAdjustersField() { return *GetNativePointerField<TArray<FBoneDamageAdjuster>*>(this, "APrimalCharacter.BoneDamageAdjusters"); }
	float& ClientRotationInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ClientRotationInterpSpeed"); }
	float& ClientLocationInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ClientLocationInterpSpeed"); }
	float& MaxDragMovementSpeedField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.MaxDragMovementSpeed"); }
	FRotator& CurrentAimRotField() { return *GetNativePointerField<FRotator*>(this, "APrimalCharacter.CurrentAimRot"); }
	FVector& CurrentRootLocField() { return *GetNativePointerField<FVector*>(this, "APrimalCharacter.CurrentRootLoc"); }
	int& LastYawSpeedWorldFrameCounterField() { return *GetNativePointerField<int*>(this, "APrimalCharacter.LastYawSpeedWorldFrameCounter"); }
	FName& MeshPreRagdollCollisionProfileNameField() { return *GetNativePointerField<FName*>(this, "APrimalCharacter.MeshPreRagdollCollisionProfileName"); }
	FName& CapsulePreRagdollCollisionProfileNameField() { return *GetNativePointerField<FName*>(this, "APrimalCharacter.CapsulePreRagdollCollisionProfileName"); }
	float& LastTickStaminaValueField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.LastTickStaminaValue"); }
	UAnimMontage * SyncedMontageField() { return GetNativePointerField<UAnimMontage *>(this, "APrimalCharacter.SyncedMontage"); }
	long double& LastMontageSyncTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastMontageSyncTime"); }
	float& SyncedMontageDurationField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.SyncedMontageDuration"); }
	float& MontageSyncIntervalField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.MontageSyncInterval"); }
	long double& LastRunningTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastRunningTime"); }
	FVector& TPVCameraOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalCharacter.TPVCameraOffset"); }
	FVector& TPVCameraOffsetMultiplierField() { return *GetNativePointerField<FVector*>(this, "APrimalCharacter.TPVCameraOffsetMultiplier"); }
	FVector& TPVCameraOrgOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalCharacter.TPVCameraOrgOffset"); }
	float& LandedSoundMaxRangeField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.LandedSoundMaxRange"); }
	float& FallingDamageHealthScaleBaseField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.FallingDamageHealthScaleBase"); }
	float& FootstepsMaxRangeField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.FootstepsMaxRange"); }
	float& MinTimeBetweenFootstepsField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.MinTimeBetweenFootsteps"); }
	long double& LastPlayedFootstepTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastPlayedFootstepTime"); }
	float& MinTimeBetweenFootstepsRunningField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.MinTimeBetweenFootstepsRunning"); }
	TArray<UAnimMontage *>& AnimationsPreventInputField() { return *GetNativePointerField<TArray<UAnimMontage *>*>(this, "APrimalCharacter.AnimationsPreventInput"); }
	TSubclassOf<UPrimalHarvestingComponent>& DeathHarvestingComponentField() { return *GetNativePointerField<TSubclassOf<UPrimalHarvestingComponent>*>(this, "APrimalCharacter.DeathHarvestingComponent"); }
	UPrimalHarvestingComponent * MyDeathHarvestingComponentField() { return GetNativePointerField<UPrimalHarvestingComponent *>(this, "APrimalCharacter.MyDeathHarvestingComponent"); }
	long double& LastNetDidLandField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastNetDidLand"); }
	int& CachedNumberOfClientRagdollCorrectionAttemptsField() { return *GetNativePointerField<int*>(this, "APrimalCharacter.CachedNumberOfClientRagdollCorrectionAttempts"); }
	int& NumberOfClientRagdollCorrectionAttemptsField() { return *GetNativePointerField<int*>(this, "APrimalCharacter.NumberOfClientRagdollCorrectionAttempts"); }
	float& ServerForceSleepRagdollIntervalField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ServerForceSleepRagdollInterval"); }
	float& ClientForceSleepRagdollIntervalField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ClientForceSleepRagdollInterval"); }
	float& NonRelevantServerForceSleepRagdollIntervalField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.NonRelevantServerForceSleepRagdollInterval"); }
	ABiomeZoneVolume * MyBiomeZoneVolumeField() { return GetNativePointerField<ABiomeZoneVolume *>(this, "APrimalCharacter.MyBiomeZoneVolume"); }
	TEnumAsByte<enum EMeshComponentUpdateFlag::Type>& PreDragComponentUpdateFlagField() { return *GetNativePointerField<TEnumAsByte<enum EMeshComponentUpdateFlag::Type>*>(this, "APrimalCharacter.PreDragComponentUpdateFlag"); }
	TEnumAsByte<enum EShooterPhysMaterialType::Type>& TargetableDamageFXDefaultPhysMaterialField() { return *GetNativePointerField<TEnumAsByte<enum EShooterPhysMaterialType::Type>*>(this, "APrimalCharacter.TargetableDamageFXDefaultPhysMaterial"); }
	UAnimMontage * PoopAnimationField() { return GetNativePointerField<UAnimMontage *>(this, "APrimalCharacter.PoopAnimation"); }
	long double& CorpseDestructionTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.CorpseDestructionTime"); }
	float& CorpseLifespanField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.CorpseLifespan"); }
	float& TPVStructurePlacingHeightMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.TPVStructurePlacingHeightMultiplier"); }
	float& CorpseFadeAwayTimeField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.CorpseFadeAwayTime"); }
	float& RagdollDeathImpulseScalerField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.RagdollDeathImpulseScaler"); }
	USoundCue * PoopSoundField() { return GetNativePointerField<USoundCue *>(this, "APrimalCharacter.PoopSound"); }
	float& BaseTargetingDesirabilityField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.BaseTargetingDesirability"); }
	float& DeadBaseTargetingDesirabilityField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.DeadBaseTargetingDesirability"); }
	FRotator& OrbitCamRotField() { return *GetNativePointerField<FRotator*>(this, "APrimalCharacter.OrbitCamRot"); }
	float& OrbitCamZoomField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.OrbitCamZoom"); }
	float& OrbitCamZoomStepSizeField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.OrbitCamZoomStepSize"); }
	float& OrbitCamMinZoomLevelField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.OrbitCamMinZoomLevel"); }
	float& OrbitCamMaxZoomLevelField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.OrbitCamMaxZoomLevel"); }
	TArray<ABiomeZoneVolume *>& BiomeZoneVolumesField() { return *GetNativePointerField<TArray<ABiomeZoneVolume *>*>(this, "APrimalCharacter.BiomeZoneVolumes"); }
	FVector& LastSubmergedCheckLocField() { return *GetNativePointerField<FVector*>(this, "APrimalCharacter.LastSubmergedCheckLoc"); }
	long double& LastTimeNotInFallingField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastTimeNotInFalling"); }
	float& MaxCursorHUDDistanceField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.MaxCursorHUDDistance"); }
	float& AddForwardVelocityOnJumpField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.AddForwardVelocityOnJump"); }
	FVector& DeathActorTargetingOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalCharacter.DeathActorTargetingOffset"); }
	FName& SocketOverrideTargetingLocationField() { return *GetNativePointerField<FName*>(this, "APrimalCharacter.SocketOverrideTargetingLocation"); }
	FVector& LastApproximatePhysVolumeLocationField() { return *GetNativePointerField<FVector*>(this, "APrimalCharacter.LastApproximatePhysVolumeLocation"); }
	long double& LastTimeSubmergedField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastTimeSubmerged"); }
	EPhysicalSurface& LastFootPhysicalSurfaceTypeField() { return *GetNativePointerField<EPhysicalSurface*>(this, "APrimalCharacter.LastFootPhysicalSurfaceType"); }
	long double& LastFootPhysicalSurfaceCheckTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastFootPhysicalSurfaceCheckTime"); }
	float& FootPhysicalSurfaceCheckIntervalField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.FootPhysicalSurfaceCheckInterval"); }
	float& LastHurtByNearbyPlayerTimeField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.LastHurtByNearbyPlayerTime"); }
	float& LastAttackedNearbyPlayerTimeField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.LastAttackedNearbyPlayerTime"); }
	long double& LastStartFallingRagdollTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastStartFallingRagdollTime"); }
	FVector& RagdollLastFrameLinearVelocityField() { return *GetNativePointerField<FVector*>(this, "APrimalCharacter.RagdollLastFrameLinearVelocity"); }
	float& RagdollImpactDamageVelocityScaleField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.RagdollImpactDamageVelocityScale"); }
	float& RagdollImpactDamageMinDecelerationSpeedField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.RagdollImpactDamageMinDecelerationSpeed"); }
	float& StartFallingImpactRagdollTimeIntervalField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.StartFallingImpactRagdollTimeInterval"); }
	long double& LastUnstasisTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastUnstasisTime"); }
	FVector& PreviousRagdollLocationField() { return *GetNativePointerField<FVector*>(this, "APrimalCharacter.PreviousRagdollLocation"); }
	int& RagdollPenetrationFailuresField() { return *GetNativePointerField<int*>(this, "APrimalCharacter.RagdollPenetrationFailures"); }
	long double& NextBlinkTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.NextBlinkTime"); }
	long double& BlinkTimerField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.BlinkTimer"); }
	long double& LastInSwimmingSoundTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastInSwimmingSoundTime"); }
	USoundCue * EnteredSwimmingSoundField() { return GetNativePointerField<USoundCue *>(this, "APrimalCharacter.EnteredSwimmingSound"); }
	USoundCue * EnteredSleepingSoundField() { return GetNativePointerField<USoundCue *>(this, "APrimalCharacter.EnteredSleepingSound"); }
	USoundCue * LeftSleepingSoundField() { return GetNativePointerField<USoundCue *>(this, "APrimalCharacter.LeftSleepingSound"); }
	long double& LastRelevantToPlayerTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastRelevantToPlayerTime"); }
	long double& MeshStopForceUpdatingAtTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.MeshStopForceUpdatingAtTime"); }
	long double& LastWalkingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastWalkingTime"); }
	FVector& LastWalkingLocField() { return *GetNativePointerField<FVector*>(this, "APrimalCharacter.LastWalkingLoc"); }
	long double& LastSpecialDamageTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastSpecialDamageTime"); }
	float& CorpseDraggedDecayRateField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.CorpseDraggedDecayRate"); }
	float& PoopAltItemChanceField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.PoopAltItemChance"); }
	float& RunningMaxDesiredRotDeltaField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.RunningMaxDesiredRotDelta"); }
	long double& CorpseDestructionTimerField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.CorpseDestructionTimer"); }
	long double& LastSkinnedTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastSkinnedTime"); }
	float& OriginalCorpseLifespanField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.OriginalCorpseLifespan"); }
	float& CorpseHarvestFadeTimeField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.CorpseHarvestFadeTime"); }
	FVector& CurrentLocalRootLocField() { return *GetNativePointerField<FVector*>(this, "APrimalCharacter.CurrentLocalRootLoc"); }
	float& RootYawField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.RootYaw"); }
	long double& LastTimeInSwimmingField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastTimeInSwimming"); }
	long double& LastListenRangePushTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastListenRangePushTime"); }
	TArray<FDefaultTextureParamOverride>& DefaultNoItemTextureParamOverridesField() { return *GetNativePointerField<TArray<FDefaultTextureParamOverride>*>(this, "APrimalCharacter.DefaultNoItemTextureParamOverrides"); }
	float& LastDamageAmountMaterialValueField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.LastDamageAmountMaterialValue"); }
	float& BuffedDamageMultField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.BuffedDamageMult"); }
	float& BuffedResistanceMultField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.BuffedResistanceMult"); }
	float& ExtraMaxSpeedModifierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ExtraMaxSpeedModifier"); }
	float& ExtraRotationRateModifierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ExtraRotationRateModifier"); }
	float& TamedDinoCallOutRangeField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.TamedDinoCallOutRange"); }
	long double& LastBumpedDamageTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastBumpedDamageTime"); }
	FVector& TargetPathfindingLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalCharacter.TargetPathfindingLocationOffset"); }
	long double& LastTookDamageTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastTookDamageTime"); }
	float& ExtraReceiveDamageMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ExtraReceiveDamageMultiplier"); }
	float& ExtraMeleeDamageMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ExtraMeleeDamageMultiplier"); }
	float& LastFallingZField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.LastFallingZ"); }
	int& NumFallZFailsField() { return *GetNativePointerField<int*>(this, "APrimalCharacter.NumFallZFails"); }
	float& DamageTheMeleeDamageCauserPercentField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.DamageTheMeleeDamageCauserPercent"); }
	float& DurabilityDegrateTheMeleeDamageCauserPercentField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.DurabilityDegrateTheMeleeDamageCauserPercent"); }
	char& TribeGroupInventoryRankField() { return *GetNativePointerField<char*>(this, "APrimalCharacter.TribeGroupInventoryRank"); }
	float& CharacterDamageImpulseMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.CharacterDamageImpulseMultiplier"); }
	long double& ForceCheckPushThroughWallsTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.ForceCheckPushThroughWallsTime"); }
	long double& LastStoppedEatAnimationTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastStoppedEatAnimationTime"); }
	long double& LastTimeFailedToDrawHUDField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastTimeFailedToDrawHUD"); }
	float& MaxRagdollDeathVelocityImpulseField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.MaxRagdollDeathVelocityImpulse"); }
	float& ClientRotationInterpSpeedMultiplierGroundField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ClientRotationInterpSpeedMultiplierGround"); }
	float& GlideGravityScaleMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.GlideGravityScaleMultiplier"); }
	float& GlideMaxCarriedWeightField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.GlideMaxCarriedWeight"); }
	UAnimMontage * lastPlayedMountAnimField() { return GetNativePointerField<UAnimMontage *>(this, "APrimalCharacter.lastPlayedMountAnim"); }
	float& ScaleDeathHarvestHealthyByMaxHealthBaseField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ScaleDeathHarvestHealthyByMaxHealthBase"); }
	long double& LastForceMeshRefreshBonesTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastForceMeshRefreshBonesTime"); }
	long double& LastStartedBeingCarriedTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastStartedBeingCarriedTime"); }
	float& RunMinVelocityRotDotField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.RunMinVelocityRotDot"); }
	long double& LastHitDamageTimeField() { return *GetNativePointerField<long double*>(this, "APrimalCharacter.LastHitDamageTime"); }
	char& bShouldBeInGodModeField() { return *GetNativePointerField<char*>(this, "APrimalCharacter.bShouldBeInGodMode"); }
	int& MeshedCounterField() { return *GetNativePointerField<int*>(this, "APrimalCharacter.MeshedCounter"); }
	int& MeshingTickCounterMultiplierField() { return *GetNativePointerField<int*>(this, "APrimalCharacter.MeshingTickCounterMultiplier"); }
	TArray<FName>& PreventBuffClassesWithTagField() { return *GetNativePointerField<TArray<FName>*>(this, "APrimalCharacter.PreventBuffClassesWithTag"); }
	float& ControlledInventoryAccessDistanceOffsetField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.ControlledInventoryAccessDistanceOffset"); }
	float& AdditionalMaxUseDistanceField() { return *GetNativePointerField<float*>(this, "APrimalCharacter.AdditionalMaxUseDistance"); }

	// Functions

	long double GetLastStartedTalkingTime() { return NativeCall<long double>(this, "APrimalCharacter.GetLastStartedTalkingTime"); }
	float GetStasisConsumerRangeMultiplier() { return NativeCall<float>(this, "APrimalCharacter.GetStasisConsumerRangeMultiplier"); }
	bool IsInMission() { return NativeCall<bool>(this, "APrimalCharacter.IsInMission"); }
	void AdjustDamage(float * Damage, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { NativeCall<void, float *, const FDamageEvent *, AController *, AActor *>(this, "APrimalCharacter.AdjustDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool AllowColoringBy(APlayerController * ForPC, UObject * anItem) { return NativeCall<bool, APlayerController *, UObject *>(this, "APrimalCharacter.AllowColoringBy", ForPC, anItem); }
	bool AllowFallDamage(const FHitResult * HitResult, float FallDamageAmount, bool CustomFallDamage) { return NativeCall<bool, const FHitResult *, float, bool>(this, "APrimalCharacter.AllowFallDamage", HitResult, FallDamageAmount, CustomFallDamage); }
	bool AllowFirstPerson() { return NativeCall<bool>(this, "APrimalCharacter.AllowFirstPerson"); }
	bool AllowHurtAnimation() { return NativeCall<bool>(this, "APrimalCharacter.AllowHurtAnimation"); }
	bool AllowMovementMode(EMovementMode NewMovementMode, char NewCustomMode) { return NativeCall<bool, EMovementMode, char>(this, "APrimalCharacter.AllowMovementMode", NewMovementMode, NewCustomMode); }
	bool AllowOverrideFlyingVelocity() { return NativeCall<bool>(this, "APrimalCharacter.AllowOverrideFlyingVelocity"); }
	bool AllowOverrideNewFallVelocity() { return NativeCall<bool>(this, "APrimalCharacter.AllowOverrideNewFallVelocity"); }
	bool AllowOverrideSwimmingVelocity() { return NativeCall<bool>(this, "APrimalCharacter.AllowOverrideSwimmingVelocity"); }
	bool AllowOverrideWalkingVelocity() { return NativeCall<bool>(this, "APrimalCharacter.AllowOverrideWalkingVelocity"); }
	bool AllowParallelAnimations(USkeletalMeshComponent * forComp) { return NativeCall<bool, USkeletalMeshComponent *>(this, "APrimalCharacter.AllowParallelAnimations", forComp); }
	bool AllowSaving() { return NativeCall<bool>(this, "APrimalCharacter.AllowSaving"); }
	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, const UAnimNotify * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, const UAnimNotify *>(this, "APrimalCharacter.AnimNotifyCustomEvent", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void AnimNotifyCustomState_Begin(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration, const UAnimNotifyState * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, float, const UAnimNotifyState *>(this, "APrimalCharacter.AnimNotifyCustomState_Begin", CustomEventName, MeshComp, Animation, TotalDuration, AnimNotifyObject); }
	void AnimNotifyCustomState_End(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, const UAnimNotifyState * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, const UAnimNotifyState *>(this, "APrimalCharacter.AnimNotifyCustomState_End", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	bool AnimationPreventsInput() { return NativeCall<bool>(this, "APrimalCharacter.AnimationPreventsInput"); }
	void ApplyCharacterSnapshot(UPrimalItem * Item, AActor * To, FVector Offset, float MaxExtent, int Pose, bool bCollisionOn) { NativeCall<void, UPrimalItem *, AActor *, FVector, float, int, bool>(this, "APrimalCharacter.ApplyCharacterSnapshot", Item, To, Offset, MaxExtent, Pose, bCollisionOn); }
	void ApplyCustomFallDamage(const FVector * Location, const FVector * Velocity, float FallDamageThreshold) { NativeCall<void, const FVector *, const FVector *, float>(this, "APrimalCharacter.ApplyCustomFallDamage", Location, Velocity, FallDamageThreshold); }
	void ApplyDamageMomentum(float DamageTaken, const FDamageEvent * DamageEvent, APawn * PawnInstigator, AActor * DamageCauser) { NativeCall<void, float, const FDamageEvent *, APawn *, AActor *>(this, "APrimalCharacter.ApplyDamageMomentum", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void AttachGPSTransponder(APrimalStructureExplosiveTransGPS * Transponder) { NativeCall<void, APrimalStructureExplosiveTransGPS *>(this, "APrimalCharacter.AttachGPSTransponder", Transponder); }
	void AttachToOtherCharacter(APrimalCharacter * characterToAttachTo, const FName InSocketName, const bool enableMovementAndCollision, EAttachLocation::Type AttachLocation) { NativeCall<void, APrimalCharacter *, const FName, const bool, EAttachLocation::Type>(this, "APrimalCharacter.AttachToOtherCharacter", characterToAttachTo, InSocketName, enableMovementAndCollision, AttachLocation); }
	void AttachedToOtherCharacterUpdateWorldLocation(const FVector * worldLocation) { NativeCall<void, const FVector *>(this, "APrimalCharacter.AttachedToOtherCharacterUpdateWorldLocation", worldLocation); }
	float BPGetApproachRadius() { return NativeCall<float>(this, "APrimalCharacter.BPGetApproachRadius"); }
	bool BPHasPlayerController() { return NativeCall<bool>(this, "APrimalCharacter.BPHasPlayerController"); }
	bool BPIsBasedOnDynamicActor() { return NativeCall<bool>(this, "APrimalCharacter.BPIsBasedOnDynamicActor"); }
	float BPModifyFOV_Implementation(float FOVIn) { return NativeCall<float, float>(this, "APrimalCharacter.BPModifyFOV_Implementation", FOVIn); }
	FVector * BPModifyRightDirectionInput_Implementation(FVector * result, const FVector * directionInput) { return NativeCall<FVector *, FVector *, const FVector *>(this, "APrimalCharacter.BPModifyRightDirectionInput_Implementation", result, directionInput); }
	void BPNetAddCharacterMovementImpulse(FVector Impulse, bool bVelChange, float ImpulseExponent, bool bSetNewMovementMode, EMovementMode NewMovementMode, bool bOverrideMaxImpulseZ, bool bApplyToBigPawns) { NativeCall<void, FVector, bool, float, bool, EMovementMode, bool, bool>(this, "APrimalCharacter.BPNetAddCharacterMovementImpulse", Impulse, bVelChange, ImpulseExponent, bSetNewMovementMode, NewMovementMode, bOverrideMaxImpulseZ, bApplyToBigPawns); }
	void BPNetSetCharacterMovementVelocity(bool bSetNewVelocity, FVector NewVelocity, bool bSetNewMovementMode, EMovementMode NewMovementMode) { NativeCall<void, bool, FVector, bool, EMovementMode>(this, "APrimalCharacter.BPNetSetCharacterMovementVelocity", bSetNewVelocity, NewVelocity, bSetNewMovementMode, NewMovementMode); }
	void BPNetSetMovementMode(EMovementMode NewMovementMode) { NativeCall<void, EMovementMode>(this, "APrimalCharacter.BPNetSetMovementMode", NewMovementMode); }
	bool BP_AnimationPreventsInput() { return NativeCall<bool>(this, "APrimalCharacter.BP_AnimationPreventsInput"); }
	float BP_GetMaxSpeedModifier() { return NativeCall<float>(this, "APrimalCharacter.BP_GetMaxSpeedModifier"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalCharacter.BeginPlay"); }
	bool BuffsPreventInventoryAccess() { return NativeCall<bool>(this, "APrimalCharacter.BuffsPreventInventoryAccess"); }
	void CallDrawFloatingHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalCharacter.CallDrawFloatingHUD", HUD); }
	void CallDrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalCharacter.CallDrawHUD", HUD); }
	bool CanBeBaseForCharacter(APawn * Pawn) { return NativeCall<bool, APawn *>(this, "APrimalCharacter.CanBeBaseForCharacter", Pawn); }
	bool CanBeCarried(APrimalCharacter * ByCarrier) { return NativeCall<bool, APrimalCharacter *>(this, "APrimalCharacter.CanBeCarried", ByCarrier); }
	bool CanBeDragged() { return NativeCall<bool>(this, "APrimalCharacter.CanBeDragged"); }
	bool CanBePainted() { return NativeCall<bool>(this, "APrimalCharacter.CanBePainted"); }
	bool CanBeTargetedBy(ITargetableInterface * Attacker) { return NativeCall<bool, ITargetableInterface *>(this, "APrimalCharacter.CanBeTargetedBy", Attacker); }
	bool CanDie(float KillingDamage, const FDamageEvent * DamageEvent, AController * Killer, AActor * DamageCauser) { return NativeCall<bool, float, const FDamageEvent *, AController *, AActor *>(this, "APrimalCharacter.CanDie", KillingDamage, DamageEvent, Killer, DamageCauser); }
	bool CanDragCharacter(APrimalCharacter * Character) { return NativeCall<bool, APrimalCharacter *>(this, "APrimalCharacter.CanDragCharacter", Character); }
	bool CanIgnoreImmobilizationTrap(TSubclassOf<APrimalStructure> TrapClass, bool * bForceTrigger) { return NativeCall<bool, TSubclassOf<APrimalStructure>, bool *>(this, "APrimalCharacter.CanIgnoreImmobilizationTrap", TrapClass, bForceTrigger); }
	bool CanJumpInternal_Implementation() { return NativeCall<bool>(this, "APrimalCharacter.CanJumpInternal_Implementation"); }
	bool CanMountOnMe(APrimalDinoCharacter * dinoCharacter) { return NativeCall<bool, APrimalDinoCharacter *>(this, "APrimalCharacter.CanMountOnMe", dinoCharacter); }
	void CaptureCharacterSnapshot(UPrimalItem * Item) { NativeCall<void, UPrimalItem *>(this, "APrimalCharacter.CaptureCharacterSnapshot", Item); }
	void ChangeActorTeam(int NewTeam) { NativeCall<void, int>(this, "APrimalCharacter.ChangeActorTeam", NewTeam); }
	bool CharacterIsCarriedAsPassenger() { return NativeCall<bool>(this, "APrimalCharacter.CharacterIsCarriedAsPassenger"); }
	void CheckJumpInput(float DeltaTime) { NativeCall<void, float>(this, "APrimalCharacter.CheckJumpInput", DeltaTime); }
	void CheckJumpOutOfWater() { NativeCall<void>(this, "APrimalCharacter.CheckJumpOutOfWater"); }
	void CheckOnDinoPlatformSaddle() { NativeCall<void>(this, "APrimalCharacter.CheckOnDinoPlatformSaddle"); }
	void CheckRagdollPenetration() { NativeCall<void>(this, "APrimalCharacter.CheckRagdollPenetration"); }
	void ClearBiomeZoneVolume(ABiomeZoneVolume * theVolume) { NativeCall<void, ABiomeZoneVolume *>(this, "APrimalCharacter.ClearBiomeZoneVolume", theVolume); }
	void ClearCachedIkTraceResults() { NativeCall<void>(this, "APrimalCharacter.ClearCachedIkTraceResults"); }
	void ClearCarryingDino(bool bFromDino, bool bCancelAnyCarryBuffs) { NativeCall<void, bool, bool>(this, "APrimalCharacter.ClearCarryingDino", bFromDino, bCancelAnyCarryBuffs); }
	void ClearControlInputVector() { NativeCall<void>(this, "APrimalCharacter.ClearControlInputVector"); }
	void ClearMountedDino(bool fromMountedDino) { NativeCall<void, bool>(this, "APrimalCharacter.ClearMountedDino", fromMountedDino); }
	void ClearRagdollPhysics() { NativeCall<void>(this, "APrimalCharacter.ClearRagdollPhysics"); }
	void ClientCheatFly_Implementation() { NativeCall<void>(this, "APrimalCharacter.ClientCheatFly_Implementation"); }
	void ClientCheatWalk_Implementation() { NativeCall<void>(this, "APrimalCharacter.ClientCheatWalk_Implementation"); }
	void ClientDidPoop_Implementation() { NativeCall<void>(this, "APrimalCharacter.ClientDidPoop_Implementation"); }
	void ClientEndRagdollUpdate_Implementation() { NativeCall<void>(this, "APrimalCharacter.ClientEndRagdollUpdate_Implementation"); }
	void ClientFailedPoop_Implementation() { NativeCall<void>(this, "APrimalCharacter.ClientFailedPoop_Implementation"); }
	void ClientHandleNetDestroy() { NativeCall<void>(this, "APrimalCharacter.ClientHandleNetDestroy"); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APrimalCharacter.ClientMultiUse", ForPC, UseIndex); }
	void ClientOrderedAttackTarget_Implementation(AActor * attackTarget) { NativeCall<void, AActor *>(this, "APrimalCharacter.ClientOrderedAttackTarget_Implementation", attackTarget); }
	void ClientOrderedMoveTo_Implementation(FVector MoveToLoc) { NativeCall<void, FVector>(this, "APrimalCharacter.ClientOrderedMoveTo_Implementation", MoveToLoc); }
	void ClientPlayAnimation_Implementation(UAnimMontage * AnimMontage, float PlayRate, FName StartSectionName, bool bPlayOnOwner, bool bForceTickPoseAndServerUpdateMesh) { NativeCall<void, UAnimMontage *, float, FName, bool, bool>(this, "APrimalCharacter.ClientPlayAnimation_Implementation", AnimMontage, PlayRate, StartSectionName, bPlayOnOwner, bForceTickPoseAndServerUpdateMesh); }
	void ClientRagdollUpdate_Implementation(const TArray<FVector_NetQuantize> * BoneLocations, FRotator_NetQuantize TargetRootRotation) { NativeCall<void, const TArray<FVector_NetQuantize> *, FRotator_NetQuantize>(this, "APrimalCharacter.ClientRagdollUpdate_Implementation", BoneLocations, TargetRootRotation); }
	void ClientStopAnimation_Implementation(UAnimMontage * AnimMontage, bool bStopOnOwner, float BlendOutTime) { NativeCall<void, UAnimMontage *, bool, float>(this, "APrimalCharacter.ClientStopAnimation_Implementation", AnimMontage, bStopOnOwner, BlendOutTime); }
	void ClientSyncAnimation_Implementation(UAnimMontage * AnimMontage, float PlayRate, float ServerCurrentMontageTime, bool bForceTickPoseAndServerUpdateMesh, float BlendInTime, float BlendOutTime) { NativeCall<void, UAnimMontage *, float, float, bool, float, float>(this, "APrimalCharacter.ClientSyncAnimation_Implementation", AnimMontage, PlayRate, ServerCurrentMontageTime, bForceTickPoseAndServerUpdateMesh, BlendInTime, BlendOutTime); }
	bool ConsumeProjectileImpact(AShooterProjectile * theProjectile, const FHitResult * HitResult) { return NativeCall<bool, AShooterProjectile *, const FHitResult *>(this, "APrimalCharacter.ConsumeProjectileImpact", theProjectile, HitResult); }
	void ControllerLeavingGame(AShooterPlayerController * theController) { NativeCall<void, AShooterPlayerController *>(this, "APrimalCharacter.ControllerLeavingGame", theController); }
	void DeactivateBuffs(TSubclassOf<APrimalBuff> ForBuffClass, UPrimalItem * ForInstigatorItem, bool perfectClassMatch) { NativeCall<void, TSubclassOf<APrimalBuff>, UPrimalItem *, bool>(this, "APrimalCharacter.DeactivateBuffs", ForBuffClass, ForInstigatorItem, perfectClassMatch); }
	void DeathHarvestingDepleted(UPrimalHarvestingComponent * fromComponent) { NativeCall<void, UPrimalHarvestingComponent *>(this, "APrimalCharacter.DeathHarvestingDepleted", fromComponent); }
	void DeathHarvestingFadeOut_Implementation() { NativeCall<void>(this, "APrimalCharacter.DeathHarvestingFadeOut_Implementation"); }
	void DestroyByMeshing() { NativeCall<void>(this, "APrimalCharacter.DestroyByMeshing"); }
	void Destroyed() { NativeCall<void>(this, "APrimalCharacter.Destroyed"); }
	void DetachFromOtherCharacter(const bool enableMovementAndCollision) { NativeCall<void, const bool>(this, "APrimalCharacter.DetachFromOtherCharacter", enableMovementAndCollision); }
	void DidLand() { NativeCall<void>(this, "APrimalCharacter.DidLand"); }
	void DidTeleport_Implementation(FVector newLoc, FRotator newRot, bool bDoCameraFade, FLinearColor CameraFadeColor) { NativeCall<void, FVector, FRotator, bool, FLinearColor>(this, "APrimalCharacter.DidTeleport_Implementation", newLoc, newRot, bDoCameraFade, CameraFadeColor); }
	bool Die(float KillingDamage, const FDamageEvent * DamageEvent, AController * Killer, AActor * DamageCauser) { return NativeCall<bool, float, const FDamageEvent *, AController *, AActor *>(this, "APrimalCharacter.Die", KillingDamage, DamageEvent, Killer, DamageCauser); }
	bool DinoMountOnMe(APrimalDinoCharacter * dinoCharacter) { return NativeCall<bool, APrimalDinoCharacter *>(this, "APrimalCharacter.DinoMountOnMe", dinoCharacter); }
	void DoCharacterDetachment(bool bIncludeRiding, bool bIncludeCarrying, APrimalBuff * BuffToIgnore) { NativeCall<void, bool, bool, APrimalBuff *>(this, "APrimalCharacter.DoCharacterDetachment", bIncludeRiding, bIncludeCarrying, BuffToIgnore); }
	void DoExecuteActorConstruction(const FTransform * Transform, bool bIsDefaultTransform) { NativeCall<void, const FTransform *, bool>(this, "APrimalCharacter.DoExecuteActorConstruction", Transform, bIsDefaultTransform); }
	void DoFindGoodSpot(FVector RagdollLoc, bool bClearCollisionSweep) { NativeCall<void, FVector, bool>(this, "APrimalCharacter.DoFindGoodSpot", RagdollLoc, bClearCollisionSweep); }
	void DoSetRagdollPhysics() { NativeCall<void>(this, "APrimalCharacter.DoSetRagdollPhysics"); }
	void DownCallOne() { NativeCall<void>(this, "APrimalCharacter.DownCallOne"); }
	void DrawFloatingChatMessage(AShooterHUD * HUD, FString Message, long double receivedChatTime) { NativeCall<void, AShooterHUD *, FString, long double>(this, "APrimalCharacter.DrawFloatingChatMessage", HUD, Message, receivedChatTime); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalCharacter.DrawHUD", HUD); }
	void DrawLocalPlayerHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalCharacter.DrawLocalPlayerHUD", HUD); }
	void EmitPoop() { NativeCall<void>(this, "APrimalCharacter.EmitPoop"); }
	void EnableBPTimerNonDedicated(bool bEnable) { NativeCall<void, bool>(this, "APrimalCharacter.EnableBPTimerNonDedicated", bEnable); }
	void EnableBPTimerServer(bool bEnable) { NativeCall<void, bool>(this, "APrimalCharacter.EnableBPTimerServer", bEnable); }
	void EnableBodiesGravity() { NativeCall<void>(this, "APrimalCharacter.EnableBodiesGravity"); }
	void EnableIK(bool bEnable, bool bForceOnDedicated) { NativeCall<void, bool, bool>(this, "APrimalCharacter.EnableIK", bEnable, bForceOnDedicated); }
	void EndDinoPlatformDragging() { NativeCall<void>(this, "APrimalCharacter.EndDinoPlatformDragging"); }
	void EndDragCharacter() { NativeCall<void>(this, "APrimalCharacter.EndDragCharacter"); }
	void EndForceSkelUpdate() { NativeCall<void>(this, "APrimalCharacter.EndForceSkelUpdate"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "APrimalCharacter.EndPlay", EndPlayReason); }
	bool ExcludePostProcessBlendableMaterial(const UMaterialInterface * BlendableMaterialInterface) { return NativeCall<bool, const UMaterialInterface *>(this, "APrimalCharacter.ExcludePostProcessBlendableMaterial", BlendableMaterialInterface); }
	void ExecSetPawnSleeping(bool bEnable) { NativeCall<void, bool>(this, "APrimalCharacter.ExecSetPawnSleeping", bEnable); }
	void ExecSetSleeping(bool bEnable) { NativeCall<void, bool>(this, "APrimalCharacter.ExecSetSleeping", bEnable); }
	void FadeOutLoadingMusic() { NativeCall<void>(this, "APrimalCharacter.FadeOutLoadingMusic"); }
	void FellOutOfWorld(const UDamageType * dmgType) { NativeCall<void, const UDamageType *>(this, "APrimalCharacter.FellOutOfWorld", dmgType); }
	void FinalLoadedFromSaveGame() { NativeCall<void>(this, "APrimalCharacter.FinalLoadedFromSaveGame"); }
	bool ForceAddUnderwaterCharacterStatusValues() { return NativeCall<bool>(this, "APrimalCharacter.ForceAddUnderwaterCharacterStatusValues"); }
	void ForceMeshRelevant(float Duration) { NativeCall<void, float>(this, "APrimalCharacter.ForceMeshRelevant", Duration); }
	void ForceRefreshBones() { NativeCall<void>(this, "APrimalCharacter.ForceRefreshBones"); }
	void ForceSleepRagdoll() { NativeCall<void>(this, "APrimalCharacter.ForceSleepRagdoll"); }
	void ForceSleepRagdollEx() { NativeCall<void>(this, "APrimalCharacter.ForceSleepRagdollEx"); }
	void ForceTickPoseDelta() { NativeCall<void>(this, "APrimalCharacter.ForceTickPoseDelta"); }
	static void ForceUpdateAimedCharacters(UWorld * World, const FVector * StartLoc, const FVector * EndLoc, AActor * IgnoreActor, bool bForceUpdateIgnoreActor, float TraceRadius) { NativeCall<void, UWorld *, const FVector *, const FVector *, AActor *, bool, float>(nullptr, "APrimalCharacter.ForceUpdateAimedCharacters", World, StartLoc, EndLoc, IgnoreActor, bForceUpdateIgnoreActor, TraceRadius); }
	static void ForceUpdateCharacter(UWorld * World, APrimalCharacter * primalChar) { NativeCall<void, UWorld *, APrimalCharacter *>(nullptr, "APrimalCharacter.ForceUpdateCharacter", World, primalChar); }
	FRotator * GetAimOffsets(FRotator * result, float DeltaTime, FRotator * RootRotOffset, float * RootYawSpeed, float MaxYawAimClamp, FVector * RootLocOffset) { return NativeCall<FRotator *, FRotator *, float, FRotator *, float *, float, FVector *>(this, "APrimalCharacter.GetAimOffsets", result, DeltaTime, RootRotOffset, RootYawSpeed, MaxYawAimClamp, RootLocOffset); }
	void GetAimedActor(FHitResult * outHitResult, ECollisionChannel CollisionChannel, float MaxDistanceOverride, float CheckRadius, bool bForceUseCameraLocation, bool bForceUpdateAimedActors) { NativeCall<void, FHitResult *, ECollisionChannel, float, float, bool, bool>(this, "APrimalCharacter.GetAimedActor", outHitResult, CollisionChannel, MaxDistanceOverride, CheckRadius, bForceUseCameraLocation, bForceUpdateAimedActors); }
	bool GetAllAttachedChars(TArray<APrimalCharacter *> * AttachedCharsArray, const bool bIncludeSelf, const bool bIncludeBased, const bool bIncludePassengers, const bool bIncludeCarried) { return NativeCall<bool, TArray<APrimalCharacter *> *, const bool, const bool, const bool, const bool>(this, "APrimalCharacter.GetAllAttachedChars", AttachedCharsArray, bIncludeSelf, bIncludeBased, bIncludePassengers, bIncludeCarried); }
	bool GetAllAttachedCharsInternal(TSet<APrimalCharacter *,DefaultKeyFuncs<APrimalCharacter *,0>,FDefaultSetAllocator> * AttachedChars, const APrimalCharacter * OriginalChar, const bool bIncludeBased, const bool bIncludePassengers, const bool bIncludeCarried) { return NativeCall<bool, TSet<APrimalCharacter *,DefaultKeyFuncs<APrimalCharacter *,0>,FDefaultSetAllocator> *, const APrimalCharacter *, const bool, const bool, const bool>(this, "APrimalCharacter.GetAllAttachedCharsInternal", AttachedChars, OriginalChar, bIncludeBased, bIncludePassengers, bIncludeCarried); }
	void GetAllBuffs(TArray<APrimalBuff *> * AllBuffs) { NativeCall<void, TArray<APrimalBuff *> *>(this, "APrimalCharacter.GetAllBuffs", AllBuffs); }
	FRotator * GetBaseAimRotation(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "APrimalCharacter.GetBaseAimRotation", result); }
	float GetBaseDragWeight() { return NativeCall<float>(this, "APrimalCharacter.GetBaseDragWeight"); }
	float GetBaseStatusValue(TEnumAsByte<enum EPrimalCharacterStatusValue::Type> StatusValueType) { return NativeCall<float, TEnumAsByte<enum EPrimalCharacterStatusValue::Type>>(this, "APrimalCharacter.GetBaseStatusValue", StatusValueType); }
	APrimalDinoCharacter * GetBasedOnDino() { return NativeCall<APrimalDinoCharacter *>(this, "APrimalCharacter.GetBasedOnDino"); }
	APrimalDinoCharacter * GetBasedOrSeatingOnDino() { return NativeCall<APrimalDinoCharacter *>(this, "APrimalCharacter.GetBasedOrSeatingOnDino"); }
	int GetBuffStackCount(TSubclassOf<APrimalBuff> BuffClass, bool useExactMatch) { return NativeCall<int, TSubclassOf<APrimalBuff>, bool>(this, "APrimalCharacter.GetBuffStackCount", BuffClass, useExactMatch); }
	void GetBuffs(TArray<APrimalBuff *> * TheBuffs) { NativeCall<void, TArray<APrimalBuff *> *>(this, "APrimalCharacter.GetBuffs", TheBuffs); }
	float GetCameraShakeScalar(TSubclassOf<UCameraShake> currentShake, const float currentScale) { return NativeCall<float, TSubclassOf<UCameraShake>, const float>(this, "APrimalCharacter.GetCameraShakeScalar", currentShake, currentScale); }
	FVector * GetCapsuleBottomLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalCharacter.GetCapsuleBottomLocation", result); }
	FVector * GetCapsuleTopLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalCharacter.GetCapsuleTopLocation", result); }
	float GetCarryingSocketYaw(bool RefreshBones) { return NativeCall<float, bool>(this, "APrimalCharacter.GetCarryingSocketYaw", RefreshBones); }
	void GetCharacterViewLocationAndDirection(FVector * OutViewLocation, FVector * OutViewDirection, bool * OutFromCrosshairOrCamera, float FallbackAngleOffsetDegrees) { NativeCall<void, FVector *, FVector *, bool *, float>(this, "APrimalCharacter.GetCharacterViewLocationAndDirection", OutViewLocation, OutViewDirection, OutFromCrosshairOrCamera, FallbackAngleOffsetDegrees); }
	void GetCharactersGrappledToMe(TArray<APrimalCharacter *> * GrappledCharsArray) { NativeCall<void, TArray<APrimalCharacter *> *>(this, "APrimalCharacter.GetCharactersGrappledToMe", GrappledCharsArray); }
	float GetClientRotationInterpSpeed(const FVector * RootLoc) { return NativeCall<float, const FVector *>(this, "APrimalCharacter.GetClientRotationInterpSpeed", RootLoc); }
	float GetCorpseDecayRate() { return NativeCall<float>(this, "APrimalCharacter.GetCorpseDecayRate"); }
	float GetCorpseLifespan() { return NativeCall<float>(this, "APrimalCharacter.GetCorpseLifespan"); }
	float GetCurrentStatusValue(EPrimalCharacterStatusValue::Type StatusValueType) { return NativeCall<float, EPrimalCharacterStatusValue::Type>(this, "APrimalCharacter.GetCurrentStatusValue", StatusValueType); }
	float GetDamageTorpidityIncreaseMultiplierScale() { return NativeCall<float>(this, "APrimalCharacter.GetDamageTorpidityIncreaseMultiplierScale"); }
	FString * GetDebugInfoString(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalCharacter.GetDebugInfoString", result); }
	float GetDefaultMovementSpeed() { return NativeCall<float>(this, "APrimalCharacter.GetDefaultMovementSpeed"); }
	FString * GetDescriptiveName(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalCharacter.GetDescriptiveName", result); }
	TArray<FString> * GetDetailedDescription(TArray<FString> * result, const FString * IndentPrefix) { return NativeCall<TArray<FString> *, TArray<FString> *, const FString *>(this, "APrimalCharacter.GetDetailedDescription", result, IndentPrefix); }
	float GetDragWeight(APrimalCharacter * ForDragger) { return NativeCall<float, APrimalCharacter *>(this, "APrimalCharacter.GetDragWeight", ForDragger); }
	float GetFallAcceleration() { return NativeCall<float>(this, "APrimalCharacter.GetFallAcceleration"); }
	FVector * GetFloatingHUDLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalCharacter.GetFloatingHUDLocation", result); }
	EPhysicalSurface GetFootPhysicalSurfaceType(bool bForce, bool bIsForFootstepParticles) { return NativeCall<EPhysicalSurface, bool, bool>(this, "APrimalCharacter.GetFootPhysicalSurfaceType", bForce, bIsForFootstepParticles); }
	float GetGravityZScale() { return NativeCall<float>(this, "APrimalCharacter.GetGravityZScale"); }
	bool GetGroundLocation(FVector * theGroundLoc, const FVector * OffsetUp, const FVector * OffsetDown) { return NativeCall<bool, FVector *, const FVector *, const FVector *>(this, "APrimalCharacter.GetGroundLocation", theGroundLoc, OffsetUp, OffsetDown); }
	void GetHUDElements(APlayerController * ForPC, TArray<FHUDElement> * OutElements) { NativeCall<void, APlayerController *, TArray<FHUDElement> *>(this, "APrimalCharacter.GetHUDElements", ForPC, OutElements); }
	float GetHealth() { return NativeCall<float>(this, "APrimalCharacter.GetHealth"); }
	float GetHealthPercentage() { return NativeCall<float>(this, "APrimalCharacter.GetHealthPercentage"); }
	float GetImmersionDepth() { return NativeCall<float>(this, "APrimalCharacter.GetImmersionDepth"); }
	float GetIndirectTorpidityIncreaseMultiplierScale() { return NativeCall<float>(this, "APrimalCharacter.GetIndirectTorpidityIncreaseMultiplierScale"); }
	FVector * GetInputDirectionVector(FVector * result, bool bRelativeToViewDirection) { return NativeCall<FVector *, FVector *, bool>(this, "APrimalCharacter.GetInputDirectionVector", result, bRelativeToViewDirection); }
	FVector * GetInterpolatedLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalCharacter.GetInterpolatedLocation", result); }
	FRotator * GetInterpolatedRotation(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "APrimalCharacter.GetInterpolatedRotation", result); }
	FRotator * GetInterpolatedRotation_NonFlattened(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "APrimalCharacter.GetInterpolatedRotation_NonFlattened", result); }
	float GetJumpZModifier() { return NativeCall<float>(this, "APrimalCharacter.GetJumpZModifier"); }
	float GetKillXP() { return NativeCall<float>(this, "APrimalCharacter.GetKillXP"); }
	long double GetLastCausedDamageTime() { return NativeCall<long double>(this, "APrimalCharacter.GetLastCausedDamageTime"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalCharacter.GetLifetimeReplicatedProps", OutLifetimeProps); }
	float GetLowHealthPercentage() { return NativeCall<float>(this, "APrimalCharacter.GetLowHealthPercentage"); }
	float GetMaxCursorHUDDistance(AShooterPlayerController * PC) { return NativeCall<float, AShooterPlayerController *>(this, "APrimalCharacter.GetMaxCursorHUDDistance", PC); }
	float GetMaxHealth() { return NativeCall<float>(this, "APrimalCharacter.GetMaxHealth"); }
	float GetMaxSpeedModifier() { return NativeCall<float>(this, "APrimalCharacter.GetMaxSpeedModifier"); }
	float GetMaxStatusValue(EPrimalCharacterStatusValue::Type StatusValueType) { return NativeCall<float, EPrimalCharacterStatusValue::Type>(this, "APrimalCharacter.GetMaxStatusValue", StatusValueType); }
	float GetMoveAnimRate() { return NativeCall<float>(this, "APrimalCharacter.GetMoveAnimRate"); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "APrimalCharacter.GetMultiUseEntries", ForPC, MultiUseEntries); }
	ABiomeZoneVolume * GetMyBiomeZoneVolume() { return NativeCall<ABiomeZoneVolume *>(this, "APrimalCharacter.GetMyBiomeZoneVolume"); }
	int GetNearestBoneIndexForDrag(APrimalCharacter * Character, FVector HitLocation) { return NativeCall<int, APrimalCharacter *, FVector>(this, "APrimalCharacter.GetNearestBoneIndexForDrag", Character, HitLocation); }
	float GetOverrideWaterJumpVelocity(float OutOfWaterZ) { return NativeCall<float, float>(this, "APrimalCharacter.GetOverrideWaterJumpVelocity", OutOfWaterZ); }
	UPaintingTexture * GetPaintingTexture() { return NativeCall<UPaintingTexture *>(this, "APrimalCharacter.GetPaintingTexture"); }
	float GetPercentStatusValue(EPrimalCharacterStatusValue::Type StatusValueType) { return NativeCall<float, EPrimalCharacterStatusValue::Type>(this, "APrimalCharacter.GetPercentStatusValue", StatusValueType); }
	EPhysicalSurface GetPhysMatTypeFromHit(const FHitResult * FromHit) { return NativeCall<EPhysicalSurface, const FHitResult *>(this, "APrimalCharacter.GetPhysMatTypeFromHit", FromHit); }
	EPhysicalSurface GetPhysMatTypeFromHits(const TArray<FHitResult> * FromHits) { return NativeCall<EPhysicalSurface, const TArray<FHitResult> *>(this, "APrimalCharacter.GetPhysMatTypeFromHits", FromHits); }
	UAnimMontage * GetPoopAnimation(bool bForcePoop) { return NativeCall<UAnimMontage *, bool>(this, "APrimalCharacter.GetPoopAnimation", bForcePoop); }
	EMovementMode GetPrimalCharMovementMode() { return NativeCall<EMovementMode>(this, "APrimalCharacter.GetPrimalCharMovementMode"); }
	ENetRole GetRole() { return NativeCall<ENetRole>(this, "APrimalCharacter.GetRole"); }
	FVector * GetRootBodyBoneLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalCharacter.GetRootBodyBoneLocation", result); }
	float GetRotationRateModifier() { return NativeCall<float>(this, "APrimalCharacter.GetRotationRateModifier"); }
	float GetRunningSpeedModifier(bool bIsForDefaultSpeed) { return NativeCall<float, bool>(this, "APrimalCharacter.GetRunningSpeedModifier", bIsForDefaultSpeed); }
	FString * GetShortName(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalCharacter.GetShortName", result); }
	FVector * GetSocketLocation(FVector * result, FName SocketName) { return NativeCall<FVector *, FVector *, FName>(this, "APrimalCharacter.GetSocketLocation", result, SocketName); }
	FVector * GetTPVCameraOffset(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalCharacter.GetTPVCameraOffset", result); }
	FVector * GetTPVCameraOffsetMultiplier(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalCharacter.GetTPVCameraOffsetMultiplier", result); }
	FVector * GetTargetPathfindingLocation(FVector * result, AActor * Attacker) { return NativeCall<FVector *, FVector *, AActor *>(this, "APrimalCharacter.GetTargetPathfindingLocation", result, Attacker); }
	EShooterPhysMaterialType::Type GetTargetableDamageFXDefaultPhysMaterial() { return NativeCall<EShooterPhysMaterialType::Type>(this, "APrimalCharacter.GetTargetableDamageFXDefaultPhysMaterial"); }
	FVector * GetTargetingLocation(FVector * result, AActor * Attacker) { return NativeCall<FVector *, FVector *, AActor *>(this, "APrimalCharacter.GetTargetingLocation", result, Attacker); }
	FVector * GetVelocity(FVector * result, bool bIsForRagdoll) { return NativeCall<FVector *, FVector *, bool>(this, "APrimalCharacter.GetVelocity", result, bIsForRagdoll); }
	float GetWaterSubmergedDepthThreshold() { return NativeCall<float>(this, "APrimalCharacter.GetWaterSubmergedDepthThreshold"); }
	bool HasAnyBuffWithDisabledWeaponTag(const FName * Tag, APrimalBuff ** FoundBuff) { return NativeCall<bool, const FName *, APrimalBuff **>(this, "APrimalCharacter.HasAnyBuffWithDisabledWeaponTag", Tag, FoundBuff); }
	bool HasBuff(TSubclassOf<APrimalBuff> BuffClass, bool useExactMatch) { return NativeCall<bool, TSubclassOf<APrimalBuff>, bool>(this, "APrimalCharacter.HasBuff", BuffClass, useExactMatch); }
	bool HasBuffPreventTargetting() { return NativeCall<bool>(this, "APrimalCharacter.HasBuffPreventTargetting"); }
	bool HasBuffWithCustomTag(FName buffCustomTag) { return NativeCall<bool, FName>(this, "APrimalCharacter.HasBuffWithCustomTag", buffCustomTag); }
	bool HasBuffWithCustomTags(TArray<FName> customTags) { return NativeCall<bool, TArray<FName>>(this, "APrimalCharacter.HasBuffWithCustomTags", customTags); }
	bool HasCryoSickness() { return NativeCall<bool>(this, "APrimalCharacter.HasCryoSickness"); }
	void HurtMe(int HowMuch) { NativeCall<void, int>(this, "APrimalCharacter.HurtMe", HowMuch); }
	bool IKFootTrace(int LegIndex, FIKLegInfo * LegInfo, FVector ActorLocation, FVector ActorForward, FVector TraceDirection, float TraceDistance) { return NativeCall<bool, int, FIKLegInfo *, FVector, FVector, FVector, float>(this, "APrimalCharacter.IKFootTrace", LegIndex, LegInfo, ActorLocation, ActorForward, TraceDirection, TraceDistance); }
	void Immobilize(bool bImmobilize, AActor * UsingActor, bool bImmobilizeFalling, bool bPreventDismount) { NativeCall<void, bool, AActor *, bool, bool>(this, "APrimalCharacter.Immobilize", bImmobilize, UsingActor, bImmobilizeFalling, bPreventDismount); }
	void InitRagdollRepConstraints() { NativeCall<void>(this, "APrimalCharacter.InitRagdollRepConstraints"); }
	void InitRagdollReplication() { NativeCall<void>(this, "APrimalCharacter.InitRagdollReplication"); }
	void InitializedAnimScriptInstance() { NativeCall<void>(this, "APrimalCharacter.InitializedAnimScriptInstance"); }
	void InventoryItemUsed(UObject * InventoryItemObject) { NativeCall<void, UObject *>(this, "APrimalCharacter.InventoryItemUsed", InventoryItemObject); }
	bool IsAlive() { return NativeCall<bool>(this, "APrimalCharacter.IsAlive"); }
	bool IsAlliedWithOtherTeam(int OtherTeamID) { return NativeCall<bool, int>(this, "APrimalCharacter.IsAlliedWithOtherTeam", OtherTeamID); }
	bool IsAttachedToSomething() { return NativeCall<bool>(this, "APrimalCharacter.IsAttachedToSomething"); }
	bool IsBeingDestroyed() { return NativeCall<bool>(this, "APrimalCharacter.IsBeingDestroyed"); }
	bool IsBlockedByShield(const FHitResult * HitInfo, const FVector * ShotDirection, bool bBlockAllPointDamage) { return NativeCall<bool, const FHitResult *, const FVector *, bool>(this, "APrimalCharacter.IsBlockedByShield", HitInfo, ShotDirection, bBlockAllPointDamage); }
	bool IsCharacterHardAttached(bool bIgnoreRiding, bool bIgnoreCarried) { return NativeCall<bool, bool, bool>(this, "APrimalCharacter.IsCharacterHardAttached", bIgnoreRiding, bIgnoreCarried); }
	bool IsConscious() { return NativeCall<bool>(this, "APrimalCharacter.IsConscious"); }
	bool IsDead() { return NativeCall<bool>(this, "APrimalCharacter.IsDead"); }
	bool IsDeadOrDying() { return NativeCall<bool>(this, "APrimalCharacter.IsDeadOrDying"); }
	bool IsDraggingCharacter() { return NativeCall<bool>(this, "APrimalCharacter.IsDraggingCharacter"); }
	bool IsEncumbered() { return NativeCall<bool>(this, "APrimalCharacter.IsEncumbered"); }
	bool IsGameInputAllowed() { return NativeCall<bool>(this, "APrimalCharacter.IsGameInputAllowed"); }
	bool IsHostileOrAggressiveTo(APrimalCharacter * OtherCharacter) { return NativeCall<bool, APrimalCharacter *>(this, "APrimalCharacter.IsHostileOrAggressiveTo", OtherCharacter); }
	bool IsHostileTo(APrimalCharacter * OtherCharacter, bool ignoreDead) { return NativeCall<bool, APrimalCharacter *, bool>(this, "APrimalCharacter.IsHostileTo", OtherCharacter, ignoreDead); }
	bool IsInSingletonMission() { return NativeCall<bool>(this, "APrimalCharacter.IsInSingletonMission"); }
	bool IsInStatusState(EPrimalCharacterStatusState::Type StatusStateType) { return NativeCall<bool, EPrimalCharacterStatusState::Type>(this, "APrimalCharacter.IsInStatusState", StatusStateType); }
	bool IsInVacuumSealedSpace() { return NativeCall<bool>(this, "APrimalCharacter.IsInVacuumSealedSpace"); }
	bool IsInputAllowed() { return NativeCall<bool>(this, "APrimalCharacter.IsInputAllowed"); }
	bool IsInvincible() { return NativeCall<bool>(this, "APrimalCharacter.IsInvincible"); }
	bool IsMeshGameplayRelevant() { return NativeCall<bool>(this, "APrimalCharacter.IsMeshGameplayRelevant"); }
	bool IsMontagePlaying(UAnimMontage * AnimMontage, float TimeFromEndToConsiderFinished) { return NativeCall<bool, UAnimMontage *, float>(this, "APrimalCharacter.IsMontagePlaying", AnimMontage, TimeFromEndToConsiderFinished); }
	bool IsMoving() { return NativeCall<bool>(this, "APrimalCharacter.IsMoving"); }
	bool IsOfTribe(int ID) { return NativeCall<bool, int>(this, "APrimalCharacter.IsOfTribe", ID); }
	bool IsOwningClient() { return NativeCall<bool>(this, "APrimalCharacter.IsOwningClient"); }
	bool IsPrimalCharFalling() { return NativeCall<bool>(this, "APrimalCharacter.IsPrimalCharFalling"); }
	bool IsPrimalCharFlying() { return NativeCall<bool>(this, "APrimalCharacter.IsPrimalCharFlying"); }
	bool IsPrimalCharFriendly(APrimalCharacter * primalChar) { return NativeCall<bool, APrimalCharacter *>(this, "APrimalCharacter.IsPrimalCharFriendly", primalChar); }
	bool IsPrimalCharSwimming() { return NativeCall<bool>(this, "APrimalCharacter.IsPrimalCharSwimming"); }
	bool IsPrimalCharWalking() { return NativeCall<bool>(this, "APrimalCharacter.IsPrimalCharWalking"); }
	bool IsProneOrSitting(bool bIgnoreLockedToSeat) { return NativeCall<bool, bool>(this, "APrimalCharacter.IsProneOrSitting", bIgnoreLockedToSeat); }
	bool IsRagdolled() { return NativeCall<bool>(this, "APrimalCharacter.IsRagdolled"); }
	bool IsRunning() { return NativeCall<bool>(this, "APrimalCharacter.IsRunning"); }
	bool IsSimulated() { return NativeCall<bool>(this, "APrimalCharacter.IsSimulated"); }
	bool IsSubmerged(bool bDontCheckSwimming, bool bUseFullThreshold, bool bForceCheck, bool bFromVolumeChange) { return NativeCall<bool, bool, bool, bool, bool>(this, "APrimalCharacter.IsSubmerged", bDontCheckSwimming, bUseFullThreshold, bForceCheck, bFromVolumeChange); }
	bool IsTargetableDead() { return NativeCall<bool>(this, "APrimalCharacter.IsTargetableDead"); }
	bool IsValidForCombatMusic() { return NativeCall<bool>(this, "APrimalCharacter.IsValidForCombatMusic"); }
	bool IsValidForStatusRecovery() { return NativeCall<bool>(this, "APrimalCharacter.IsValidForStatusRecovery"); }
	bool IsValidForStatusUpdate() { return NativeCall<bool>(this, "APrimalCharacter.IsValidForStatusUpdate"); }
	bool IsWatered() { return NativeCall<bool>(this, "APrimalCharacter.IsWatered"); }
	bool IsWildSlow() { return NativeCall<bool>(this, "APrimalCharacter.IsWildSlow"); }
	int LevelUpPlayerAddedStat(TEnumAsByte<enum EPrimalCharacterStatusValue::Type> StatToLevel, int NumLevels, AShooterPlayerController * ForPlayer) { return NativeCall<int, TEnumAsByte<enum EPrimalCharacterStatusValue::Type>, int, AShooterPlayerController *>(this, "APrimalCharacter.LevelUpPlayerAddedStat", StatToLevel, NumLevels, ForPlayer); }
	void LoadedFromSaveGame() { NativeCall<void>(this, "APrimalCharacter.LoadedFromSaveGame"); }
	void LocalPossessedBy(APlayerController * ByController) { NativeCall<void, APlayerController *>(this, "APrimalCharacter.LocalPossessedBy", ByController); }
	void LocalUnpossessed_Implementation() { NativeCall<void>(this, "APrimalCharacter.LocalUnpossessed_Implementation"); }
	void LookInput(float Val) { NativeCall<void, float>(this, "APrimalCharacter.LookInput", Val); }
	void LookUpAtRate(float Val) { NativeCall<void, float>(this, "APrimalCharacter.LookUpAtRate", Val); }
	bool ModifyInputAcceleration(FVector * InputAcceleration) { return NativeCall<bool, FVector *>(this, "APrimalCharacter.ModifyInputAcceleration", InputAcceleration); }
	bool ModifySavedMoveAcceleration_PostRep(FVector * ModifyServerAccel) { return NativeCall<bool, FVector *>(this, "APrimalCharacter.ModifySavedMoveAcceleration_PostRep", ModifyServerAccel); }
	bool ModifySavedMoveAcceleration_PreRep(FVector * ModifyClientAccel) { return NativeCall<bool, FVector *>(this, "APrimalCharacter.ModifySavedMoveAcceleration_PreRep", ModifyClientAccel); }
	void ModifyStasisComponentRadius(float Delta) { NativeCall<void, float>(this, "APrimalCharacter.ModifyStasisComponentRadius", Delta); }
	void MoveForward(float Val) { NativeCall<void, float>(this, "APrimalCharacter.MoveForward", Val); }
	void MoveRight(float Val) { NativeCall<void, float>(this, "APrimalCharacter.MoveRight", Val); }
	void MoveUp(float Val) { NativeCall<void, float>(this, "APrimalCharacter.MoveUp", Val); }
	void NativeSimulateHair(TArray<FVector> * CurrentPos, TArray<FVector> * LastPos, TArray<FVector> * RestPos, TArray<FVector> * PivotPos, TArray<float> * RestDistance, FVector HairSocketLoc, FRotator HairSocketRot, FVector ChestSocketLoc, FRotator ChestSocketRot, float DeltaTime, float Damping, float DampingFrontModifier, float DampingBack, float InWater, float HairWetness, float DragForce, float HairScale, float SpringForce, float SpringForceFrontModifier, float SpringForceBack, float GravityForce, FVector ShoulderLCollisionOffset, float ShoulderLCollisionRadius, FVector ShoulderRCollisionOffset, float ShoulderRCollisionRadius, FVector HeadHairCollisionOffset, float HeadHairCollisionRadius, FVector NeckHairCollisionOffset, float NeckHairCollisionRadius, float MaxDistanceToRestPos, FTransform LastHeadTransform, bool bPosAsPivot, bool bCollideMiddle, bool bCollideWithNeck) { NativeCall<void, TArray<FVector> *, TArray<FVector> *, TArray<FVector> *, TArray<FVector> *, TArray<float> *, FVector, FRotator, FVector, FRotator, float, float, float, float, float, float, float, float, float, float, float, float, FVector, float, FVector, float, FVector, float, FVector, float, float, FTransform, bool, bool, bool>(this, "APrimalCharacter.NativeSimulateHair", CurrentPos, LastPos, RestPos, PivotPos, RestDistance, HairSocketLoc, HairSocketRot, ChestSocketLoc, ChestSocketRot, DeltaTime, Damping, DampingFrontModifier, DampingBack, InWater, HairWetness, DragForce, HairScale, SpringForce, SpringForceFrontModifier, SpringForceBack, GravityForce, ShoulderLCollisionOffset, ShoulderLCollisionRadius, ShoulderRCollisionOffset, ShoulderRCollisionRadius, HeadHairCollisionOffset, HeadHairCollisionRadius, NeckHairCollisionOffset, NeckHairCollisionRadius, MaxDistanceToRestPos, LastHeadTransform, bPosAsPivot, bCollideMiddle, bCollideWithNeck); }
	void NetAddCharacterMovementImpulse_Implementation(FVector Impulse, bool bVelChange, float ImpulseExponent, bool bSetNewMovementMode, EMovementMode NewMovementMode, bool bOverrideMaxImpulseZ) { NativeCall<void, FVector, bool, float, bool, EMovementMode, bool>(this, "APrimalCharacter.NetAddCharacterMovementImpulse_Implementation", Impulse, bVelChange, ImpulseExponent, bSetNewMovementMode, NewMovementMode, bOverrideMaxImpulseZ); }
	void NetDidLand_Implementation() { NativeCall<void>(this, "APrimalCharacter.NetDidLand_Implementation"); }
	void NetForceUpdateAimedCharacters_Implementation(FVector StartLoc, FVector EndLoc, AActor * IgnoreActor, bool bForceUpdateIgnoreActor, float TraceRadius) { NativeCall<void, FVector, FVector, AActor *, bool, float>(this, "APrimalCharacter.NetForceUpdateAimedCharacters_Implementation", StartLoc, EndLoc, IgnoreActor, bForceUpdateIgnoreActor, TraceRadius); }
	void NetOnJumped_Implementation() { NativeCall<void>(this, "APrimalCharacter.NetOnJumped_Implementation"); }
	void NetPlaySoundOnCharacter_Implementation(USoundBase * SoundToPlay, bool bPlayOnOwner) { NativeCall<void, USoundBase *, bool>(this, "APrimalCharacter.NetPlaySoundOnCharacter_Implementation", SoundToPlay, bPlayOnOwner); }
	void NetSetCharacterMovementVelocity_Implementation(bool bSetNewVelocity, FVector NewVelocity, bool bSetNewMovementMode, EMovementMode NewMovementMode) { NativeCall<void, bool, FVector, bool, EMovementMode>(this, "APrimalCharacter.NetSetCharacterMovementVelocity_Implementation", bSetNewVelocity, NewVelocity, bSetNewMovementMode, NewMovementMode); }
	void NetSetMovementModeSimulatedInternal_Implementation(EMovementMode NewMovementMode) { NativeCall<void, EMovementMode>(this, "APrimalCharacter.NetSetMovementModeSimulatedInternal_Implementation", NewMovementMode); }
	void NetStopAllAnimMontage_Implementation() { NativeCall<void>(this, "APrimalCharacter.NetStopAllAnimMontage_Implementation"); }
	void NetUpdateTribeName_Implementation(const FString * NewTribeName) { NativeCall<void, const FString *>(this, "APrimalCharacter.NetUpdateTribeName_Implementation", NewTribeName); }
	void NotifyBumpedByPawn(APrimalCharacter * ByPawn) { NativeCall<void, APrimalCharacter *>(this, "APrimalCharacter.NotifyBumpedByPawn", ByPawn); }
	void NotifyBumpedPawn(APawn * BumpedPawn) { NativeCall<void, APawn *>(this, "APrimalCharacter.NotifyBumpedPawn", BumpedPawn); }
	void NotifyItemAdded(UPrimalItem * anItem, bool bEquipItem) { NativeCall<void, UPrimalItem *, bool>(this, "APrimalCharacter.NotifyItemAdded", anItem, bEquipItem); }
	void NotifyItemQuantityUpdated(UPrimalItem * anItem, int amount) { NativeCall<void, UPrimalItem *, int>(this, "APrimalCharacter.NotifyItemQuantityUpdated", anItem, amount); }
	void NotifyItemRemoved(UPrimalItem * anItem) { NativeCall<void, UPrimalItem *>(this, "APrimalCharacter.NotifyItemRemoved", anItem); }
	void OnAltFirePressed() { NativeCall<void>(this, "APrimalCharacter.OnAltFirePressed"); }
	void OnAltFireReleased() { NativeCall<void>(this, "APrimalCharacter.OnAltFireReleased"); }
	void OnAttachedToCharacter() { NativeCall<void>(this, "APrimalCharacter.OnAttachedToCharacter"); }
	void OnBeginDrag_Implementation(APrimalCharacter * Dragged, int BoneIndex, bool bWithGrapHook) { NativeCall<void, APrimalCharacter *, int, bool>(this, "APrimalCharacter.OnBeginDrag_Implementation", Dragged, BoneIndex, bWithGrapHook); }
	void OnBeginDragged(APrimalCharacter * Dragger) { NativeCall<void, APrimalCharacter *>(this, "APrimalCharacter.OnBeginDragged", Dragger); }
	void OnCameraStyleChangedNotify(const FName * NewCameraStyle, const FName * OldCameraStyle) { NativeCall<void, const FName *, const FName *>(this, "APrimalCharacter.OnCameraStyleChangedNotify", NewCameraStyle, OldCameraStyle); }
	void OnDetachedFromCharacter(APrimalCharacter * aCharacter, int OverrideDirection) { NativeCall<void, APrimalCharacter *, int>(this, "APrimalCharacter.OnDetachedFromCharacter", aCharacter, OverrideDirection); }
	void OnEndDrag_Implementation() { NativeCall<void>(this, "APrimalCharacter.OnEndDrag_Implementation"); }
	void OnEndDragged(APrimalCharacter * Dragger) { NativeCall<void, APrimalCharacter *>(this, "APrimalCharacter.OnEndDragged", Dragger); }
	void OnJumped_Implementation() { NativeCall<void>(this, "APrimalCharacter.OnJumped_Implementation"); }
	void OnLanded(const FHitResult * Hit) { NativeCall<void, const FHitResult *>(this, "APrimalCharacter.OnLanded", Hit); }
	void OnMassTeleportEvent(const EMassTeleportState::Type EventState, const APrimalCharacter * TeleportInitiatedByChar) { NativeCall<void, const EMassTeleportState::Type, const APrimalCharacter *>(this, "APrimalCharacter.OnMassTeleportEvent", EventState, TeleportInitiatedByChar); }
	void OnMovementModeChanged(EMovementMode PrevMovementMode, char PreviousCustomMode) { NativeCall<void, EMovementMode, char>(this, "APrimalCharacter.OnMovementModeChanged", PrevMovementMode, PreviousCustomMode); }
	void OnPrimalCharacterSleeped() { NativeCall<void>(this, "APrimalCharacter.OnPrimalCharacterSleeped"); }
	void OnPrimalCharacterUnsleeped() { NativeCall<void>(this, "APrimalCharacter.OnPrimalCharacterUnsleeped"); }
	void OnRep_AttachmentReplication() { NativeCall<void>(this, "APrimalCharacter.OnRep_AttachmentReplication"); }
	void OnRep_IsDead() { NativeCall<void>(this, "APrimalCharacter.OnRep_IsDead"); }
	void OnRep_IsSleeping() { NativeCall<void>(this, "APrimalCharacter.OnRep_IsSleeping"); }
	void OnRep_MountedDino() { NativeCall<void>(this, "APrimalCharacter.OnRep_MountedDino"); }
	void OnRep_PaintingComponent() { NativeCall<void>(this, "APrimalCharacter.OnRep_PaintingComponent"); }
	void OnRep_RagdollPositions() { NativeCall<void>(this, "APrimalCharacter.OnRep_RagdollPositions"); }
	void OnRunToggle() { NativeCall<void>(this, "APrimalCharacter.OnRunToggle"); }
	void OnRunTogglePressed() { NativeCall<void>(this, "APrimalCharacter.OnRunTogglePressed"); }
	void OnRunToggleReleased() { NativeCall<void>(this, "APrimalCharacter.OnRunToggleReleased"); }
	void OnStartAltFire(bool bFromGamepad) { NativeCall<void, bool>(this, "APrimalCharacter.OnStartAltFire", bFromGamepad); }
	void OnStartFire(bool bFromGamepadRight) { NativeCall<void, bool>(this, "APrimalCharacter.OnStartFire", bFromGamepadRight); }
	void OnStartJump() { NativeCall<void>(this, "APrimalCharacter.OnStartJump"); }
	void OnStartRunning() { NativeCall<void>(this, "APrimalCharacter.OnStartRunning"); }
	void OnStartTargeting(bool bFromGamepadLeft) { NativeCall<void, bool>(this, "APrimalCharacter.OnStartTargeting", bFromGamepadLeft); }
	void OnStopAltFire(bool bFromGamepad) { NativeCall<void, bool>(this, "APrimalCharacter.OnStopAltFire", bFromGamepad); }
	void OnStopFire(bool bFromGamepadRight) { NativeCall<void, bool>(this, "APrimalCharacter.OnStopFire", bFromGamepadRight); }
	void OnStopJump() { NativeCall<void>(this, "APrimalCharacter.OnStopJump"); }
	void OnStopRunning() { NativeCall<void>(this, "APrimalCharacter.OnStopRunning"); }
	void OnStopTargeting(bool bFromGamepadLeft) { NativeCall<void, bool>(this, "APrimalCharacter.OnStopTargeting", bFromGamepadLeft); }
	void OnVoiceTalkingStateChanged(bool isTalking, bool IsUsingSuperRange) { NativeCall<void, bool, bool>(this, "APrimalCharacter.OnVoiceTalkingStateChanged", isTalking, IsUsingSuperRange); }
	void OrbitCamOff() { NativeCall<void>(this, "APrimalCharacter.OrbitCamOff"); }
	void OrbitCamOn() { NativeCall<void>(this, "APrimalCharacter.OrbitCamOn"); }
	void OrbitCamToggle() { NativeCall<void>(this, "APrimalCharacter.OrbitCamToggle"); }
	void OverrideCameraInterpSpeed(const float DefaultTPVCameraSpeedInterpMultiplier, const float DefaultTPVOffsetInterpSpeed, float * TPVCameraSpeedInterpMultiplier, float * TPVOffsetInterpSpeed) { NativeCall<void, const float, const float, float *, float *>(this, "APrimalCharacter.OverrideCameraInterpSpeed", DefaultTPVCameraSpeedInterpMultiplier, DefaultTPVOffsetInterpSpeed, TPVCameraSpeedInterpMultiplier, TPVOffsetInterpSpeed); }
	void OverrideCameraTargetOriginLocation(FVector * OutOverrideOrigin, const FName WithCameraStyle) { NativeCall<void, FVector *, const FName>(this, "APrimalCharacter.OverrideCameraTargetOriginLocation", OutOverrideOrigin, WithCameraStyle); }
	void OverrideFlyingVelocity(FVector * InitialVelocity, const FVector * Gravity, float DeltaTime) { NativeCall<void, FVector *, const FVector *, float>(this, "APrimalCharacter.OverrideFlyingVelocity", InitialVelocity, Gravity, DeltaTime); }
	void OverrideNewFallVelocity(FVector * InitialVelocity, const FVector * Gravity, float DeltaTime) { NativeCall<void, FVector *, const FVector *, float>(this, "APrimalCharacter.OverrideNewFallVelocity", InitialVelocity, Gravity, DeltaTime); }
	void OverrideSwimmingVelocity(FVector * InitialVelocity, const FVector * Gravity, const float * FluidFriction, const float * NetBuoyancy, float DeltaTime) { NativeCall<void, FVector *, const FVector *, const float *, const float *, float>(this, "APrimalCharacter.OverrideSwimmingVelocity", InitialVelocity, Gravity, FluidFriction, NetBuoyancy, DeltaTime); }
	float OverrideTerminalVelocity() { return NativeCall<float>(this, "APrimalCharacter.OverrideTerminalVelocity"); }
	void OverrideWalkingVelocity(FVector * InitialVelocity, const float * Friction, float DeltaTime) { NativeCall<void, FVector *, const float *, float>(this, "APrimalCharacter.OverrideWalkingVelocity", InitialVelocity, Friction, DeltaTime); }
	float PlayAnimEx(UAnimMontage * AnimMontage, float InPlayRate, FName StartSectionName, bool bReplicate, bool bReplicateToOwner, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer, bool bForceKeepSynced, float BlendInTime, float BlendOutTime) { return NativeCall<float, UAnimMontage *, float, FName, bool, bool, bool, bool, bool, float, float>(this, "APrimalCharacter.PlayAnimEx", AnimMontage, InPlayRate, StartSectionName, bReplicate, bReplicateToOwner, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer, bForceKeepSynced, BlendInTime, BlendOutTime); }
	float PlayAnimMontage(UAnimMontage * AnimMontage, float InPlayRate, FName StartSectionName, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer, float BlendInTime, float BlendOutTime) { return NativeCall<float, UAnimMontage *, float, FName, bool, bool, float, float>(this, "APrimalCharacter.PlayAnimMontage", AnimMontage, InPlayRate, StartSectionName, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer, BlendInTime, BlendOutTime); }
	void PlayDying(float KillingDamage, const FDamageEvent * DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, const FDamageEvent *, APawn *, AActor *>(this, "APrimalCharacter.PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayDyingPoint_Implementation(float KillingDamage, FPointDamageEvent DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, FPointDamageEvent, APawn *, AActor *>(this, "APrimalCharacter.PlayDyingPoint_Implementation", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayDyingRadial_Implementation(float KillingDamage, FRadialDamageEvent DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, FRadialDamageEvent, APawn *, AActor *>(this, "APrimalCharacter.PlayDyingRadial_Implementation", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayFootstep() { NativeCall<void>(this, "APrimalCharacter.PlayFootstep"); }
	void PlayHitEffect(float DamageTaken, const FDamageEvent * DamageEvent, APawn * PawnInstigator, AActor * DamageCauser, bool bIsLocalPath) { NativeCall<void, float, const FDamageEvent *, APawn *, AActor *, bool>(this, "APrimalCharacter.PlayHitEffect", DamageTaken, DamageEvent, PawnInstigator, DamageCauser, bIsLocalPath); }
	void PlayHitEffectGeneric_Implementation(float DamageTaken, FPointDamageEvent DamageEvent, APawn * PawnInstigator, AActor * DamageCauser) { NativeCall<void, float, FPointDamageEvent, APawn *, AActor *>(this, "APrimalCharacter.PlayHitEffectGeneric_Implementation", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void PlayHitEffectRadial_Implementation(float DamageTaken, FRadialDamageEvent DamageEvent, APawn * PawnInstigator, AActor * DamageCauser) { NativeCall<void, float, FRadialDamageEvent, APawn *, AActor *>(this, "APrimalCharacter.PlayHitEffectRadial_Implementation", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void PlayHurtAnim(float DamageTaken, const FDamageEvent * DamageEvent, APawn * PawnInstigator, AActor * DamageCauser, bool bIsLocalPath) { NativeCall<void, float, const FDamageEvent *, APawn *, AActor *, bool>(this, "APrimalCharacter.PlayHurtAnim", DamageTaken, DamageEvent, PawnInstigator, DamageCauser, bIsLocalPath); }
	void PlayJumpAnim() { NativeCall<void>(this, "APrimalCharacter.PlayJumpAnim"); }
	void PlayLandedAnim() { NativeCall<void>(this, "APrimalCharacter.PlayLandedAnim"); }
	FString * PlayerCommand_Implementation(FString * result, const FString * TheCommand) { return NativeCall<FString *, FString *, const FString *>(this, "APrimalCharacter.PlayerCommand_Implementation", result, TheCommand); }
	bool Poop(bool bForcePoop) { return NativeCall<bool, bool>(this, "APrimalCharacter.Poop", bForcePoop); }
	void PossessedBy(AController * NewController) { NativeCall<void, AController *>(this, "APrimalCharacter.PossessedBy", NewController); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalCharacter.PostInitializeComponents"); }
	void PostProcessModifyBlendableMaterial(const UMaterialInterface * BlendableMaterialInterface, UMaterialInstanceDynamic * MID) { NativeCall<void, const UMaterialInterface *, UMaterialInstanceDynamic *>(this, "APrimalCharacter.PostProcessModifyBlendableMaterial", BlendableMaterialInterface, MID); }
	void PreInitializeComponents() { NativeCall<void>(this, "APrimalCharacter.PreInitializeComponents"); }
	void PreReplication(IRepChangedPropertyTracker * ChangedPropertyTracker) { NativeCall<void, IRepChangedPropertyTracker *>(this, "APrimalCharacter.PreReplication", ChangedPropertyTracker); }
	bool PreventInputDoesOffset() { return NativeCall<bool>(this, "APrimalCharacter.PreventInputDoesOffset"); }
	bool PreventInputType(EPrimalCharacterInputType::Type inputType) { return NativeCall<bool, EPrimalCharacterInputType::Type>(this, "APrimalCharacter.PreventInputType", inputType); }
	bool PreventLanding(const FVector ImpactPoint, const FVector ImpactAccel, FVector * Velocity) { return NativeCall<bool, const FVector, const FVector, FVector *>(this, "APrimalCharacter.PreventLanding", ImpactPoint, ImpactAccel, Velocity); }
	bool PreventNotifySound(USoundBase * SoundIn) { return NativeCall<bool, USoundBase *>(this, "APrimalCharacter.PreventNotifySound", SoundIn); }
	bool PreventsTargeting_Implementation(AActor * ByActor) { return NativeCall<bool, AActor *>(this, "APrimalCharacter.PreventsTargeting_Implementation", ByActor); }
	void RefreshBiomeZoneVolumes() { NativeCall<void>(this, "APrimalCharacter.RefreshBiomeZoneVolumes"); }
	void RemoveAllJumpDeactivatedBuffs(APrimalBuff * IgnoredBuff) { NativeCall<void, APrimalBuff *>(this, "APrimalCharacter.RemoveAllJumpDeactivatedBuffs", IgnoredBuff); }
	void RemoveCharacterSnapshot(UPrimalItem * Item, AActor * From) { NativeCall<void, UPrimalItem *, AActor *>(this, "APrimalCharacter.RemoveCharacterSnapshot", Item, From); }
	void ReplicateRagdoll() { NativeCall<void>(this, "APrimalCharacter.ReplicateRagdoll"); }
	void ResetCollisionSweepLocation(const FVector * newLocation, bool bForceReset) { NativeCall<void, const FVector *, bool>(this, "APrimalCharacter.ResetCollisionSweepLocation", newLocation, bForceReset); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "APrimalCharacter.Serialize", Ar); }
	void ServerCaptureDermis_Implementation(APrimalCharacter * Target) { NativeCall<void, APrimalCharacter *>(this, "APrimalCharacter.ServerCaptureDermis_Implementation", Target); }
	void ServerDinoOrder_Implementation(APrimalDinoCharacter * aDino, EDinoTamedOrder::Type OrderType, AActor * enemyTarget) { NativeCall<void, APrimalDinoCharacter *, EDinoTamedOrder::Type, AActor *>(this, "APrimalCharacter.ServerDinoOrder_Implementation", aDino, OrderType, enemyTarget); }
	void ServerRequestDrag_Implementation() { NativeCall<void>(this, "APrimalCharacter.ServerRequestDrag_Implementation"); }
	void ServerSetRunning_Implementation(bool bNewRunning) { NativeCall<void, bool>(this, "APrimalCharacter.ServerSetRunning_Implementation", bNewRunning); }
	void ServerTryPoop_Implementation() { NativeCall<void>(this, "APrimalCharacter.ServerTryPoop_Implementation"); }
	void ServerUploadCharacter(AShooterPlayerController * UploadedBy) { NativeCall<void, AShooterPlayerController *>(this, "APrimalCharacter.ServerUploadCharacter", UploadedBy); }
	void SetBase(UPrimitiveComponent * NewBaseComponent, const FName BoneName, bool bNotifyPawn) { NativeCall<void, UPrimitiveComponent *, const FName, bool>(this, "APrimalCharacter.SetBase", NewBaseComponent, BoneName, bNotifyPawn); }
	void SetBiomeZoneVolume(ABiomeZoneVolume * theVolume) { NativeCall<void, ABiomeZoneVolume *>(this, "APrimalCharacter.SetBiomeZoneVolume", theVolume); }
	void SetBoundsScale(float NewScale) { NativeCall<void, float>(this, "APrimalCharacter.SetBoundsScale", NewScale); }
	void SetCarryingDino(APrimalDinoCharacter * aDino) { NativeCall<void, APrimalDinoCharacter *>(this, "APrimalCharacter.SetCarryingDino", aDino); }
	void SetCharacterAndRagdollLocation(FVector NewLocation) { NativeCall<void, FVector>(this, "APrimalCharacter.SetCharacterAndRagdollLocation", NewLocation); }
	void SetCharacterMeshesMaterialScalarParamValue(FName ParamName, float Value) { NativeCall<void, FName, float>(this, "APrimalCharacter.SetCharacterMeshesMaterialScalarParamValue", ParamName, Value); }
	void SetDeath(bool bForceRagdoll) { NativeCall<void, bool>(this, "APrimalCharacter.SetDeath", bForceRagdoll); }
	void SetDynamicMusic(USoundBase * newMusic) { NativeCall<void, USoundBase *>(this, "APrimalCharacter.SetDynamicMusic", newMusic); }
	void SetEnableIK(bool bEnable) { NativeCall<void, bool>(this, "APrimalCharacter.SetEnableIK", bEnable); }
	float SetHealth(float newHealth) { return NativeCall<float, float>(this, "APrimalCharacter.SetHealth", newHealth); }
	void SetLastCausedDamageTime(const long double lastCausedDamageTime) { NativeCall<void, const long double>(this, "APrimalCharacter.SetLastCausedDamageTime", lastCausedDamageTime); }
	void SetMyInventoryComponent(UPrimalInventoryComponent * theInventoryComponent) { NativeCall<void, UPrimalInventoryComponent *>(this, "APrimalCharacter.SetMyInventoryComponent", theInventoryComponent); }
	void SetRagdollPhysics(bool bUseRagdollLocationOffset, bool bForceRecreateBones, bool bForLoading) { NativeCall<void, bool, bool, bool>(this, "APrimalCharacter.SetRagdollPhysics", bUseRagdollLocationOffset, bForceRecreateBones, bForLoading); }
	void SetRagdollReplication(bool Enabled) { NativeCall<void, bool>(this, "APrimalCharacter.SetRagdollReplication", Enabled); }
	void SetRunning(bool bNewRunning) { NativeCall<void, bool>(this, "APrimalCharacter.SetRunning", bNewRunning); }
	void SetSleeping(bool bSleeping, bool bUseRagdollLocationOffset) { NativeCall<void, bool, bool>(this, "APrimalCharacter.SetSleeping", bSleeping, bUseRagdollLocationOffset); }
	void SetupPlayerInputComponent(UInputComponent * InputComponent) { NativeCall<void, UInputComponent *>(this, "APrimalCharacter.SetupPlayerInputComponent", InputComponent); }
	bool ShouldAttackStopMoveCollapsing() { return NativeCall<bool>(this, "APrimalCharacter.ShouldAttackStopMoveCollapsing"); }
	bool ShouldDealDamageTo(APrimalCharacter * OtherCharacter, bool bAllowDamageToSelf, bool bAllowDamageToTribe, bool bAllowDamageToAlliedTribes) { return NativeCall<bool, APrimalCharacter *, bool, bool, bool>(this, "APrimalCharacter.ShouldDealDamageTo", OtherCharacter, bAllowDamageToSelf, bAllowDamageToTribe, bAllowDamageToAlliedTribes); }
	bool ShouldDisableCameraInterpolation() { return NativeCall<bool>(this, "APrimalCharacter.ShouldDisableCameraInterpolation"); }
	bool ShouldForceCameraStyle(APrimalCharacter * ForViewTarget, ECameraStyle::Type * OutForcedCameraStyle) { return NativeCall<bool, APrimalCharacter *, ECameraStyle::Type *>(this, "APrimalCharacter.ShouldForceCameraStyle", ForViewTarget, OutForcedCameraStyle); }
	bool ShouldForceDedicatedMovementTickEveryFrame() { return NativeCall<bool>(this, "APrimalCharacter.ShouldForceDedicatedMovementTickEveryFrame"); }
	bool SimulatedPreventBasedPhysics() { return NativeCall<bool>(this, "APrimalCharacter.SimulatedPreventBasedPhysics"); }
	void SleepBodies() { NativeCall<void>(this, "APrimalCharacter.SleepBodies"); }
	void StartForceSkelUpdate(float ForTime, bool bForceUpdateMesh, bool bServerOnly) { NativeCall<void, float, bool, bool>(this, "APrimalCharacter.StartForceSkelUpdate", ForTime, bForceUpdateMesh, bServerOnly); }
	float StartSyncedMontage(UAnimMontage * AnimMontage, float PlayRate, float BlendInTime, float BlendOutTime) { return NativeCall<float, UAnimMontage *, float, float, float>(this, "APrimalCharacter.StartSyncedMontage", AnimMontage, PlayRate, BlendInTime, BlendOutTime); }
	void Stasis() { NativeCall<void>(this, "APrimalCharacter.Stasis"); }
	static void StaticApplyCharacterSnapshot(UPrimalItem * Item, AActor * To, FVector Offset, float MaxExtent, int Pose, bool bCollisionOn) { NativeCall<void, UPrimalItem *, AActor *, FVector, float, int, bool>(nullptr, "APrimalCharacter.StaticApplyCharacterSnapshot", Item, To, Offset, MaxExtent, Pose, bCollisionOn); }
	static void StaticApplyCharacterSnapshotEquipment(UPrimalInventoryComponent * Inventory, AActor * To) { NativeCall<void, UPrimalInventoryComponent *, AActor *>(nullptr, "APrimalCharacter.StaticApplyCharacterSnapshotEquipment", Inventory, To); }
	static FPrimalSnapshotPose * StaticGetSnapshotPose(FPrimalSnapshotPose * result, UPrimalItem * Item, int PoseIndex) { return NativeCall<FPrimalSnapshotPose *, FPrimalSnapshotPose *, UPrimalItem *, int>(nullptr, "APrimalCharacter.StaticGetSnapshotPose", result, Item, PoseIndex); }
	static int StaticGetSnapshotPoseCount(UPrimalItem * Item) { return NativeCall<int, UPrimalItem *>(nullptr, "APrimalCharacter.StaticGetSnapshotPoseCount", Item); }
	static void StaticRemoveCharacterSnapshot(UPrimalItem * Item, AActor * From) { NativeCall<void, UPrimalItem *, AActor *>(nullptr, "APrimalCharacter.StaticRemoveCharacterSnapshot", Item, From); }
	void StopAllAnimMontages(float BlendOutTime) { NativeCall<void, float>(this, "APrimalCharacter.StopAllAnimMontages", BlendOutTime); }
	void StopAnimEx(UAnimMontage * AnimMontage, bool bReplicate, bool bReplicateToOwner, float BlendOutTime) { NativeCall<void, UAnimMontage *, bool, bool, float>(this, "APrimalCharacter.StopAnimEx", AnimMontage, bReplicate, bReplicateToOwner, BlendOutTime); }
	void StopAnimMontage(UAnimMontage * AnimMontage) { NativeCall<void, UAnimMontage *>(this, "APrimalCharacter.StopAnimMontage", AnimMontage); }
	void StopSyncedMontage(float BlendOutTime, bool bAutoStopAnim) { NativeCall<void, float, bool>(this, "APrimalCharacter.StopSyncedMontage", BlendOutTime, bAutoStopAnim); }
	void Suicide() { NativeCall<void>(this, "APrimalCharacter.Suicide"); }
	void TagFriendlyStructures() { NativeCall<void>(this, "APrimalCharacter.TagFriendlyStructures"); }
	float TakeDamage(float Damage, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, float, const FDamageEvent *, AController *, AActor *>(this, "APrimalCharacter.TakeDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	void TakeFallingDamage(const FHitResult * Hit) { NativeCall<void, const FHitResult *>(this, "APrimalCharacter.TakeFallingDamage", Hit); }
	void TeleportSucceeded(bool bIsATest, bool bSimpleTeleport) { NativeCall<void, bool, bool>(this, "APrimalCharacter.TeleportSucceeded", bIsATest, bSimpleTeleport); }
	bool TeleportTo(const FVector * DestLocation, const FRotator * DestRotation, bool bIsATest, bool bNoCheck) { return NativeCall<bool, const FVector *, const FRotator *, bool, bool>(this, "APrimalCharacter.TeleportTo", DestLocation, DestRotation, bIsATest, bNoCheck); }
	void TermRagdollRepConstraints() { NativeCall<void>(this, "APrimalCharacter.TermRagdollRepConstraints"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalCharacter.Tick", DeltaSeconds); }
	void TickMovementComponent(float DeltaTime) { NativeCall<void, float>(this, "APrimalCharacter.TickMovementComponent", DeltaTime); }
	void ToggleWeapon() { NativeCall<void>(this, "APrimalCharacter.ToggleWeapon"); }
	bool TryAccessInventory() { return NativeCall<bool>(this, "APrimalCharacter.TryAccessInventory"); }
	void TryAccessInventoryReleased() { NativeCall<void>(this, "APrimalCharacter.TryAccessInventoryReleased"); }
	void TryAccessInventoryWrapper() { NativeCall<void>(this, "APrimalCharacter.TryAccessInventoryWrapper"); }
	void TryCallAttackTarget() { NativeCall<void>(this, "APrimalCharacter.TryCallAttackTarget"); }
	void TryCallFlyerLandOne() { NativeCall<void>(this, "APrimalCharacter.TryCallFlyerLandOne"); }
	void TryCallFollowDistanceCycleOne() { NativeCall<void>(this, "APrimalCharacter.TryCallFollowDistanceCycleOne"); }
	void TryCallFollowOne() { NativeCall<void>(this, "APrimalCharacter.TryCallFollowOne"); }
	void TryCallMoveTo() { NativeCall<void>(this, "APrimalCharacter.TryCallMoveTo"); }
	void TryCallStayOne() { NativeCall<void>(this, "APrimalCharacter.TryCallStayOne"); }
	void TryDragCharacter() { NativeCall<void>(this, "APrimalCharacter.TryDragCharacter"); }
	void TryGiveDefaultWeapon() { NativeCall<void>(this, "APrimalCharacter.TryGiveDefaultWeapon"); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalCharacter.TryMultiUse", ForPC, UseIndex); }
	void TryPoop() { NativeCall<void>(this, "APrimalCharacter.TryPoop"); }
	void TurnAtRate(float Val) { NativeCall<void, float>(this, "APrimalCharacter.TurnAtRate", Val); }
	void TurnInput(float Val) { NativeCall<void, float>(this, "APrimalCharacter.TurnInput", Val); }
	void UnPossessed() { NativeCall<void>(this, "APrimalCharacter.UnPossessed"); }
	void Unstasis() { NativeCall<void>(this, "APrimalCharacter.Unstasis"); }
	void UpdateDragging() { NativeCall<void>(this, "APrimalCharacter.UpdateDragging"); }
	bool UpdateHasBuffPreSerialize() { return NativeCall<bool>(this, "APrimalCharacter.UpdateHasBuffPreSerialize"); }
	void UpdateIK() { NativeCall<void>(this, "APrimalCharacter.UpdateIK"); }
	void UpdateNetDynamicMusic() { NativeCall<void>(this, "APrimalCharacter.UpdateNetDynamicMusic"); }
	void UpdateRagdollReplicationOnClient() { NativeCall<void>(this, "APrimalCharacter.UpdateRagdollReplicationOnClient"); }
	void UpdateRunSounds(bool bNewRunning) { NativeCall<void, bool>(this, "APrimalCharacter.UpdateRunSounds", bNewRunning); }
	void UpdateSimulatedPosition(const FVector * NewLocation, const FRotator * NewRotation) { NativeCall<void, const FVector *, const FRotator *>(this, "APrimalCharacter.UpdateSimulatedPosition", NewLocation, NewRotation); }
	void UpdateStatusComponent(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalCharacter.UpdateStatusComponent", DeltaSeconds); }
	void UpdateStencilValues() { NativeCall<void>(this, "APrimalCharacter.UpdateStencilValues"); }
	void UpdateSwimmingState() { NativeCall<void>(this, "APrimalCharacter.UpdateSwimmingState"); }
	void UpdateTribeName(FString NewTribeName) { NativeCall<void, FString>(this, "APrimalCharacter.UpdateTribeName", NewTribeName); }
	bool UseCenteredTPVCamera() { return NativeCall<bool>(this, "APrimalCharacter.UseCenteredTPVCamera"); }
	bool UseClearOnConsumeInput() { return NativeCall<bool>(this, "APrimalCharacter.UseClearOnConsumeInput"); }
	bool UseFastTurretTargeting() { return NativeCall<bool>(this, "APrimalCharacter.UseFastTurretTargeting"); }
	bool UseOverrideWaterJumpVelocity() { return NativeCall<bool>(this, "APrimalCharacter.UseOverrideWaterJumpVelocity"); }
	void ValidatePaintingComponentOctree() { NativeCall<void>(this, "APrimalCharacter.ValidatePaintingComponentOctree"); }
	void ZoomIn() { NativeCall<void>(this, "APrimalCharacter.ZoomIn"); }
	void ZoomOut() { NativeCall<void>(this, "APrimalCharacter.ZoomOut"); }
	void OnPaintingComponentInitialized(const UStructurePaintingComponent * PaintingComp) { NativeCall<void, const UStructurePaintingComponent *>(this, "APrimalCharacter.OnPaintingComponentInitialized", PaintingComp); }
	float BPGetAddForwardVelocityOnJump_Implementation() { return NativeCall<float>(this, "APrimalCharacter.BPGetAddForwardVelocityOnJump_Implementation"); }
	bool AllowPlayMontage(UAnimMontage * AnimMontage) { return NativeCall<bool, UAnimMontage *>(this, "APrimalCharacter.AllowPlayMontage", AnimMontage); }
	void BPAddedAttachmentsForItem(UPrimalItem * anItem) { NativeCall<void, UPrimalItem *>(this, "APrimalCharacter.BPAddedAttachmentsForItem", anItem); }
	FVector * BPAdjustCharacterMovementImpulse(FVector * result, FVector Impulse, bool bVelocityChange, float MassScaleImpulseExponent, bool bOverrideMaxImpulseZ) { return NativeCall<FVector *, FVector *, FVector, bool, float, bool>(this, "APrimalCharacter.BPAdjustCharacterMovementImpulse", result, Impulse, bVelocityChange, MassScaleImpulseExponent, bOverrideMaxImpulseZ); }
	float BPAdjustDamage(float IncomingDamage, FDamageEvent TheDamageEvent, AController * EventInstigator, AActor * DamageCauser, bool bIsPointDamage, FHitResult PointHitInfo) { return NativeCall<float, float, FDamageEvent, AController *, AActor *, bool, FHitResult>(this, "APrimalCharacter.BPAdjustDamage", IncomingDamage, TheDamageEvent, EventInstigator, DamageCauser, bIsPointDamage, PointHitInfo); }
	FVector * BPAdjustImpulseFromDamage(FVector * result, FVector DesiredImpulse, float DamageTaken, FDamageEvent TheDamageEvent, APawn * PawnInstigator, AActor * DamageCauser, bool bIsPointDamage, FHitResult PointHitInfo) { return NativeCall<FVector *, FVector *, FVector, float, FDamageEvent, APawn *, AActor *, bool, FHitResult>(this, "APrimalCharacter.BPAdjustImpulseFromDamage", result, DesiredImpulse, DamageTaken, TheDamageEvent, PawnInstigator, DamageCauser, bIsPointDamage, PointHitInfo); }
	float BPAdjustTorpidityDamage(float DesiredTorpidityDamage, float HealthDamageAmount, TSubclassOf<UDamageType> DamageType) { return NativeCall<float, float, float, TSubclassOf<UDamageType>>(this, "APrimalCharacter.BPAdjustTorpidityDamage", DesiredTorpidityDamage, HealthDamageAmount, DamageType); }
	void BPApplyCharacterSnapshot(UPrimalItem * Item, AActor * To, FVector Offset, float MaxExtent, int Pose, bool bCollisionOn) { NativeCall<void, UPrimalItem *, AActor *, FVector, float, int, bool>(this, "APrimalCharacter.BPApplyCharacterSnapshot", Item, To, Offset, MaxExtent, Pose, bCollisionOn); }
	FRotator * BPCameraBaseOrientation(FRotator * result, APrimalCharacter * viewingCharacter) { return NativeCall<FRotator *, FRotator *, APrimalCharacter *>(this, "APrimalCharacter.BPCameraBaseOrientation", result, viewingCharacter); }
	FRotator * BPCameraRotationFinal(FRotator * result, APrimalCharacter * viewingCharacter, const FRotator * InCurrentFinalRot) { return NativeCall<FRotator *, FRotator *, APrimalCharacter *, const FRotator *>(this, "APrimalCharacter.BPCameraRotationFinal", result, viewingCharacter, InCurrentFinalRot); }
	bool BPCanBaseOnCharacter(APrimalCharacter * BaseCharacter) { return NativeCall<bool, APrimalCharacter *>(this, "APrimalCharacter.BPCanBaseOnCharacter", BaseCharacter); }
	bool BPCanBeBaseForCharacter(APawn * Pawn) { return NativeCall<bool, APawn *>(this, "APrimalCharacter.BPCanBeBaseForCharacter", Pawn); }
	bool BPCanNotifyTeamAggroAI(APrimalDinoCharacter * Dino) { return NativeCall<bool, APrimalDinoCharacter *>(this, "APrimalCharacter.BPCanNotifyTeamAggroAI", Dino); }
	void BPCharacterDetach() { NativeCall<void>(this, "APrimalCharacter.BPCharacterDetach"); }
	void BPCharacterSleeped() { NativeCall<void>(this, "APrimalCharacter.BPCharacterSleeped"); }
	void BPCharacterUnsleeped() { NativeCall<void>(this, "APrimalCharacter.BPCharacterUnsleeped"); }
	void BPCheckJumpInput(bool * bUseCustomErrorMessage, FString * ErrorMessageToDisplay) { NativeCall<void, bool *, FString *>(this, "APrimalCharacter.BPCheckJumpInput", bUseCustomErrorMessage, ErrorMessageToDisplay); }
	ECameraStyle::Type BPForceCameraStyle(APrimalCharacter * ForViewTarget) { return NativeCall<ECameraStyle::Type, APrimalCharacter *>(this, "APrimalCharacter.BPForceCameraStyle", ForViewTarget); }
	float BPGetAddForwardVelocityOnJump() { return NativeCall<float>(this, "APrimalCharacter.BPGetAddForwardVelocityOnJump"); }
	float BPGetArmorDurabilityDecreaseMultiplier() { return NativeCall<float>(this, "APrimalCharacter.BPGetArmorDurabilityDecreaseMultiplier"); }
	FString * BPGetDebugInfoString(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalCharacter.BPGetDebugInfoString", result); }
	float BPGetExtraMeleeDamageModifier() { return NativeCall<float>(this, "APrimalCharacter.BPGetExtraMeleeDamageModifier"); }
	FVector * BPGetFPVViewLocation(FVector * result, APrimalCharacter * viewingCharacter) { return NativeCall<FVector *, FVector *, APrimalCharacter *>(this, "APrimalCharacter.BPGetFPVViewLocation", result, viewingCharacter); }
	float BPGetGravityZScale() { return NativeCall<float>(this, "APrimalCharacter.BPGetGravityZScale"); }
	void BPGetHUDElements(APlayerController * ForPC, TArray<FHUDElement> * OutElements) { NativeCall<void, APlayerController *, TArray<FHUDElement> *>(this, "APrimalCharacter.BPGetHUDElements", ForPC, OutElements); }
	float BPGetHUDOverrideBuffProgressBarPercent() { return NativeCall<float>(this, "APrimalCharacter.BPGetHUDOverrideBuffProgressBarPercent"); }
	void BPGetOverrideCameraInterpSpeed(float DefaultTPVCameraSpeedInterpolationMultiplier, float DefaultTPVOffsetInterpSpeed, float * TPVCameraSpeedInterpolationMultiplier, float * TPVOffsetInterpSpeed) { NativeCall<void, float, float, float *, float *>(this, "APrimalCharacter.BPGetOverrideCameraInterpSpeed", DefaultTPVCameraSpeedInterpolationMultiplier, DefaultTPVOffsetInterpSpeed, TPVCameraSpeedInterpolationMultiplier, TPVOffsetInterpSpeed); }
	FString * BPGetStatusNameString(FString * result, EPrimalCharacterStatusValue::Type ValueType) { return NativeCall<FString *, FString *, EPrimalCharacterStatusValue::Type>(this, "APrimalCharacter.BPGetStatusNameString", result, ValueType); }
	bool BPHandleLeftShoulderButton() { return NativeCall<bool>(this, "APrimalCharacter.BPHandleLeftShoulderButton"); }
	bool BPHandlePoop() { return NativeCall<bool>(this, "APrimalCharacter.BPHandlePoop"); }
	bool BPHandleRightShoulderButton() { return NativeCall<bool>(this, "APrimalCharacter.BPHandleRightShoulderButton"); }
	bool BPIsBlockedByShield(const FHitResult * HitInfo, const FVector * ShotDirection, bool bBlockAllPointDamage) { return NativeCall<bool, const FHitResult *, const FVector *, bool>(this, "APrimalCharacter.BPIsBlockedByShield", HitInfo, ShotDirection, bBlockAllPointDamage); }
	FRotator * BPLimitPlayerRotation(FRotator * result, APrimalCharacter * viewingCharacter, FRotator InViewRotation) { return NativeCall<FRotator *, FRotator *, APrimalCharacter *, FRotator>(this, "APrimalCharacter.BPLimitPlayerRotation", result, viewingCharacter, InViewRotation); }
	void BPLocalPossessedBy(APlayerController * ByController) { NativeCall<void, APlayerController *>(this, "APrimalCharacter.BPLocalPossessedBy", ByController); }
	void BPLocalUnpossessed() { NativeCall<void>(this, "APrimalCharacter.BPLocalUnpossessed"); }
	float BPModifyFOVInterpSpeed(float FOVInterpSpeedIn) { return NativeCall<float, float>(this, "APrimalCharacter.BPModifyFOVInterpSpeed", FOVInterpSpeedIn); }
	FVector * BPModifyForwardDirectionInput(FVector * result, const FVector * directionInput) { return NativeCall<FVector *, FVector *, const FVector *>(this, "APrimalCharacter.BPModifyForwardDirectionInput", result, directionInput); }
	FVector * BPModifyRightDirectionInput(FVector * result, const FVector * directionInput) { return NativeCall<FVector *, FVector *, const FVector *>(this, "APrimalCharacter.BPModifyRightDirectionInput", result, directionInput); }
	float BPModifyViewHitDir(APrimalCharacter * viewingCharacter, float InViewHitDir) { return NativeCall<float, APrimalCharacter *, float>(this, "APrimalCharacter.BPModifyViewHitDir", viewingCharacter, InViewHitDir); }
	void BPNewDoorInteractionDrawHUD(AShooterHUD * HUD, FVector2D DoorDescriptionLoc) { NativeCall<void, AShooterHUD *, FVector2D>(this, "APrimalCharacter.BPNewDoorInteractionDrawHUD", HUD, DoorDescriptionLoc); }
	void BPNotifyBPNotifyIsDamageCauserOfAddedBuff(APrimalBuff * buff) { NativeCall<void, APrimalBuff *>(this, "APrimalCharacter.BPNotifyBPNotifyIsDamageCauserOfAddedBuff", buff); }
	void BPNotifyBumpedByPawn(APrimalCharacter * ByPawn) { NativeCall<void, APrimalCharacter *>(this, "APrimalCharacter.BPNotifyBumpedByPawn", ByPawn); }
	void BPNotifyBumpedPawn(APrimalCharacter * BumpedPawn) { NativeCall<void, APrimalCharacter *>(this, "APrimalCharacter.BPNotifyBumpedPawn", BumpedPawn); }
	void BPNotifyDroppedItemPickedUp(ADroppedItem * itemPickedUp, APrimalCharacter * PickedUpBy) { NativeCall<void, ADroppedItem *, APrimalCharacter *>(this, "APrimalCharacter.BPNotifyDroppedItemPickedUp", itemPickedUp, PickedUpBy); }
	void BPNotifyLevelUp(int ExtraCharacterLevel) { NativeCall<void, int>(this, "APrimalCharacter.BPNotifyLevelUp", ExtraCharacterLevel); }
	void BPNotifyToggleHUD(bool bHUDHidden) { NativeCall<void, bool>(this, "APrimalCharacter.BPNotifyToggleHUD", bHUDHidden); }
	void BPOnAnimPlayedNotify(UAnimMontage * AnimMontage, float InPlayRate, FName StartSectionName, bool bReplicate, bool bReplicateToOwner, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer) { NativeCall<void, UAnimMontage *, float, FName, bool, bool, bool, bool>(this, "APrimalCharacter.BPOnAnimPlayedNotify", AnimMontage, InPlayRate, StartSectionName, bReplicate, bReplicateToOwner, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer); }
	bool BPOnAttachmentReplication() { return NativeCall<bool>(this, "APrimalCharacter.BPOnAttachmentReplication"); }
	void BPOnLethalDamage(float KillingDamage, const FDamageEvent * DamageEvent, AController * Killer, AActor * DamageCauser, bool * bPreventDeath) { NativeCall<void, float, const FDamageEvent *, AController *, AActor *, bool *>(this, "APrimalCharacter.BPOnLethalDamage", KillingDamage, DamageEvent, Killer, DamageCauser, bPreventDeath); }
	void BPOnMassTeleportEvent(const EMassTeleportState::Type EventState, const APrimalCharacter * TeleportInitiatedByChar) { NativeCall<void, const EMassTeleportState::Type, const APrimalCharacter *>(this, "APrimalCharacter.BPOnMassTeleportEvent", EventState, TeleportInitiatedByChar); }
	void BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, char PreviousCustomMode) { NativeCall<void, EMovementMode, char>(this, "APrimalCharacter.BPOnMovementModeChangedNotify", PrevMovementMode, PreviousCustomMode); }
	void BPOnStaminaDrained() { NativeCall<void>(this, "APrimalCharacter.BPOnStaminaDrained"); }
	FVector * BPOverrideCharacterNewFallVelocity(FVector * result, const FVector * InitialVelocity, const FVector * Gravity, float DeltaTime) { return NativeCall<FVector *, FVector *, const FVector *, const FVector *, float>(this, "APrimalCharacter.BPOverrideCharacterNewFallVelocity", result, InitialVelocity, Gravity, DeltaTime); }
	FHitMarkerSettings * BPOverrideDamageCauserHitMarker(FHitMarkerSettings * result, AShooterPlayerController * DamageCauserController, bool bHitFriendlyTarget, float PreDamageHealth, float DamageAmount, const FDamageEvent * DamageEvent, bool bIsPointDamage, const FHitResult * PointDamageHitResult) { return NativeCall<FHitMarkerSettings *, FHitMarkerSettings *, AShooterPlayerController *, bool, float, float, const FDamageEvent *, bool, const FHitResult *>(this, "APrimalCharacter.BPOverrideDamageCauserHitMarker", result, DamageCauserController, bHitFriendlyTarget, PreDamageHealth, DamageAmount, DamageEvent, bIsPointDamage, PointDamageHitResult); }
	bool BPOverrideFPVViewLocation(APrimalCharacter * viewingCharacter) { return NativeCall<bool, APrimalCharacter *>(this, "APrimalCharacter.BPOverrideFPVViewLocation", viewingCharacter); }
	FVector * BPOverrideFlyingVelocity(FVector * result, const FVector * InitialVelocity, const FVector * Gravity, float DeltaTime) { return NativeCall<FVector *, FVector *, const FVector *, const FVector *, float>(this, "APrimalCharacter.BPOverrideFlyingVelocity", result, InitialVelocity, Gravity, DeltaTime); }
	void BPOverrideHeldItemSlot(int ItemSlot) { NativeCall<void, int>(this, "APrimalCharacter.BPOverrideHeldItemSlot", ItemSlot); }
	UAnimMontage * BPOverrideHurtAnim(float DamageTaken, const FDamageEvent * DamageEvent, APawn * PawnInstigator, AActor * DamageCauser, bool bIsLocalPath, bool bIsPointDamage, FVector PointDamageLocation, FVector PointDamageHitNormal) { return NativeCall<UAnimMontage *, float, const FDamageEvent *, APawn *, AActor *, bool, bool, FVector, FVector>(this, "APrimalCharacter.BPOverrideHurtAnim", DamageTaken, DamageEvent, PawnInstigator, DamageCauser, bIsLocalPath, bIsPointDamage, PointDamageLocation, PointDamageHitNormal); }
	bool BPOverrideInventoryAccessInput() { return NativeCall<bool>(this, "APrimalCharacter.BPOverrideInventoryAccessInput"); }
	float BPOverrideJumpZModifier(float InJumpZModifier) { return NativeCall<float, float>(this, "APrimalCharacter.BPOverrideJumpZModifier", InJumpZModifier); }
	void BPOverrideReleaseItemSlot(int ItemSlot) { NativeCall<void, int>(this, "APrimalCharacter.BPOverrideReleaseItemSlot", ItemSlot); }
	void BPOverrideUseItemSlot(int ItemSlot) { NativeCall<void, int>(this, "APrimalCharacter.BPOverrideUseItemSlot", ItemSlot); }
	void BPPreSerializeSaveGame() { NativeCall<void>(this, "APrimalCharacter.BPPreSerializeSaveGame"); }
	bool BPPreventFallDamage(const FHitResult * HitResult, float FallDamageAmount) { return NativeCall<bool, const FHitResult *, float>(this, "APrimalCharacter.BPPreventFallDamage", HitResult, FallDamageAmount); }
	bool BPPreventInputType(EPrimalCharacterInputType::Type inputType) { return NativeCall<bool, EPrimalCharacterInputType::Type>(this, "APrimalCharacter.BPPreventInputType", inputType); }
	bool BPPreventStasis() { return NativeCall<bool>(this, "APrimalCharacter.BPPreventStasis"); }
	void BPRemoveCharacterSnapshot(UPrimalItem * Item, AActor * From) { NativeCall<void, UPrimalItem *, AActor *>(this, "APrimalCharacter.BPRemoveCharacterSnapshot", Item, From); }
	void BPRemovedAsPassenger(APrimalCharacter * character) { NativeCall<void, APrimalCharacter *>(this, "APrimalCharacter.BPRemovedAsPassenger", character); }
	void BPRemovedAttachmentsForItem(UPrimalItem * anItem) { NativeCall<void, UPrimalItem *>(this, "APrimalCharacter.BPRemovedAttachmentsForItem", anItem); }
	void BPSetCharacterMeshesMaterialScalarParamValue(FName ParamName, float Value) { NativeCall<void, FName, float>(this, "APrimalCharacter.BPSetCharacterMeshesMaterialScalarParamValue", ParamName, Value); }
	bool BPShouldLimitForwardDirection() { return NativeCall<bool>(this, "APrimalCharacter.BPShouldLimitForwardDirection"); }
	bool BPShouldLimitRightDirection() { return NativeCall<bool>(this, "APrimalCharacter.BPShouldLimitRightDirection"); }
	void BPTimerNonDedicated() { NativeCall<void>(this, "APrimalCharacter.BPTimerNonDedicated"); }
	void BPTimerServer() { NativeCall<void>(this, "APrimalCharacter.BPTimerServer"); }
	bool BP_ForceAllowAddBuff(TSubclassOf<APrimalBuff> BuffClass) { return NativeCall<bool, TSubclassOf<APrimalBuff>>(this, "APrimalCharacter.BP_ForceAllowAddBuff", BuffClass); }
	bool BP_IsCharacterHardAttached(bool bIgnoreRiding, bool bIgnoreCarried) { return NativeCall<bool, bool, bool>(this, "APrimalCharacter.BP_IsCharacterHardAttached", bIgnoreRiding, bIgnoreCarried); }
	void BP_ModifyInputAcceleration(FVector * ModifyInputAccel) { NativeCall<void, FVector *>(this, "APrimalCharacter.BP_ModifyInputAcceleration", ModifyInputAccel); }
	bool BP_ModifySavedMoveAcceleration_PostRep(FVector * ModifyServerAccel) { return NativeCall<bool, FVector *>(this, "APrimalCharacter.BP_ModifySavedMoveAcceleration_PostRep", ModifyServerAccel); }
	bool BP_ModifySavedMoveAcceleration_PreRep(FVector * ModifyClientAccel) { return NativeCall<bool, FVector *>(this, "APrimalCharacter.BP_ModifySavedMoveAcceleration_PreRep", ModifyClientAccel); }
	void BP_OnCameraStyleChangedNotify(const FName * NewCameraStyle, const FName * OldCameraStyle) { NativeCall<void, const FName *, const FName *>(this, "APrimalCharacter.BP_OnCameraStyleChangedNotify", NewCameraStyle, OldCameraStyle); }
	void BP_OnEndCarried(bool bFromDino, bool bCancelAnyCarryBuffs) { NativeCall<void, bool, bool>(this, "APrimalCharacter.BP_OnEndCarried", bFromDino, bCancelAnyCarryBuffs); }
	void BP_OnJumpPressed() { NativeCall<void>(this, "APrimalCharacter.BP_OnJumpPressed"); }
	void BP_OnJumpReleased() { NativeCall<void>(this, "APrimalCharacter.BP_OnJumpReleased"); }
	void BP_OnSetDeath() { NativeCall<void>(this, "APrimalCharacter.BP_OnSetDeath"); }
	void BP_OnSetRunning(bool bNewIsRunning) { NativeCall<void, bool>(this, "APrimalCharacter.BP_OnSetRunning", bNewIsRunning); }
	void BP_OnStartCarried(APrimalDinoCharacter * aDino) { NativeCall<void, APrimalDinoCharacter *>(this, "APrimalCharacter.BP_OnStartCarried", aDino); }
	void BP_OnZoomIn() { NativeCall<void>(this, "APrimalCharacter.BP_OnZoomIn"); }
	void BP_OnZoomInOrbitCam() { NativeCall<void>(this, "APrimalCharacter.BP_OnZoomInOrbitCam"); }
	void BP_OnZoomOut() { NativeCall<void>(this, "APrimalCharacter.BP_OnZoomOut"); }
	void BP_OverrideCameraTargetOriginLocation(FVector * OutOverrideOrigin, const FName WithCameraStyle) { NativeCall<void, FVector *, const FName>(this, "APrimalCharacter.BP_OverrideCameraTargetOriginLocation", OutOverrideOrigin, WithCameraStyle); }
	bool BP_ShouldDisableCameraInterpolation() { return NativeCall<bool>(this, "APrimalCharacter.BP_ShouldDisableCameraInterpolation"); }
	void BlueprintAnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, const UAnimNotify * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, const UAnimNotify *>(this, "APrimalCharacter.BlueprintAnimNotifyCustomEvent", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void ClientDidPoop() { NativeCall<void>(this, "APrimalCharacter.ClientDidPoop"); }
	void ClientEndRagdollUpdate() { NativeCall<void>(this, "APrimalCharacter.ClientEndRagdollUpdate"); }
	void ClientFailedPoop() { NativeCall<void>(this, "APrimalCharacter.ClientFailedPoop"); }
	void ClientNotifyLevelUp() { NativeCall<void>(this, "APrimalCharacter.ClientNotifyLevelUp"); }
	void ClientOrderedAttackTarget(AActor * attackTarget) { NativeCall<void, AActor *>(this, "APrimalCharacter.ClientOrderedAttackTarget", attackTarget); }
	void ClientOrderedMoveTo(FVector MoveToLoc) { NativeCall<void, FVector>(this, "APrimalCharacter.ClientOrderedMoveTo", MoveToLoc); }
	void ClientPlayAnimation(UAnimMontage * AnimMontage, float PlayRate, FName StartSectionName, bool bPlayOnOwner, bool bForceTickPoseAndServerUpdateMesh) { NativeCall<void, UAnimMontage *, float, FName, bool, bool>(this, "APrimalCharacter.ClientPlayAnimation", AnimMontage, PlayRate, StartSectionName, bPlayOnOwner, bForceTickPoseAndServerUpdateMesh); }
	void ClientRagdollUpdate(const TArray<FVector_NetQuantize> * BoneLocations, FRotator_NetQuantize TargetRootRotation) { NativeCall<void, const TArray<FVector_NetQuantize> *, FRotator_NetQuantize>(this, "APrimalCharacter.ClientRagdollUpdate", BoneLocations, TargetRootRotation); }
	void ClientStopAnimation(UAnimMontage * AnimMontage, bool bStopOnOwner, float BlendOutTime) { NativeCall<void, UAnimMontage *, bool, float>(this, "APrimalCharacter.ClientStopAnimation", AnimMontage, bStopOnOwner, BlendOutTime); }
	void ClientSyncAnimation(UAnimMontage * AnimMontage, float PlayRate, float ServerCurrentMontageTime, bool bForceTickPoseAndServerUpdateMesh, float BlendInTime, float BlendOutTime) { NativeCall<void, UAnimMontage *, float, float, bool, float, float>(this, "APrimalCharacter.ClientSyncAnimation", AnimMontage, PlayRate, ServerCurrentMontageTime, bForceTickPoseAndServerUpdateMesh, BlendInTime, BlendOutTime); }
	void DeathHarvestingFadeOut() { NativeCall<void>(this, "APrimalCharacter.DeathHarvestingFadeOut"); }
	void DidTeleport(FVector newLoc, FRotator newRot, bool bDoCameraFade, FLinearColor CameraFadeColor) { NativeCall<void, FVector, FRotator, bool, FLinearColor>(this, "APrimalCharacter.DidTeleport", newLoc, newRot, bDoCameraFade, CameraFadeColor); }
	bool EnableTurnToFaceRotation() { return NativeCall<bool>(this, "APrimalCharacter.EnableTurnToFaceRotation"); }
	FName * GetOverrideSocket(FName * result, FName from) { return NativeCall<FName *, FName *, FName>(this, "APrimalCharacter.GetOverrideSocket", result, from); }
	bool GiveKillExperience() { return NativeCall<bool>(this, "APrimalCharacter.GiveKillExperience"); }
	void LocalUnpossessed() { NativeCall<void>(this, "APrimalCharacter.LocalUnpossessed"); }
	void NetAddCharacterMovementImpulse(FVector Impulse, bool bVelChange, float ImpulseExponent, bool bSetNewMovementMode, EMovementMode NewMovementMode, bool bOverrideMaxImpulseZ) { NativeCall<void, FVector, bool, float, bool, EMovementMode, bool>(this, "APrimalCharacter.NetAddCharacterMovementImpulse", Impulse, bVelChange, ImpulseExponent, bSetNewMovementMode, NewMovementMode, bOverrideMaxImpulseZ); }
	void NetDidLand() { NativeCall<void>(this, "APrimalCharacter.NetDidLand"); }
	void NetOnJumped() { NativeCall<void>(this, "APrimalCharacter.NetOnJumped"); }
	void NetPlaySoundOnCharacter(USoundBase * SoundToPlay, bool bPlayOnOwner) { NativeCall<void, USoundBase *, bool>(this, "APrimalCharacter.NetPlaySoundOnCharacter", SoundToPlay, bPlayOnOwner); }
	void NetSetCharacterMovementVelocity(bool bSetNewVelocity, FVector NewVelocity, bool bSetNewMovementMode, EMovementMode NewMovementMode) { NativeCall<void, bool, FVector, bool, EMovementMode>(this, "APrimalCharacter.NetSetCharacterMovementVelocity", bSetNewVelocity, NewVelocity, bSetNewMovementMode, NewMovementMode); }
	void NetSetMovementModeSimulatedInternal(EMovementMode NewMovementMode) { NativeCall<void, EMovementMode>(this, "APrimalCharacter.NetSetMovementModeSimulatedInternal", NewMovementMode); }
	void NetStopAllAnimMontage() { NativeCall<void>(this, "APrimalCharacter.NetStopAllAnimMontage"); }
	void NetUpdateTribeName(const FString * NewTribeName) { NativeCall<void, const FString *>(this, "APrimalCharacter.NetUpdateTribeName", NewTribeName); }
	void OnBeginDrag(APrimalCharacter * Dragged, int BoneIndex, bool bWithGrapHook) { NativeCall<void, APrimalCharacter *, int, bool>(this, "APrimalCharacter.OnBeginDrag", Dragged, BoneIndex, bWithGrapHook); }
	void OnEndDrag() { NativeCall<void>(this, "APrimalCharacter.OnEndDrag"); }
	void PlayDyingGeneric(float KillingDamage, FDamageEvent DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, FDamageEvent, APawn *, AActor *>(this, "APrimalCharacter.PlayDyingGeneric", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayDyingPoint(float KillingDamage, FPointDamageEvent DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, FPointDamageEvent, APawn *, AActor *>(this, "APrimalCharacter.PlayDyingPoint", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayDyingRadial(float KillingDamage, FRadialDamageEvent DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, FRadialDamageEvent, APawn *, AActor *>(this, "APrimalCharacter.PlayDyingRadial", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayHitEffectPoint(float DamageTaken, FPointDamageEvent DamageEvent, APawn * PawnInstigator, AActor * DamageCauser) { NativeCall<void, float, FPointDamageEvent, APawn *, AActor *>(this, "APrimalCharacter.PlayHitEffectPoint", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void PlayHitEffectRadial(float DamageTaken, FRadialDamageEvent DamageEvent, APawn * PawnInstigator, AActor * DamageCauser) { NativeCall<void, float, FRadialDamageEvent, APawn *, AActor *>(this, "APrimalCharacter.PlayHitEffectRadial", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	FString * PlayerCommand(FString * result, const FString * TheCommand) { return NativeCall<FString *, FString *, const FString *>(this, "APrimalCharacter.PlayerCommand", result, TheCommand); }
	bool PreventsTargeting(AActor * ByActor) { return NativeCall<bool, AActor *>(this, "APrimalCharacter.PreventsTargeting", ByActor); }
	void ServerCallAggressive() { NativeCall<void>(this, "APrimalCharacter.ServerCallAggressive"); }
	void ServerCallAttackTarget(AActor * TheTarget) { NativeCall<void, AActor *>(this, "APrimalCharacter.ServerCallAttackTarget", TheTarget); }
	void ServerCallFollow() { NativeCall<void>(this, "APrimalCharacter.ServerCallFollow"); }
	void ServerCallFollowDistanceCycleOne(APrimalDinoCharacter * ForDinoChar) { NativeCall<void, APrimalDinoCharacter *>(this, "APrimalCharacter.ServerCallFollowDistanceCycleOne", ForDinoChar); }
	void ServerCallFollowOne(APrimalDinoCharacter * ForDinoChar) { NativeCall<void, APrimalDinoCharacter *>(this, "APrimalCharacter.ServerCallFollowOne", ForDinoChar); }
	void ServerCallLandFlyerOne(APrimalDinoCharacter * ForDinoChar) { NativeCall<void, APrimalDinoCharacter *>(this, "APrimalCharacter.ServerCallLandFlyerOne", ForDinoChar); }
	void ServerCallMoveTo(FVector MoveToLoc) { NativeCall<void, FVector>(this, "APrimalCharacter.ServerCallMoveTo", MoveToLoc); }
	void ServerCallNeutral() { NativeCall<void>(this, "APrimalCharacter.ServerCallNeutral"); }
	void ServerCallPassive() { NativeCall<void>(this, "APrimalCharacter.ServerCallPassive"); }
	void ServerCallPassiveFlee() { NativeCall<void>(this, "APrimalCharacter.ServerCallPassiveFlee"); }
	void ServerCallSetAggressive() { NativeCall<void>(this, "APrimalCharacter.ServerCallSetAggressive"); }
	void ServerCallStay() { NativeCall<void>(this, "APrimalCharacter.ServerCallStay"); }
	void ServerCallStayOne(APrimalDinoCharacter * ForDinoChar) { NativeCall<void, APrimalDinoCharacter *>(this, "APrimalCharacter.ServerCallStayOne", ForDinoChar); }
	void ServerCaptureDermis(APrimalCharacter * Target) { NativeCall<void, APrimalCharacter *>(this, "APrimalCharacter.ServerCaptureDermis", Target); }
	void ServerDinoOrder(APrimalDinoCharacter * aDino, EDinoTamedOrder::Type OrderType, AActor * target) { NativeCall<void, APrimalDinoCharacter *, EDinoTamedOrder::Type, AActor *>(this, "APrimalCharacter.ServerDinoOrder", aDino, OrderType, target); }
	void ServerGiveDefaultWeapon() { NativeCall<void>(this, "APrimalCharacter.ServerGiveDefaultWeapon"); }
	void ServerRequestDrag() { NativeCall<void>(this, "APrimalCharacter.ServerRequestDrag"); }
	void ServerSetRunning(bool bNewRunning) { NativeCall<void, bool>(this, "APrimalCharacter.ServerSetRunning", bNewRunning); }
	void ServerTryPoop() { NativeCall<void>(this, "APrimalCharacter.ServerTryPoop"); }
};

struct AShooterCharacter : APrimalCharacter
{
	char __padding[0xbb0L];
	TArray<FTransponderInfo>& ClientTranspondersInfoField() { return *GetNativePointerField<TArray<FTransponderInfo>*>(this, "AShooterCharacter.ClientTranspondersInfo"); }
	UAnimMontage * SpawnIntroAnim1PField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.SpawnIntroAnim1P"); }
	UAnimMontage * RespawnIntroAnim1PField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.RespawnIntroAnim1P"); }
	UAnimMontage * ProneInAnimField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.ProneInAnim"); }
	UAnimMontage * ProneOutAnimField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.ProneOutAnim"); }
	UAnimMontage * StartRidingAnimField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.StartRidingAnim"); }
	UAnimMontage * StopRidingAnimField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.StopRidingAnim"); }
	UAnimMontage * TalkingAnimField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.TalkingAnim"); }
	UAnimMontage * VoiceTalkingAnimField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.VoiceTalkingAnim"); }
	UAnimMontage * VoiceYellingAnimField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.VoiceYellingAnim"); }
	TArray<UAnimMontage *>& EmoteAnimsField() { return *GetNativePointerField<TArray<UAnimMontage *>*>(this, "AShooterCharacter.EmoteAnims"); }
	UAnimMontage * FireBallistaAnimationField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.FireBallistaAnimation"); }
	UAnimMontage * ReloadBallistaAnimationField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.ReloadBallistaAnimation"); }
	UAnimMontage * DraggingCharacterAnimField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.DraggingCharacterAnim"); }
	FString& VivoxUsernameField() { return *GetNativePointerField<FString*>(this, "AShooterCharacter.VivoxUsername"); }
	unsigned int& CurrentVoiceModeAsUInt32Field() { return *GetNativePointerField<unsigned int*>(this, "AShooterCharacter.CurrentVoiceModeAsUInt32"); }
	unsigned int& VoiceModeForCullingTestsField() { return *GetNativePointerField<unsigned int*>(this, "AShooterCharacter.VoiceModeForCullingTests"); }
	EVoiceMode& CurrentVoiceModeField() { return *GetNativePointerField<EVoiceMode*>(this, "AShooterCharacter.CurrentVoiceMode"); }
	bool& bIsActivelyTalkingField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bIsActivelyTalking"); }
	bool& bClientIgnoreCurrentVoiceModeReplicationsField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bClientIgnoreCurrentVoiceModeReplications"); }
	bool& bWasAlreadyYellingField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bWasAlreadyYelling"); }
	bool& bIsPlayerActuallyTalkingField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bIsPlayerActuallyTalking"); }
	bool& bWasProneField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bWasProne"); }
	bool& bIsPreviewCharacterField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bIsPreviewCharacter"); }
	long double& DontTargetUntilTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.DontTargetUntilTime"); }
	float& OriginalCollisionHeightField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.OriginalCollisionHeight"); }
	float& WalkBobMagnitudeField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.WalkBobMagnitude"); }
	float& WalkBobInterpSpeedField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.WalkBobInterpSpeed"); }
	float& TargetingTimeField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.TargetingTime"); }
	float& BobMaxMovementSpeedField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.BobMaxMovementSpeed"); }
	float& WeaponBobMaxMovementSpeedField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.WeaponBobMaxMovementSpeed"); }
	long double& LastCheckSevenField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastCheckSeven"); }
	long double& LastCheckSevenHitField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastCheckSevenHit"); }
	long double& LastCheckSevenTransmissionField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastCheckSevenTransmission"); }
	long double& LastValidCheckSevenField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastValidCheckSeven"); }
	long double& LastCheckSevenTeleportField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastCheckSevenTeleport"); }
	FVector& LastCheckSevenLocationField() { return *GetNativePointerField<FVector*>(this, "AShooterCharacter.LastCheckSevenLocation"); }
	TCircularQueue<FVector>& PreviousValidLocationsField() { return *GetNativePointerField<TCircularQueue<FVector>*>(this, "AShooterCharacter.PreviousValidLocations"); }
	FString& PlayerNameField() { return *GetNativePointerField<FString*>(this, "AShooterCharacter.PlayerName"); }
	TWeakObjectPtr<APrimalDinoCharacter>& RidingDinoField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter>*>(this, "AShooterCharacter.RidingDino"); }
	TArray<FName>& LowerBodyPartRootBonesField() { return *GetNativePointerField<TArray<FName>*>(this, "AShooterCharacter.LowerBodyPartRootBones"); }
	UPhysicsAsset * FPVCameraAnimationPhysicsAssetField() { return GetNativePointerField<UPhysicsAsset *>(this, "AShooterCharacter.FPVCameraAnimationPhysicsAsset"); }
	UAnimMontage * DropItemAnimationField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.DropItemAnimation"); }
	UAnimMontage * ThrowItemAnimationField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.ThrowItemAnimation"); }
	UAnimMontage * PickupItemAnimationField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.PickupItemAnimation"); }
	UAnimMontage * ActivateInventoryAnimationField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.ActivateInventoryAnimation"); }
	FRotator& LastDinoAimRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "AShooterCharacter.LastDinoAimRotationOffset"); }
	FRotator& LastAimRotOffsetField() { return *GetNativePointerField<FRotator*>(this, "AShooterCharacter.LastAimRotOffset"); }
	APrimalProjectileBoomerang * LastFiredBoomerangField() { return GetNativePointerField<APrimalProjectileBoomerang *>(this, "AShooterCharacter.LastFiredBoomerang"); }
	APrimalProjectileGrapplingHook * LastFiredGrapHookField() { return GetNativePointerField<APrimalProjectileGrapplingHook *>(this, "AShooterCharacter.LastFiredGrapHook"); }
	UPrimalCableComponent * GrapplingHookCableField() { return GetNativePointerField<UPrimalCableComponent *>(this, "AShooterCharacter.GrapplingHookCable"); }
	UAudioComponent * LastGrapHookACField() { return GetNativePointerField<UAudioComponent *>(this, "AShooterCharacter.LastGrapHookAC"); }
	int& _GrapHookCableObjectCountField() { return *GetNativePointerField<int*>(this, "AShooterCharacter._GrapHookCableObjectCount"); }
	FVector& GrapHookDefaultOffsetField() { return *GetNativePointerField<FVector*>(this, "AShooterCharacter.GrapHookDefaultOffset"); }
	float& GrapHookCableWidthField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.GrapHookCableWidth"); }
	float& LadderLateralJumpVelocityField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.LadderLateralJumpVelocity"); }
	float& GrapHookPulledRopeDistanceField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.GrapHookPulledRopeDistance"); }
	float& GrapHookSyncTimeField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.GrapHookSyncTime"); }
	bool& bReleasingGrapHookField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bReleasingGrapHook"); }
	FString& PlatformProfileNameField() { return *GetNativePointerField<FString*>(this, "AShooterCharacter.PlatformProfileName"); }
	TArray<FPlayerStatusStateCharacterSound>& CharacterStatusStateSoundsField() { return *GetNativePointerField<TArray<FPlayerStatusStateCharacterSound>*>(this, "AShooterCharacter.CharacterStatusStateSounds"); }
	UAudioComponent * CharacterStatusStateSoundComponentField() { return GetNativePointerField<UAudioComponent *>(this, "AShooterCharacter.CharacterStatusStateSoundComponent"); }
	long double& LastUncrouchTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastUncrouchTime"); }
	long double& LastUnproneTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastUnproneTime"); }
	float& CurrentWeaponBobSpeedField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.CurrentWeaponBobSpeed"); }
	float& WalkBobOldSpeedField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.WalkBobOldSpeed"); }
	float& AppliedBobField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.AppliedBob"); }
	float& BobTimeField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.BobTime"); }
	long double& LastPressReloadTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastPressReloadTime"); }
	long double& LastReleaseReloadTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastReleaseReloadTime"); }
	long double& LastReloadToggledAccessoryTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastReloadToggledAccessoryTime"); }
	UAnimBlueprintGeneratedClass * DefaultTPVAnimBlueprintField() { return GetNativePointerField<UAnimBlueprintGeneratedClass *>(this, "AShooterCharacter.DefaultTPVAnimBlueprint"); }
	FName& WeaponAttachPointField() { return *GetNativePointerField<FName*>(this, "AShooterCharacter.WeaponAttachPoint"); }
	float& TargetingSpeedModifierField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.TargetingSpeedModifier"); }
	USoundCue * LowHealthSoundField() { return GetNativePointerField<USoundCue *>(this, "AShooterCharacter.LowHealthSound"); }
	UAnimMontage * CallFollowAnimField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.CallFollowAnim"); }
	UAnimMontage * CallStayAnimField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.CallStayAnim"); }
	UAnimMontage * CallFollowAnimSingleField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.CallFollowAnimSingle"); }
	UAnimMontage * CallStayAnimSingleField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.CallStayAnimSingle"); }
	UAnimMontage * CallMoveToAnimField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.CallMoveToAnim"); }
	UAnimMontage * CallAttackAnimField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.CallAttackAnim"); }
	UAudioComponent * LowHealthWarningPlayerField() { return GetNativePointerField<UAudioComponent *>(this, "AShooterCharacter.LowHealthWarningPlayer"); }
	FItemNetID& NextWeaponItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "AShooterCharacter.NextWeaponItemID"); }
	float& WeaponBobTimeField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.WeaponBobTime"); }
	float& CurrentAimBlendingField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.CurrentAimBlending"); }
	long double& InterpLastCrouchProneStateChangeTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.InterpLastCrouchProneStateChangeTime"); }
	long double& PressCrouchProneToggleTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.PressCrouchProneToggleTime"); }
	float& CraftingMovementSpeedModifierField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.CraftingMovementSpeedModifier"); }
	FVector& WeaponBobMagnitudesField() { return *GetNativePointerField<FVector*>(this, "AShooterCharacter.WeaponBobMagnitudes"); }
	FVector& WeaponBobPeriodsField() { return *GetNativePointerField<FVector*>(this, "AShooterCharacter.WeaponBobPeriods"); }
	FVector& WeaponBobOffsetsField() { return *GetNativePointerField<FVector*>(this, "AShooterCharacter.WeaponBobOffsets"); }
	FVector& WeaponBobMagnitudes_TargetingField() { return *GetNativePointerField<FVector*>(this, "AShooterCharacter.WeaponBobMagnitudes_Targeting"); }
	FVector& WeaponBobPeriods_TargetingField() { return *GetNativePointerField<FVector*>(this, "AShooterCharacter.WeaponBobPeriods_Targeting"); }
	FVector& WeaponBobOffsets_TargetingField() { return *GetNativePointerField<FVector*>(this, "AShooterCharacter.WeaponBobOffsets_Targeting"); }
	float& WeaponBobMinimumSpeedField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.WeaponBobMinimumSpeed"); }
	float& WeaponBobSpeedBaseField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.WeaponBobSpeedBase"); }
	float& WeaponBobSpeedBaseFallingField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.WeaponBobSpeedBaseFalling"); }
	float& WeaponBobTargetingBlendField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.WeaponBobTargetingBlend"); }
	TArray<FItemAttachmentInfo>& DefaultAttachmentInfosField() { return *GetNativePointerField<TArray<FItemAttachmentInfo>*>(this, "AShooterCharacter.DefaultAttachmentInfos"); }
	USoundCue * StartCrouchSoundField() { return GetNativePointerField<USoundCue *>(this, "AShooterCharacter.StartCrouchSound"); }
	USoundCue * EndCrouchSoundField() { return GetNativePointerField<USoundCue *>(this, "AShooterCharacter.EndCrouchSound"); }
	USoundCue * StartProneSoundField() { return GetNativePointerField<USoundCue *>(this, "AShooterCharacter.StartProneSound"); }
	USoundCue * EndProneSoundField() { return GetNativePointerField<USoundCue *>(this, "AShooterCharacter.EndProneSound"); }
	FItemNetID& PreMapWeaponItemNetIDField() { return *GetNativePointerField<FItemNetID*>(this, "AShooterCharacter.PreMapWeaponItemNetID"); }
	float& ServerSeatedViewRotationYawField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.ServerSeatedViewRotationYaw"); }
	float& ServerSeatedViewRotationPitchField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.ServerSeatedViewRotationPitch"); }
	float& HealthBarOffsetYField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.HealthBarOffsetY"); }
	unsigned __int64& LinkedPlayerDataIDField() { return *GetNativePointerField<unsigned __int64*>(this, "AShooterCharacter.LinkedPlayerDataID"); }
	long double& LastTimeInFallingField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastTimeInFalling"); }
	long double& StartedRidingTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.StartedRidingTime"); }
	long double& TimeSinceLastControllerField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.TimeSinceLastController"); }
	TWeakObjectPtr<AShooterPlayerController>& LastValidPlayerControllerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterPlayerController>*>(this, "AShooterCharacter.LastValidPlayerController"); }
	UAnimMontage * DrinkingAnimationField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.DrinkingAnimation"); }
	long double& LastRequestedTribeTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastRequestedTribeTime"); }
	unsigned __int64& LastRequestedTribeIDField() { return *GetNativePointerField<unsigned __int64*>(this, "AShooterCharacter.LastRequestedTribeID"); }
	FString& LastRequestedTribeNameField() { return *GetNativePointerField<FString*>(this, "AShooterCharacter.LastRequestedTribeName"); }
	TWeakObjectPtr<AShooterCharacter>& LastRequestedTribePlayerCharacterField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter>*>(this, "AShooterCharacter.LastRequestedTribePlayerCharacter"); }
	float& IndoorsHyperthermiaInsulationField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.IndoorsHyperthermiaInsulation"); }
	float& IndoorsHypothermiaInsulationField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.IndoorsHypothermiaInsulation"); }
	float& IndoorCheckIntervalField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.IndoorCheckInterval"); }
	long double& LastIndoorCheckTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastIndoorCheckTime"); }
	FItemNetID& PreRidingWeaponItemNetIDField() { return *GetNativePointerField<FItemNetID*>(this, "AShooterCharacter.PreRidingWeaponItemNetID"); }
	FItemNetID& PreInventoryWeaponItemNetIDField() { return *GetNativePointerField<FItemNetID*>(this, "AShooterCharacter.PreInventoryWeaponItemNetID"); }
	TArray<FOverrideAnimBlueprintEntry>& OverrideAnimBlueprintsField() { return *GetNativePointerField<TArray<FOverrideAnimBlueprintEntry>*>(this, "AShooterCharacter.OverrideAnimBlueprints"); }
	UAnimSequence * ViewingInventoryAnimationField() { return GetNativePointerField<UAnimSequence *>(this, "AShooterCharacter.ViewingInventoryAnimation"); }
	UAnimSequence * DefaultDinoRidingAnimationField() { return GetNativePointerField<UAnimSequence *>(this, "AShooterCharacter.DefaultDinoRidingAnimation"); }
	UAnimSequence * DefaultDinoRidingMoveAnimationField() { return GetNativePointerField<UAnimSequence *>(this, "AShooterCharacter.DefaultDinoRidingMoveAnimation"); }
	UAnimSequence * DefaultSeatingAnimationField() { return GetNativePointerField<UAnimSequence *>(this, "AShooterCharacter.DefaultSeatingAnimation"); }
	UAnimSequence * DefaultShieldAnimationField() { return GetNativePointerField<UAnimSequence *>(this, "AShooterCharacter.DefaultShieldAnimation"); }
	UAnimMontage * ShieldCoverAnimationField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.ShieldCoverAnimation"); }
	UAnimMontage * ShieldCoverAnimationForCrouchField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.ShieldCoverAnimationForCrouch"); }
	float& EnemyPlayerMaxCursorHUDDistanceProneField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.EnemyPlayerMaxCursorHUDDistanceProne"); }
	float& EnemyPlayerMaxCursorHUDDistanceCrouchedField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.EnemyPlayerMaxCursorHUDDistanceCrouched"); }
	float& EnemyPlayerMaxCursorHUDDistanceStandingField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.EnemyPlayerMaxCursorHUDDistanceStanding"); }
	long double& ForceSleepRagdollUntilTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.ForceSleepRagdollUntilTime"); }
	FSaddlePassengerSeatDefinition& CurrentPassengerSeatDefinitionField() { return *GetNativePointerField<FSaddlePassengerSeatDefinition*>(this, "AShooterCharacter.CurrentPassengerSeatDefinition"); }
	TArray<UAnimMontage *>& AnimsOverrideFromField() { return *GetNativePointerField<TArray<UAnimMontage *>*>(this, "AShooterCharacter.AnimsOverrideFrom"); }
	TArray<UAnimMontage *>& AnimOverrideToField() { return *GetNativePointerField<TArray<UAnimMontage *>*>(this, "AShooterCharacter.AnimOverrideTo"); }
	TArray<UAnimSequence *>& AnimSequencesOverrideFromField() { return *GetNativePointerField<TArray<UAnimSequence *>*>(this, "AShooterCharacter.AnimSequencesOverrideFrom"); }
	TArray<UAnimSequence *>& AnimSequenceOverrideToField() { return *GetNativePointerField<TArray<UAnimSequence *>*>(this, "AShooterCharacter.AnimSequenceOverrideTo"); }
	float& PreviousRootYawSpeedField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.PreviousRootYawSpeed"); }
	FieldArray<FLinearColor, 4> BodyColorsField() { return {this, "AShooterCharacter.BodyColors"}; }
	char& FacialHairIndexField() { return *GetNativePointerField<char*>(this, "AShooterCharacter.FacialHairIndex"); }
	char& HeadHairIndexField() { return *GetNativePointerField<char*>(this, "AShooterCharacter.HeadHairIndex"); }
	FieldArray<float, 22> RawBoneModifiersField() { return {this, "AShooterCharacter.RawBoneModifiers"}; }
	TArray<FBoneModifier>& BoneModifiersField() { return *GetNativePointerField<TArray<FBoneModifier>*>(this, "AShooterCharacter.BoneModifiers"); }
	float& LoggedOutTargetingDesirabilityField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.LoggedOutTargetingDesirability"); }
	bool& bIsRainWateredField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bIsRainWatered"); }
	long double& LastAttackTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastAttackTime"); }
	bool& bCacheRidingDinoWeaponField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bCacheRidingDinoWeapon"); }
	bool& bWasLocallyControlledField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bWasLocallyControlled"); }
	unsigned int& UniqueNetIdTypeHashField() { return *GetNativePointerField<unsigned int*>(this, "AShooterCharacter.UniqueNetIdTypeHash"); }
	long double& LastUseHarvestTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastUseHarvestTime"); }
	long double& StopRidingTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.StopRidingTime"); }
	UAnimMontage * SpawnAnimField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.SpawnAnim"); }
	UAnimMontage * FirstSpawnAnimField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.FirstSpawnAnim"); }
	long double& LocalLastViewingInventoryTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LocalLastViewingInventoryTime"); }
	FVector& LastStasisCastPositionField() { return *GetNativePointerField<FVector*>(this, "AShooterCharacter.LastStasisCastPosition"); }
	bool& bWasHostPlayerField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bWasHostPlayer"); }
	long double& SavedLastTimeHadControllerField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.SavedLastTimeHadController"); }
	long double& LastTimeHadControllerField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastTimeHadController"); }
	long double& LastTaggedTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastTaggedTime"); }
	long double& LastTaggedTimeExtraField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastTaggedTimeExtra"); }
	long double& LastTaggedTimeThirdField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastTaggedTimeThird"); }
	float& ExtraFloatVarField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.ExtraFloatVar"); }
	FVector& ExtraVectorVarField() { return *GetNativePointerField<FVector*>(this, "AShooterCharacter.ExtraVectorVar"); }
	FVector& ExtraExtraVectorVarField() { return *GetNativePointerField<FVector*>(this, "AShooterCharacter.ExtraExtraVectorVar"); }
	FName& ExtraNameVarField() { return *GetNativePointerField<FName*>(this, "AShooterCharacter.ExtraNameVar"); }
	bool& bIsOnSeatingStructureField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bIsOnSeatingStructure"); }
	bool& bIsControllingBallistaField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bIsControllingBallista"); }
	bool& bUseBallistaAimOffsetField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bUseBallistaAimOffset"); }
	float& CurrentControlledBallistaYawField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.CurrentControlledBallistaYaw"); }
	bool& bIsServerAdminField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bIsServerAdmin"); }
	int& SeatingStructureSeatNumberField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.SeatingStructureSeatNumber"); }
	long double& NextPlayerUndergroundCheckField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.NextPlayerUndergroundCheck"); }
	int& PlayerNumUnderGroundFailField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.PlayerNumUnderGroundFail"); }
	float& LastSweepCapsuleHeightField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.LastSweepCapsuleHeight"); }
	float& LastSweepCapsuleRadiusField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.LastSweepCapsuleRadius"); }
	float& ClientSeatedViewRotationPitchField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.ClientSeatedViewRotationPitch"); }
	float& ClientSeatedViewRotationYawField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.ClientSeatedViewRotationYaw"); }
	long double& LastReleaseSeatingStructureTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastReleaseSeatingStructureTime"); }
	char& PlayerBadgeGroupField() { return *GetNativePointerField<char*>(this, "AShooterCharacter.PlayerBadgeGroup"); }
	bool& bShouldInvertTurnInputField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bShouldInvertTurnInput"); }
	int& AllianceInviteRequestingTeamField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.AllianceInviteRequestingTeam"); }
	unsigned int& AllianceInviteIDField() { return *GetNativePointerField<unsigned int*>(this, "AShooterCharacter.AllianceInviteID"); }
	FString& AllianceInviteNameField() { return *GetNativePointerField<FString*>(this, "AShooterCharacter.AllianceInviteName"); }
	long double& AllianceInviteTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.AllianceInviteTime"); }
	float& InventoryDragWeightScaleField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.InventoryDragWeightScale"); }
	UAnimMontage * MountedCarryingDinoAnimationField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.MountedCarryingDinoAnimation"); }
	UAnimMontage * CuddleAnimationField() { return GetNativePointerField<UAnimMontage *>(this, "AShooterCharacter.CuddleAnimation"); }
	long double& LastUpdatedAimActorsTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastUpdatedAimActorsTime"); }
	FVector& UpdateHyperThermalInsulationPositionField() { return *GetNativePointerField<FVector*>(this, "AShooterCharacter.UpdateHyperThermalInsulationPosition"); }
	FVector& UpdateHypoThermalInsulationPositionField() { return *GetNativePointerField<FVector*>(this, "AShooterCharacter.UpdateHypoThermalInsulationPosition"); }
	long double& NextUpdateHyperThermalInsulationTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.NextUpdateHyperThermalInsulationTime"); }
	long double& NextUpdateHypoThermalInsulationTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.NextUpdateHypoThermalInsulationTime"); }
	float& LastAdditionalHypoThermalInsulationField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.LastAdditionalHypoThermalInsulation"); }
	float& LastAdditionalHyperThermalInsulationField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.LastAdditionalHyperThermalInsulation"); }
	float& WaterLossRateMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.WaterLossRateMultiplier"); }
	UAnimSequence * CharacterAdditiveStandingAnimField() { return GetNativePointerField<UAnimSequence *>(this, "AShooterCharacter.CharacterAdditiveStandingAnim"); }
	long double& LastTryAccessInventoryFailTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastTryAccessInventoryFailTime"); }
	long double& LastEmotePlayTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastEmotePlayTime"); }
	float& IntervalForFullHeadHairGrowthField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.IntervalForFullHeadHairGrowth"); }
	float& IntervalForFullFacialHairGrowthField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.IntervalForFullFacialHairGrowth"); }
	float& PercentOfFullFacialHairGrowthField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.PercentOfFullFacialHairGrowth"); }
	float& PercentOfFullHeadHairGrowthField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.PercentOfFullHeadHairGrowth"); }
	FLinearColor& OriginalHairColorField() { return *GetNativePointerField<FLinearColor*>(this, "AShooterCharacter.OriginalHairColor"); }
	long double& LastEmoteTryPlayTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastEmoteTryPlayTime"); }
	int& IgnoreCollisionSweepUntilFrameNumberField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.IgnoreCollisionSweepUntilFrameNumber"); }
	float& ReplicatedWeightField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.ReplicatedWeight"); }
	long double& LocalDiedAtTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LocalDiedAtTime"); }
	long double& LastNotStuckTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastNotStuckTime"); }
	long double& UploadEarliestValidTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.UploadEarliestValidTime"); }
	long double& LastCollisionStuckTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastCollisionStuckTime"); }
	int& SimulatedLastFrameProcessedForceUpdateAimedActorsField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.SimulatedLastFrameProcessedForceUpdateAimedActors"); }
	FVector& OriginalLastHitWallSweepCheckLocationField() { return *GetNativePointerField<FVector*>(this, "AShooterCharacter.OriginalLastHitWallSweepCheckLocation"); }
	int& LastCapsuleAttachmentChangedIncrementField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.LastCapsuleAttachmentChangedIncrement"); }
	int& LastMeshAttachmentChangedIncrementField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.LastMeshAttachmentChangedIncrement"); }
	int& LastCameraAttachmentChangedIncrementField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.LastCameraAttachmentChangedIncrement"); }
	bool& bPreventWeaponMovementAnimsField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bPreventWeaponMovementAnims"); }
	TEnumAsByte<enum EPrimalStatsValueTypes::Type>& BestInstantShotResultField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalStatsValueTypes::Type>*>(this, "AShooterCharacter.BestInstantShotResult"); }
	int& PlayerHexagonCountField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.PlayerHexagonCount"); }
	int& DefaultHexagonAmountEarnedOnMissionCompletionField() { return *GetNativePointerField<int*>(this, "AShooterCharacter.DefaultHexagonAmountEarnedOnMissionCompletion"); }
	bool& bAutoPlayerField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bAutoPlayer"); }
	float& fAutoMoveField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.fAutoMove"); }
	float& fAutoStrafeField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.fAutoStrafe"); }
	float& fAutoTurnField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.fAutoTurn"); }
	bool& bAutoJumpField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bAutoJump"); }
	bool& bAutoFireField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bAutoFire"); }
	bool& bAutoFireTargetField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bAutoFireTarget"); }
	bool& bAutoProneField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bAutoProne"); }
	float& MeshHeightAdjustmentField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.MeshHeightAdjustment"); }
	float& BuffExtraDamageMultiplierField() { return *GetNativePointerField<float*>(this, "AShooterCharacter.BuffExtraDamageMultiplier"); }
	bool& bNormalizeHeadPositionField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bNormalizeHeadPosition"); }
	unsigned int& ExpectedBaseIDField() { return *GetNativePointerField<unsigned int*>(this, "AShooterCharacter.ExpectedBaseID"); }
	long double& LastExpectedBaseTimeField() { return *GetNativePointerField<long double*>(this, "AShooterCharacter.LastExpectedBaseTime"); }
	bool& bPreventShowHUDOnSpawnIntroCompletionField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bPreventShowHUDOnSpawnIntroCompletion"); }
	bool& bBlockSpawnIntroField() { return *GetNativePointerField<bool*>(this, "AShooterCharacter.bBlockSpawnIntro"); }

	// Functions

	bool BPSetPlayerHexagonCount_Implementation(int newHexagonCount) { return NativeCall<bool, int>(this, "AShooterCharacter.BPSetPlayerHexagonCount_Implementation", newHexagonCount); }
	bool TemplateAllowActorSpawn(APlayerController * Controller, AShooterCharacter * PlayerPawn, APrimalBuff_MissionData * PlayerMissionData, FString * outReason) { return NativeCall<bool, APlayerController *, AShooterCharacter *, APrimalBuff_MissionData *, FString *>(this, "AShooterCharacter.TemplateAllowActorSpawn", Controller, PlayerPawn, PlayerMissionData, outReason); }
	void AdjustDamage(float * Damage, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { NativeCall<void, float *, const FDamageEvent *, AController *, AActor *>(this, "AShooterCharacter.AdjustDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool AllowBlockingWithShield() { return NativeCall<bool>(this, "AShooterCharacter.AllowBlockingWithShield"); }
	bool AllowDinoTargetingRange(const FVector * AtLoc, float TargetingRange) { return NativeCall<bool, const FVector *, float>(this, "AShooterCharacter.AllowDinoTargetingRange", AtLoc, TargetingRange); }
	bool AllowFirstPerson() { return NativeCall<bool>(this, "AShooterCharacter.AllowFirstPerson"); }
	bool AllowGrappling_Implementation() { return NativeCall<bool>(this, "AShooterCharacter.AllowGrappling_Implementation"); }
	bool AllowParallelAnimations(USkeletalMeshComponent * forComp) { return NativeCall<bool, USkeletalMeshComponent *>(this, "AShooterCharacter.AllowParallelAnimations", forComp); }
	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, const UAnimNotify * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, const UAnimNotify *>(this, "AShooterCharacter.AnimNotifyCustomEvent", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void AnimNotifyCustomState_Begin(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration, const UAnimNotifyState * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, float, const UAnimNotifyState *>(this, "AShooterCharacter.AnimNotifyCustomState_Begin", CustomEventName, MeshComp, Animation, TotalDuration, AnimNotifyObject); }
	void AnimNotifyCustomState_End(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, const UAnimNotifyState * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, const UAnimNotifyState *>(this, "AShooterCharacter.AnimNotifyCustomState_End", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void AnimNotifyCustomState_Tick(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float FrameDeltaTime, const UAnimNotifyState * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, float, const UAnimNotifyState *>(this, "AShooterCharacter.AnimNotifyCustomState_Tick", CustomEventName, MeshComp, Animation, FrameDeltaTime, AnimNotifyObject); }
	bool AnimUseAimOffset() { return NativeCall<bool>(this, "AShooterCharacter.AnimUseAimOffset"); }
	void ApplyBodyColors(USkeletalMeshComponent * toMesh) { NativeCall<void, USkeletalMeshComponent *>(this, "AShooterCharacter.ApplyBodyColors", toMesh); }
	void ApplyBodyColors() { NativeCall<void>(this, "AShooterCharacter.ApplyBodyColors"); }
	void ApplyBoneModifiers() { NativeCall<void>(this, "AShooterCharacter.ApplyBoneModifiers"); }
	void ApplyCharacterSnapshot(UPrimalItem * Item, AActor * To, FVector Offset, float MaxExtent, int Pose, bool bCollisionOn) { NativeCall<void, UPrimalItem *, AActor *, FVector, float, int, bool>(this, "AShooterCharacter.ApplyCharacterSnapshot", Item, To, Offset, MaxExtent, Pose, bCollisionOn); }
	void ApplyDamageMomentum(float DamageTaken, const FDamageEvent * DamageEvent, APawn * PawnInstigator, AActor * DamageCauser) { NativeCall<void, float, const FDamageEvent *, APawn *, AActor *>(this, "AShooterCharacter.ApplyDamageMomentum", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void AttachToLadder_Implementation(USceneComponent * Parent) { NativeCall<void, USceneComponent *>(this, "AShooterCharacter.AttachToLadder_Implementation", Parent); }
	void AuthPostSpawnInit() { NativeCall<void>(this, "AShooterCharacter.AuthPostSpawnInit"); }
	int BPGetPlayerHexagonCount_Implementation() { return NativeCall<int>(this, "AShooterCharacter.BPGetPlayerHexagonCount_Implementation"); }
	void BeginPlay() { NativeCall<void>(this, "AShooterCharacter.BeginPlay"); }
	void BreakGrapple() { NativeCall<void>(this, "AShooterCharacter.BreakGrapple"); }
	bool BuffsPreventFirstPerson() { return NativeCall<bool>(this, "AShooterCharacter.BuffsPreventFirstPerson"); }
	bool CalcIsIndoors() { return NativeCall<bool>(this, "AShooterCharacter.CalcIsIndoors"); }
	void CallGameStateHandleEvent(FName NameParam, FVector VecParam) { NativeCall<void, FName, FVector>(this, "AShooterCharacter.CallGameStateHandleEvent", NameParam, VecParam); }
	bool CanBeCarried(APrimalCharacter * ByCarrier) { return NativeCall<bool, APrimalCharacter *>(this, "AShooterCharacter.CanBeCarried", ByCarrier); }
	bool CanCrouch() { return NativeCall<bool>(this, "AShooterCharacter.CanCrouch"); }
	bool CanDoUsableHarvesting() { return NativeCall<bool>(this, "AShooterCharacter.CanDoUsableHarvesting"); }
	bool CanDragCharacter(APrimalCharacter * Character) { return NativeCall<bool, APrimalCharacter *>(this, "AShooterCharacter.CanDragCharacter", Character); }
	bool CanEquipWeapons() { return NativeCall<bool>(this, "AShooterCharacter.CanEquipWeapons"); }
	bool CanFire() { return NativeCall<bool>(this, "AShooterCharacter.CanFire"); }
	bool CanJumpInternal_Implementation() { return NativeCall<bool>(this, "AShooterCharacter.CanJumpInternal_Implementation"); }
	bool CanProne() { return NativeCall<bool>(this, "AShooterCharacter.CanProne"); }
	bool CanProneInternal() { return NativeCall<bool>(this, "AShooterCharacter.CanProneInternal"); }
	void CaptureCharacterSnapshot(UPrimalItem * Item) { NativeCall<void, UPrimalItem *>(this, "AShooterCharacter.CaptureCharacterSnapshot", Item); }
	void ChangeActorTeam(int NewTeam) { NativeCall<void, int>(this, "AShooterCharacter.ChangeActorTeam", NewTeam); }
	void CheckAndHandleBasedPlayersBeingPushedThroughWalls() { NativeCall<void>(this, "AShooterCharacter.CheckAndHandleBasedPlayersBeingPushedThroughWalls"); }
	void CheckFallFromLadder() { NativeCall<void>(this, "AShooterCharacter.CheckFallFromLadder"); }
	void ClearCarryingDino(bool bFromDino, bool bCancelAnyCarryBuffs) { NativeCall<void, bool, bool>(this, "AShooterCharacter.ClearCarryingDino", bFromDino, bCancelAnyCarryBuffs); }
	void ClearRidingDino(bool bFromDino, int OverrideUnboardDirection, bool bForceEvenIfBuffPreventsClear) { NativeCall<void, bool, int, bool>(this, "AShooterCharacter.ClearRidingDino", bFromDino, OverrideUnboardDirection, bForceEvenIfBuffPreventsClear); }
	void ClearRidingDinoAsPassenger(bool bFromDino) { NativeCall<void, bool>(this, "AShooterCharacter.ClearRidingDinoAsPassenger", bFromDino); }
	void ClearSpawnAnim() { NativeCall<void>(this, "AShooterCharacter.ClearSpawnAnim"); }
	void ClientClearTribeRequest_Implementation() { NativeCall<void>(this, "AShooterCharacter.ClientClearTribeRequest_Implementation"); }
	void ClientInviteToAlliance_Implementation(int RequestingTeam, unsigned int AllianceID, const FString * AllianceName, const FString * InviteeName) { NativeCall<void, int, unsigned int, const FString *, const FString *>(this, "AShooterCharacter.ClientInviteToAlliance_Implementation", RequestingTeam, AllianceID, AllianceName, InviteeName); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "AShooterCharacter.ClientMultiUse", ForPC, UseIndex); }
	void ClientNetEndClimbingLadder_Implementation() { NativeCall<void>(this, "AShooterCharacter.ClientNetEndClimbingLadder_Implementation"); }
	void ClientNotifyLevelUp_Implementation() { NativeCall<void>(this, "AShooterCharacter.ClientNotifyLevelUp_Implementation"); }
	void ClientNotifyTribeRequest_Implementation(const FString * RequestTribeName, AShooterCharacter * PlayerCharacter) { NativeCall<void, const FString *, AShooterCharacter *>(this, "AShooterCharacter.ClientNotifyTribeRequest_Implementation", RequestTribeName, PlayerCharacter); }
	void ClientPlayHarvestAnim_Implementation() { NativeCall<void>(this, "AShooterCharacter.ClientPlayHarvestAnim_Implementation"); }
	void ClientReceiveNextWeaponID_Implementation(FItemNetID theItemID) { NativeCall<void, FItemNetID>(this, "AShooterCharacter.ClientReceiveNextWeaponID_Implementation", theItemID); }
	void ClientSetExpectedBase_Implementation(unsigned int BaseID) { NativeCall<void, unsigned int>(this, "AShooterCharacter.ClientSetExpectedBase_Implementation", BaseID); }
	void ClientUpdateTranspondersInfo_Implementation(const TArray<FTransponderInfo> * TranspondersInfo, bool bNewData) { NativeCall<void, const TArray<FTransponderInfo> *, bool>(this, "AShooterCharacter.ClientUpdateTranspondersInfo_Implementation", TranspondersInfo, bNewData); }
	void ClientsSpawnHexagonVFX_Implementation(int NumHexagons, float OverrideCollectSFXVolume, FVector OverrideVfxSpawnLoc, int OverrideHexagonVFXActorCount, bool VFXImmediatelyAttracts) { NativeCall<void, int, float, FVector, int, bool>(this, "AShooterCharacter.ClientsSpawnHexagonVFX_Implementation", NumHexagons, OverrideCollectSFXVolume, OverrideVfxSpawnLoc, OverrideHexagonVFXActorCount, VFXImmediatelyAttracts); }
	void ClosedInventoryUI() { NativeCall<void>(this, "AShooterCharacter.ClosedInventoryUI"); }
	static float ComputeFacialHairMorphTargetValue(bool bFemale, char HairIndex, float PercentOfGrowth) { return NativeCall<float, bool, char, float>(nullptr, "AShooterCharacter.ComputeFacialHairMorphTargetValue", bFemale, HairIndex, PercentOfGrowth); }
	static float ComputeHeadHairMorphTargetValue(bool bFemale, char HairIndex, float PercentOfGrowth) { return NativeCall<float, bool, char, float>(nullptr, "AShooterCharacter.ComputeHeadHairMorphTargetValue", bFemale, HairIndex, PercentOfGrowth); }
	void ControllerLeavingGame(AShooterPlayerController * theController) { NativeCall<void, AShooterPlayerController *>(this, "AShooterCharacter.ControllerLeavingGame", theController); }
	void DedicatedServerBoneFixup() { NativeCall<void>(this, "AShooterCharacter.DedicatedServerBoneFixup"); }
	void DelayGiveDefaultWeapon(float DelayTime) { NativeCall<void, float>(this, "AShooterCharacter.DelayGiveDefaultWeapon", DelayTime); }
	void DestroyInventory() { NativeCall<void>(this, "AShooterCharacter.DestroyInventory"); }
	void Destroyed() { NativeCall<void>(this, "AShooterCharacter.Destroyed"); }
	void DetachFromLadder_Implementation() { NativeCall<void>(this, "AShooterCharacter.DetachFromLadder_Implementation"); }
	void DetachGrapHookCable_Implementation() { NativeCall<void>(this, "AShooterCharacter.DetachGrapHookCable_Implementation"); }
	bool Die(float KillingDamage, const FDamageEvent * DamageEvent, AController * Killer, AActor * DamageCauser) { return NativeCall<bool, float, const FDamageEvent *, AController *, AActor *>(this, "AShooterCharacter.Die", KillingDamage, DamageEvent, Killer, DamageCauser); }
	void DoCharacterDetachment(bool bIncludeRiding, bool bIncludeCarrying, APrimalBuff * BuffToIgnore) { NativeCall<void, bool, bool, APrimalBuff *>(this, "AShooterCharacter.DoCharacterDetachment", bIncludeRiding, bIncludeCarrying, BuffToIgnore); }
	void DoInitialMeshingCheck() { NativeCall<void>(this, "AShooterCharacter.DoInitialMeshingCheck"); }
	void DoSetActorLocation(const FVector * NewLocation) { NativeCall<void, const FVector *>(this, "AShooterCharacter.DoSetActorLocation", NewLocation); }
	void DrawFloatingHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "AShooterCharacter.DrawFloatingHUD", HUD); }
	void DrawTranspondersInfo(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "AShooterCharacter.DrawTranspondersInfo", HUD); }
	void FaceRotation(FRotator NewControlRotation, float DeltaTime, bool bFromController) { NativeCall<void, FRotator, float, bool>(this, "AShooterCharacter.FaceRotation", NewControlRotation, DeltaTime, bFromController); }
	void FinalLoadedFromSaveGame() { NativeCall<void>(this, "AShooterCharacter.FinalLoadedFromSaveGame"); }
	static AShooterCharacter * FindForPlayerController(AShooterPlayerController * aPC) { return NativeCall<AShooterCharacter *, AShooterPlayerController *>(nullptr, "AShooterCharacter.FindForPlayerController", aPC); }
	void FinishSpawnIntro() { NativeCall<void>(this, "AShooterCharacter.FinishSpawnIntro"); }
	void FinishWeaponSwitch() { NativeCall<void>(this, "AShooterCharacter.FinishWeaponSwitch"); }
	void FiredWeapon() { NativeCall<void>(this, "AShooterCharacter.FiredWeapon"); }
	bool ForceCrosshair() { return NativeCall<bool>(this, "AShooterCharacter.ForceCrosshair"); }
	void ForceGiveDefaultWeapon() { NativeCall<void>(this, "AShooterCharacter.ForceGiveDefaultWeapon"); }
	void ForceSleep() { NativeCall<void>(this, "AShooterCharacter.ForceSleep"); }
	void GameStateHandleEvent_Implementation(FName NameParam, FVector VecParam) { NativeCall<void, FName, FVector>(this, "AShooterCharacter.GameStateHandleEvent_Implementation", NameParam, VecParam); }
	float GetActualTargetingFOV(float DefaultTargetingFOV) { return NativeCall<float, float>(this, "AShooterCharacter.GetActualTargetingFOV", DefaultTargetingFOV); }
	UAnimSequence * GetAdditiveStandingAnim(float * OutBlendInTime, float * OutBlendOutTime) { return NativeCall<UAnimSequence *, float *, float *>(this, "AShooterCharacter.GetAdditiveStandingAnim", OutBlendInTime, OutBlendOutTime); }
	bool GetAdditiveStandingAnimNonAdditive() { return NativeCall<bool>(this, "AShooterCharacter.GetAdditiveStandingAnimNonAdditive"); }
	FRotator * GetAimOffsets(FRotator * result, float DeltaTime, FRotator * RootRotOffset, float * RootYawSpeed, float MaxYawAimClamp, FVector * RootLocOffset) { return NativeCall<FRotator *, FRotator *, float, FRotator *, float *, float, FVector *>(this, "AShooterCharacter.GetAimOffsets", result, DeltaTime, RootRotOffset, RootYawSpeed, MaxYawAimClamp, RootLocOffset); }
	bool GetAllAttachedCharsInternal(TSet<APrimalCharacter *,DefaultKeyFuncs<APrimalCharacter *,0>,FDefaultSetAllocator> * AttachedChars, const APrimalCharacter * OriginalChar, const bool bIncludeBased, const bool bIncludePassengers, const bool bIncludeCarried) { return NativeCall<bool, TSet<APrimalCharacter *,DefaultKeyFuncs<APrimalCharacter *,0>,FDefaultSetAllocator> *, const APrimalCharacter *, const bool, const bool, const bool>(this, "AShooterCharacter.GetAllAttachedCharsInternal", AttachedChars, OriginalChar, bIncludeBased, bIncludePassengers, bIncludeCarried); }
	UAnimSequence * GetAlternateStandingAnim(float * OutBlendInTime, float * OutBlendOutTime) { return NativeCall<UAnimSequence *, float *, float *>(this, "AShooterCharacter.GetAlternateStandingAnim", OutBlendInTime, OutBlendOutTime); }
	float GetBaseTargetingDesire(ITargetableInterface * Attacker) { return NativeCall<float, ITargetableInterface *>(this, "AShooterCharacter.GetBaseTargetingDesire", Attacker); }
	APrimalDinoCharacter * GetBasedOnDino() { return NativeCall<APrimalDinoCharacter *>(this, "AShooterCharacter.GetBasedOnDino"); }
	bool GetBlockingShieldOffsets(FVector * OutBlockingShieldFPVTranslation, FRotator * OutBlockingShieldFPVRotation) { return NativeCall<bool, FVector *, FRotator *>(this, "AShooterCharacter.GetBlockingShieldOffsets", OutBlockingShieldFPVTranslation, OutBlockingShieldFPVRotation); }
	float GetCarryingSocketYaw(bool RefreshBones) { return NativeCall<float, bool>(this, "AShooterCharacter.GetCarryingSocketYaw", RefreshBones); }
	float GetCharacterAdditionalHyperthermiaInsulationValue() { return NativeCall<float>(this, "AShooterCharacter.GetCharacterAdditionalHyperthermiaInsulationValue"); }
	float GetCharacterAdditionalHypothermiaInsulationValue() { return NativeCall<float>(this, "AShooterCharacter.GetCharacterAdditionalHypothermiaInsulationValue"); }
	float GetCharacterAdditionalInsulationValueFromStructure(UWorld * theWorld, const FVector * actorLoc, EPrimalItemStat::Type TypeInsulation) { return NativeCall<float, UWorld *, const FVector *, EPrimalItemStat::Type>(this, "AShooterCharacter.GetCharacterAdditionalInsulationValueFromStructure", theWorld, actorLoc, TypeInsulation); }
	FString * GetDebugInfoString(FString * result) { return NativeCall<FString *, FString *>(this, "AShooterCharacter.GetDebugInfoString", result); }
	FString * GetDescriptiveName(FString * result) { return NativeCall<FString *, FString *>(this, "AShooterCharacter.GetDescriptiveName", result); }
	UAnimSequence * GetDinoRidingAnimation() { return NativeCall<UAnimSequence *>(this, "AShooterCharacter.GetDinoRidingAnimation"); }
	UAnimSequence * GetDinoRidingMoveAnimation() { return NativeCall<UAnimSequence *>(this, "AShooterCharacter.GetDinoRidingMoveAnimation"); }
	FLinearColor * GetFacialHairColor(FLinearColor * result) { return NativeCall<FLinearColor *, FLinearColor *>(this, "AShooterCharacter.GetFacialHairColor", result); }
	int GetFacialHairIndex() { return NativeCall<int>(this, "AShooterCharacter.GetFacialHairIndex"); }
	float GetFacialHairMorphTargetValue() { return NativeCall<float>(this, "AShooterCharacter.GetFacialHairMorphTargetValue"); }
	FLinearColor * GetHeadHairColor(FLinearColor * result) { return NativeCall<FLinearColor *, FLinearColor *>(this, "AShooterCharacter.GetHeadHairColor", result); }
	int GetHeadHairIndex() { return NativeCall<int>(this, "AShooterCharacter.GetHeadHairIndex"); }
	float GetHeadHairMorphTargetValue() { return NativeCall<float>(this, "AShooterCharacter.GetHeadHairMorphTargetValue"); }
	float GetInsulationFromItem(const FHitResult * HitOut, EPrimalItemStat::Type TypeInsulation) { return NativeCall<float, const FHitResult *, EPrimalItemStat::Type>(this, "AShooterCharacter.GetInsulationFromItem", HitOut, TypeInsulation); }
	long double GetLastAttackTime() { return NativeCall<long double>(this, "AShooterCharacter.GetLastAttackTime"); }
	FVector * GetLastSweepLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AShooterCharacter.GetLastSweepLocation", result); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "AShooterCharacter.GetLifetimeReplicatedProps", OutLifetimeProps); }
	unsigned __int64 GetLinkedPlayerDataID() { return NativeCall<unsigned __int64>(this, "AShooterCharacter.GetLinkedPlayerDataID"); }
	float GetMaxCursorHUDDistance(AShooterPlayerController * PC) { return NativeCall<float, AShooterPlayerController *>(this, "AShooterCharacter.GetMaxCursorHUDDistance", PC); }
	float GetMaxSpeedModifier() { return NativeCall<float>(this, "AShooterCharacter.GetMaxSpeedModifier"); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "AShooterCharacter.GetMultiUseEntries", ForPC, MultiUseEntries); }
	void GetMultiUseEntriesFromBuffs(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "AShooterCharacter.GetMultiUseEntriesFromBuffs", ForPC, MultiUseEntries); }
	UAnimBlueprintGeneratedClass * GetOverridenAnimBlueprint(UAnimBlueprintGeneratedClass * fromBPClass) { return NativeCall<UAnimBlueprintGeneratedClass *, UAnimBlueprintGeneratedClass *>(this, "AShooterCharacter.GetOverridenAnimBlueprint", fromBPClass); }
	UAnimSequence * GetOverridenAnimSequence(UAnimSequence * AnimSeq) { return NativeCall<UAnimSequence *, UAnimSequence *>(this, "AShooterCharacter.GetOverridenAnimSequence", AnimSeq); }
	UAnimMontage * GetOverridenMontage(UAnimMontage * AnimMontage) { return NativeCall<UAnimMontage *, UAnimMontage *>(this, "AShooterCharacter.GetOverridenMontage", AnimMontage); }
	FRotator * GetPassengerAttachedRotation(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "AShooterCharacter.GetPassengerAttachedRotation", result); }
	FVector * GetPawnViewLocation(FVector * result, bool bAllTransforms) { return NativeCall<FVector *, FVector *, bool>(this, "AShooterCharacter.GetPawnViewLocation", result, bAllTransforms); }
	float GetPercentageOfFacialHairGrowth() { return NativeCall<float>(this, "AShooterCharacter.GetPercentageOfFacialHairGrowth"); }
	float GetPercentageOfHeadHairGrowth() { return NativeCall<float>(this, "AShooterCharacter.GetPercentageOfHeadHairGrowth"); }
	UPrimalPlayerData * GetPlayerData() { return NativeCall<UPrimalPlayerData *>(this, "AShooterCharacter.GetPlayerData"); }
	int GetPlayerHexagonCount() { return NativeCall<int>(this, "AShooterCharacter.GetPlayerHexagonCount"); }
	float GetRecoilMultiplier() { return NativeCall<float>(this, "AShooterCharacter.GetRecoilMultiplier"); }
	APrimalDinoCharacter * GetRidingDino() { return NativeCall<APrimalDinoCharacter *>(this, "AShooterCharacter.GetRidingDino"); }
	float GetRidingDinoAnimSpeedRatio() { return NativeCall<float>(this, "AShooterCharacter.GetRidingDinoAnimSpeedRatio"); }
	UAnimSequence * GetSeatingAnimation() { return NativeCall<UAnimSequence *>(this, "AShooterCharacter.GetSeatingAnimation"); }
	FString * GetShortName(FString * result) { return NativeCall<FString *, FString *>(this, "AShooterCharacter.GetShortName", result); }
	AShooterPlayerController * GetSpawnedForController() { return NativeCall<AShooterPlayerController *>(this, "AShooterCharacter.GetSpawnedForController"); }
	FVector * GetTPVCameraOffset(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AShooterCharacter.GetTPVCameraOffset", result); }
	FVector * GetTalkerLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AShooterCharacter.GetTalkerLocation", result); }
	float GetTargetingDesirability(ITargetableInterface * Attacker) { return NativeCall<float, ITargetableInterface *>(this, "AShooterCharacter.GetTargetingDesirability", Attacker); }
	FVector * GetTargetingLocation(FVector * result, AActor * Attacker) { return NativeCall<FVector *, FVector *, AActor *>(this, "AShooterCharacter.GetTargetingLocation", result, Attacker); }
	float GetTargetingSpeedModifier() { return NativeCall<float>(this, "AShooterCharacter.GetTargetingSpeedModifier"); }
	unsigned int GetUniqueNetIdTypeHash() { return NativeCall<unsigned int>(this, "AShooterCharacter.GetUniqueNetIdTypeHash"); }
	FName * GetWeaponAttachPoint(FName * result) { return NativeCall<FName *, FName *>(this, "AShooterCharacter.GetWeaponAttachPoint", result); }
	void GiveDefaultWeapon(bool bForceGiveDefaultWeapon) { NativeCall<void, bool>(this, "AShooterCharacter.GiveDefaultWeapon", bForceGiveDefaultWeapon); }
	void GiveDefaultWeaponTimer() { NativeCall<void>(this, "AShooterCharacter.GiveDefaultWeaponTimer"); }
	int GiveHexagons(int NumHexagons, int TriggerIndex, float OverrideHexGainFalloffRate, int OverrideHexGainFalloffMin, float OverrideCollectSFXVolume, FVector OverrideVfxSpawnLoc, int OverrideHexagonVFXActorCount, bool VFXImmediatelyAttracts) { return NativeCall<int, int, int, float, int, float, FVector, int, bool>(this, "AShooterCharacter.GiveHexagons", NumHexagons, TriggerIndex, OverrideHexGainFalloffRate, OverrideHexGainFalloffMin, OverrideCollectSFXVolume, OverrideVfxSpawnLoc, OverrideHexagonVFXActorCount, VFXImmediatelyAttracts); }
	int GiveHexagonsOnMissionReward(FName MissionTag, int BonusEarnedHexagons, int HexagonAmountOverride) { return NativeCall<int, FName, int, int>(this, "AShooterCharacter.GiveHexagonsOnMissionReward", MissionTag, BonusEarnedHexagons, HexagonAmountOverride); }
	void GiveMapWeapon() { NativeCall<void>(this, "AShooterCharacter.GiveMapWeapon"); }
	void GivePrimalItemWeapon(UPrimalItem * aPrimalItem) { NativeCall<void, UPrimalItem *>(this, "AShooterCharacter.GivePrimalItemWeapon", aPrimalItem); }
	bool HasAnyOtherBuffsUsingConsolidatedMultiUse(APrimalBuff * BuffToSkip) { return NativeCall<bool, APrimalBuff *>(this, "AShooterCharacter.HasAnyOtherBuffsUsingConsolidatedMultiUse", BuffToSkip); }
	void HideWeapon() { NativeCall<void>(this, "AShooterCharacter.HideWeapon"); }
	bool InterceptUseAction() { return NativeCall<bool>(this, "AShooterCharacter.InterceptUseAction"); }
	bool InterceptWeaponToggle() { return NativeCall<bool>(this, "AShooterCharacter.InterceptWeaponToggle"); }
	void InviteToAlliance(int RequestingTeam, unsigned int AllianceID, FString AllianceName, FString InviterName) { NativeCall<void, int, unsigned int, FString, FString>(this, "AShooterCharacter.InviteToAlliance", RequestingTeam, AllianceID, AllianceName, InviterName); }
	bool IsBlockedByShield(const FHitResult * HitInfo, const FVector * ShotDirection, bool bBlockAllPointDamage) { return NativeCall<bool, const FHitResult *, const FVector *, bool>(this, "AShooterCharacter.IsBlockedByShield", HitInfo, ShotDirection, bBlockAllPointDamage); }
	bool IsBlockingWithShield() { return NativeCall<bool>(this, "AShooterCharacter.IsBlockingWithShield"); }
	bool IsCarryingSomething(bool bNotForRunning) { return NativeCall<bool, bool>(this, "AShooterCharacter.IsCarryingSomething", bNotForRunning); }
	bool IsCharacterHardAttached(bool bIgnoreRiding, bool bIgnoreCarried) { return NativeCall<bool, bool, bool>(this, "AShooterCharacter.IsCharacterHardAttached", bIgnoreRiding, bIgnoreCarried); }
	bool IsControllingBallistaTurret() { return NativeCall<bool>(this, "AShooterCharacter.IsControllingBallistaTurret"); }
	bool IsCrafting() { return NativeCall<bool>(this, "AShooterCharacter.IsCrafting"); }
	bool IsCurrentPassengerLimitCameraYaw() { return NativeCall<bool>(this, "AShooterCharacter.IsCurrentPassengerLimitCameraYaw"); }
	bool IsFiring() { return NativeCall<bool>(this, "AShooterCharacter.IsFiring"); }
	bool IsFirstPerson() { return NativeCall<bool>(this, "AShooterCharacter.IsFirstPerson"); }
	bool IsGameInputAllowed() { return NativeCall<bool>(this, "AShooterCharacter.IsGameInputAllowed"); }
	bool IsGrapplingAttachedToMe() { return NativeCall<bool>(this, "AShooterCharacter.IsGrapplingAttachedToMe"); }
	bool IsGrapplingHardAttached() { return NativeCall<bool>(this, "AShooterCharacter.IsGrapplingHardAttached"); }
	bool IsInMission() { return NativeCall<bool>(this, "AShooterCharacter.IsInMission"); }
	bool IsInSingletonMission() { return NativeCall<bool>(this, "AShooterCharacter.IsInSingletonMission"); }
	static bool IsIndoorsAtLoc(UWorld * theWorld, const FVector * actorLoc) { return NativeCall<bool, UWorld *, const FVector *>(nullptr, "AShooterCharacter.IsIndoorsAtLoc", theWorld, actorLoc); }
	bool IsNearTopOfLadder() { return NativeCall<bool>(this, "AShooterCharacter.IsNearTopOfLadder"); }
	bool IsOnSeatingStructure() { return NativeCall<bool>(this, "AShooterCharacter.IsOnSeatingStructure"); }
	bool IsOutside() { return NativeCall<bool>(this, "AShooterCharacter.IsOutside"); }
	bool IsPlayingInitialSpawnAnim() { return NativeCall<bool>(this, "AShooterCharacter.IsPlayingInitialSpawnAnim"); }
	bool IsPlayingRepawnAnim() { return NativeCall<bool>(this, "AShooterCharacter.IsPlayingRepawnAnim"); }
	bool IsPlayingUpperBodyCallAnimation_Implementation() { return NativeCall<bool>(this, "AShooterCharacter.IsPlayingUpperBodyCallAnimation_Implementation"); }
	bool IsProneOrSitting(bool bIgnoreLockedToSeat) { return NativeCall<bool, bool>(this, "AShooterCharacter.IsProneOrSitting", bIgnoreLockedToSeat); }
	bool IsReadyToUpload(UWorld * theWorld) { return NativeCall<bool, UWorld *>(this, "AShooterCharacter.IsReadyToUpload", theWorld); }
	bool IsRider() { return NativeCall<bool>(this, "AShooterCharacter.IsRider"); }
	bool IsRunning() { return NativeCall<bool>(this, "AShooterCharacter.IsRunning"); }
	bool IsSitting(bool bIgnoreLockedToSeat) { return NativeCall<bool, bool>(this, "AShooterCharacter.IsSitting", bIgnoreLockedToSeat); }
	bool IsSubmerged(bool bDontCheckSwimming, bool bUseHalfThreshold, bool bForceCheck, bool bFromVolumeChange) { return NativeCall<bool, bool, bool, bool, bool>(this, "AShooterCharacter.IsSubmerged", bDontCheckSwimming, bUseHalfThreshold, bForceCheck, bFromVolumeChange); }
	bool IsTargeting() { return NativeCall<bool>(this, "AShooterCharacter.IsTargeting"); }
	bool IsUsingClimbingPick() { return NativeCall<bool>(this, "AShooterCharacter.IsUsingClimbingPick"); }
	bool IsUsingShield() { return NativeCall<bool>(this, "AShooterCharacter.IsUsingShield"); }
	bool IsValidForStatusRecovery() { return NativeCall<bool>(this, "AShooterCharacter.IsValidForStatusRecovery"); }
	bool IsValidUnStasisCaster() { return NativeCall<bool>(this, "AShooterCharacter.IsValidUnStasisCaster"); }
	bool IsVoiceSilent() { return NativeCall<bool>(this, "AShooterCharacter.IsVoiceSilent"); }
	bool IsVoiceTalking() { return NativeCall<bool>(this, "AShooterCharacter.IsVoiceTalking"); }
	bool IsVoiceWhispering() { return NativeCall<bool>(this, "AShooterCharacter.IsVoiceWhispering"); }
	bool IsVoiceYelling() { return NativeCall<bool>(this, "AShooterCharacter.IsVoiceYelling"); }
	bool IsWatchingExplorerNote() { return NativeCall<bool>(this, "AShooterCharacter.IsWatchingExplorerNote"); }
	bool IsWatered() { return NativeCall<bool>(this, "AShooterCharacter.IsWatered"); }
	void LaunchMountedDino() { NativeCall<void>(this, "AShooterCharacter.LaunchMountedDino"); }
	FString * LinkedPlayerIDString(FString * result) { return NativeCall<FString *, FString *>(this, "AShooterCharacter.LinkedPlayerIDString", result); }
	void LocalPossessedBy(APlayerController * ByController) { NativeCall<void, APlayerController *>(this, "AShooterCharacter.LocalPossessedBy", ByController); }
	float ModifyAirControl(float AirControlIn) { return NativeCall<float, float>(this, "AShooterCharacter.ModifyAirControl", AirControlIn); }
	void ModifyFirstPersonCameraLocation(FVector * Loc, float DeltaTime) { NativeCall<void, FVector *, float>(this, "AShooterCharacter.ModifyFirstPersonCameraLocation", Loc, DeltaTime); }
	void NetSetFacialHairPercent_Implementation(float thePercent, int newFacialHairIndex) { NativeCall<void, float, int>(this, "AShooterCharacter.NetSetFacialHairPercent_Implementation", thePercent, newFacialHairIndex); }
	void NetSetHeadHairPercent_Implementation(float thePercent, int newHeadHairIndex) { NativeCall<void, float, int>(this, "AShooterCharacter.NetSetHeadHairPercent_Implementation", thePercent, newHeadHairIndex); }
	void NetSetOverrideFacialHairColor_Implementation(FLinearColor HairColor) { NativeCall<void, FLinearColor>(this, "AShooterCharacter.NetSetOverrideFacialHairColor_Implementation", HairColor); }
	void NetSetOverrideHeadHairColor_Implementation(FLinearColor HairColor) { NativeCall<void, FLinearColor>(this, "AShooterCharacter.NetSetOverrideHeadHairColor_Implementation", HairColor); }
	void NetSimulatedForceUpdateAimedActors_Implementation(float OverrideMaxDistance) { NativeCall<void, float>(this, "AShooterCharacter.NetSimulatedForceUpdateAimedActors_Implementation", OverrideMaxDistance); }
	void NotifyBumpedPawn(APawn * BumpedPawn) { NativeCall<void, APawn *>(this, "AShooterCharacter.NotifyBumpedPawn", BumpedPawn); }
	void NotifyEquippedItems() { NativeCall<void>(this, "AShooterCharacter.NotifyEquippedItems"); }
	void NotifyItemAdded(UPrimalItem * anItem, bool bEquipItem) { NativeCall<void, UPrimalItem *, bool>(this, "AShooterCharacter.NotifyItemAdded", anItem, bEquipItem); }
	void NotifyItemQuantityUpdated(UPrimalItem * anItem, int amount) { NativeCall<void, UPrimalItem *, int>(this, "AShooterCharacter.NotifyItemQuantityUpdated", anItem, amount); }
	void NotifyItemRemoved(UPrimalItem * anItem) { NativeCall<void, UPrimalItem *>(this, "AShooterCharacter.NotifyItemRemoved", anItem); }
	void OnAttachedToSeatingStructure() { NativeCall<void>(this, "AShooterCharacter.OnAttachedToSeatingStructure"); }
	void OnBeginDrag_Implementation(APrimalCharacter * Dragged, int BoneIndex, bool bWithGrapHook) { NativeCall<void, APrimalCharacter *, int, bool>(this, "AShooterCharacter.OnBeginDrag_Implementation", Dragged, BoneIndex, bWithGrapHook); }
	void OnCameraUpdate(const FVector * CameraLocation, const FRotator * CameraRotation) { NativeCall<void, const FVector *, const FRotator *>(this, "AShooterCharacter.OnCameraUpdate", CameraLocation, CameraRotation); }
	void OnDetachedFromSeatingStructure(APrimalStructureSeating * InSeatingStructure) { NativeCall<void, APrimalStructureSeating *>(this, "AShooterCharacter.OnDetachedFromSeatingStructure", InSeatingStructure); }
	void OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) { NativeCall<void, float, float>(this, "AShooterCharacter.OnEndCrouch", HalfHeightAdjust, ScaledHalfHeightAdjust); }
	void OnEndDrag_Implementation() { NativeCall<void>(this, "AShooterCharacter.OnEndDrag_Implementation"); }
	void OnFailedJumped() { NativeCall<void>(this, "AShooterCharacter.OnFailedJumped"); }
	void OnHoldingReload() { NativeCall<void>(this, "AShooterCharacter.OnHoldingReload"); }
	void OnMovementModeChanged(EMovementMode PrevMovementMode, char PreviousCustomMode) { NativeCall<void, EMovementMode, char>(this, "AShooterCharacter.OnMovementModeChanged", PrevMovementMode, PreviousCustomMode); }
	void OnPressCrouch() { NativeCall<void>(this, "AShooterCharacter.OnPressCrouch"); }
	void OnPressCrouchProneToggle() { NativeCall<void>(this, "AShooterCharacter.OnPressCrouchProneToggle"); }
	void OnPressProne() { NativeCall<void>(this, "AShooterCharacter.OnPressProne"); }
	void OnPressReload() { NativeCall<void>(this, "AShooterCharacter.OnPressReload"); }
	void OnPrimalCharacterSleeped() { NativeCall<void>(this, "AShooterCharacter.OnPrimalCharacterSleeped"); }
	void OnReleaseCrouchProneToggle() { NativeCall<void>(this, "AShooterCharacter.OnReleaseCrouchProneToggle"); }
	void OnReleaseReload() { NativeCall<void>(this, "AShooterCharacter.OnReleaseReload"); }
	void OnReload() { NativeCall<void>(this, "AShooterCharacter.OnReload"); }
	void OnRep_CurrentVoiceModeAsUInt32() { NativeCall<void>(this, "AShooterCharacter.OnRep_CurrentVoiceModeAsUInt32"); }
	void OnRep_CurrentWeapon(AShooterWeapon * LastWeapon) { NativeCall<void, AShooterWeapon *>(this, "AShooterCharacter.OnRep_CurrentWeapon", LastWeapon); }
	void OnRep_HatHidden() { NativeCall<void>(this, "AShooterCharacter.OnRep_HatHidden"); }
	void OnRep_RawBoneModifiers() { NativeCall<void>(this, "AShooterCharacter.OnRep_RawBoneModifiers"); }
	void OnRep_VivoxUsername() { NativeCall<void>(this, "AShooterCharacter.OnRep_VivoxUsername"); }
	void OnStartAltFire(bool bFromGamepad) { NativeCall<void, bool>(this, "AShooterCharacter.OnStartAltFire", bFromGamepad); }
	void OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) { NativeCall<void, float, float>(this, "AShooterCharacter.OnStartCrouch", HalfHeightAdjust, ScaledHalfHeightAdjust); }
	void OnStartFire(bool bFromGamepadRight) { NativeCall<void, bool>(this, "AShooterCharacter.OnStartFire", bFromGamepadRight); }
	void OnStartRunning() { NativeCall<void>(this, "AShooterCharacter.OnStartRunning"); }
	void OnStartTargeting(bool bFromGamepadLeft) { NativeCall<void, bool>(this, "AShooterCharacter.OnStartTargeting", bFromGamepadLeft); }
	void OnStopAltFire(bool bFromGamepad) { NativeCall<void, bool>(this, "AShooterCharacter.OnStopAltFire", bFromGamepad); }
	void OnStopFire(bool bFromGamepadRight) { NativeCall<void, bool>(this, "AShooterCharacter.OnStopFire", bFromGamepadRight); }
	void OnStopTargeting(bool bFromGamepadLeft) { NativeCall<void, bool>(this, "AShooterCharacter.OnStopTargeting", bFromGamepadLeft); }
	void OnVoiceTalkingStateChanged(bool talking, bool IsUsingSuperRange) { NativeCall<void, bool, bool>(this, "AShooterCharacter.OnVoiceTalkingStateChanged", talking, IsUsingSuperRange); }
	void OrbitCamOn() { NativeCall<void>(this, "AShooterCharacter.OrbitCamOn"); }
	void OrbitCamToggle() { NativeCall<void>(this, "AShooterCharacter.OrbitCamToggle"); }
	float PlayAnimMontage(UAnimMontage * AnimMontage, float InPlayRate, FName StartSectionName, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer, float BlendInTime, float BlendOutTime) { return NativeCall<float, UAnimMontage *, float, FName, bool, bool, float, float>(this, "AShooterCharacter.PlayAnimMontage", AnimMontage, InPlayRate, StartSectionName, bForceTickPoseAndServerUpdateMesh, bForceTickPoseOnServer, BlendInTime, BlendOutTime); }
	void PlayDrinkingAnimation() { NativeCall<void>(this, "AShooterCharacter.PlayDrinkingAnimation"); }
	void PlayDying(float KillingDamage, const FDamageEvent * DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, const FDamageEvent *, APawn *, AActor *>(this, "AShooterCharacter.PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayEmoteAnimation_Implementation(char EmoteIndex) { NativeCall<void, char>(this, "AShooterCharacter.PlayEmoteAnimation_Implementation", EmoteIndex); }
	void PlayFootstep() { NativeCall<void>(this, "AShooterCharacter.PlayFootstep"); }
	void PlayHatHiddenAnim() { NativeCall<void>(this, "AShooterCharacter.PlayHatHiddenAnim"); }
	void PlayJumpAnim() { NativeCall<void>(this, "AShooterCharacter.PlayJumpAnim"); }
	void PlayLandedAnim() { NativeCall<void>(this, "AShooterCharacter.PlayLandedAnim"); }
	void PlaySpawnAnim() { NativeCall<void>(this, "AShooterCharacter.PlaySpawnAnim"); }
	void PlaySpawnIntro() { NativeCall<void>(this, "AShooterCharacter.PlaySpawnIntro"); }
	void PlayTalkingAnimation() { NativeCall<void>(this, "AShooterCharacter.PlayTalkingAnimation"); }
	void PlayeReloadBallistaAnimation() { NativeCall<void>(this, "AShooterCharacter.PlayeReloadBallistaAnimation"); }
	bool Poop(bool bForcePoop) { return NativeCall<bool, bool>(this, "AShooterCharacter.Poop", bForcePoop); }
	void PossessedBy(AController * InController) { NativeCall<void, AController *>(this, "AShooterCharacter.PossessedBy", InController); }
	void PostInitializeComponents() { NativeCall<void>(this, "AShooterCharacter.PostInitializeComponents"); }
	void PreApplyAccumulatedForces(float DeltaSeconds, FVector * PendingImpulseToApply, FVector * PendingForceToApply) { NativeCall<void, float, FVector *, FVector *>(this, "AShooterCharacter.PreApplyAccumulatedForces", DeltaSeconds, PendingImpulseToApply, PendingForceToApply); }
	void PreInitializeComponents() { NativeCall<void>(this, "AShooterCharacter.PreInitializeComponents"); }
	void PreReplication(IRepChangedPropertyTracker * ChangedPropertyTracker) { NativeCall<void, IRepChangedPropertyTracker *>(this, "AShooterCharacter.PreReplication", ChangedPropertyTracker); }
	void RefreshDefaultAttachments(AActor * UseOtherActor, bool bIsSnapshot) { NativeCall<void, AActor *, bool>(this, "AShooterCharacter.RefreshDefaultAttachments", UseOtherActor, bIsSnapshot); }
	void RefreshRiderSocket() { NativeCall<void>(this, "AShooterCharacter.RefreshRiderSocket"); }
	void RefreshTribeName() { NativeCall<void>(this, "AShooterCharacter.RefreshTribeName"); }
	void ReleaseSeatingStructure(APrimalStructureSeating * InSeatingStructure, FVector PrevRelativeLocation) { NativeCall<void, APrimalStructureSeating *, FVector>(this, "AShooterCharacter.ReleaseSeatingStructure", InSeatingStructure, PrevRelativeLocation); }
	void RemoveAttachments(AActor * From, bool bIsSnapshot) { NativeCall<void, AActor *, bool>(this, "AShooterCharacter.RemoveAttachments", From, bIsSnapshot); }
	void RemoveCharacterSnapshot(UPrimalItem * Item, AActor * From) { NativeCall<void, UPrimalItem *, AActor *>(this, "AShooterCharacter.RemoveCharacterSnapshot", Item, From); }
	void RenamePlayer_Implementation(const FString * NewName) { NativeCall<void, const FString *>(this, "AShooterCharacter.RenamePlayer_Implementation", NewName); }
	void ReplicateVoiceModeToClients() { NativeCall<void>(this, "AShooterCharacter.ReplicateVoiceModeToClients"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "AShooterCharacter.Serialize", Ar); }
	void ServerCallAggressive_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerCallAggressive_Implementation"); }
	void ServerCallAttackTarget_Implementation(AActor * TheTarget) { NativeCall<void, AActor *>(this, "AShooterCharacter.ServerCallAttackTarget_Implementation", TheTarget); }
	void ServerCallFollowDistanceCycleOne_Implementation(APrimalDinoCharacter * ForDinoChar) { NativeCall<void, APrimalDinoCharacter *>(this, "AShooterCharacter.ServerCallFollowDistanceCycleOne_Implementation", ForDinoChar); }
	void ServerCallFollowOne_Implementation(APrimalDinoCharacter * ForDinoChar) { NativeCall<void, APrimalDinoCharacter *>(this, "AShooterCharacter.ServerCallFollowOne_Implementation", ForDinoChar); }
	void ServerCallFollow_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerCallFollow_Implementation"); }
	void ServerCallLandFlyerOne_Implementation(APrimalDinoCharacter * ForDinoChar) { NativeCall<void, APrimalDinoCharacter *>(this, "AShooterCharacter.ServerCallLandFlyerOne_Implementation", ForDinoChar); }
	void ServerCallMoveTo_Implementation(FVector MoveToLoc) { NativeCall<void, FVector>(this, "AShooterCharacter.ServerCallMoveTo_Implementation", MoveToLoc); }
	void ServerCallNeutral_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerCallNeutral_Implementation"); }
	void ServerCallPassiveFlee_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerCallPassiveFlee_Implementation"); }
	void ServerCallPassive_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerCallPassive_Implementation"); }
	void ServerCallSetAggressive_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerCallSetAggressive_Implementation"); }
	void ServerCallStayOne_Implementation(APrimalDinoCharacter * ForDinoChar) { NativeCall<void, APrimalDinoCharacter *>(this, "AShooterCharacter.ServerCallStayOne_Implementation", ForDinoChar); }
	void ServerCallStay_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerCallStay_Implementation"); }
	void ServerCheckDrinkingWater_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerCheckDrinkingWater_Implementation"); }
	void ServerClearSwitchingWeapon_Implementation(bool bOnlyIfDefaultWeapon, bool bClientRequestNextWeaponID) { NativeCall<void, bool, bool>(this, "AShooterCharacter.ServerClearSwitchingWeapon_Implementation", bOnlyIfDefaultWeapon, bClientRequestNextWeaponID); }
	void ServerDetachGrapHookCable_Implementation(bool bDoUpwardsJump, float UpwardsJumpYaw) { NativeCall<void, bool, float>(this, "AShooterCharacter.ServerDetachGrapHookCable_Implementation", bDoUpwardsJump, UpwardsJumpYaw); }
	void ServerFireBallistaProjectile_Implementation(FVector Origin, FVector_NetQuantizeNormal ShootDir) { NativeCall<void, FVector, FVector_NetQuantizeNormal>(this, "AShooterCharacter.ServerFireBallistaProjectile_Implementation", Origin, ShootDir); }
	void ServerForceUpdatedAimedActors(float OverrideMaxDistance, bool bReplicateToSimulatedClients) { NativeCall<void, float, bool>(this, "AShooterCharacter.ServerForceUpdatedAimedActors", OverrideMaxDistance, bReplicateToSimulatedClients); }
	void ServerGiveDefaultWeapon_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerGiveDefaultWeapon_Implementation"); }
	void ServerLaunchMountedDino_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerLaunchMountedDino_Implementation"); }
	void ServerNetEndClimbingLadder_Implementation(bool bIsClimbOver, FVector ClimbOverLoc, float RightDir) { NativeCall<void, bool, FVector, float>(this, "AShooterCharacter.ServerNetEndClimbingLadder_Implementation", bIsClimbOver, ClimbOverLoc, RightDir); }
	void ServerNotifyBallistaShot_Implementation(FHitResult Impact, FVector_NetQuantizeNormal ShootDir) { NativeCall<void, FHitResult, FVector_NetQuantizeNormal>(this, "AShooterCharacter.ServerNotifyBallistaShot_Implementation", Impact, ShootDir); }
	void ServerPlayFireBallistaAnimation_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerPlayFireBallistaAnimation_Implementation"); }
	void ServerPrepareMountedDinoForLaunch_Implementation(FVector viewLoc, FVector viewDir) { NativeCall<void, FVector, FVector>(this, "AShooterCharacter.ServerPrepareMountedDinoForLaunch_Implementation", viewLoc, viewDir); }
	void ServerReleaseGrapHookCable_Implementation(bool bReleasing) { NativeCall<void, bool>(this, "AShooterCharacter.ServerReleaseGrapHookCable_Implementation", bReleasing); }
	void ServerRequestHexagonTrade_Implementation(int RequestedTradableItemIndex, int Quantity) { NativeCall<void, int, int>(this, "AShooterCharacter.ServerRequestHexagonTrade_Implementation", RequestedTradableItemIndex, Quantity); }
	void ServerSeatingStructureAction_Implementation(char ActionNumber) { NativeCall<void, char>(this, "AShooterCharacter.ServerSeatingStructureAction_Implementation", ActionNumber); }
	void ServerSetBallistaNewRotation_Implementation(float Pitch, float Yaw) { NativeCall<void, float, float>(this, "AShooterCharacter.ServerSetBallistaNewRotation_Implementation", Pitch, Yaw); }
	void ServerSetBallistaTargeting_Implementation(bool StartTargeting) { NativeCall<void, bool>(this, "AShooterCharacter.ServerSetBallistaTargeting_Implementation", StartTargeting); }
	void ServerSetIsVoiceActive_Implementation(bool IsActive) { NativeCall<void, bool>(this, "AShooterCharacter.ServerSetIsVoiceActive_Implementation", IsActive); }
	void ServerSetTargeting_Implementation(bool bNewTargeting) { NativeCall<void, bool>(this, "AShooterCharacter.ServerSetTargeting_Implementation", bNewTargeting); }
	void ServerSetViewingInventory_Implementation(bool bIsViewing) { NativeCall<void, bool>(this, "AShooterCharacter.ServerSetViewingInventory_Implementation", bIsViewing); }
	void ServerStartSurfaceCameraForPassenger_Implementation(float yaw, float roll, float pitch, bool bShouldInvertInput) { NativeCall<void, float, float, float, bool>(this, "AShooterCharacter.ServerStartSurfaceCameraForPassenger_Implementation", yaw, roll, pitch, bShouldInvertInput); }
	void ServerStopFireBallista_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerStopFireBallista_Implementation"); }
	void ServerSwitchBallistaAmmo_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerSwitchBallistaAmmo_Implementation"); }
	void ServerSwitchMap_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerSwitchMap_Implementation"); }
	void ServerToClientsPlayFireBallistaAnimation_Implementation() { NativeCall<void>(this, "AShooterCharacter.ServerToClientsPlayFireBallistaAnimation_Implementation"); }
	void ServerUpdateCurrentVoiceModeAsUInt32_Implementation(unsigned int NewValue) { NativeCall<void, unsigned int>(this, "AShooterCharacter.ServerUpdateCurrentVoiceModeAsUInt32_Implementation", NewValue); }
	void SetActorHiddenInGame(bool bNewHidden) { NativeCall<void, bool>(this, "AShooterCharacter.SetActorHiddenInGame", bNewHidden); }
	void SetAutoPlayer(bool bEnable) { NativeCall<void, bool>(this, "AShooterCharacter.SetAutoPlayer", bEnable); }
	void SetCameraMode(bool bFirstperson, bool bIgnoreSettingFirstPersonRiding, bool bForce) { NativeCall<void, bool, bool, bool>(this, "AShooterCharacter.SetCameraMode", bFirstperson, bIgnoreSettingFirstPersonRiding, bForce); }
	void SetCarriedPitchYaw_Implementation(float NewCarriedPitch, float NewCarriedYaw) { NativeCall<void, float, float>(this, "AShooterCharacter.SetCarriedPitchYaw_Implementation", NewCarriedPitch, NewCarriedYaw); }
	void SetCarryingDino(APrimalDinoCharacter * aDino) { NativeCall<void, APrimalDinoCharacter *>(this, "AShooterCharacter.SetCarryingDino", aDino); }
	void SetCharacterMeshesMaterialScalarParamValue(FName ParamName, float Value) { NativeCall<void, FName, float>(this, "AShooterCharacter.SetCharacterMeshesMaterialScalarParamValue", ParamName, Value); }
	void SetCurrentVoiceMode(EVoiceMode Value) { NativeCall<void, EVoiceMode>(this, "AShooterCharacter.SetCurrentVoiceMode", Value); }
	void SetCurrentWeapon(AShooterWeapon * NewWeapon, AShooterWeapon * LastWeapon) { NativeCall<void, AShooterWeapon *, AShooterWeapon *>(this, "AShooterCharacter.SetCurrentWeapon", NewWeapon, LastWeapon); }
	void SetExpectedBase(APrimalStructure * BaseStructure) { NativeCall<void, APrimalStructure *>(this, "AShooterCharacter.SetExpectedBase", BaseStructure); }
	bool SetPlayerHexagonCount(int NewHexagonCount) { return NativeCall<bool, int>(this, "AShooterCharacter.SetPlayerHexagonCount", NewHexagonCount); }
	void SetPreventEquipAllWeapons(const bool bPrevent) { NativeCall<void, const bool>(this, "AShooterCharacter.SetPreventEquipAllWeapons", bPrevent); }
	void SetRagdollPhysics(bool bUseRagdollLocationOffset, bool bForceRecreateBones, bool bForLoading) { NativeCall<void, bool, bool, bool>(this, "AShooterCharacter.SetRagdollPhysics", bUseRagdollLocationOffset, bForceRecreateBones, bForLoading); }
	void SetRidingDino(APrimalDinoCharacter * aDino) { NativeCall<void, APrimalDinoCharacter *>(this, "AShooterCharacter.SetRidingDino", aDino); }
	void SetRidingDinoAsPassenger(APrimalDinoCharacter * aDino, const FSaddlePassengerSeatDefinition * SeatDefinition) { NativeCall<void, APrimalDinoCharacter *, const FSaddlePassengerSeatDefinition *>(this, "AShooterCharacter.SetRidingDinoAsPassenger", aDino, SeatDefinition); }
	void SetSleeping(bool bSleeping, bool bUseRagdollLocationOffset) { NativeCall<void, bool, bool>(this, "AShooterCharacter.SetSleeping", bSleeping, bUseRagdollLocationOffset); }
	void SetTargeting(bool bNewTargeting) { NativeCall<void, bool>(this, "AShooterCharacter.SetTargeting", bNewTargeting); }
	void SetupPlayerInputComponent(UInputComponent * InputComponent) { NativeCall<void, UInputComponent *>(this, "AShooterCharacter.SetupPlayerInputComponent", InputComponent); }
	bool ShouldReplicateRotPitch() { return NativeCall<bool>(this, "AShooterCharacter.ShouldReplicateRotPitch"); }
	void ShowWeapon() { NativeCall<void>(this, "AShooterCharacter.ShowWeapon"); }
	void StartCameraTransition(float Duration) { NativeCall<void, float>(this, "AShooterCharacter.StartCameraTransition", Duration); }
	void StartWeaponSwitch(UPrimalItem * aPrimalItem, bool bDontClearLastWeapon) { NativeCall<void, UPrimalItem *, bool>(this, "AShooterCharacter.StartWeaponSwitch", aPrimalItem, bDontClearLastWeapon); }
	void StartedFiringWeapon(bool bPrimaryFire) { NativeCall<void, bool>(this, "AShooterCharacter.StartedFiringWeapon", bPrimaryFire); }
	void StasisingCharacter() { NativeCall<void>(this, "AShooterCharacter.StasisingCharacter"); }
	void SwitchMap() { NativeCall<void>(this, "AShooterCharacter.SwitchMap"); }
	void SyncGrapHookDistance_Implementation(float Distance) { NativeCall<void, float>(this, "AShooterCharacter.SyncGrapHookDistance_Implementation", Distance); }
	void TakeSeatingStructure(APrimalStructureSeating * InSeatingStructure, int SeatNumber, bool bLockedToSeat) { NativeCall<void, APrimalStructureSeating *, int, bool>(this, "AShooterCharacter.TakeSeatingStructure", InSeatingStructure, SeatNumber, bLockedToSeat); }
	bool TeleportTo(const FVector * DestLocation, const FRotator * DestRotation, bool bIsATest, bool bNoCheck) { return NativeCall<bool, const FVector *, const FRotator *, bool, bool>(this, "AShooterCharacter.TeleportTo", DestLocation, DestRotation, bIsATest, bNoCheck); }
	void TempDampenInputAcceleration() { NativeCall<void>(this, "AShooterCharacter.TempDampenInputAcceleration"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterCharacter.Tick", DeltaSeconds); }
	void ToggleWeapon() { NativeCall<void>(this, "AShooterCharacter.ToggleWeapon"); }
	bool TryAccessInventory() { return NativeCall<bool>(this, "AShooterCharacter.TryAccessInventory"); }
	void TryCutEnemyGrapplingCable() { NativeCall<void>(this, "AShooterCharacter.TryCutEnemyGrapplingCable"); }
	void TryGiveGenesisSeasonPassItems(int AppID) { NativeCall<void, int>(this, "AShooterCharacter.TryGiveGenesisSeasonPassItems", AppID); }
	void TryLaunchMountedDino() { NativeCall<void>(this, "AShooterCharacter.TryLaunchMountedDino"); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "AShooterCharacter.TryMultiUse", ForPC, UseIndex); }
	void UnlockHeadPosition() { NativeCall<void>(this, "AShooterCharacter.UnlockHeadPosition"); }
	void Unstasis() { NativeCall<void>(this, "AShooterCharacter.Unstasis"); }
	void UpdateAutoFire() { NativeCall<void>(this, "AShooterCharacter.UpdateAutoFire"); }
	void UpdateAutoJump() { NativeCall<void>(this, "AShooterCharacter.UpdateAutoJump"); }
	void UpdateAutoMove() { NativeCall<void>(this, "AShooterCharacter.UpdateAutoMove"); }
	void UpdateAutoPlayer() { NativeCall<void>(this, "AShooterCharacter.UpdateAutoPlayer"); }
	void UpdateAutoTurn() { NativeCall<void>(this, "AShooterCharacter.UpdateAutoTurn"); }
	void UpdateCarriedLocationAndRotation(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterCharacter.UpdateCarriedLocationAndRotation", DeltaSeconds); }
	void UpdateExpectedBase() { NativeCall<void>(this, "AShooterCharacter.UpdateExpectedBase"); }
	void UpdateGrapHook(float DeltaSeconds) { NativeCall<void, float>(this, "AShooterCharacter.UpdateGrapHook", DeltaSeconds); }
	void UpdateHair() { NativeCall<void>(this, "AShooterCharacter.UpdateHair"); }
	void UpdatePawnMeshes(bool bForceThirdPerson, bool bForceFlush) { NativeCall<void, bool, bool>(this, "AShooterCharacter.UpdatePawnMeshes", bForceThirdPerson, bForceFlush); }
	void UpdateSwimmingState() { NativeCall<void>(this, "AShooterCharacter.UpdateSwimmingState"); }
	void UpdateTransponders() { NativeCall<void>(this, "AShooterCharacter.UpdateTransponders"); }
	bool UseAdditiveStandingAnim() { return NativeCall<bool>(this, "AShooterCharacter.UseAdditiveStandingAnim"); }
	bool UseAltAimOffsetAnim() { return NativeCall<bool>(this, "AShooterCharacter.UseAltAimOffsetAnim"); }
	bool UseAlternateStandingAnim() { return NativeCall<bool>(this, "AShooterCharacter.UseAlternateStandingAnim"); }
	bool ValidToRestoreForPC(AShooterPlayerController * aPC) { return NativeCall<bool, AShooterPlayerController *>(this, "AShooterCharacter.ValidToRestoreForPC", aPC); }
	void WasPushed(ACharacter * ByOtherCharacter) { NativeCall<void, ACharacter *>(this, "AShooterCharacter.WasPushed", ByOtherCharacter); }
	void WeaponEquipped(AShooterWeapon * NewWeapon) { NativeCall<void, AShooterWeapon *>(this, "AShooterCharacter.WeaponEquipped", NewWeapon); }
	void WeaponUnequipped(AShooterWeapon * OldWeapon) { NativeCall<void, AShooterWeapon *>(this, "AShooterCharacter.WeaponUnequipped", OldWeapon); }
	void ZoomIn() { NativeCall<void>(this, "AShooterCharacter.ZoomIn"); }
	void ZoomOut() { NativeCall<void>(this, "AShooterCharacter.ZoomOut"); }
	EVoiceMode GetVoiceModeForCullingTests() { return NativeCall<EVoiceMode>(this, "AShooterCharacter.GetVoiceModeForCullingTests"); }
	EVoiceMode GetCurrentVoiceMode() { return NativeCall<EVoiceMode>(this, "AShooterCharacter.GetCurrentVoiceMode"); }
	void SetVivoxUsername(const FString * Value) { NativeCall<void, const FString *>(this, "AShooterCharacter.SetVivoxUsername", Value); }
	void AttachToLadder(USceneComponent * Parent) { NativeCall<void, USceneComponent *>(this, "AShooterCharacter.AttachToLadder", Parent); }
	FVector * BPGetHealthBarColor(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AShooterCharacter.BPGetHealthBarColor", result); }
	int BPGetPlayerHexagonCount() { return NativeCall<int>(this, "AShooterCharacter.BPGetPlayerHexagonCount"); }
	void BPSetFirstPersonMasterPoseComponent(USkeletalMeshComponent * firstPersonMasterPosecomponent) { NativeCall<void, USkeletalMeshComponent *>(this, "AShooterCharacter.BPSetFirstPersonMasterPoseComponent", firstPersonMasterPosecomponent); }
	bool BPSetPlayerHexagonCount(int NewHexagonCount) { return NativeCall<bool, int>(this, "AShooterCharacter.BPSetPlayerHexagonCount", NewHexagonCount); }
	void BPSetupFirstPersonHandsMesh() { NativeCall<void>(this, "AShooterCharacter.BPSetupFirstPersonHandsMesh"); }
	void BPUnlockedAllExplorerNotes() { NativeCall<void>(this, "AShooterCharacter.BPUnlockedAllExplorerNotes"); }
	void ClientClearTribeRequest() { NativeCall<void>(this, "AShooterCharacter.ClientClearTribeRequest"); }
	void ClientInviteToAlliance(int RequestingTeam, unsigned int AllianceID, const FString * AllianceName, const FString * InviteeName) { NativeCall<void, int, unsigned int, const FString *, const FString *>(this, "AShooterCharacter.ClientInviteToAlliance", RequestingTeam, AllianceID, AllianceName, InviteeName); }
	void ClientNetEndClimbingLadder() { NativeCall<void>(this, "AShooterCharacter.ClientNetEndClimbingLadder"); }
	void ClientNotifyTribeRequest(const FString * RequestTribeName, AShooterCharacter * PlayerCharacter) { NativeCall<void, const FString *, AShooterCharacter *>(this, "AShooterCharacter.ClientNotifyTribeRequest", RequestTribeName, PlayerCharacter); }
	void ClientPlayHarvestAnim() { NativeCall<void>(this, "AShooterCharacter.ClientPlayHarvestAnim"); }
	void ClientReceiveNextWeaponID(FItemNetID theItemID) { NativeCall<void, FItemNetID>(this, "AShooterCharacter.ClientReceiveNextWeaponID", theItemID); }
	void ClientSetExpectedBase(unsigned int BaseID) { NativeCall<void, unsigned int>(this, "AShooterCharacter.ClientSetExpectedBase", BaseID); }
	void ClientUpdateTranspondersInfo(const TArray<FTransponderInfo> * TranspondersInfo, bool bNewData) { NativeCall<void, const TArray<FTransponderInfo> *, bool>(this, "AShooterCharacter.ClientUpdateTranspondersInfo", TranspondersInfo, bNewData); }
	void ClientsSpawnHexagonVFX(int NumHexagons, float OverrideCollectSFXVolume, FVector OverrideVfxSpawnLoc, int OverrideHexagonVFXActorCount, bool VFXImmediatelyAttracts) { NativeCall<void, int, float, FVector, int, bool>(this, "AShooterCharacter.ClientsSpawnHexagonVFX", NumHexagons, OverrideCollectSFXVolume, OverrideVfxSpawnLoc, OverrideHexagonVFXActorCount, VFXImmediatelyAttracts); }
	void DetachFromLadder() { NativeCall<void>(this, "AShooterCharacter.DetachFromLadder"); }
	void DetachGrapHookCable() { NativeCall<void>(this, "AShooterCharacter.DetachGrapHookCable"); }
	void GameStateHandleEvent(FName NameParam, FVector VecParam) { NativeCall<void, FName, FVector>(this, "AShooterCharacter.GameStateHandleEvent", NameParam, VecParam); }
	bool IsPlayingUpperBodyCallAnimation() { return NativeCall<bool>(this, "AShooterCharacter.IsPlayingUpperBodyCallAnimation"); }
	void NetSetFacialHairPercent(float thePercent, int newFacialHairIndex) { NativeCall<void, float, int>(this, "AShooterCharacter.NetSetFacialHairPercent", thePercent, newFacialHairIndex); }
	void NetSetHeadHairPercent(float thePercent, int newHeadHairIndex) { NativeCall<void, float, int>(this, "AShooterCharacter.NetSetHeadHairPercent", thePercent, newHeadHairIndex); }
	void NetSimulatedForceUpdateAimedActors(float OverrideMaxDistance) { NativeCall<void, float>(this, "AShooterCharacter.NetSimulatedForceUpdateAimedActors", OverrideMaxDistance); }
	void OnWeaponEquipped(AShooterWeapon * NewWeapon) { NativeCall<void, AShooterWeapon *>(this, "AShooterCharacter.OnWeaponEquipped", NewWeapon); }
	void OnWeaponUnequipped(AShooterWeapon * OldWeapon) { NativeCall<void, AShooterWeapon *>(this, "AShooterCharacter.OnWeaponUnequipped", OldWeapon); }
	void PlayEmoteAnimation(char EmoteIndex) { NativeCall<void, char>(this, "AShooterCharacter.PlayEmoteAnimation", EmoteIndex); }
	void RenamePlayer(const FString * NewName) { NativeCall<void, const FString *>(this, "AShooterCharacter.RenamePlayer", NewName); }
	void ServerCheckDrinkingWater() { NativeCall<void>(this, "AShooterCharacter.ServerCheckDrinkingWater"); }
	void ServerDetachGrapHookCable(bool bDoUpwardsJump, float UpwardsJumpYaw) { NativeCall<void, bool, float>(this, "AShooterCharacter.ServerDetachGrapHookCable", bDoUpwardsJump, UpwardsJumpYaw); }
	void ServerFireBallistaProjectile(FVector Origin, FVector_NetQuantizeNormal ShootDir) { NativeCall<void, FVector, FVector_NetQuantizeNormal>(this, "AShooterCharacter.ServerFireBallistaProjectile", Origin, ShootDir); }
	void ServerLaunchMountedDino() { NativeCall<void>(this, "AShooterCharacter.ServerLaunchMountedDino"); }
	void ServerNetEndClimbingLadder(bool bIsClimbOver, FVector ClimbOverLoc, float RightDir) { NativeCall<void, bool, FVector, float>(this, "AShooterCharacter.ServerNetEndClimbingLadder", bIsClimbOver, ClimbOverLoc, RightDir); }
	void ServerNotifyBallistaShot(FHitResult Impact, FVector_NetQuantizeNormal ShootDir) { NativeCall<void, FHitResult, FVector_NetQuantizeNormal>(this, "AShooterCharacter.ServerNotifyBallistaShot", Impact, ShootDir); }
	void ServerPlayFireBallistaAnimation() { NativeCall<void>(this, "AShooterCharacter.ServerPlayFireBallistaAnimation"); }
	void ServerPrepareMountedDinoForLaunch(FVector viewLoc, FVector viewDir) { NativeCall<void, FVector, FVector>(this, "AShooterCharacter.ServerPrepareMountedDinoForLaunch", viewLoc, viewDir); }
	void ServerReleaseGrapHookCable(bool bReleasing) { NativeCall<void, bool>(this, "AShooterCharacter.ServerReleaseGrapHookCable", bReleasing); }
	void ServerRequestHexagonTrade(int RequestedTradableItemIndex, int Quantity) { NativeCall<void, int, int>(this, "AShooterCharacter.ServerRequestHexagonTrade", RequestedTradableItemIndex, Quantity); }
	void ServerSeatingStructureAction(char ActionNumber) { NativeCall<void, char>(this, "AShooterCharacter.ServerSeatingStructureAction", ActionNumber); }
	void ServerSetBallistaNewRotation(float Pitch, float Yaw) { NativeCall<void, float, float>(this, "AShooterCharacter.ServerSetBallistaNewRotation", Pitch, Yaw); }
	void ServerSetBallistaTargeting(bool StartTargeting) { NativeCall<void, bool>(this, "AShooterCharacter.ServerSetBallistaTargeting", StartTargeting); }
	void ServerSetIsVoiceActive(bool IsActive) { NativeCall<void, bool>(this, "AShooterCharacter.ServerSetIsVoiceActive", IsActive); }
	void ServerSetViewingInventory(bool bIsViewing) { NativeCall<void, bool>(this, "AShooterCharacter.ServerSetViewingInventory", bIsViewing); }
	void ServerStartSurfaceCameraForPassenger(float yaw, float pitch, float roll, bool bShouldInvertInput) { NativeCall<void, float, float, float, bool>(this, "AShooterCharacter.ServerStartSurfaceCameraForPassenger", yaw, pitch, roll, bShouldInvertInput); }
	void ServerStopFireBallista() { NativeCall<void>(this, "AShooterCharacter.ServerStopFireBallista"); }
	void ServerSwitchBallistaAmmo() { NativeCall<void>(this, "AShooterCharacter.ServerSwitchBallistaAmmo"); }
	void ServerSwitchMap() { NativeCall<void>(this, "AShooterCharacter.ServerSwitchMap"); }
	void ServerToClientsPlayFireBallistaAnimation() { NativeCall<void>(this, "AShooterCharacter.ServerToClientsPlayFireBallistaAnimation"); }
	void ServerUpdateCurrentVoiceModeAsUInt32(unsigned int NewValue) { NativeCall<void, unsigned int>(this, "AShooterCharacter.ServerUpdateCurrentVoiceModeAsUInt32", NewValue); }
	void SetCarriedPitchYaw(float NewCarriedPitch, float NewCarriedYaw) { NativeCall<void, float, float>(this, "AShooterCharacter.SetCarriedPitchYaw", NewCarriedPitch, NewCarriedYaw); }
	void SyncGrapHookDistance(float Distance) { NativeCall<void, float>(this, "AShooterCharacter.SyncGrapHookDistance", Distance); }
};

