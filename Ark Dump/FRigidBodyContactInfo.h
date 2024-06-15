#pragma once

#include "BaseDeclarations.h"
struct FRigidBodyContactInfo
{
	char __padding[0x30L];
	FVector& ContactPositionField() { return *GetNativePointerField<FVector*>(this, "FRigidBodyContactInfo.ContactPosition"); }
	FVector& ContactNormalField() { return *GetNativePointerField<FVector*>(this, "FRigidBodyContactInfo.ContactNormal"); }
	float& ContactPenetrationField() { return *GetNativePointerField<float*>(this, "FRigidBodyContactInfo.ContactPenetration"); }
	FieldArray<UPhysicalMaterial *, 2> PhysMaterialField() { return {this, "FRigidBodyContactInfo.PhysMaterial"}; }

	// Functions

};

