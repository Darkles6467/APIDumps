#pragma once

#include "BaseDeclarations.h"
struct FPhysXSceneReadLock
{
	char __padding[0x8L];
	physx::PxScene * PSceneField() { return GetNativePointerField<physx::PxScene *>(this, "FPhysXSceneReadLock.PScene"); }
};

