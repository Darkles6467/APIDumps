#pragma once

#include "BaseDeclarations.h"
struct InstancedStaticMeshComponent_eventMulticastShowInstances_Parms
{
	char __padding[0x18L];
	TArray<int>& IndicesField() { return *GetNativePointerField<TArray<int>*>(this, "InstancedStaticMeshComponent_eventMulticastShowInstances_Parms.Indices"); }
	bool& bMarkRenderStateDirtyField() { return *GetNativePointerField<bool*>(this, "InstancedStaticMeshComponent_eventMulticastShowInstances_Parms.bMarkRenderStateDirty"); }
};

