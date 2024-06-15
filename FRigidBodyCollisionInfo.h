#pragma once

#include "BaseDeclarations.h"
struct FRigidBodyCollisionInfo
{
	char __padding[0x1cL];
	int& BodyIndexField() { return *GetNativePointerField<int*>(this, "FRigidBodyCollisionInfo.BodyIndex"); }
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "FRigidBodyCollisionInfo.BoneName"); }

	// Functions

	FBodyInstance * GetBodyInstance() { return NativeCall<FBodyInstance *>(this, "FRigidBodyCollisionInfo.GetBodyInstance"); }
	void SetFrom(const FBodyInstance * BodyInst) { NativeCall<void, const FBodyInstance *>(this, "FRigidBodyCollisionInfo.SetFrom", BodyInst); }
};

