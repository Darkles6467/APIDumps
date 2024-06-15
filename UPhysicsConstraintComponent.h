#pragma once

#include "BaseDeclarations.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPhysicsConstraintComponent : USceneComponent
{
	char __padding[0x1a0L];
	FConstrainComponentPropName& ComponentName1Field() { return *GetNativePointerField<FConstrainComponentPropName*>(this, "UPhysicsConstraintComponent.ComponentName1"); }
	FConstrainComponentPropName& ComponentName2Field() { return *GetNativePointerField<FConstrainComponentPropName*>(this, "UPhysicsConstraintComponent.ComponentName2"); }
	UPhysicsConstraintTemplate * ConstraintSetup_DEPRECATEDField() { return GetNativePointerField<UPhysicsConstraintTemplate *>(this, "UPhysicsConstraintComponent.ConstraintSetup_DEPRECATED"); }
	FConstraintInstance& ConstraintInstanceField() { return *GetNativePointerField<FConstraintInstance*>(this, "UPhysicsConstraintComponent.ConstraintInstance"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "UPhysicsConstraintComponent.BeginDestroy"); }
	void BreakConstraint() { NativeCall<void>(this, "UPhysicsConstraintComponent.BreakConstraint"); }
	FTransform * GetBodyTransformInternal(FTransform * result, EConstraintFrame::Type Frame, FName InBoneName) { return NativeCall<FTransform *, FTransform *, EConstraintFrame::Type, FName>(this, "UPhysicsConstraintComponent.GetBodyTransformInternal", result, Frame, InBoneName); }
	void GetConstraintForce(FVector * OutLinearForce, FVector * OutAngularForce) { NativeCall<void, FVector *, FVector *>(this, "UPhysicsConstraintComponent.GetConstraintForce", OutLinearForce, OutAngularForce); }
	void InitComponentConstraint() { NativeCall<void>(this, "UPhysicsConstraintComponent.InitComponentConstraint"); }
	void InitializeComponent() { NativeCall<void>(this, "UPhysicsConstraintComponent.InitializeComponent"); }
	void OnUnregister() { NativeCall<void>(this, "UPhysicsConstraintComponent.OnUnregister"); }
	void PostLoad() { NativeCall<void>(this, "UPhysicsConstraintComponent.PostLoad"); }
	void SetAngularDriveParams(float InSpring, float InDamping, float InForceLimit) { NativeCall<void, float, float, float>(this, "UPhysicsConstraintComponent.SetAngularDriveParams", InSpring, InDamping, InForceLimit); }
	void SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive) { NativeCall<void, bool, bool>(this, "UPhysicsConstraintComponent.SetAngularOrientationDrive", bEnableSwingDrive, bEnableTwistDrive); }
	void SetAngularOrientationTarget(const FRotator * InPosTarget) { NativeCall<void, const FRotator *>(this, "UPhysicsConstraintComponent.SetAngularOrientationTarget", InPosTarget); }
	void SetAngularSwing1Limit(EAngularConstraintMotion Motion, float Swing1LimitAngle) { NativeCall<void, EAngularConstraintMotion, float>(this, "UPhysicsConstraintComponent.SetAngularSwing1Limit", Motion, Swing1LimitAngle); }
	void SetAngularSwing2Limit(EAngularConstraintMotion Motion, float Swing2LimitAngle) { NativeCall<void, EAngularConstraintMotion, float>(this, "UPhysicsConstraintComponent.SetAngularSwing2Limit", Motion, Swing2LimitAngle); }
	void SetAngularTwistLimit(EAngularConstraintMotion Motion, float TwistLimitAngle) { NativeCall<void, EAngularConstraintMotion, float>(this, "UPhysicsConstraintComponent.SetAngularTwistLimit", Motion, TwistLimitAngle); }
	void SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive) { NativeCall<void, bool, bool>(this, "UPhysicsConstraintComponent.SetAngularVelocityDrive", bEnableSwingDrive, bEnableTwistDrive); }
	void SetAngularVelocityTarget(const FVector * InVelTarget) { NativeCall<void, const FVector *>(this, "UPhysicsConstraintComponent.SetAngularVelocityTarget", InVelTarget); }
	void SetConstrainedComponents(UPrimitiveComponent * Component1, FName BoneName1, UPrimitiveComponent * Component2, FName BoneName2) { NativeCall<void, UPrimitiveComponent *, FName, UPrimitiveComponent *, FName>(this, "UPhysicsConstraintComponent.SetConstrainedComponents", Component1, BoneName1, Component2, BoneName2); }
	void SetConstraintReferenceFrame(EConstraintFrame::Type Frame, const FTransform * RefFrame) { NativeCall<void, EConstraintFrame::Type, const FTransform *>(this, "UPhysicsConstraintComponent.SetConstraintReferenceFrame", Frame, RefFrame); }
	void SetConstraintReferenceOrientation(EConstraintFrame::Type Frame, const FVector * PriAxis, const FVector * SecAxis) { NativeCall<void, EConstraintFrame::Type, const FVector *, const FVector *>(this, "UPhysicsConstraintComponent.SetConstraintReferenceOrientation", Frame, PriAxis, SecAxis); }
	void SetConstraintReferencePosition(EConstraintFrame::Type Frame, const FVector * RefPosition) { NativeCall<void, EConstraintFrame::Type, const FVector *>(this, "UPhysicsConstraintComponent.SetConstraintReferencePosition", Frame, RefPosition); }
	void SetDisableCollision(bool bDisableCollision) { NativeCall<void, bool>(this, "UPhysicsConstraintComponent.SetDisableCollision", bDisableCollision); }
	void SetLinearDriveParams(float InSpring, float InDamping, float InForceLimit) { NativeCall<void, float, float, float>(this, "UPhysicsConstraintComponent.SetLinearDriveParams", InSpring, InDamping, InForceLimit); }
	void SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ) { NativeCall<void, bool, bool, bool>(this, "UPhysicsConstraintComponent.SetLinearPositionDrive", bEnableDriveX, bEnableDriveY, bEnableDriveZ); }
	void SetLinearPositionTarget(const FVector * InPosTarget) { NativeCall<void, const FVector *>(this, "UPhysicsConstraintComponent.SetLinearPositionTarget", InPosTarget); }
	void SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ) { NativeCall<void, bool, bool, bool>(this, "UPhysicsConstraintComponent.SetLinearVelocityDrive", bEnableDriveX, bEnableDriveY, bEnableDriveZ); }
	void SetLinearVelocityTarget(const FVector * InVelTarget) { NativeCall<void, const FVector *>(this, "UPhysicsConstraintComponent.SetLinearVelocityTarget", InVelTarget); }
	void SetLinearXLimit(ELinearConstraintMotion Motion, float LinearLimit) { NativeCall<void, ELinearConstraintMotion, float>(this, "UPhysicsConstraintComponent.SetLinearXLimit", Motion, LinearLimit); }
	void SetLinearYLimit(ELinearConstraintMotion Motion, float LinearLimit) { NativeCall<void, ELinearConstraintMotion, float>(this, "UPhysicsConstraintComponent.SetLinearYLimit", Motion, LinearLimit); }
	void SetLinearZLimit(ELinearConstraintMotion Motion, float LinearLimit) { NativeCall<void, ELinearConstraintMotion, float>(this, "UPhysicsConstraintComponent.SetLinearZLimit", Motion, LinearLimit); }
	void UpdateConstraintFrames() { NativeCall<void>(this, "UPhysicsConstraintComponent.UpdateConstraintFrames"); }
};

