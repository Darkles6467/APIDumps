#pragma once

#include "BaseDeclarations.h"
#include "FSkeletalMeshObject.h"
#include "FDeferredCleanupInterface.h"

struct FSkeletalMeshObjectGPUSkin : FSkeletalMeshObject
{
	char __padding[0x20L];
	bool& bMorphResourcesInitializedField() { return *GetNativePointerField<bool*>(this, "FSkeletalMeshObjectGPUSkin.bMorphResourcesInitialized"); }
};

