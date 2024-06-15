#pragma once

#include "BaseDeclarations.h"
struct FPhysXFormatDataReader
{
	char __padding[0x30L];
	TArray<physx::PxConvexMesh *>& ConvexMeshesField() { return *GetNativePointerField<TArray<physx::PxConvexMesh *>*>(this, "FPhysXFormatDataReader.ConvexMeshes"); }
	TArray<physx::PxConvexMesh *>& ConvexMeshesNegXField() { return *GetNativePointerField<TArray<physx::PxConvexMesh *>*>(this, "FPhysXFormatDataReader.ConvexMeshesNegX"); }
	physx::PxTriangleMesh * TriMeshField() { return GetNativePointerField<physx::PxTriangleMesh *>(this, "FPhysXFormatDataReader.TriMesh"); }
	physx::PxTriangleMesh * TriMeshNegXField() { return GetNativePointerField<physx::PxTriangleMesh *>(this, "FPhysXFormatDataReader.TriMeshNegX"); }

	// Functions

};

