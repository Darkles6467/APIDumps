#pragma once

#include "BaseDeclarations.h"
struct FNavCollisionDataReader
{
	char __padding[0x18L];
	FNavCollisionConvex * TriMeshCollisionField() { return GetNativePointerField<FNavCollisionConvex *>(this, "FNavCollisionDataReader.TriMeshCollision"); }
	FNavCollisionConvex * ConvexCollisionField() { return GetNativePointerField<FNavCollisionConvex *>(this, "FNavCollisionDataReader.ConvexCollision"); }
	TNavStatArray<int> * ConvexShapeIndicesField() { return GetNativePointerField<TNavStatArray<int> *>(this, "FNavCollisionDataReader.ConvexShapeIndices"); }

	// Functions

};

