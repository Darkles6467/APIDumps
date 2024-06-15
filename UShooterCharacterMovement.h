#pragma once

#include "BaseDeclarations.h"
#include "UPawnMovementComponent.h"
#include "UNavMovementComponent.h"
#include "UMovementComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UCharacterMovementComponent : UPawnMovementComponent
{
	enum EServerMoveType
	{
		DefaultMove = 0x0,
		MoveOnlyRotation = 0x1,
	};

	enum EShrinkCapsuleExtent
	{
		SHRINK_None = 0x0,
		SHRINK_RadiusCustom = 0x1,
		SHRINK_HeightCustom = 0x2,
		SHRINK_AllCustom = 0x3,
	};

	char __padding[0x400L];
	float& MaxStepHeightField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxStepHeight"); }
	float& JumpZVelocityField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.JumpZVelocity"); }
	float& JumpOffJumpZFactorField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.JumpOffJumpZFactor"); }
	bool& bSlipOffLedgesField() { return *GetNativePointerField<bool*>(this, "UCharacterMovementComponent.bSlipOffLedges"); }
	float& LedgeSlipCapsuleRadiusMultiplierField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.LedgeSlipCapsuleRadiusMultiplier"); }
	float& LedgeSlipPushVelocityField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.LedgeSlipPushVelocity"); }
	float& LedgeSlipVelocityBuildUpMultiplierField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.LedgeSlipVelocityBuildUpMultiplier"); }
	float& WalkableFloorAngleField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.WalkableFloorAngle"); }
	float& WalkableFloorZField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.WalkableFloorZ"); }
	long double& TimeLastAppliedImpulseField() { return *GetNativePointerField<long double*>(this, "UCharacterMovementComponent.TimeLastAppliedImpulse"); }
	TEnumAsByte<enum EMovementMode>& MovementModeField() { return *GetNativePointerField<TEnumAsByte<enum EMovementMode>*>(this, "UCharacterMovementComponent.MovementMode"); }
	char& CustomMovementModeField() { return *GetNativePointerField<char*>(this, "UCharacterMovementComponent.CustomMovementMode"); }
	FVector& OldBaseLocationField() { return *GetNativePointerField<FVector*>(this, "UCharacterMovementComponent.OldBaseLocation"); }
	FQuat& OldBaseQuatField() { return *GetNativePointerField<FQuat*>(this, "UCharacterMovementComponent.OldBaseQuat"); }
	long double& LastNonZeroAccelField() { return *GetNativePointerField<long double*>(this, "UCharacterMovementComponent.LastNonZeroAccel"); }
	float& CurrentLedgeSlipPushVelocityField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.CurrentLedgeSlipPushVelocity"); }
	int& LastFrameDisabledFloorBasingField() { return *GetNativePointerField<int*>(this, "UCharacterMovementComponent.LastFrameDisabledFloorBasing"); }
	long double& ForceBigPushingTimeField() { return *GetNativePointerField<long double*>(this, "UCharacterMovementComponent.ForceBigPushingTime"); }
	long double& LastClientMoveTimeField() { return *GetNativePointerField<long double*>(this, "UCharacterMovementComponent.LastClientMoveTime"); }
	float& GravityScaleField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.GravityScale"); }
	float& GroundFrictionField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.GroundFriction"); }
	float& MaxWalkSpeedField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxWalkSpeed"); }
	float& MaxWalkSpeedCrouchedField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxWalkSpeedCrouched"); }
	float& MaxWalkSpeedProneField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxWalkSpeedProne"); }
	float& MaxCustomMovementSpeedField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxCustomMovementSpeed"); }
	float& MaxSwimSpeedField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxSwimSpeed"); }
	float& MaxFlySpeedField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxFlySpeed"); }
	float& LandedPreventRequestedMoveIntervalField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.LandedPreventRequestedMoveInterval"); }
	float& LandedPreventRequestedMoveMinVelocityMagnitudeField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.LandedPreventRequestedMoveMinVelocityMagnitude"); }
	float& MinimumImpulseToApplyField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MinimumImpulseToApply"); }
	long double& LastLandedTimeField() { return *GetNativePointerField<long double*>(this, "UCharacterMovementComponent.LastLandedTime"); }
	float& MaxAccelerationField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxAcceleration"); }
	float& MaxImpulseVelocityMagnitudeField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxImpulseVelocityMagnitude"); }
	float& MaxImpulseVelocityZField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxImpulseVelocityZ"); }
	float& BrakingDecelerationWalkingField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.BrakingDecelerationWalking"); }
	float& BrakingDecelerationFallingField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.BrakingDecelerationFalling"); }
	float& BrakingDecelerationSwimmingField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.BrakingDecelerationSwimming"); }
	float& BrakingDecelerationFlyingField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.BrakingDecelerationFlying"); }
	float& AirControlField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.AirControl"); }
	float& AirControlBoostMultiplierField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.AirControlBoostMultiplier"); }
	float& AirControlBoostVelocityThresholdField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.AirControlBoostVelocityThreshold"); }
	float& FallingLateralFrictionField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.FallingLateralFriction"); }
	float& CrouchedHalfHeightField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.CrouchedHalfHeight"); }
	float& ProneHalfHeightField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.ProneHalfHeight"); }
	float& BuoyancyField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.Buoyancy"); }
	float& PerchRadiusThresholdField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.PerchRadiusThreshold"); }
	float& PerchAdditionalHeightField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.PerchAdditionalHeight"); }
	FRotator& RotationRateField() { return *GetNativePointerField<FRotator*>(this, "UCharacterMovementComponent.RotationRate"); }
	float& MaxOutOfWaterStepHeightField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxOutOfWaterStepHeight"); }
	float& OutofWaterZField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.OutofWaterZ"); }
	float& MassField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.Mass"); }
	float& DinoClientPositionErrorToleranceStoppedField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.DinoClientPositionErrorToleranceStopped"); }
	float& DinoClientPositionErrorToleranceMovingFlyingField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.DinoClientPositionErrorToleranceMovingFlying"); }
	float& PlayerClientPositionErrorToleranceOverrideField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.PlayerClientPositionErrorToleranceOverride"); }
	float& SimulatedTickSkipDistanceSQField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.SimulatedTickSkipDistanceSQ"); }
	bool& bEnablePhysicsInteractionField() { return *GetNativePointerField<bool*>(this, "UCharacterMovementComponent.bEnablePhysicsInteraction"); }
	bool& bTouchForceScaledToMassField() { return *GetNativePointerField<bool*>(this, "UCharacterMovementComponent.bTouchForceScaledToMass"); }
	bool& bPushForceScaledToMassField() { return *GetNativePointerField<bool*>(this, "UCharacterMovementComponent.bPushForceScaledToMass"); }
	bool& bScalePushForceToVelocityField() { return *GetNativePointerField<bool*>(this, "UCharacterMovementComponent.bScalePushForceToVelocity"); }
	float& StandingDownwardForceScaleField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.StandingDownwardForceScale"); }
	float& InitialPushForceFactorField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.InitialPushForceFactor"); }
	float& PushForceFactorField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.PushForceFactor"); }
	float& PushForcePointZOffsetFactorField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.PushForcePointZOffsetFactor"); }
	float& TouchForceFactorField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.TouchForceFactor"); }
	float& MinTouchForceField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MinTouchForce"); }
	float& MaxTouchForceField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxTouchForce"); }
	float& RepulsionForceField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.RepulsionForce"); }
	float& CrouchedSpeedMultiplier_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.CrouchedSpeedMultiplier_DEPRECATED"); }
	FVector& LastUpdateLocationField() { return *GetNativePointerField<FVector*>(this, "UCharacterMovementComponent.LastUpdateLocation"); }
	FVector& MoveStartLocationField() { return *GetNativePointerField<FVector*>(this, "UCharacterMovementComponent.MoveStartLocation"); }
	float& AnalogInputModifierField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.AnalogInputModifier"); }
	float& BackwardsMaxSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.BackwardsMaxSpeedMultiplier"); }
	float& BackwardsMovementDotThresholdField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.BackwardsMovementDotThreshold"); }
	FVector& PendingForceToApplyField() { return *GetNativePointerField<FVector*>(this, "UCharacterMovementComponent.PendingForceToApply"); }
	FVector& PendingImpulseToApplyField() { return *GetNativePointerField<FVector*>(this, "UCharacterMovementComponent.PendingImpulseToApply"); }
	FVector& AccelerationField() { return *GetNativePointerField<FVector*>(this, "UCharacterMovementComponent.Acceleration"); }
	float& MaxSimulationTimeStepField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MaxSimulationTimeStep"); }
	int& MaxSimulationIterationsField() { return *GetNativePointerField<int*>(this, "UCharacterMovementComponent.MaxSimulationIterations"); }
	float& LedgeCheckThresholdField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.LedgeCheckThreshold"); }
	float& JumpOutOfWaterPitchField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.JumpOutOfWaterPitch"); }
	float& UpperImpactNormalScaleField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.UpperImpactNormalScale"); }
	FFindFloorResult& CurrentFloorField() { return *GetNativePointerField<FFindFloorResult*>(this, "UCharacterMovementComponent.CurrentFloor"); }
	TEnumAsByte<enum EMovementMode>& DefaultLandMovementModeField() { return *GetNativePointerField<TEnumAsByte<enum EMovementMode>*>(this, "UCharacterMovementComponent.DefaultLandMovementMode"); }
	TEnumAsByte<enum EMovementMode>& DefaultWaterMovementModeField() { return *GetNativePointerField<TEnumAsByte<enum EMovementMode>*>(this, "UCharacterMovementComponent.DefaultWaterMovementMode"); }
	float& PreventWaterHoppingPlaneOffsetField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.PreventWaterHoppingPlaneOffset"); }
	long double& PreventWaterHopping_LastTimeAtSurfaceField() { return *GetNativePointerField<long double*>(this, "UCharacterMovementComponent.PreventWaterHopping_LastTimeAtSurface"); }
	float& AccelerationFollowsRotationMinDotField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.AccelerationFollowsRotationMinDot"); }
	float& AccelerationFollowsRotationStopDistanceField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.AccelerationFollowsRotationStopDistance"); }
	float& RotationAccelerationField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.RotationAcceleration"); }
	float& RotationBrakingField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.RotationBraking"); }
	float& AngleToStartRotationBrakingField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.AngleToStartRotationBraking"); }
	float& SwimmingAccelZMultiplierField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.SwimmingAccelZMultiplier"); }
	float& TamedSwimmingAccelZMultiplierField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.TamedSwimmingAccelZMultiplier"); }
	bool& bHACKTickedField() { return *GetNativePointerField<bool*>(this, "UCharacterMovementComponent.bHACKTicked"); }
	bool& bHackTestDisableRotationCodeField() { return *GetNativePointerField<bool*>(this, "UCharacterMovementComponent.bHackTestDisableRotationCode"); }
	FVector& LastForcedNetVelocityField() { return *GetNativePointerField<FVector*>(this, "UCharacterMovementComponent.LastForcedNetVelocity"); }
	long double& LastStepUpTimeField() { return *GetNativePointerField<long double*>(this, "UCharacterMovementComponent.LastStepUpTime"); }
	int& BadFloorPenetrationCountField() { return *GetNativePointerField<int*>(this, "UCharacterMovementComponent.BadFloorPenetrationCount"); }
	FVector& AvoidanceLockVelocityField() { return *GetNativePointerField<FVector*>(this, "UCharacterMovementComponent.AvoidanceLockVelocity"); }
	float& AvoidanceLockTimerField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.AvoidanceLockTimer"); }
	long double& LastSkippedMoveTimeField() { return *GetNativePointerField<long double*>(this, "UCharacterMovementComponent.LastSkippedMoveTime"); }
	long double& LastSwimTimeField() { return *GetNativePointerField<long double*>(this, "UCharacterMovementComponent.LastSwimTime"); }
	FRotator& CurrentRotationSpeedField() { return *GetNativePointerField<FRotator*>(this, "UCharacterMovementComponent.CurrentRotationSpeed"); }
	FVector& RequestedVelocityField() { return *GetNativePointerField<FVector*>(this, "UCharacterMovementComponent.RequestedVelocity"); }
	long double& DisableMovementPhysicsUntilTimeField() { return *GetNativePointerField<long double*>(this, "UCharacterMovementComponent.DisableMovementPhysicsUntilTime"); }
	float& LostDeltaTimeField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.LostDeltaTime"); }
	float& LastLostDeltaTimeField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.LastLostDeltaTime"); }
	int& AvoidanceUIDField() { return *GetNativePointerField<int*>(this, "UCharacterMovementComponent.AvoidanceUID"); }
	float& AvoidanceWeightField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.AvoidanceWeight"); }
	FVector& PendingLaunchVelocityField() { return *GetNativePointerField<FVector*>(this, "UCharacterMovementComponent.PendingLaunchVelocity"); }
	TArray<FTraceHandle>& PendingAsyncTracesField() { return *GetNativePointerField<TArray<FTraceHandle>*>(this, "UCharacterMovementComponent.PendingAsyncTraces"); }
	float& MinTimeBetweenTimeStampResetsField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.MinTimeBetweenTimeStampResets"); }
	TArray<FStoredMoveData>& ClientMovedDataField() { return *GetNativePointerField<TArray<FStoredMoveData>*>(this, "UCharacterMovementComponent.ClientMovedData"); }
	FRootMotionMovementParams& RootMotionParamsField() { return *GetNativePointerField<FRootMotionMovementParams*>(this, "UCharacterMovementComponent.RootMotionParams"); }
	bool& bWasSimulatingRootMotionField() { return *GetNativePointerField<bool*>(this, "UCharacterMovementComponent.bWasSimulatingRootMotion"); }
	FVector& LastCheckedFloorAtRelativeLocField() { return *GetNativePointerField<FVector*>(this, "UCharacterMovementComponent.LastCheckedFloorAtRelativeLoc"); }
	float& LastTimeRecievedRotationInputField() { return *GetNativePointerField<float*>(this, "UCharacterMovementComponent.LastTimeRecievedRotationInput"); }

	// Functions

	float GetJumpZVelocity() { return NativeCall<float>(this, "UCharacterMovementComponent.GetJumpZVelocity"); }
	bool HasPredictionData_Client() { return NativeCall<bool>(this, "UCharacterMovementComponent.HasPredictionData_Client"); }
	bool HasPredictionData_Server() { return NativeCall<bool>(this, "UCharacterMovementComponent.HasPredictionData_Server"); }
	bool HasRootMotion() { return NativeCall<bool>(this, "UCharacterMovementComponent.HasRootMotion"); }
	void AddForce(FVector Force) { NativeCall<void, FVector>(this, "UCharacterMovementComponent.AddForce", Force); }
	void AddImpulse(FVector Impulse, bool bVelocityChange, float MassScaleImpulseExponent, bool bOverrideMaxImpulseZ) { NativeCall<void, FVector, bool, float, bool>(this, "UCharacterMovementComponent.AddImpulse", Impulse, bVelocityChange, MassScaleImpulseExponent, bOverrideMaxImpulseZ); }
	void AddRadialForce(const FVector * Origin, float Radius, float Strength, ERadialImpulseFalloff Falloff) { NativeCall<void, const FVector *, float, float, ERadialImpulseFalloff>(this, "UCharacterMovementComponent.AddRadialForce", Origin, Radius, Strength, Falloff); }
	void AddRadialImpulse(const FVector * Origin, float Radius, float Strength, ERadialImpulseFalloff Falloff, bool bVelChange) { NativeCall<void, const FVector *, float, float, ERadialImpulseFalloff, bool>(this, "UCharacterMovementComponent.AddRadialImpulse", Origin, Radius, Strength, Falloff, bVelChange); }
	void AdjustFloorHeight() { NativeCall<void>(this, "UCharacterMovementComponent.AdjustFloorHeight"); }
	void AdjustProxyCapsuleSize() { NativeCall<void>(this, "UCharacterMovementComponent.AdjustProxyCapsuleSize"); }
	FVector * AdjustUpperHemisphereImpact(FVector * result, const FVector * Delta, const FHitResult * Hit) { return NativeCall<FVector *, FVector *, const FVector *, const FHitResult *>(this, "UCharacterMovementComponent.AdjustUpperHemisphereImpact", result, Delta, Hit); }
	void ApplyAccumulatedForces(float DeltaSeconds) { NativeCall<void, float>(this, "UCharacterMovementComponent.ApplyAccumulatedForces", DeltaSeconds); }
	void ApplyImpactPhysicsForces(const FHitResult * Impact, const FVector * ImpactAcceleration, const FVector * ImpactVelocity) { NativeCall<void, const FHitResult *, const FVector *, const FVector *>(this, "UCharacterMovementComponent.ApplyImpactPhysicsForces", Impact, ImpactAcceleration, ImpactVelocity); }
	void ApplyNetworkMovementMode(const char ReceivedMode) { NativeCall<void, const char>(this, "UCharacterMovementComponent.ApplyNetworkMovementMode", ReceivedMode); }
	void ApplyRepulsionForce(float DeltaSeconds) { NativeCall<void, float>(this, "UCharacterMovementComponent.ApplyRepulsionForce", DeltaSeconds); }
	bool ApplyRequestedMove(float DeltaTime, float MaxAccel, float MaxSpeed, float Friction, float BrakingDeceleration, FVector * OutAcceleration, float * OutRequestedSpeed) { return NativeCall<bool, float, float, float, float, float, FVector *, float *>(this, "UCharacterMovementComponent.ApplyRequestedMove", DeltaTime, MaxAccel, MaxSpeed, Friction, BrakingDeceleration, OutAcceleration, OutRequestedSpeed); }
	void ApplyVelocityBraking(float DeltaTime, float Friction, float BrakingDeceleration) { NativeCall<void, float, float, float>(this, "UCharacterMovementComponent.ApplyVelocityBraking", DeltaTime, Friction, BrakingDeceleration); }
	void BeginDestroy() { NativeCall<void>(this, "UCharacterMovementComponent.BeginDestroy"); }
	float BoostAirControl(float DeltaTime, float TickAirControl, const FVector * FallAcceleration) { return NativeCall<float, float, float, const FVector *>(this, "UCharacterMovementComponent.BoostAirControl", DeltaTime, TickAirControl, FallAcceleration); }
	void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration) { NativeCall<void, float, float, bool, float>(this, "UCharacterMovementComponent.CalcVelocity", DeltaTime, Friction, bFluid, BrakingDeceleration); }
	void CallServerMove(const FSavedMove_Character * NewMove, const FSavedMove_Character * OldMove, UCharacterMovementComponent::EServerMoveType MoveType) { NativeCall<void, const FSavedMove_Character *, const FSavedMove_Character *, UCharacterMovementComponent::EServerMoveType>(this, "UCharacterMovementComponent.CallServerMove", NewMove, OldMove, MoveType); }
	bool CanCrouchInCurrentState() { return NativeCall<bool>(this, "UCharacterMovementComponent.CanCrouchInCurrentState"); }
	bool CanStepUp(const FHitResult * Hit) { return NativeCall<bool, const FHitResult *>(this, "UCharacterMovementComponent.CanStepUp", Hit); }
	bool CanStopPathFollowing() { return NativeCall<bool>(this, "UCharacterMovementComponent.CanStopPathFollowing"); }
	bool CanWalkOffLedges() { return NativeCall<bool>(this, "UCharacterMovementComponent.CanWalkOffLedges"); }
	void CapsuleTouched(AActor * Other, UPrimitiveComponent * OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult * SweepResult) { NativeCall<void, AActor *, UPrimitiveComponent *, int, bool, const FHitResult *>(this, "UCharacterMovementComponent.CapsuleTouched", Other, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
	bool CheckLedgeDirection(const FVector * OldLocation, const FVector * SideStep, const FVector * GravDir) { return NativeCall<bool, const FVector *, const FVector *, const FVector *>(this, "UCharacterMovementComponent.CheckLedgeDirection", OldLocation, SideStep, GravDir); }
	bool CheckWaterJump(FVector CheckPoint, FVector * WallNormal) { return NativeCall<bool, FVector, FVector *>(this, "UCharacterMovementComponent.CheckWaterJump", CheckPoint, WallNormal); }
	void ClearBase(bool bNotifyActor) { NativeCall<void, bool>(this, "UCharacterMovementComponent.ClearBase", bNotifyActor); }
	void ClientAckGoodMove_Implementation(float TimeStamp) { NativeCall<void, float>(this, "UCharacterMovementComponent.ClientAckGoodMove_Implementation", TimeStamp); }
	void ClientAdjustPosition_Implementation(float TimeStamp, FVector NewLocation, FVector NewVelocity, UPrimitiveComponent * NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode) { NativeCall<void, float, FVector, FVector, UPrimitiveComponent *, FName, bool, bool, char>(this, "UCharacterMovementComponent.ClientAdjustPosition_Implementation", TimeStamp, NewLocation, NewVelocity, NewBase, NewBaseBoneName, bHasBase, bBaseRelativePosition, ServerMovementMode); }
	void ClientAdjustRootMotionPosition_Implementation(float TimeStamp, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent * ServerBase, FName ServerBaseBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode) { NativeCall<void, float, float, FVector, FVector_NetQuantizeNormal, float, UPrimitiveComponent *, FName, bool, bool, char>(this, "UCharacterMovementComponent.ClientAdjustRootMotionPosition_Implementation", TimeStamp, ServerMontageTrackPosition, ServerLoc, ServerRotation, ServerVelZ, ServerBase, ServerBaseBoneName, bHasBase, bBaseRelativePosition, ServerMovementMode); }
	bool ClientUpdatePositionAfterServerUpdate() { return NativeCall<bool>(this, "UCharacterMovementComponent.ClientUpdatePositionAfterServerUpdate"); }
	void ClientVeryShortAdjustPosition_Implementation(float TimeStamp, FVector NewLoc, UPrimitiveComponent * NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode) { NativeCall<void, float, FVector, UPrimitiveComponent *, FName, bool, bool, char>(this, "UCharacterMovementComponent.ClientVeryShortAdjustPosition_Implementation", TimeStamp, NewLoc, NewBase, NewBaseBoneName, bHasBase, bBaseRelativePosition, ServerMovementMode); }
	float ComputeAnalogInputModifier() { return NativeCall<float>(this, "UCharacterMovementComponent.ComputeAnalogInputModifier"); }
	void ComputeFloorDist(const FVector * CapsuleLocation, float LineDistance, float SweepDistance, FFindFloorResult * OutFloorResult, float SweepRadius, const FHitResult * DownwardSweepResult) { NativeCall<void, const FVector *, float, float, FFindFloorResult *, float, const FHitResult *>(this, "UCharacterMovementComponent.ComputeFloorDist", CapsuleLocation, LineDistance, SweepDistance, OutFloorResult, SweepRadius, DownwardSweepResult); }
	FVector * ComputeGroundMovementDelta(FVector * result, const FVector * Delta, const FHitResult * RampHit, const bool bHitFromLineTrace) { return NativeCall<FVector *, FVector *, const FVector *, const FHitResult *, const bool>(this, "UCharacterMovementComponent.ComputeGroundMovementDelta", result, Delta, RampHit, bHitFromLineTrace); }
	FRotator * ComputeOrientToMovementRotation(FRotator * result, const FRotator * CurrentRotation, float DeltaTime, FRotator * DeltaRotation) { return NativeCall<FRotator *, FRotator *, const FRotator *, float, FRotator *>(this, "UCharacterMovementComponent.ComputeOrientToMovementRotation", result, CurrentRotation, DeltaTime, DeltaRotation); }
	bool ComputePerchResult(const float TestRadius, const FHitResult * InHit, const float InMaxFloorDist, FFindFloorResult * OutPerchFloorResult) { return NativeCall<bool, const float, const FHitResult *, const float, FFindFloorResult *>(this, "UCharacterMovementComponent.ComputePerchResult", TestRadius, InHit, InMaxFloorDist, OutPerchFloorResult); }
	FVector * ComputeSlideVector(FVector * result, const FVector * InDelta, const float Time, const FVector * Normal, const FHitResult * Hit) { return NativeCall<FVector *, FVector *, const FVector *, const float, const FVector *, const FHitResult *>(this, "UCharacterMovementComponent.ComputeSlideVector", result, InDelta, Time, Normal, Hit); }
	FVector * ConstrainInputAcceleration(FVector * result, const FVector * InputAcceleration) { return NativeCall<FVector *, FVector *, const FVector *>(this, "UCharacterMovementComponent.ConstrainInputAcceleration", result, InputAcceleration); }
	void Crouch(bool bClientSimulation) { NativeCall<void, bool>(this, "UCharacterMovementComponent.Crouch", bClientSimulation); }
	void DisableMovement() { NativeCall<void>(this, "UCharacterMovementComponent.DisableMovement"); }
	void DisplayDebug(UCanvas * Canvas, const FDebugDisplayInfo * DebugDisplay, float * YL, float * YPos) { NativeCall<void, UCanvas *, const FDebugDisplayInfo *, float *, float *>(this, "UCharacterMovementComponent.DisplayDebug", Canvas, DebugDisplay, YL, YPos); }
	bool DoJump(bool bReplayingMoves) { return NativeCall<bool, bool>(this, "UCharacterMovementComponent.DoJump", bReplayingMoves); }
	void ExecuteStoredMoves() { NativeCall<void>(this, "UCharacterMovementComponent.ExecuteStoredMoves"); }
	bool FindAirControlImpact(float DeltaTime, float TickAirControl, const FVector * FallAcceleration, FHitResult * OutHitResult) { return NativeCall<bool, float, float, const FVector *, FHitResult *>(this, "UCharacterMovementComponent.FindAirControlImpact", DeltaTime, TickAirControl, FallAcceleration, OutHitResult); }
	void FindFloor(const FVector * CapsuleLocation, FFindFloorResult * OutFloorResult, bool bZeroDelta, const FHitResult * DownwardSweepResult) { NativeCall<void, const FVector *, FFindFloorResult *, bool, const FHitResult *>(this, "UCharacterMovementComponent.FindFloor", CapsuleLocation, OutFloorResult, bZeroDelta, DownwardSweepResult); }
	bool FindGoodSpot(FCollisionShape * CapsuleShape, FVector * Location, const FVector * Movement, int AdditionalTest, ECollisionChannel TraceChannel, const FVector * TraceWorldGeometryFromLocation, bool bSweep, ECollisionChannel NonSweepTraceChannel) { return NativeCall<bool, FCollisionShape *, FVector *, const FVector *, int, ECollisionChannel, const FVector *, bool, ECollisionChannel>(this, "UCharacterMovementComponent.FindGoodSpot", CapsuleShape, Location, Movement, AdditionalTest, TraceChannel, TraceWorldGeometryFromLocation, bSweep, NonSweepTraceChannel); }
	FVector * FindWaterLine(FVector * result, FVector InWater, FVector OutofWater) { return NativeCall<FVector *, FVector *, FVector, FVector>(this, "UCharacterMovementComponent.FindWaterLine", result, InWater, OutofWater); }
	bool FloorSweepTest(FHitResult * OutHit, const FVector * Start, const FVector * End, ECollisionChannel TraceChannel, const FCollisionShape * CollisionShape, const FCollisionQueryParams * Params, const FCollisionResponseParams * ResponseParam) { return NativeCall<bool, FHitResult *, const FVector *, const FVector *, ECollisionChannel, const FCollisionShape *, const FCollisionQueryParams *, const FCollisionResponseParams *>(this, "UCharacterMovementComponent.FloorSweepTest", OutHit, Start, End, TraceChannel, CollisionShape, Params, ResponseParam); }
	void ForcePositionUpdate(float DeltaTime) { NativeCall<void, float>(this, "UCharacterMovementComponent.ForcePositionUpdate", DeltaTime); }
	void ForceReplicationUpdate() { NativeCall<void>(this, "UCharacterMovementComponent.ForceReplicationUpdate"); }
	float GetAirControl(float DeltaTime, float TickAirControl, const FVector * FallAcceleration) { return NativeCall<float, float, float, const FVector *>(this, "UCharacterMovementComponent.GetAirControl", DeltaTime, TickAirControl, FallAcceleration); }
	float GetAnalogInputModifier() { return NativeCall<float>(this, "UCharacterMovementComponent.GetAnalogInputModifier"); }
	FVector * GetBestDirectionOffActor(FVector * result, AActor * BaseActor) { return NativeCall<FVector *, FVector *, AActor *>(this, "UCharacterMovementComponent.GetBestDirectionOffActor", result, BaseActor); }
	FVector * GetCurrentAcceleration(FVector * result) { return NativeCall<FVector *, FVector *>(this, "UCharacterMovementComponent.GetCurrentAcceleration", result); }
	FRotator * GetDeltaRotation(FRotator * result, float DeltaTime) { return NativeCall<FRotator *, FRotator *, float>(this, "UCharacterMovementComponent.GetDeltaRotation", result, DeltaTime); }
	FVector * GetFallingLateralAcceleration(FVector * result, float DeltaTime) { return NativeCall<FVector *, FVector *, float>(this, "UCharacterMovementComponent.GetFallingLateralAcceleration", result, DeltaTime); }
	float GetGravityZ() { return NativeCall<float>(this, "UCharacterMovementComponent.GetGravityZ"); }
	FVector * GetImpartedMovementBaseVelocity(FVector * result) { return NativeCall<FVector *, FVector *>(this, "UCharacterMovementComponent.GetImpartedMovementBaseVelocity", result); }
	float GetMaxAcceleration() { return NativeCall<float>(this, "UCharacterMovementComponent.GetMaxAcceleration"); }
	float GetMaxJumpHeight() { return NativeCall<float>(this, "UCharacterMovementComponent.GetMaxJumpHeight"); }
	float GetMaxSpeed() { return NativeCall<float>(this, "UCharacterMovementComponent.GetMaxSpeed"); }
	float GetModifiedMaxAcceleration() { return NativeCall<float>(this, "UCharacterMovementComponent.GetModifiedMaxAcceleration"); }
	FString * GetMovementName(FString * result) { return NativeCall<FString *, FString *>(this, "UCharacterMovementComponent.GetMovementName", result); }
	float GetNetworkSafeRandomAngleDegrees() { return NativeCall<float>(this, "UCharacterMovementComponent.GetNetworkSafeRandomAngleDegrees"); }
	float GetPerchRadiusThreshold() { return NativeCall<float>(this, "UCharacterMovementComponent.GetPerchRadiusThreshold"); }
	float GetValidPerchRadius() { return NativeCall<float>(this, "UCharacterMovementComponent.GetValidPerchRadius"); }
	void HandleImpact(const FHitResult * Impact, float TimeSlice, const FVector * MoveDelta) { NativeCall<void, const FHitResult *, float, const FVector *>(this, "UCharacterMovementComponent.HandleImpact", Impact, TimeSlice, MoveDelta); }
	bool HandlePendingLaunch() { return NativeCall<bool>(this, "UCharacterMovementComponent.HandlePendingLaunch"); }
	FVector * HandleSlopeBoosting(FVector * result, const FVector * SlideResult, const FVector * Delta, const float Time, const FVector * Normal, const FHitResult * Hit) { return NativeCall<FVector *, FVector *, const FVector *, const FVector *, const float, const FVector *, const FHitResult *>(this, "UCharacterMovementComponent.HandleSlopeBoosting", result, SlideResult, Delta, Time, Normal, Hit); }
	bool HasValidData() { return NativeCall<bool>(this, "UCharacterMovementComponent.HasValidData"); }
	float ImmersionDepth(bool bUseLineTrace) { return NativeCall<float, bool>(this, "UCharacterMovementComponent.ImmersionDepth", bUseLineTrace); }
	bool IsCrouching() { return NativeCall<bool>(this, "UCharacterMovementComponent.IsCrouching"); }
	bool IsFalling() { return NativeCall<bool>(this, "UCharacterMovementComponent.IsFalling"); }
	bool IsFlying() { return NativeCall<bool>(this, "UCharacterMovementComponent.IsFlying"); }
	bool IsFlyingOrControlledFalling() { return NativeCall<bool>(this, "UCharacterMovementComponent.IsFlyingOrControlledFalling"); }
	bool IsMovingOnGround() { return NativeCall<bool>(this, "UCharacterMovementComponent.IsMovingOnGround"); }
	bool IsOnWalkableFloor() { return NativeCall<bool>(this, "UCharacterMovementComponent.IsOnWalkableFloor"); }
	bool IsProne() { return NativeCall<bool>(this, "UCharacterMovementComponent.IsProne"); }
	bool IsSwimming() { return NativeCall<bool>(this, "UCharacterMovementComponent.IsSwimming"); }
	bool IsValidLandingSpot(const FVector * CapsuleLocation, const FHitResult * Hit) { return NativeCall<bool, const FVector *, const FHitResult *>(this, "UCharacterMovementComponent.IsValidLandingSpot", CapsuleLocation, Hit); }
	bool IsWalkable(const FHitResult * Hit) { return NativeCall<bool, const FHitResult *>(this, "UCharacterMovementComponent.IsWalkable", Hit); }
	bool IsWalking() { return NativeCall<bool>(this, "UCharacterMovementComponent.IsWalking"); }
	bool IsWithinEdgeTolerance(const FVector * CapsuleLocation, const FVector * TestImpactPoint, const float CapsuleRadius) { return NativeCall<bool, const FVector *, const FVector *, const float>(this, "UCharacterMovementComponent.IsWithinEdgeTolerance", CapsuleLocation, TestImpactPoint, CapsuleRadius); }
	void JumpOff(AActor * MovementBaseActor) { NativeCall<void, AActor *>(this, "UCharacterMovementComponent.JumpOff", MovementBaseActor); }
	float K2_GetModifiedMaxAcceleration() { return NativeCall<float>(this, "UCharacterMovementComponent.K2_GetModifiedMaxAcceleration"); }
	float K2_GetWalkableFloorAngle() { return NativeCall<float>(this, "UCharacterMovementComponent.K2_GetWalkableFloorAngle"); }
	float K2_GetWalkableFloorZ() { return NativeCall<float>(this, "UCharacterMovementComponent.K2_GetWalkableFloorZ"); }
	void Launch(const FVector * LaunchVel, bool bNoLowerVelocity) { NativeCall<void, const FVector *, bool>(this, "UCharacterMovementComponent.Launch", LaunchVel, bNoLowerVelocity); }
	float LimitAirControl(float DeltaTime, float TickAirControl, const FVector * FallAcceleration, const FHitResult * HitResult) { return NativeCall<float, float, float, const FVector *, const FHitResult *>(this, "UCharacterMovementComponent.LimitAirControl", DeltaTime, TickAirControl, FallAcceleration, HitResult); }
	void MaintainHorizontalGroundVelocity() { NativeCall<void>(this, "UCharacterMovementComponent.MaintainHorizontalGroundVelocity"); }
	void MaybeSaveBaseLocation() { NativeCall<void>(this, "UCharacterMovementComponent.MaybeSaveBaseLocation"); }
	void MaybeUpdateBasedMovement(float DeltaSeconds) { NativeCall<void, float>(this, "UCharacterMovementComponent.MaybeUpdateBasedMovement", DeltaSeconds); }
	bool ModifySavedMoveAcceleration_PostRep(FVector * ModifyServerAccel) { return NativeCall<bool, FVector *>(this, "UCharacterMovementComponent.ModifySavedMoveAcceleration_PostRep", ModifyServerAccel); }
	bool ModifySavedMoveAcceleration_PreRep(FVector * ModifyClientAccel) { return NativeCall<bool, FVector *>(this, "UCharacterMovementComponent.ModifySavedMoveAcceleration_PreRep", ModifyClientAccel); }
	void MoveAlongFloor(const FVector * InVelocity, float DeltaSeconds, UCharacterMovementComponent::FStepDownResult * OutStepDownResult) { NativeCall<void, const FVector *, float, UCharacterMovementComponent::FStepDownResult *>(this, "UCharacterMovementComponent.MoveAlongFloor", InVelocity, DeltaSeconds, OutStepDownResult); }
	void MoveAutonomous(float ClientTimeStamp, float DeltaTime, char CompressedFlags, const FVector * NewAccel) { NativeCall<void, float, float, char, const FVector *>(this, "UCharacterMovementComponent.MoveAutonomous", ClientTimeStamp, DeltaTime, CompressedFlags, NewAccel); }
	void MoveSmooth(const FVector * InVelocity, const float DeltaSeconds, UCharacterMovementComponent::FStepDownResult * OutStepDownResult) { NativeCall<void, const FVector *, const float, UCharacterMovementComponent::FStepDownResult *>(this, "UCharacterMovementComponent.MoveSmooth", InVelocity, DeltaSeconds, OutStepDownResult); }
	bool MoveUpdatedComponentImpl(const FVector * Delta, const FQuat * NewRotation, bool bSweep, FHitResult * OutHit) { return NativeCall<bool, const FVector *, const FQuat *, bool, FHitResult *>(this, "UCharacterMovementComponent.MoveUpdatedComponentImpl", Delta, NewRotation, bSweep, OutHit); }
	FVector * NewFallVelocity(FVector * result, const FVector * InitialVelocity, const FVector * Gravity, float DeltaTime) { return NativeCall<FVector *, FVector *, const FVector *, const FVector *, float>(this, "UCharacterMovementComponent.NewFallVelocity", result, InitialVelocity, Gravity, DeltaTime); }
	void NotifyBumpedPawn(APawn * BumpedPawn) { NativeCall<void, APawn *>(this, "UCharacterMovementComponent.NotifyBumpedPawn", BumpedPawn); }
	void NotifyJumpApex() { NativeCall<void>(this, "UCharacterMovementComponent.NotifyJumpApex"); }
	void OnMovementModeChanged(EMovementMode PreviousMovementMode, char PreviousCustomMode) { NativeCall<void, EMovementMode, char>(this, "UCharacterMovementComponent.OnMovementModeChanged", PreviousMovementMode, PreviousCustomMode); }
	void OnRegister() { NativeCall<void>(this, "UCharacterMovementComponent.OnRegister"); }
	void OnTeleported() { NativeCall<void>(this, "UCharacterMovementComponent.OnTeleported"); }
	void OnUnregister() { NativeCall<void>(this, "UCharacterMovementComponent.OnUnregister"); }
	void PerformAirControl(FVector Direction, float ZDiff) { NativeCall<void, FVector, float>(this, "UCharacterMovementComponent.PerformAirControl", Direction, ZDiff); }
	void PerformAirControlForPathFollowing(FVector Direction, float ZDiff) { NativeCall<void, FVector, float>(this, "UCharacterMovementComponent.PerformAirControlForPathFollowing", Direction, ZDiff); }
	void PerformMovement(float DeltaSeconds) { NativeCall<void, float>(this, "UCharacterMovementComponent.PerformMovement", DeltaSeconds); }
	void PhysCustom(float deltaTime, int Iterations) { NativeCall<void, float, int>(this, "UCharacterMovementComponent.PhysCustom", deltaTime, Iterations); }
	void PhysFalling(float deltaTime, int Iterations) { NativeCall<void, float, int>(this, "UCharacterMovementComponent.PhysFalling", deltaTime, Iterations); }
	void PhysFlying(float deltaTime, int Iterations, float friction, float brakingDeceleration) { NativeCall<void, float, int, float, float>(this, "UCharacterMovementComponent.PhysFlying", deltaTime, Iterations, friction, brakingDeceleration); }
	bool PhysFlyingAsync(float deltaTime, int Iterations, float friction, float brakingDeceleration) { return NativeCall<bool, float, int, float, float>(this, "UCharacterMovementComponent.PhysFlyingAsync", deltaTime, Iterations, friction, brakingDeceleration); }
	void PhysSwimming(float deltaTime, int Iterations) { NativeCall<void, float, int>(this, "UCharacterMovementComponent.PhysSwimming", deltaTime, Iterations); }
	void PhysWalking(float deltaTime, int Iterations) { NativeCall<void, float, int>(this, "UCharacterMovementComponent.PhysWalking", deltaTime, Iterations); }
	bool PhysWalkingAsync(float deltaTime, int Iterations) { return NativeCall<bool, float, int>(this, "UCharacterMovementComponent.PhysWalkingAsync", deltaTime, Iterations); }
	void PhysicsRotation(float DeltaTime) { NativeCall<void, float>(this, "UCharacterMovementComponent.PhysicsRotation", DeltaTime); }
	void PhysicsVolumeChanged(APhysicsVolume * NewVolume) { NativeCall<void, APhysicsVolume *>(this, "UCharacterMovementComponent.PhysicsVolumeChanged", NewVolume); }
	void PostLoad() { NativeCall<void>(this, "UCharacterMovementComponent.PostLoad"); }
	bool ProcessClientTimeStamp(float TimeStamp, FNetworkPredictionData_Server_Character * ServerData) { return NativeCall<bool, float, FNetworkPredictionData_Server_Character *>(this, "UCharacterMovementComponent.ProcessClientTimeStamp", TimeStamp, ServerData); }
	void ProcessLanded(const FHitResult * Hit, float remainingTime, int Iterations) { NativeCall<void, const FHitResult *, float, int>(this, "UCharacterMovementComponent.ProcessLanded", Hit, remainingTime, Iterations); }
	void Prone(bool bClientSimulation) { NativeCall<void, bool>(this, "UCharacterMovementComponent.Prone", bClientSimulation); }
	void ReadjustClientPositionToCurrent(float TimeStamp, FNetworkPredictionData_Server_Character * ServerData) { NativeCall<void, float, FNetworkPredictionData_Server_Character *>(this, "UCharacterMovementComponent.ReadjustClientPositionToCurrent", TimeStamp, ServerData); }
	void ReplicateMoveToServer(float DeltaTime, const FVector * NewAcceleration) { NativeCall<void, float, const FVector *>(this, "UCharacterMovementComponent.ReplicateMoveToServer", DeltaTime, NewAcceleration); }
	void RequestDirectMove(const FVector * MoveVelocity, bool bForceMaxSpeed) { NativeCall<void, const FVector *, bool>(this, "UCharacterMovementComponent.RequestDirectMove", MoveVelocity, bForceMaxSpeed); }
	void ResetPredictionData_Client() { NativeCall<void>(this, "UCharacterMovementComponent.ResetPredictionData_Client"); }
	void ResetPredictionData_Server() { NativeCall<void>(this, "UCharacterMovementComponent.ResetPredictionData_Server"); }
	bool ResolvePenetrationImpl(const FVector * Adjustment, const FHitResult * Hit, const FQuat * NewRotation) { return NativeCall<bool, const FVector *, const FHitResult *, const FQuat *>(this, "UCharacterMovementComponent.ResolvePenetrationImpl", Adjustment, Hit, NewRotation); }
	void RevertMove(const FVector * OldLocation, UPrimitiveComponent * OldBase, const FVector * PreviousBaseLocation, const FFindFloorResult * OldFloor, bool bFailMove) { NativeCall<void, const FVector *, UPrimitiveComponent *, const FVector *, const FFindFloorResult *, bool>(this, "UCharacterMovementComponent.RevertMove", OldLocation, OldBase, PreviousBaseLocation, OldFloor, bFailMove); }
	void SaveBaseLocation() { NativeCall<void>(this, "UCharacterMovementComponent.SaveBaseLocation"); }
	FVector * ScaleInputAcceleration(FVector * result, const FVector * InputAcceleration) { return NativeCall<FVector *, FVector *, const FVector *>(this, "UCharacterMovementComponent.ScaleInputAcceleration", result, InputAcceleration); }
	void SendClientAdjustment() { NativeCall<void>(this, "UCharacterMovementComponent.SendClientAdjustment"); }
	void ServerJumpOutOfWater_Implementation(FVector_NetQuantize100 WallNormal, char JumpFlag) { NativeCall<void, FVector_NetQuantize100, char>(this, "UCharacterMovementComponent.ServerJumpOutOfWater_Implementation", WallNormal, JumpFlag); }
	void ServerMoveDualOnlyRotation_Implementation(float TimeStamp0, unsigned int View0, float TimeStamp, char ClientRoll, unsigned int View) { NativeCall<void, float, unsigned int, float, char, unsigned int>(this, "UCharacterMovementComponent.ServerMoveDualOnlyRotation_Implementation", TimeStamp0, View0, TimeStamp, ClientRoll, View); }
	void ServerMoveDualWithRotation_Implementation(float TimeStamp0, FVector_NetQuantize100 InAccel0, char PendingFlags, unsigned int View0, float TimeStamp, FVector_NetQuantize100 InAccel, FVector_NetQuantize100 ClientLoc, char NewFlags, char ClientRoll, unsigned int View, UPrimitiveComponent * ClientMovementBase, FName ClientBaseBone, char ClientMovementMode, FRotator InRotation0, FRotator InRotation) { NativeCall<void, float, FVector_NetQuantize100, char, unsigned int, float, FVector_NetQuantize100, FVector_NetQuantize100, char, char, unsigned int, UPrimitiveComponent *, FName, char, FRotator, FRotator>(this, "UCharacterMovementComponent.ServerMoveDualWithRotation_Implementation", TimeStamp0, InAccel0, PendingFlags, View0, TimeStamp, InAccel, ClientLoc, NewFlags, ClientRoll, View, ClientMovementBase, ClientBaseBone, ClientMovementMode, InRotation0, InRotation); }
	void ServerMoveDual_Implementation(float TimeStamp0, FVector_NetQuantize100 InAccel0, char PendingFlags, unsigned int View0, float TimeStamp, FVector_NetQuantize100 InAccel, FVector_NetQuantize100 ClientLoc, char NewFlags, char ClientRoll, unsigned int View, UPrimitiveComponent * ClientMovementBase, FName ClientBaseBone, char ClientMovementMode) { NativeCall<void, float, FVector_NetQuantize100, char, unsigned int, float, FVector_NetQuantize100, FVector_NetQuantize100, char, char, unsigned int, UPrimitiveComponent *, FName, char>(this, "UCharacterMovementComponent.ServerMoveDual_Implementation", TimeStamp0, InAccel0, PendingFlags, View0, TimeStamp, InAccel, ClientLoc, NewFlags, ClientRoll, View, ClientMovementBase, ClientBaseBone, ClientMovementMode); }
	void ServerMoveHandleClientError(float TimeStamp, float DeltaTime, const FVector * Accel, const FVector * RelativeClientLoc, UPrimitiveComponent * ClientMovementBase, FName ClientBaseBoneName, char ClientMovementMode) { NativeCall<void, float, float, const FVector *, const FVector *, UPrimitiveComponent *, FName, char>(this, "UCharacterMovementComponent.ServerMoveHandleClientError", TimeStamp, DeltaTime, Accel, RelativeClientLoc, ClientMovementBase, ClientBaseBoneName, ClientMovementMode); }
	void ServerMoveHandleClientErrorForDinos(float TimeStamp, float DeltaTime, const FVector * Accel, const FVector * RelativeClientLoc, UPrimitiveComponent * ClientMovementBase, FName ClientBaseBoneName, char ClientMovementMode, const FRotator * InClientRot) { NativeCall<void, float, float, const FVector *, const FVector *, UPrimitiveComponent *, FName, char, const FRotator *>(this, "UCharacterMovementComponent.ServerMoveHandleClientErrorForDinos", TimeStamp, DeltaTime, Accel, RelativeClientLoc, ClientMovementBase, ClientBaseBoneName, ClientMovementMode, InClientRot); }
	void ServerMoveOldWithRotation_Implementation(float OldTimeStamp, FVector_NetQuantize100 OldAccel, char OldMoveFlags, FRotator OldRotation) { NativeCall<void, float, FVector_NetQuantize100, char, FRotator>(this, "UCharacterMovementComponent.ServerMoveOldWithRotation_Implementation", OldTimeStamp, OldAccel, OldMoveFlags, OldRotation); }
	void ServerMoveOld_Implementation(float OldTimeStamp, FVector_NetQuantize100 OldAccel, char OldMoveFlags) { NativeCall<void, float, FVector_NetQuantize100, char>(this, "UCharacterMovementComponent.ServerMoveOld_Implementation", OldTimeStamp, OldAccel, OldMoveFlags); }
	void ServerMoveOnlyRotation_Implementation(float TimeStamp, char ClientRoll, unsigned int View) { NativeCall<void, float, char, unsigned int>(this, "UCharacterMovementComponent.ServerMoveOnlyRotation_Implementation", TimeStamp, ClientRoll, View); }
	void ServerMoveWithRotation_Implementation(float TimeStamp, FVector_NetQuantize100 InAccel, FVector_NetQuantize100 ClientLoc, char MoveFlags, char ClientRoll, unsigned int View, UPrimitiveComponent * ClientMovementBase, FName ClientBaseBoneName, char ClientMovementMode, FRotator ClientRotation) { NativeCall<void, float, FVector_NetQuantize100, FVector_NetQuantize100, char, char, unsigned int, UPrimitiveComponent *, FName, char, FRotator>(this, "UCharacterMovementComponent.ServerMoveWithRotation_Implementation", TimeStamp, InAccel, ClientLoc, MoveFlags, ClientRoll, View, ClientMovementBase, ClientBaseBoneName, ClientMovementMode, ClientRotation); }
	void ServerMove_Implementation(float TimeStamp, FVector_NetQuantize100 InAccel, FVector_NetQuantize100 ClientLoc, char MoveFlags, char ClientRoll, unsigned int View, UPrimitiveComponent * ClientMovementBase, FName ClientBaseBoneName, char ClientMovementMode) { NativeCall<void, float, FVector_NetQuantize100, FVector_NetQuantize100, char, char, unsigned int, UPrimitiveComponent *, FName, char>(this, "UCharacterMovementComponent.ServerMove_Implementation", TimeStamp, InAccel, ClientLoc, MoveFlags, ClientRoll, View, ClientMovementBase, ClientBaseBoneName, ClientMovementMode); }
	void SetBase(UPrimitiveComponent * NewBase, const FName BoneName, bool bNotifyActor) { NativeCall<void, UPrimitiveComponent *, const FName, bool>(this, "UCharacterMovementComponent.SetBase", NewBase, BoneName, bNotifyActor); }
	void SetDefaultMovementMode() { NativeCall<void>(this, "UCharacterMovementComponent.SetDefaultMovementMode"); }
	void SetMovementMode(EMovementMode NewMovementMode, char NewCustomMode) { NativeCall<void, EMovementMode, char>(this, "UCharacterMovementComponent.SetMovementMode", NewMovementMode, NewCustomMode); }
	void SetPostLandedPhysics(const FHitResult * Hit) { NativeCall<void, const FHitResult *>(this, "UCharacterMovementComponent.SetPostLandedPhysics", Hit); }
	void SetUpdatedComponent(UPrimitiveComponent * NewUpdatedComponent) { NativeCall<void, UPrimitiveComponent *>(this, "UCharacterMovementComponent.SetUpdatedComponent", NewUpdatedComponent); }
	void SetWalkableFloorAngle(float InWalkableFloorAngle) { NativeCall<void, float>(this, "UCharacterMovementComponent.SetWalkableFloorAngle", InWalkableFloorAngle); }
	void SetWalkableFloorZ(float InWalkableFloorZ) { NativeCall<void, float>(this, "UCharacterMovementComponent.SetWalkableFloorZ", InWalkableFloorZ); }
	bool ShouldCheckForValidLandingSpot(float DeltaTime, const FVector * Delta, const FHitResult * Hit) { return NativeCall<bool, float, const FVector *, const FHitResult *>(this, "UCharacterMovementComponent.ShouldCheckForValidLandingSpot", DeltaTime, Delta, Hit); }
	bool ShouldComputePerchResult(const FHitResult * InHit, bool bCheckRadius) { return NativeCall<bool, const FHitResult *, bool>(this, "UCharacterMovementComponent.ShouldComputePerchResult", InHit, bCheckRadius); }
	bool ShouldForceDedicatedTickEveryFrame() { return NativeCall<bool>(this, "UCharacterMovementComponent.ShouldForceDedicatedTickEveryFrame"); }
	bool ShouldJumpOutOfWater(FVector * JumpDir) { return NativeCall<bool, FVector *>(this, "UCharacterMovementComponent.ShouldJumpOutOfWater", JumpDir); }
	void SimulateMovement(float DeltaSeconds) { NativeCall<void, float>(this, "UCharacterMovementComponent.SimulateMovement", DeltaSeconds); }
	void SimulatedTick(float DeltaSeconds) { NativeCall<void, float>(this, "UCharacterMovementComponent.SimulatedTick", DeltaSeconds); }
	float SlideAlongSurface(const FVector * Delta, float Time, const FVector * InNormal, FHitResult * Hit, bool bHandleImpact) { return NativeCall<float, const FVector *, float, const FVector *, FHitResult *, bool>(this, "UCharacterMovementComponent.SlideAlongSurface", Delta, Time, InNormal, Hit, bHandleImpact); }
	void StartFalling(int Iterations, float remainingTime, float timeTick, const FVector * Delta, const FVector * subLoc) { NativeCall<void, int, float, float, const FVector *, const FVector *>(this, "UCharacterMovementComponent.StartFalling", Iterations, remainingTime, timeTick, Delta, subLoc); }
	void StartNewPhysics(float deltaTime, int Iterations) { NativeCall<void, float, int>(this, "UCharacterMovementComponent.StartNewPhysics", deltaTime, Iterations); }
	void StartSwimming(FVector OldLocation, FVector OldVelocity, float timeTick, float remainingTime, int Iterations) { NativeCall<void, FVector, FVector, float, float, int>(this, "UCharacterMovementComponent.StartSwimming", OldLocation, OldVelocity, timeTick, remainingTime, Iterations); }
	bool StepUp(const FVector * GravDir, const FVector * Delta, const FHitResult * InHit, UCharacterMovementComponent::FStepDownResult * OutStepDownResult) { return NativeCall<bool, const FVector *, const FVector *, const FHitResult *, UCharacterMovementComponent::FStepDownResult *>(this, "UCharacterMovementComponent.StepUp", GravDir, Delta, InHit, OutStepDownResult); }
	void StopActiveMovement() { NativeCall<void>(this, "UCharacterMovementComponent.StopActiveMovement"); }
	float Swim(FVector Delta, FHitResult * Hit) { return NativeCall<float, FVector, FHitResult *>(this, "UCharacterMovementComponent.Swim", Delta, Hit); }
	void TickCharacterPose(float DeltaTime) { NativeCall<void, float>(this, "UCharacterMovementComponent.TickCharacterPose", DeltaTime); }
	void TwoWallAdjust(FVector * Delta, const FHitResult * Hit, const FVector * OldHitNormal) { NativeCall<void, FVector *, const FHitResult *, const FVector *>(this, "UCharacterMovementComponent.TwoWallAdjust", Delta, Hit, OldHitNormal); }
	void UnCrouch(bool bClientSimulation, bool bForce) { NativeCall<void, bool, bool>(this, "UCharacterMovementComponent.UnCrouch", bClientSimulation, bForce); }
	void UnProne(bool bClientSimulation, bool bForce) { NativeCall<void, bool, bool>(this, "UCharacterMovementComponent.UnProne", bClientSimulation, bForce); }
	void UpdateBasedMovement(float DeltaSeconds) { NativeCall<void, float>(this, "UCharacterMovementComponent.UpdateBasedMovement", DeltaSeconds); }
	void UpdateBasedRotation(FRotator * FinalRotation, const FRotator * ReducedRotation) { NativeCall<void, FRotator *, const FRotator *>(this, "UCharacterMovementComponent.UpdateBasedRotation", FinalRotation, ReducedRotation); }
	void UpdateFloorFromAdjustment() { NativeCall<void>(this, "UCharacterMovementComponent.UpdateFloorFromAdjustment"); }
	void UpdateFromCompressedFlags(char Flags) { NativeCall<void, char>(this, "UCharacterMovementComponent.UpdateFromCompressedFlags", Flags); }
	void ClientAckGoodMove(float TimeStamp) { NativeCall<void, float>(this, "UCharacterMovementComponent.ClientAckGoodMove", TimeStamp); }
	void ClientAdjustPosition(float TimeStamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent * NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode) { NativeCall<void, float, FVector, FVector, UPrimitiveComponent *, FName, bool, bool, char>(this, "UCharacterMovementComponent.ClientAdjustPosition", TimeStamp, NewLoc, NewVel, NewBase, NewBaseBoneName, bHasBase, bBaseRelativePosition, ServerMovementMode); }
	void ClientVeryShortAdjustPosition(float TimeStamp, FVector NewLoc, UPrimitiveComponent * NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode) { NativeCall<void, float, FVector, UPrimitiveComponent *, FName, bool, bool, char>(this, "UCharacterMovementComponent.ClientVeryShortAdjustPosition", TimeStamp, NewLoc, NewBase, NewBaseBoneName, bHasBase, bBaseRelativePosition, ServerMovementMode); }
	void ServerJumpOutOfWater(FVector_NetQuantize100 WallNormal, char JumpFlag) { NativeCall<void, FVector_NetQuantize100, char>(this, "UCharacterMovementComponent.ServerJumpOutOfWater", WallNormal, JumpFlag); }
	void ServerMove(float TimeStamp, FVector_NetQuantize100 InAccel, FVector_NetQuantize100 ClientLoc, char CompressedMoveFlags, char ClientRoll, unsigned int View, UPrimitiveComponent * ClientMovementBase, FName ClientBaseBoneName, char ClientMovementMode) { NativeCall<void, float, FVector_NetQuantize100, FVector_NetQuantize100, char, char, unsigned int, UPrimitiveComponent *, FName, char>(this, "UCharacterMovementComponent.ServerMove", TimeStamp, InAccel, ClientLoc, CompressedMoveFlags, ClientRoll, View, ClientMovementBase, ClientBaseBoneName, ClientMovementMode); }
	void ServerMoveDual(float TimeStamp0, FVector_NetQuantize100 InAccel0, char PendingFlags, unsigned int View0, float TimeStamp, FVector_NetQuantize100 InAccel, FVector_NetQuantize100 ClientLoc, char NewFlags, char ClientRoll, unsigned int View, UPrimitiveComponent * ClientMovementBase, FName ClientBaseBoneName, char ClientMovementMode) { NativeCall<void, float, FVector_NetQuantize100, char, unsigned int, float, FVector_NetQuantize100, FVector_NetQuantize100, char, char, unsigned int, UPrimitiveComponent *, FName, char>(this, "UCharacterMovementComponent.ServerMoveDual", TimeStamp0, InAccel0, PendingFlags, View0, TimeStamp, InAccel, ClientLoc, NewFlags, ClientRoll, View, ClientMovementBase, ClientBaseBoneName, ClientMovementMode); }
	void ServerMoveDualOnlyRotation(float TimeStamp0, unsigned int View0, float TimeStamp, char ClientRoll, unsigned int View) { NativeCall<void, float, unsigned int, float, char, unsigned int>(this, "UCharacterMovementComponent.ServerMoveDualOnlyRotation", TimeStamp0, View0, TimeStamp, ClientRoll, View); }
	void ServerMoveDualWithRotation(float TimeStamp0, FVector_NetQuantize100 InAccel0, char PendingFlags, unsigned int View0, float TimeStamp, FVector_NetQuantize100 InAccel, FVector_NetQuantize100 ClientLoc, char NewFlags, char ClientRoll, unsigned int View, UPrimitiveComponent * ClientMovementBase, FName ClientBaseBoneName, char ClientMovementMode, FRotator InRotation0, FRotator InRotation) { NativeCall<void, float, FVector_NetQuantize100, char, unsigned int, float, FVector_NetQuantize100, FVector_NetQuantize100, char, char, unsigned int, UPrimitiveComponent *, FName, char, FRotator, FRotator>(this, "UCharacterMovementComponent.ServerMoveDualWithRotation", TimeStamp0, InAccel0, PendingFlags, View0, TimeStamp, InAccel, ClientLoc, NewFlags, ClientRoll, View, ClientMovementBase, ClientBaseBoneName, ClientMovementMode, InRotation0, InRotation); }
	void ServerMoveOld(float OldTimeStamp, FVector_NetQuantize100 OldAccel, char OldMoveFlags) { NativeCall<void, float, FVector_NetQuantize100, char>(this, "UCharacterMovementComponent.ServerMoveOld", OldTimeStamp, OldAccel, OldMoveFlags); }
	void ServerMoveOldWithRotation(float OldTimeStamp, FVector_NetQuantize100 OldAccel, char OldMoveFlags, FRotator OldRotation) { NativeCall<void, float, FVector_NetQuantize100, char, FRotator>(this, "UCharacterMovementComponent.ServerMoveOldWithRotation", OldTimeStamp, OldAccel, OldMoveFlags, OldRotation); }
	void ServerMoveOnlyRotation(float TimeStamp, char ClientRoll, unsigned int View) { NativeCall<void, float, char, unsigned int>(this, "UCharacterMovementComponent.ServerMoveOnlyRotation", TimeStamp, ClientRoll, View); }
	void ServerMoveWithRotation(float TimeStamp, FVector_NetQuantize100 InAccel, FVector_NetQuantize100 ClientLoc, char CompressedMoveFlags, char ClientRoll, unsigned int View, UPrimitiveComponent * ClientMovementBase, FName ClientBaseBoneName, char ClientMovementMode, FRotator ClientRotation) { NativeCall<void, float, FVector_NetQuantize100, FVector_NetQuantize100, char, char, unsigned int, UPrimitiveComponent *, FName, char, FRotator>(this, "UCharacterMovementComponent.ServerMoveWithRotation", TimeStamp, InAccel, ClientLoc, CompressedMoveFlags, ClientRoll, View, ClientMovementBase, ClientBaseBoneName, ClientMovementMode, ClientRotation); }
};

struct UShooterCharacterMovement : UCharacterMovementComponent
{
	char __padding[0x30L];
	long double& LastWaterWalkingNetworkTimeField() { return *GetNativePointerField<long double*>(this, "UShooterCharacterMovement.LastWaterWalkingNetworkTime"); }
	bool& bLastWaterCheckIsRaftField() { return *GetNativePointerField<bool*>(this, "UShooterCharacterMovement.bLastWaterCheckIsRaft"); }
	FVector& MovementModeCustomClimbing_TargetPositionField() { return *GetNativePointerField<FVector*>(this, "UShooterCharacterMovement.MovementModeCustomClimbing_TargetPosition"); }
	FRotator& MovementModeCustomClimbing_TargetRotationField() { return *GetNativePointerField<FRotator*>(this, "UShooterCharacterMovement.MovementModeCustomClimbing_TargetRotation"); }

	// Functions

	void AddImpulse(FVector Impulse, bool bVelocityChange, float MassScaleImpulseExponent, bool bOverrideMaxImpulseZ) { NativeCall<void, FVector, bool, float, bool>(this, "UShooterCharacterMovement.AddImpulse", Impulse, bVelocityChange, MassScaleImpulseExponent, bOverrideMaxImpulseZ); }
	void ApplyAccumulatedForces(float DeltaSeconds) { NativeCall<void, float>(this, "UShooterCharacterMovement.ApplyAccumulatedForces", DeltaSeconds); }
	void BPApplyVelocityBraking(float DeltaTime, float Friction, float BrakingDeceleration, FVector * InOutVelocity) { NativeCall<void, float, float, float, FVector *>(this, "UShooterCharacterMovement.BPApplyVelocityBraking", DeltaTime, Friction, BrakingDeceleration, InOutVelocity); }
	float BP_GetAnalogueInputModifier() { return NativeCall<float>(this, "UShooterCharacterMovement.BP_GetAnalogueInputModifier"); }
	void BP_PerformMovement(float DeltaTime) { NativeCall<void, float>(this, "UShooterCharacterMovement.BP_PerformMovement", DeltaTime); }
	void BP_PhysicsRotation(float DeltaTime) { NativeCall<void, float>(this, "UShooterCharacterMovement.BP_PhysicsRotation", DeltaTime); }
	bool CanCrouchInCurrentState() { return NativeCall<bool>(this, "UShooterCharacterMovement.CanCrouchInCurrentState"); }
	bool CanProneInCurrentState() { return NativeCall<bool>(this, "UShooterCharacterMovement.CanProneInCurrentState"); }
	bool CheckWaterJump(FVector CheckPoint, FVector * WallNormal) { return NativeCall<bool, FVector, FVector *>(this, "UShooterCharacterMovement.CheckWaterJump", CheckPoint, WallNormal); }
	void DoWaterJump(FVector WallNormal, char JumpFlag) { NativeCall<void, FVector, char>(this, "UShooterCharacterMovement.DoWaterJump", WallNormal, JumpFlag); }
	bool FloorSweepTest(FHitResult * OutHit, const FVector * Start, const FVector * End, ECollisionChannel TraceChannel, const FCollisionShape * CollisionShape, const FCollisionQueryParams * Params, const FCollisionResponseParams * ResponseParam) { return NativeCall<bool, FHitResult *, const FVector *, const FVector *, ECollisionChannel, const FCollisionShape *, const FCollisionQueryParams *, const FCollisionResponseParams *>(this, "UShooterCharacterMovement.FloorSweepTest", OutHit, Start, End, TraceChannel, CollisionShape, Params, ResponseParam); }
	float GetDefaultMaxSpeed() { return NativeCall<float>(this, "UShooterCharacterMovement.GetDefaultMaxSpeed"); }
	float GetGravityZ() { return NativeCall<float>(this, "UShooterCharacterMovement.GetGravityZ"); }
	float GetJumpZVelocity() { return NativeCall<float>(this, "UShooterCharacterMovement.GetJumpZVelocity"); }
	float GetMaxSpeed() { return NativeCall<float>(this, "UShooterCharacterMovement.GetMaxSpeed"); }
	void HandleImpact(const FHitResult * Impact, float TimeSlice, const FVector * MoveDelta) { NativeCall<void, const FHitResult *, float, const FVector *>(this, "UShooterCharacterMovement.HandleImpact", Impact, TimeSlice, MoveDelta); }
	bool IsUsingLadderPhysics() { return NativeCall<bool>(this, "UShooterCharacterMovement.IsUsingLadderPhysics"); }
	bool IsWalkable(const FHitResult * Hit) { return NativeCall<bool, const FHitResult *>(this, "UShooterCharacterMovement.IsWalkable", Hit); }
	bool IsWaterWalking() { return NativeCall<bool>(this, "UShooterCharacterMovement.IsWaterWalking"); }
	void LocalClientPostAdjustPosition() { NativeCall<void>(this, "UShooterCharacterMovement.LocalClientPostAdjustPosition"); }
	void LocalClientPreAdjustPosition() { NativeCall<void>(this, "UShooterCharacterMovement.LocalClientPreAdjustPosition"); }
	void PhysCustom(float deltaTime, int Iterations) { NativeCall<void, float, int>(this, "UShooterCharacterMovement.PhysCustom", deltaTime, Iterations); }
	bool ResolvePenetrationImpl(const FVector * ProposedAdjustment, const FHitResult * Hit, const FQuat * NewRotationQuat) { return NativeCall<bool, const FVector *, const FHitResult *, const FQuat *>(this, "UShooterCharacterMovement.ResolvePenetrationImpl", ProposedAdjustment, Hit, NewRotationQuat); }
	void SetClimbingTarget(const FVector * TargetPosition, const FRotator * TargetRotation) { NativeCall<void, const FVector *, const FRotator *>(this, "UShooterCharacterMovement.SetClimbingTarget", TargetPosition, TargetRotation); }
	void SetCurrentAcceleration(const FVector NewAcceleration) { NativeCall<void, const FVector>(this, "UShooterCharacterMovement.SetCurrentAcceleration", NewAcceleration); }
	float SlideAlongSurface(const FVector * Delta, float Time, const FVector * InNormal, FHitResult * Hit, bool bHandleImpact) { return NativeCall<float, const FVector *, float, const FVector *, FHitResult *, bool>(this, "UShooterCharacterMovement.SlideAlongSurface", Delta, Time, InNormal, Hit, bHandleImpact); }
	void UpdateAnalogueInputModifier() { NativeCall<void>(this, "UShooterCharacterMovement.UpdateAnalogueInputModifier"); }
};

