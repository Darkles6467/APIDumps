#pragma once

#include "BaseDeclarations.h"
struct FPhysXTask
{
	char __padding[0x8L];
	physx::PxBaseTask * TaskField() { return GetNativePointerField<physx::PxBaseTask *>(this, "FPhysXTask.Task"); }
};

