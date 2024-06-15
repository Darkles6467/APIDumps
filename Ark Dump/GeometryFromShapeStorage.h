#pragma once

#include "BaseDeclarations.h"
struct GeometryFromShapeStorage
{
	char __padding[0xa8L];
	physx::PxSphereGeometry& SphereGeomField() { return *GetNativePointerField<physx::PxSphereGeometry*>(this, "GeometryFromShapeStorage.SphereGeom"); }
	physx::PxBoxGeometry& BoxGeomField() { return *GetNativePointerField<physx::PxBoxGeometry*>(this, "GeometryFromShapeStorage.BoxGeom"); }
	physx::PxCapsuleGeometry& CapsuleGeomField() { return *GetNativePointerField<physx::PxCapsuleGeometry*>(this, "GeometryFromShapeStorage.CapsuleGeom"); }
	physx::PxConvexMeshGeometry& ConvexGeomField() { return *GetNativePointerField<physx::PxConvexMeshGeometry*>(this, "GeometryFromShapeStorage.ConvexGeom"); }
	physx::PxTriangleMeshGeometry& TriangleGeomField() { return *GetNativePointerField<physx::PxTriangleMeshGeometry*>(this, "GeometryFromShapeStorage.TriangleGeom"); }
	physx::PxHeightFieldGeometry& HeightFieldGeomField() { return *GetNativePointerField<physx::PxHeightFieldGeometry*>(this, "GeometryFromShapeStorage.HeightFieldGeom"); }
};

