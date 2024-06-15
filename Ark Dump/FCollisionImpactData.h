#pragma once

#include "BaseDeclarations.h"
struct FCollisionImpactData
{
	char __padding[0x28L];
	TArray<FRigidBodyContactInfo>& ContactInfosField() { return *GetNativePointerField<TArray<FRigidBodyContactInfo>*>(this, "FCollisionImpactData.ContactInfos"); }
	FVector& TotalNormalImpulseField() { return *GetNativePointerField<FVector*>(this, "FCollisionImpactData.TotalNormalImpulse"); }
	FVector& TotalFrictionImpulseField() { return *GetNativePointerField<FVector*>(this, "FCollisionImpactData.TotalFrictionImpulse"); }

	// Functions

	void SwapContactOrders() { NativeCall<void>(this, "FCollisionImpactData.SwapContactOrders"); }
};

