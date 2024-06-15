#pragma once

#include "BaseDeclarations.h"
struct FPhysxSharedData
{
	char __padding[0x8L];
	physx::PxCollection * SharedObjectsField() { return GetNativePointerField<physx::PxCollection *>(this, "FPhysxSharedData.SharedObjects"); }

	// Functions

	void DumpSharedMemoryUsage(FOutputDevice * Ar) { NativeCall<void, FOutputDevice *>(this, "FPhysxSharedData.DumpSharedMemoryUsage", Ar); }
	static FPhysxSharedData * Get() { return NativeCall<FPhysxSharedData *>(nullptr, "FPhysxSharedData.Get"); }
};

