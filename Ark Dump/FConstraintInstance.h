#pragma once

#include "BaseDeclarations.h"
struct FConstraintInstance
{
	char __padding[0x160L];
	int& ConstraintIndexField() { return *GetNativePointerField<int*>(this, "FConstraintInstance.ConstraintIndex"); }
	physx::PxD6Joint * ConstraintDataField() { return GetNativePointerField<physx::PxD6Joint *>(this, "FConstraintInstance.ConstraintData"); }
	int& SceneIndexField() { return *GetNativePointerField<int*>(this, "FConstraintInstance.SceneIndex"); }
	FName& JointNameField() { return *GetNativePointerField<FName*>(this, "FConstraintInstance.JointName"); }
	FName& ConstraintBone1Field() { return *GetNativePointerField<FName*>(this, "FConstraintInstance.ConstraintBone1"); }
	FName& ConstraintBone2Field() { return *GetNativePointerField<FName*>(this, "FConstraintInstance.ConstraintBone2"); }
	FVector& Pos1Field() { return *GetNativePointerField<FVector*>(this, "FConstraintInstance.Pos1"); }
	FVector& PriAxis1Field() { return *GetNativePointerField<FVector*>(this, "FConstraintInstance.PriAxis1"); }
	FVector& SecAxis1Field() { return *GetNativePointerField<FVector*>(this, "FConstraintInstance.SecAxis1"); }
	FVector& Pos2Field() { return *GetNativePointerField<FVector*>(this, "FConstraintInstance.Pos2"); }
	FVector& PriAxis2Field() { return *GetNativePointerField<FVector*>(this, "FConstraintInstance.PriAxis2"); }
	FVector& SecAxis2Field() { return *GetNativePointerField<FVector*>(this, "FConstraintInstance.SecAxis2"); }
	float& ProjectionLinearToleranceField() { return *GetNativePointerField<float*>(this, "FConstraintInstance.ProjectionLinearTolerance"); }
	float& ProjectionAngularToleranceField() { return *GetNativePointerField<float*>(this, "FConstraintInstance.ProjectionAngularTolerance"); }
	TEnumAsByte<enum ELinearConstraintMotion>& LinearXMotionField() { return *GetNativePointerField<TEnumAsByte<enum ELinearConstraintMotion>*>(this, "FConstraintInstance.LinearXMotion"); }
	TEnumAsByte<enum ELinearConstraintMotion>& LinearYMotionField() { return *GetNativePointerField<TEnumAsByte<enum ELinearConstraintMotion>*>(this, "FConstraintInstance.LinearYMotion"); }
	TEnumAsByte<enum ELinearConstraintMotion>& LinearZMotionField() { return *GetNativePointerField<TEnumAsByte<enum ELinearConstraintMotion>*>(this, "FConstraintInstance.LinearZMotion"); }
	float& LinearLimitSizeField() { return *GetNativePointerField<float*>(this, "FConstraintInstance.LinearLimitSize"); }
	float& LinearLimitStiffnessField() { return *GetNativePointerField<float*>(this, "FConstraintInstance.LinearLimitStiffness"); }
	float& LinearLimitDampingField() { return *GetNativePointerField<float*>(this, "FConstraintInstance.LinearLimitDamping"); }
	float& LinearBreakThresholdField() { return *GetNativePointerField<float*>(this, "FConstraintInstance.LinearBreakThreshold"); }
	TEnumAsByte<enum EAngularConstraintMotion>& AngularSwing1MotionField() { return *GetNativePointerField<TEnumAsByte<enum EAngularConstraintMotion>*>(this, "FConstraintInstance.AngularSwing1Motion"); }
	TEnumAsByte<enum EAngularConstraintMotion>& AngularTwistMotionField() { return *GetNativePointerField<TEnumAsByte<enum EAngularConstraintMotion>*>(this, "FConstraintInstance.AngularTwistMotion"); }
	TEnumAsByte<enum EAngularConstraintMotion>& AngularSwing2MotionField() { return *GetNativePointerField<TEnumAsByte<enum EAngularConstraintMotion>*>(this, "FConstraintInstance.AngularSwing2Motion"); }
	float& Swing1LimitAngleField() { return *GetNativePointerField<float*>(this, "FConstraintInstance.Swing1LimitAngle"); }
	float& TwistLimitAngleField() { return *GetNativePointerField<float*>(this, "FConstraintInstance.TwistLimitAngle"); }
	float& Swing2LimitAngleField() { return *GetNativePointerField<float*>(this, "FConstraintInstance.Swing2LimitAngle"); }
	float& SwingLimitStiffnessField() { return *GetNativePointerField<float*>(this, "FConstraintInstance.SwingLimitStiffness"); }
	float& SwingLimitDampingField() { return *GetNativePointerField<float*>(this, "FConstraintInstance.SwingLimitDamping"); }
	float& TwistLimitStiffnessField() { return *GetNativePointerField<float*>(this, "FConstraintInstance.TwistLimitStiffness"); }
	float& TwistLimitDampingField() { return *GetNativePointerField<float*>(this, "FConstraintInstance.TwistLimitDamping"); }
	FRotator& AngularRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "FConstraintInstance.AngularRotationOffset"); }
	float& AngularBreakThresholdField() { return *GetNativePointerField<float*>(this, "FConstraintInstance.AngularBreakThreshold"); }
	FVector& LinearPositionTargetField() { return *GetNativePointerField<FVector*>(this, "FConstraintInstance.LinearPositionTarget"); }
	FVector& LinearVelocityTargetField() { return *GetNativePointerField<FVector*>(this, "FConstraintInstance.LinearVelocityTarget"); }
	float& LinearDriveSpringField() { return *GetNativePointerField<float*>(this, "FConstraintInstance.LinearDriveSpring"); }
	float& LinearDriveDampingField() { return *GetNativePointerField<float*>(this, "FConstraintInstance.LinearDriveDamping"); }
	float& LinearDriveForceLimitField() { return *GetNativePointerField<float*>(this, "FConstraintInstance.LinearDriveForceLimit"); }
	FQuat& AngularPositionTarget_DEPRECATEDField() { return *GetNativePointerField<FQuat*>(this, "FConstraintInstance.AngularPositionTarget_DEPRECATED"); }
	TEnumAsByte<enum EAngularDriveMode::Type>& AngularDriveModeField() { return *GetNativePointerField<TEnumAsByte<enum EAngularDriveMode::Type>*>(this, "FConstraintInstance.AngularDriveMode"); }
	FRotator& AngularOrientationTargetField() { return *GetNativePointerField<FRotator*>(this, "FConstraintInstance.AngularOrientationTarget"); }
	FVector& AngularVelocityTargetField() { return *GetNativePointerField<FVector*>(this, "FConstraintInstance.AngularVelocityTarget"); }
	float& AngularDriveSpringField() { return *GetNativePointerField<float*>(this, "FConstraintInstance.AngularDriveSpring"); }
	float& AngularDriveDampingField() { return *GetNativePointerField<float*>(this, "FConstraintInstance.AngularDriveDamping"); }
	float& AngularDriveForceLimitField() { return *GetNativePointerField<float*>(this, "FConstraintInstance.AngularDriveForceLimit"); }
	float& AverageMassField() { return *GetNativePointerField<float*>(this, "FConstraintInstance.AverageMass"); }
	FPhysxUserData& PhysxUserDataField() { return *GetNativePointerField<FPhysxUserData*>(this, "FConstraintInstance.PhysxUserData"); }

	// Functions

	FConstraintInstance * operator=(const FConstraintInstance * __that) { return NativeCall<FConstraintInstance *, const FConstraintInstance *>(this, "FConstraintInstance.operator=", __that); }
	void CopyConstraintParamsFrom(const FConstraintInstance * FromInstance) { NativeCall<void, const FConstraintInstance *>(this, "FConstraintInstance.CopyConstraintParamsFrom", FromInstance); }
	void GetConstraintForce(FVector * OutLinearForce, FVector * OutAngularForce) { NativeCall<void, FVector *, FVector *>(this, "FConstraintInstance.GetConstraintForce", OutLinearForce, OutAngularForce); }
	FTransform * GetRefFrame(FTransform * result, EConstraintFrame::Type Frame) { return NativeCall<FTransform *, FTransform *, EConstraintFrame::Type>(this, "FConstraintInstance.GetRefFrame", result, Frame); }
	void InitConstraint(USceneComponent * Owner, FBodyInstance * Body1, FBodyInstance * Body2, float Scale) { NativeCall<void, USceneComponent *, FBodyInstance *, FBodyInstance *, float>(this, "FConstraintInstance.InitConstraint", Owner, Body1, Body2, Scale); }
	bool IsTerminated() { return NativeCall<bool>(this, "FConstraintInstance.IsTerminated"); }
	void OnConstraintBroken() { NativeCall<void>(this, "FConstraintInstance.OnConstraintBroken"); }
	void PostSerialize(const FArchive * Ar) { NativeCall<void, const FArchive *>(this, "FConstraintInstance.PostSerialize", Ar); }
	void SetAngularDriveParams(float InSpring, float InDamping, float InForceLimit) { NativeCall<void, float, float, float>(this, "FConstraintInstance.SetAngularDriveParams", InSpring, InDamping, InForceLimit); }
	void SetAngularOrientationTarget(const FQuat * InPosTarget) { NativeCall<void, const FQuat *>(this, "FConstraintInstance.SetAngularOrientationTarget", InPosTarget); }
	void SetAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive) { NativeCall<void, bool, bool>(this, "FConstraintInstance.SetAngularPositionDrive", bEnableSwingDrive, bEnableTwistDrive); }
	void SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive) { NativeCall<void, bool, bool>(this, "FConstraintInstance.SetAngularVelocityDrive", bEnableSwingDrive, bEnableTwistDrive); }
	void SetAngularVelocityTarget(const FVector * InVelTarget) { NativeCall<void, const FVector *>(this, "FConstraintInstance.SetAngularVelocityTarget", InVelTarget); }
	void SetDisableCollision(bool InDisableCollision) { NativeCall<void, bool>(this, "FConstraintInstance.SetDisableCollision", InDisableCollision); }
	void SetLinearDriveParams(float InSpring, float InDamping, float InForceLimit) { NativeCall<void, float, float, float>(this, "FConstraintInstance.SetLinearDriveParams", InSpring, InDamping, InForceLimit); }
	void SetLinearPositionDrive(bool bEnableXDrive, bool bEnableYDrive, bool bEnableZDrive) { NativeCall<void, bool, bool, bool>(this, "FConstraintInstance.SetLinearPositionDrive", bEnableXDrive, bEnableYDrive, bEnableZDrive); }
	void SetLinearPositionTarget(const FVector * InPosTarget) { NativeCall<void, const FVector *>(this, "FConstraintInstance.SetLinearPositionTarget", InPosTarget); }
	void SetLinearVelocityDrive(bool bEnableXDrive, bool bEnableYDrive, bool bEnableZDrive) { NativeCall<void, bool, bool, bool>(this, "FConstraintInstance.SetLinearVelocityDrive", bEnableXDrive, bEnableYDrive, bEnableZDrive); }
	void SetLinearVelocityTarget(const FVector * InVelTarget) { NativeCall<void, const FVector *>(this, "FConstraintInstance.SetLinearVelocityTarget", InVelTarget); }
	void SetRefFrame(EConstraintFrame::Type Frame, const FTransform * RefFrame) { NativeCall<void, EConstraintFrame::Type, const FTransform *>(this, "FConstraintInstance.SetRefFrame", Frame, RefFrame); }
	void SetRefOrientation(EConstraintFrame::Type Frame, const FVector * PriAxis, const FVector * SecAxis) { NativeCall<void, EConstraintFrame::Type, const FVector *, const FVector *>(this, "FConstraintInstance.SetRefOrientation", Frame, PriAxis, SecAxis); }
	void SetRefPosition(EConstraintFrame::Type Frame, const FVector * RefPosition) { NativeCall<void, EConstraintFrame::Type, const FVector *>(this, "FConstraintInstance.SetRefPosition", Frame, RefPosition); }
	void TermConstraint() { NativeCall<void>(this, "FConstraintInstance.TermConstraint"); }
	void UpdateAngularLimit() { NativeCall<void>(this, "FConstraintInstance.UpdateAngularLimit"); }
	void UpdateLinearLimit() { NativeCall<void>(this, "FConstraintInstance.UpdateLinearLimit"); }
};

