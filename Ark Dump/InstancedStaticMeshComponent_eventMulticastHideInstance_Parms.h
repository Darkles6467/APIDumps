#pragma once

#include "BaseDeclarations.h"
struct InstancedStaticMeshComponent_eventMulticastHideInstance_Parms
{
	char __padding[0x10L];
	int& originalIndexField() { return *GetNativePointerField<int*>(this, "InstancedStaticMeshComponent_eventMulticastHideInstance_Parms.originalIndex"); }
	FVector& HitDirectionField() { return *GetNativePointerField<FVector*>(this, "InstancedStaticMeshComponent_eventMulticastHideInstance_Parms.HitDirection"); }
};

