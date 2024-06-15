#pragma once

#include "BaseDeclarations.h"
struct FPhysXSceneWriteLock
{
	char __padding[0x8L];
	physx::PxScene * PSceneField() { return GetNativePointerField<physx::PxScene *>(this, "FPhysXSceneWriteLock.PScene"); }
};

