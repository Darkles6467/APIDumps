#pragma once

#include "BaseDeclarations.h"
#include "HHitProxy.h"
#include "FRefCountedObject.h"

struct HInstancedStaticMeshInstance : HHitProxy
{
	char __padding[0x10L];
	int& InstanceIndexField() { return *GetNativePointerField<int*>(this, "HInstancedStaticMeshInstance.InstanceIndex"); }
};

