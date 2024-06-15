#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPhysicsConstraintTemplate : UObject
{
	char __padding[0x218L];
	FName& JointName_DEPRECATEDField() { return *GetNativePointerField<FName*>(this, "UPhysicsConstraintTemplate.JointName_DEPRECATED"); }
	FName& ConstraintBone1_DEPRECATEDField() { return *GetNativePointerField<FName*>(this, "UPhysicsConstraintTemplate.ConstraintBone1_DEPRECATED"); }
	FName& ConstraintBone2_DEPRECATEDField() { return *GetNativePointerField<FName*>(this, "UPhysicsConstraintTemplate.ConstraintBone2_DEPRECATED"); }
	FVector& Pos1_DEPRECATEDField() { return *GetNativePointerField<FVector*>(this, "UPhysicsConstraintTemplate.Pos1_DEPRECATED"); }
	FVector& PriAxis1_DEPRECATEDField() { return *GetNativePointerField<FVector*>(this, "UPhysicsConstraintTemplate.PriAxis1_DEPRECATED"); }
	FVector& SecAxis1_DEPRECATEDField() { return *GetNativePointerField<FVector*>(this, "UPhysicsConstraintTemplate.SecAxis1_DEPRECATED"); }
	FVector& Pos2_DEPRECATEDField() { return *GetNativePointerField<FVector*>(this, "UPhysicsConstraintTemplate.Pos2_DEPRECATED"); }
	FVector& PriAxis2_DEPRECATEDField() { return *GetNativePointerField<FVector*>(this, "UPhysicsConstraintTemplate.PriAxis2_DEPRECATED"); }
	FVector& SecAxis2_DEPRECATEDField() { return *GetNativePointerField<FVector*>(this, "UPhysicsConstraintTemplate.SecAxis2_DEPRECATED"); }
	float& ProjectionLinearTolerance_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UPhysicsConstraintTemplate.ProjectionLinearTolerance_DEPRECATED"); }
	float& ProjectionAngularTolerance_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UPhysicsConstraintTemplate.ProjectionAngularTolerance_DEPRECATED"); }
	TEnumAsByte<enum ELinearConstraintMotion>& LinearXMotion_DEPRECATEDField() { return *GetNativePointerField<TEnumAsByte<enum ELinearConstraintMotion>*>(this, "UPhysicsConstraintTemplate.LinearXMotion_DEPRECATED"); }
	TEnumAsByte<enum ELinearConstraintMotion>& LinearYMotion_DEPRECATEDField() { return *GetNativePointerField<TEnumAsByte<enum ELinearConstraintMotion>*>(this, "UPhysicsConstraintTemplate.LinearYMotion_DEPRECATED"); }
	TEnumAsByte<enum ELinearConstraintMotion>& LinearZMotion_DEPRECATEDField() { return *GetNativePointerField<TEnumAsByte<enum ELinearConstraintMotion>*>(this, "UPhysicsConstraintTemplate.LinearZMotion_DEPRECATED"); }
	float& LinearLimitSize_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UPhysicsConstraintTemplate.LinearLimitSize_DEPRECATED"); }
	float& LinearLimitStiffness_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UPhysicsConstraintTemplate.LinearLimitStiffness_DEPRECATED"); }
	float& LinearLimitDamping_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UPhysicsConstraintTemplate.LinearLimitDamping_DEPRECATED"); }
	float& LinearBreakThreshold_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UPhysicsConstraintTemplate.LinearBreakThreshold_DEPRECATED"); }
	TEnumAsByte<enum EAngularConstraintMotion>& AngularSwing1Motion_DEPRECATEDField() { return *GetNativePointerField<TEnumAsByte<enum EAngularConstraintMotion>*>(this, "UPhysicsConstraintTemplate.AngularSwing1Motion_DEPRECATED"); }
	TEnumAsByte<enum EAngularConstraintMotion>& AngularSwing2Motion_DEPRECATEDField() { return *GetNativePointerField<TEnumAsByte<enum EAngularConstraintMotion>*>(this, "UPhysicsConstraintTemplate.AngularSwing2Motion_DEPRECATED"); }
	TEnumAsByte<enum EAngularConstraintMotion>& AngularTwistMotion_DEPRECATEDField() { return *GetNativePointerField<TEnumAsByte<enum EAngularConstraintMotion>*>(this, "UPhysicsConstraintTemplate.AngularTwistMotion_DEPRECATED"); }
	float& Swing1LimitAngle_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UPhysicsConstraintTemplate.Swing1LimitAngle_DEPRECATED"); }
	float& Swing2LimitAngle_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UPhysicsConstraintTemplate.Swing2LimitAngle_DEPRECATED"); }
	float& TwistLimitAngle_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UPhysicsConstraintTemplate.TwistLimitAngle_DEPRECATED"); }
	float& SwingLimitStiffness_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UPhysicsConstraintTemplate.SwingLimitStiffness_DEPRECATED"); }
	float& SwingLimitDamping_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UPhysicsConstraintTemplate.SwingLimitDamping_DEPRECATED"); }
	float& TwistLimitStiffness_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UPhysicsConstraintTemplate.TwistLimitStiffness_DEPRECATED"); }
	float& TwistLimitDamping_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UPhysicsConstraintTemplate.TwistLimitDamping_DEPRECATED"); }
	float& AngularBreakThreshold_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UPhysicsConstraintTemplate.AngularBreakThreshold_DEPRECATED"); }
	FConstraintInstance& DefaultInstanceField() { return *GetNativePointerField<FConstraintInstance*>(this, "UPhysicsConstraintTemplate.DefaultInstance"); }

	// Functions

	void CopySetupPropsToInstance(FConstraintInstance * Instance) { NativeCall<void, FConstraintInstance *>(this, "UPhysicsConstraintTemplate.CopySetupPropsToInstance", Instance); }
	void PostLoad() { NativeCall<void>(this, "UPhysicsConstraintTemplate.PostLoad"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UPhysicsConstraintTemplate.Serialize", Ar); }
};

