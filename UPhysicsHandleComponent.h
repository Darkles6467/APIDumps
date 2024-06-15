#pragma once

#include "BaseDeclarations.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPhysicsHandleComponent : UActorComponent
{
	char __padding[0xa8L];
	FName& GrabbedBoneNameField() { return *GetNativePointerField<FName*>(this, "UPhysicsHandleComponent.GrabbedBoneName"); }
	int& SceneIndexField() { return *GetNativePointerField<int*>(this, "UPhysicsHandleComponent.SceneIndex"); }
	float& LinearDampingField() { return *GetNativePointerField<float*>(this, "UPhysicsHandleComponent.LinearDamping"); }
	float& LinearStiffnessField() { return *GetNativePointerField<float*>(this, "UPhysicsHandleComponent.LinearStiffness"); }
	float& AngularDampingField() { return *GetNativePointerField<float*>(this, "UPhysicsHandleComponent.AngularDamping"); }
	float& AngularStiffnessField() { return *GetNativePointerField<float*>(this, "UPhysicsHandleComponent.AngularStiffness"); }
	FTransform& TargetTransformField() { return *GetNativePointerField<FTransform*>(this, "UPhysicsHandleComponent.TargetTransform"); }
	FTransform& CurrentTransformField() { return *GetNativePointerField<FTransform*>(this, "UPhysicsHandleComponent.CurrentTransform"); }
	float& InterpolationSpeedField() { return *GetNativePointerField<float*>(this, "UPhysicsHandleComponent.InterpolationSpeed"); }
	physx::PxJoint * HandleDataField() { return GetNativePointerField<physx::PxJoint *>(this, "UPhysicsHandleComponent.HandleData"); }
	physx::PxRigidDynamic * KinActorDataField() { return GetNativePointerField<physx::PxRigidDynamic *>(this, "UPhysicsHandleComponent.KinActorData"); }

	// Functions

	void GetTargetLocationAndRotation(FVector * OutLocation, FRotator * OutRotation) { NativeCall<void, FVector *, FRotator *>(this, "UPhysicsHandleComponent.GetTargetLocationAndRotation", OutLocation, OutRotation); }
	void GrabComponent(UPrimitiveComponent * InComponent, FName InBoneName, FVector Location, bool bConstrainRotation) { NativeCall<void, UPrimitiveComponent *, FName, FVector, bool>(this, "UPhysicsHandleComponent.GrabComponent", InComponent, InBoneName, Location, bConstrainRotation); }
	void OnUnregister() { NativeCall<void>(this, "UPhysicsHandleComponent.OnUnregister"); }
	void ReleaseComponent() { NativeCall<void>(this, "UPhysicsHandleComponent.ReleaseComponent"); }
	void SetTargetLocation(FVector NewLocation) { NativeCall<void, FVector>(this, "UPhysicsHandleComponent.SetTargetLocation", NewLocation); }
	void SetTargetLocationAndRotation(FVector NewLocation, FRotator NewRotation) { NativeCall<void, FVector, FRotator>(this, "UPhysicsHandleComponent.SetTargetLocationAndRotation", NewLocation, NewRotation); }
	void SetTargetRotation(FRotator NewRotation) { NativeCall<void, FRotator>(this, "UPhysicsHandleComponent.SetTargetRotation", NewRotation); }
	void UpdateHandleTransform(const FTransform * NewTransform) { NativeCall<void, const FTransform *>(this, "UPhysicsHandleComponent.UpdateHandleTransform", NewTransform); }
};

