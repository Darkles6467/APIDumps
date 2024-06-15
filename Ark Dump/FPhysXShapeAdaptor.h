#pragma once

#include "BaseDeclarations.h"
struct FPhysXShapeAdaptor
{
	char __padding[0x30L];
	TUnion<physx::PxSphereGeometry,physx::PxBoxGeometry,physx::PxCapsuleGeometry,FNull,FNull,FNull>& UnionDataField() { return *GetNativePointerField<TUnion<physx::PxSphereGeometry,physx::PxBoxGeometry,physx::PxCapsuleGeometry,FNull,FNull,FNull>*>(this, "FPhysXShapeAdaptor.UnionData"); }
	physx::PxGeometry * PtrToUnionDataField() { return GetNativePointerField<physx::PxGeometry *>(this, "FPhysXShapeAdaptor.PtrToUnionData"); }
	physx::PxQuat& RotationField() { return *GetNativePointerField<physx::PxQuat*>(this, "FPhysXShapeAdaptor.Rotation"); }

	// Functions

};

