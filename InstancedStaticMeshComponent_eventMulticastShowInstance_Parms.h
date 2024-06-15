#pragma once

#include "BaseDeclarations.h"
struct InstancedStaticMeshComponent_eventMulticastShowInstance_Parms
{
	char __padding[0x4L];
	int& originalIndexField() { return *GetNativePointerField<int*>(this, "InstancedStaticMeshComponent_eventMulticastShowInstance_Parms.originalIndex"); }
};

