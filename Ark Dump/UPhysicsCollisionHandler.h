#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FCollisionNotifyInfo.h"

struct UPhysicsCollisionHandler : UObject
{
	char __padding[0x18L];
	float& ImpactThresholdField() { return *GetNativePointerField<float*>(this, "UPhysicsCollisionHandler.ImpactThreshold"); }
	float& ImpactReFireDelayField() { return *GetNativePointerField<float*>(this, "UPhysicsCollisionHandler.ImpactReFireDelay"); }
	float& LastImpactSoundTimeField() { return *GetNativePointerField<float*>(this, "UPhysicsCollisionHandler.LastImpactSoundTime"); }

	// Functions

	void DefaultHandleCollision(const FRigidBodyCollisionInfo * MyInfo, const FRigidBodyCollisionInfo * OtherInfo, const FCollisionImpactData * RigidCollisionData) { NativeCall<void, const FRigidBodyCollisionInfo *, const FRigidBodyCollisionInfo *, const FCollisionImpactData *>(this, "UPhysicsCollisionHandler.DefaultHandleCollision", MyInfo, OtherInfo, RigidCollisionData); }
	void HandlePhysicsCollisions(const TArray<FCollisionNotifyInfo> * PendingCollisionNotifies) { NativeCall<void, const TArray<FCollisionNotifyInfo> *>(this, "UPhysicsCollisionHandler.HandlePhysicsCollisions", PendingCollisionNotifies); }
};

